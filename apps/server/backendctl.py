#!/usr/bin/env python3
"""Build, initialize, start, check and stop the private Online Mode backend.

The backend is the pinned gdxsv lobby server (`gdxsv lbs`, which also runs the
default battle server in process) plus the WebSocket-to-TCP byte gateway. All
paths come from one private JSON config (see backend.example.json); relative
paths resolve against the config file's directory. Every gdxsv listener binds
127.0.0.1. The gateway binds 127.0.0.1 and, only when configured, this
machine's tailnet address for an explicit list of tailnet peers.

Python 3.9+, standard library only.
"""
import argparse
import datetime
import hashlib
import importlib.util
import ipaddress
import json
import os
from pathlib import Path
import re
import secrets
import signal
import socket
import subprocess
import sys
import time

HERE = Path(__file__).resolve().parent
OFFSETS = {'lobby': 0, 'battle': 1, 'http': 3, 'gateway': 20}
SERVICES = ('gdxsv', 'gateway')
DEFAULT_BASE_PORT = 19800
# Ports other local projects hold; the backend never uses them.
RESERVED_PORTS = set(range(18800, 18854)) | {8860, 8767}
TAILNET = ipaddress.ip_network('100.64.0.0/10')


def utc():
    return datetime.datetime.now(datetime.timezone.utc).strftime('%Y-%m-%dT%H:%M:%SZ')


def digest(path):
    h = hashlib.sha256()
    with open(path, 'rb') as f:
        for block in iter(lambda: f.read(1 << 20), b''):
            h.update(block)
    return h.hexdigest()


def write_json(path, value, mode=0o600):
    tmp = path.with_name(path.name + '.tmp')
    fd = os.open(str(tmp), os.O_WRONLY | os.O_CREAT | os.O_TRUNC, mode)
    with os.fdopen(fd, 'w') as f:
        f.write(json.dumps(value, indent=2, ensure_ascii=False) + '\n')
    os.chmod(tmp, mode)
    tmp.replace(path)


def alive(pid):
    if not isinstance(pid, int) or pid <= 0:
        return False
    try:
        os.kill(pid, 0)
        return True
    except OSError:
        return False


def tcp_probe(address, timeout=2.0):
    host, port = address.rsplit(':', 1)
    started = time.monotonic()
    try:
        with socket.create_connection((host, int(port)), timeout=timeout):
            return {'address': address, 'connect': True, 'ms': round((time.monotonic() - started) * 1000, 2)}
    except OSError as error:
        return {'address': address, 'connect': False, 'error': error.__class__.__name__ + ': ' + str(error)}


class Backend:
    def __init__(self, config_path):
        self.config_path = Path(config_path).resolve()
        self.conf = json.loads(self.config_path.read_text())
        base = self.config_path.parent
        self.root = (base / self.conf.get('root', '.')).resolve()
        self.clone = (base / self.conf['gdxsv_clone']).resolve() if self.conf.get('gdxsv_clone') else None
        self.toolchain = self.conf.get('toolchain')
        self.base_port = int(self.conf.get('base_port', DEFAULT_BASE_PORT))
        if not 1024 <= self.base_port <= 65000:
            raise SystemExit('base_port out of range')
        self.ports = {name: self.base_port + delta for name, delta in OFFSETS.items()}
        self.origins = list(self.conf.get('origins', []))
        if not self.origins:
            raise SystemExit('config needs at least one page origin')
        self.tailnet = {label: {'port': int(t['port']), 'peers': list(t['peers'])}
                        for label, t in self.conf.get('tailnet_listeners', {}).items()}
        self.tailnet_address = None
        if self.tailnet:
            self.tailnet_address = self.conf.get('tailnet_address') or subprocess.run(
                ['tailscale', 'ip', '-4'], capture_output=True, text=True).stdout.split('\n')[0].strip()
            for value in [self.tailnet_address] + [p for t in self.tailnet.values() for p in t['peers']]:
                if ipaddress.ip_address(value) not in TAILNET:
                    raise SystemExit('tailnet address outside 100.64.0.0/10: ' + value)
            ports = [t['port'] for t in self.tailnet.values()]
            if len(set(ports)) != len(ports) or set(ports) & set(self.ports.values()):
                raise SystemExit('tailnet listener ports must be unique and differ from service ports')
            if 'default' in self.tailnet:
                raise SystemExit('tailnet listener label "default" is reserved')
        used = set(self.ports.values()) | {t['port'] for t in self.tailnet.values()}
        if used & RESERVED_PORTS:
            raise SystemExit('configured ports overlap ports held by other projects: %s' % sorted(used & RESERVED_PORTS))
        self.state = self.root / 'state'
        self.logs = self.state / 'logs'
        self.run_dir = self.state / 'run'
        self.builds = self.root / 'builds'
        self.build = self.root / 'build'

    # ---- configuration --------------------------------------------------

    def address(self, name):
        return '127.0.0.1:%d' % self.ports[name]

    def expected_listeners(self):
        expected = {('TCP', '127.0.0.1', self.ports[n]) for n in ('lobby', 'battle', 'http', 'gateway')}
        # The lobby UDP responder shares the lobby port; the battle server has TCP and UDP.
        expected |= {('UDP', '127.0.0.1', self.ports['lobby']), ('UDP', '127.0.0.1', self.ports['battle'])}
        expected |= {('TCP', self.tailnet_address, t['port']) for t in self.tailnet.values()}
        return expected

    def environment(self):
        # Drop inherited GDXSV_* values; disable every external or optional service.
        env = {k: v for k, v in os.environ.items() if not k.startswith('GDXSV_')}
        env.update({
            'GDXSV_LOBBY_ADDR': self.address('lobby'),
            'GDXSV_LOBBY_PUBLIC_ADDR': self.address('lobby'),
            'GDXSV_LOBBY_HTTP_ADDR': self.address('http'),
            'GDXSV_BATTLE_ADDR': self.address('battle'),
            # lbsAskMcsAddress (0x6916) sends this IPv4 address and port to the game.
            'GDXSV_BATTLE_PUBLIC_ADDR': self.address('battle'),
            'GDXSV_BATTLE_REGION': '',
            'GDXSV_BATTLE_LOG_PATH': str(self.state / 'battlelog'),
            'GDXSV_RELAY_ADDR': '', 'GDXSV_RELAY_PUBLIC_ADDR': '', 'GDXSV_RELAY_PUBLIC_ADDR6': '',
            'GDXSV_RELAY_REGIONS': '', 'GDXSV_RELAY_SECRET': '',
            'GDXSV_GCP_PROJECT_ID': '', 'GDXSV_GCP_KEY_PATH': '', 'GDXSV_GCE_ONDEMAND': 'false',
            'GDXSV_REPLAY_BUCKET': '', 'GDXSV_WEBHOOK_URL': '',
            'GDXSV_DB_NAME': str(self.state / 'gdxsv.db'),
            # Patched gdxsv: silent battle peer limit (Go duration); empty keeps upstream 30 s.
            'GDXSV_BATTLE_READ_TIMEOUT': str(self.conf.get('battle_read_timeout', '')),
        })
        return env

    def token(self):
        return (self.state / 'token').read_text().strip()

    def gateway_config(self):
        return {'listen': self.address('gateway'), 'token': self.token(), 'origins': self.origins,
                'endpoints': {'lobby': self.address('lobby'), 'battle': self.address('battle')},
                'tailnet_listeners': {label: {'listen': '%s:%d' % (self.tailnet_address, t['port']), 'peers': t['peers']}
                                      for label, t in self.tailnet.items()}}

    def client_configs(self):
        token = self.token()
        main = {'gatewayURL': 'ws://%s/' % self.address('gateway'), 'token': token}
        variants = {label: {'gatewayURL': 'ws://%s:%d/' % (self.tailnet_address, t['port']), 'token': token}
                    for label, t in self.tailnet.items()}
        if variants:
            main['tailnetGatewayURLs'] = {label: v['gatewayURL'] for label, v in variants.items()}
        return main, variants

    def verified_build(self):
        if not self.build.exists():
            raise SystemExit('no active build; run build --activate')
        build = self.build.resolve()
        manifest = json.loads((build / 'build-info.json').read_text())
        if not manifest.get('build_success'):
            raise SystemExit('active build did not succeed')
        for name in ('gdxsv', 'gateway'):
            if digest(build / 'bin' / name) != manifest['outputs'][name]:
                raise SystemExit('built executable fingerprint mismatch: ' + name)
        return build, manifest

    def commands(self, build):
        flags = ['-pprof=0', '-cprof=0', '-cpu=2']
        return {'initdb': [str(build / 'bin' / 'gdxsv'), *flags, 'initdb'],
                'gdxsv': [str(build / 'bin' / 'gdxsv'), *flags, 'lbs'],
                'gateway': [str(build / 'bin' / 'gateway'), '-config', str(self.state / 'gateway.json')]}

    # ---- process inspection ---------------------------------------------

    def inventory(self, pids):
        """Actual OS listeners of the given processes. Raises on any listener
        outside 127.0.0.1 or the configured tailnet ports."""
        if not pids:
            return set(), ''
        result = subprocess.run(['lsof', '-nP', '-a', '-p', ','.join(map(str, pids)), '-i'],
                                capture_output=True, text=True)
        listeners = set()
        tailnet_ports = {t['port'] for t in self.tailnet.values()}
        for line in result.stdout.splitlines()[1:]:
            if '->' in line or not ('(LISTEN)' in line or ' UDP ' in line):
                continue
            match = re.search(r'(TCP|UDP) (\S+):(\d+)', line)
            if not match:
                raise RuntimeError('unparsed listener: ' + line)
            proto, host, port = match[1], match[2], int(match[3])
            if not (host == '127.0.0.1' or (proto == 'TCP' and host == self.tailnet_address and port in tailnet_ports)):
                raise RuntimeError('listener outside the allowed addresses: ' + line)
            listeners.add((proto, host, port))
        return listeners, result.stdout

    def port_holders(self):
        ports = sorted({p for _, _, p in self.expected_listeners()})
        result = subprocess.run(['lsof', '-nP', *['-i:%d' % p for p in ports]], capture_output=True, text=True)
        return [line for line in result.stdout.splitlines()[1:] if '(LISTEN)' in line or (' UDP ' in line and '->' not in line)]

    def status_file(self):
        path = self.run_dir / 'status.json'
        return json.loads(path.read_text()) if path.exists() else {}

    def supervisor_pid(self):
        path = self.run_dir / 'supervisor.pid'
        if path.exists():
            pid = int(path.read_text())
            if alive(pid):
                return pid
        return None

    # ---- commands -------------------------------------------------------

    def cmd_build(self, args):
        spec = importlib.util.spec_from_file_location('prepare_backend', HERE / 'prepare_backend.py')
        prepare = importlib.util.module_from_spec(spec)
        spec.loader.exec_module(prepare)
        if not self.clone:
            raise SystemExit('config needs gdxsv_clone')
        work = self.builds / datetime.datetime.now(datetime.timezone.utc).strftime('%Y%m%dT%H%M%SZ')
        self.builds.mkdir(parents=True, exist_ok=True)
        manifest = prepare.prepare(self.clone, work, self.toolchain or prepare.DEFAULT_TOOLCHAIN)
        if args.activate or not self.build.exists():
            self.activate(work)
        print(json.dumps({'build': str(work), 'outputs': manifest['outputs'], 'go': manifest['go_version'],
                          'active': self.build.resolve() == work}, indent=2))

    def activate(self, work):
        if self.supervisor_pid():
            raise SystemExit('stop the backend before activating another build')
        if self.build.is_symlink():
            self.build.unlink()
        self.build.symlink_to(os.path.relpath(work, self.build.parent))

    def cmd_init(self, args):
        build, _ = self.verified_build()
        self.state.mkdir(parents=True, exist_ok=True)
        os.chmod(self.state, 0o700)
        for path in (self.logs, self.run_dir):
            path.mkdir(exist_ok=True)
        record = {'utc': utc(), 'build': build.name}
        token = self.state / 'token'
        if not token.exists():
            fd = os.open(str(token), os.O_WRONLY | os.O_CREAT | os.O_EXCL, 0o600)
            with os.fdopen(fd, 'w') as f:
                f.write('fvzdx-' + secrets.token_urlsafe(32) + '\n')
            record['token'] = 'created'
        else:
            record['token'] = 'kept'
        db = self.state / 'gdxsv.db'
        if db.exists():
            # gdxsv initdb deletes an existing database; never run it on one.
            record['database'] = 'kept'
        else:
            with (self.logs / 'initdb.log').open('a') as log:
                log.write('==== backendctl init %s build %s ====\n' % (utc(), build.name))
                log.flush()
                subprocess.run(self.commands(build)['initdb'], cwd=self.state, env=self.environment(),
                               stdin=subprocess.DEVNULL, stdout=log, stderr=subprocess.STDOUT, check=True)
            if not db.exists():
                raise SystemExit('initdb created no database; see ' + str(self.logs / 'initdb.log'))
            os.chmod(db, 0o600)
            record['database'] = 'created'
        write_json(self.state / 'gateway.json', self.gateway_config())
        main, variants = self.client_configs()
        write_json(self.state / 'client.json', main)
        for label, value in variants.items():
            write_json(self.state / ('client-%s.json' % label), value)
        record['files'] = sorted(p.name for p in self.state.iterdir() if p.is_file())
        with (self.state / 'provenance.jsonl').open('a') as f:
            f.write(json.dumps(record) + '\n')
        print(json.dumps(record, indent=2))

    def cmd_start(self, args):
        pid = self.supervisor_pid()
        if pid:
            raise SystemExit('backend already running (supervisor %d)' % pid)
        for name in ('token', 'gdxsv.db', 'gateway.json'):
            if not (self.state / name).exists():
                raise SystemExit('run init first (missing state/%s)' % name)
        self.verified_build()
        holders = self.port_holders()
        if holders:
            raise SystemExit('configured ports are in use:\n' + '\n'.join(holders))
        run_id = datetime.datetime.now(datetime.timezone.utc).strftime('%Y%m%dT%H%M%SZ')
        (self.run_dir / 'status.json').unlink(missing_ok=True)
        with (self.logs / 'supervisor.log').open('a') as log:
            subprocess.Popen([sys.executable, str(Path(__file__).resolve()), '--config', str(self.config_path),
                              'supervise', run_id], cwd=str(self.state), stdin=subprocess.DEVNULL, stdout=log,
                             stderr=subprocess.STDOUT, start_new_session=True)
        deadline = time.monotonic() + args.wait
        while time.monotonic() < deadline:
            status = self.status_file()
            if status.get('run_id') == run_id and (status.get('ready') or status.get('stopped_at')):
                print(json.dumps({k: status.get(k) for k in ('run_id', 'ready', 'error', 'supervisor_pid', 'pids',
                                                             'ports', 'listeners_verified', 'build')}, indent=2))
                return 0 if status.get('ready') else 1
            time.sleep(0.2)
        raise SystemExit('backend did not report ready; see ' + str(self.logs / 'supervisor.log'))

    def cmd_supervise(self, args):
        build, manifest = self.verified_build()
        (self.run_dir / 'supervisor.pid').write_text(str(os.getpid()))
        # Regenerate from config so a config change takes effect on restart.
        write_json(self.state / 'gateway.json', self.gateway_config())
        env = self.environment()
        commands = self.commands(build)
        status = {'run_id': args.run_id, 'started_at': utc(), 'build': str(build),
                  'build_outputs': manifest['outputs'], 'ports': self.ports,
                  'tailnet_listeners': self.gateway_config()['tailnet_listeners'],
                  'commands': {n: commands[n] for n in SERVICES},
                  'environment': {k: v for k, v in env.items() if k.startswith('GDXSV_')},
                  'supervisor_pid': os.getpid(), 'ready': False}
        stop, processes, logs = False, {}, []

        def stopping(*_):
            nonlocal stop
            stop = True
        signal.signal(signal.SIGINT, stopping)
        signal.signal(signal.SIGTERM, stopping)
        try:
            marker = '==== backendctl run %s start %s build %s ====\n' % (args.run_id, utc(), build.name)
            for name in SERVICES:
                log = (self.logs / (name + '.log')).open('a')
                log.write(marker)
                log.flush()
                logs.append(log)
                processes[name] = subprocess.Popen(commands[name], cwd=str(self.state), env=env,
                                                   stdin=subprocess.DEVNULL, stdout=log, stderr=subprocess.STDOUT)
            status['pids'] = {n: p.pid for n, p in processes.items()}
            write_json(self.run_dir / 'status.json', status)
            expected = self.expected_listeners()
            deadline = time.monotonic() + 20
            while not stop:
                exited = [n for n, p in processes.items() if p.poll() is not None]
                if exited:
                    raise RuntimeError('service exited during startup: ' + ','.join(exited))
                listeners, inventory = self.inventory([p.pid for p in processes.values()])
                if listeners == expected:
                    break
                if time.monotonic() > deadline:
                    raise RuntimeError('listener mismatch: missing=%s extra=%s' % (sorted(expected - listeners),
                                                                                   sorted(listeners - expected)))
                time.sleep(0.2)
            if stop:
                raise RuntimeError('stopped during startup')
            (self.run_dir / 'listeners.txt').write_text(inventory)
            status.update(ready=True, ready_at=utc(), listeners_verified=sorted(map(list, listeners)))
            write_json(self.run_dir / 'status.json', status)
            print('ready %s pids %s' % (args.run_id, status['pids']), flush=True)
            while not stop:
                exited = {n: p.returncode for n, p in processes.items() if p.poll() is not None}
                if exited:
                    raise RuntimeError('service exited: ' + json.dumps(exited))
                time.sleep(0.5)
        except BaseException as error:
            status['error'] = str(error)
            print('error', error, flush=True)
        finally:
            # Stop the gateway first, so browsers see 1001 rather than a service EOF.
            order = [processes[n] for n in ('gateway', 'gdxsv') if n in processes]
            for p in order:
                if p.poll() is None:
                    p.terminate()
                    try:
                        p.wait(timeout=5)
                    except subprocess.TimeoutExpired:
                        p.kill()
                        p.wait()
            for log in logs:
                log.write('==== backendctl run %s stop %s ====\n' % (args.run_id, utc()))
                log.close()
            status.update(ready=False, stopped_at=utc(), exit_codes={n: p.returncode for n, p in processes.items()})
            write_json(self.run_dir / 'status.json', status)
            (self.run_dir / 'supervisor.pid').unlink(missing_ok=True)
        return 1 if status.get('error') else 0

    def cmd_stop(self, args):
        status = self.status_file()
        pid = self.supervisor_pid()
        if pid:
            os.kill(pid, signal.SIGTERM)
            deadline = time.monotonic() + args.wait
            while alive(pid) and time.monotonic() < deadline:
                time.sleep(0.2)
            if alive(pid):
                raise SystemExit('supervisor %d did not stop' % pid)
        # A supervisor killed without cleanup can leave its services behind;
        # only signal recorded pids that still run our executables.
        leftovers = {}
        for name, child in (status.get('pids') or {}).items():
            if alive(child):
                command = subprocess.run(['ps', '-o', 'command=', '-p', str(child)], capture_output=True, text=True).stdout
                if status.get('build', '\0') in command:
                    os.kill(child, signal.SIGTERM)
                    leftovers[name] = child
        print(json.dumps({'stopped': bool(pid), 'run_id': status.get('run_id'), 'terminated_leftovers': leftovers,
                          'port_holders': self.port_holders()}, indent=2))

    def cmd_status(self, args):
        status = self.status_file()
        pids = status.get('pids') or {}
        report = {'utc': utc(), 'run_id': status.get('run_id'), 'ready': bool(status.get('ready')),
                  'supervisor': self.supervisor_pid(), 'error': status.get('error'), 'services': {}}
        for name in SERVICES:
            report['services'][name] = {'pid': pids.get(name), 'alive': alive(pids.get(name))}
        problem = False
        try:
            listeners, _ = self.inventory([p for p in pids.values() if alive(p)])
            expected = self.expected_listeners()
            report['listeners'] = {'expected': len(expected), 'missing': sorted(map(list, expected - listeners)),
                                   'extra': sorted(map(list, listeners - expected))}
            problem = listeners != expected
        except RuntimeError as error:
            report['listeners'] = {'error': str(error)}
            problem = True
        # Plain TCP connects; the lobby logs one short connection per probe.
        probes = {name: tcp_probe(self.address(name)) for name in ('lobby', 'battle', 'gateway')}
        for label, t in self.tailnet.items():
            probes['gateway-' + label] = tcp_probe('%s:%d' % (self.tailnet_address, t['port']))
        report['tcp_probes'] = probes
        # A tailnet listener drops this machine's own connection unless it is a listed peer,
        # but the TCP connect itself still succeeds.
        report['healthy'] = bool(report['supervisor'] and report['ready'] and not problem
                                 and all(s['alive'] for s in report['services'].values())
                                 and all(p['connect'] for p in probes.values()))
        print(json.dumps(report, indent=2))
        return 0 if report['healthy'] else 1


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--config', type=Path, required=True, help='private backend JSON config')
    sub = parser.add_subparsers(dest='command', required=True)
    p = sub.add_parser('build', help='build pinned gdxsv and the gateway into builds/<utc>')
    p.add_argument('--activate', action='store_true', help='make this the active build')
    sub.add_parser('init', help='create state: token, gdxsv database, gateway.json, client.json')
    p = sub.add_parser('start', help='start the supervisor and wait until every listener is verified')
    p.add_argument('--wait', type=float, default=30)
    p = sub.add_parser('supervise', help=argparse.SUPPRESS)
    p.add_argument('run_id')
    p = sub.add_parser('stop', help='stop the supervisor and its services')
    p.add_argument('--wait', type=float, default=20)
    sub.add_parser('status', help='process liveness, listener inventory and TCP probes')
    args = parser.parse_args()
    backend = Backend(args.config)
    sys.exit(getattr(backend, 'cmd_' + args.command)(args) or 0)


if __name__ == '__main__':
    main()
