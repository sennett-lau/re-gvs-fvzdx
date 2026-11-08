#!/usr/bin/env python3
"""Build the pinned gdxsv lobby/battle server and the byte gateway into a new directory.

Steps: archive the pinned gdxsv commit from a local clone, record its SHA-256,
extract it, apply patches/gdxsv-loopback.diff, build and test gdxsv and the
gateway, and write build-info.json with input/output hashes and toolchain
versions. An existing build directory is never reused.

The clone is third-party data: only `git archive` and `git rev-parse` run in
it, with hooks and fsmonitor disabled. Nothing from it is executed except the
Go code compiled from the archive.
"""
import argparse
import datetime
import difflib
import gzip
import hashlib
import io
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import tarfile

REVISION = '46ee80b715f76ac0c7c254f6f983e5dcd9940306'
UPSTREAM = 'https://github.com/inada-s/gdxsv'
HERE = Path(__file__).resolve().parent
PATCH = HERE / 'patches' / 'gdxsv-loopback.diff'
GATEWAY_FILES = ('main.go', 'main_test.go', 'go.mod', 'go.sum')
# gdxsv/go.mod requires Go 1.26; pin the toolchain so the result does not
# depend on which go binary starts the build.
DEFAULT_TOOLCHAIN = 'go1.26.0'
# The regression test added by the patch; it must run and pass, not skip.
REQUIRED_TESTS = ('TestLoopbackBinding', 'TestLbs_TCPLoginIntegration', 'TestParseMcsReadTimeout')


def digest(path):
    h = hashlib.sha256()
    with open(path, 'rb') as f:
        for block in iter(lambda: f.read(1 << 20), b''):
            h.update(block)
    return h.hexdigest()


def utc_stamp():
    return datetime.datetime.now(datetime.timezone.utc).strftime('%Y%m%dT%H%M%SZ')


def git(clone, *args):
    # Disable repository hooks and fsmonitor of the untrusted clone.
    return subprocess.run(['git', '-c', 'core.hooksPath=/dev/null', '-c', 'core.fsmonitor=false',
                           '-C', str(clone), *args], check=True, capture_output=True)


def safe_extract(archive, dest):
    dest = dest.resolve()
    dest.mkdir(parents=True)
    with tarfile.open(archive) as handle:
        members = handle.getmembers()
        for member in members:
            path = (dest / member.name).resolve()
            if dest not in path.parents or not (member.isfile() or member.isdir()):
                # git archive also emits a pax global header, which tarfile
                # consumes itself; anything else (links, devices) is refused.
                raise SystemExit('unsafe archive member: ' + member.name)
        handle.extractall(dest, members=members)


def tree_files(root):
    return {p.relative_to(root).as_posix(): p for p in sorted(root.rglob('*')) if p.is_file()}


def unified_diff(pristine, source):
    out = []
    old, new = tree_files(pristine), tree_files(source)
    for name in sorted(set(old) | set(new)):
        if name in old and name in new and old[name].read_bytes() == new[name].read_bytes():
            continue
        a = old[name].read_text().splitlines(True) if name in old else []
        b = new[name].read_text().splitlines(True) if name in new else []
        out += difflib.unified_diff(a, b, 'a/' + name if name in old else '/dev/null', 'b/' + name)
    return ''.join(out)


def deterministic_tgz(source, prefix, out, names=None):
    files = tree_files(source)
    raw = io.BytesIO()
    with tarfile.open(fileobj=raw, mode='w', format=tarfile.PAX_FORMAT) as archive:
        for name in sorted(files if names is None else names):
            path = files[name]
            info = tarfile.TarInfo(prefix + '/' + name)
            info.size, info.mtime = path.stat().st_size, 0
            info.mode = 0o755 if os.access(path, os.X_OK) else 0o644
            with path.open('rb') as handle:
                archive.addfile(info, handle)
    with gzip.GzipFile(out, 'wb', mtime=0) as handle:
        handle.write(raw.getvalue())


def run(command, cwd, env, log):
    log.write('$ (cd %s && %s)\n' % (cwd, ' '.join(command)))
    log.flush()
    result = subprocess.run(command, cwd=cwd, env=env, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
    log.write(result.stdout)
    log.write('exit %d\n\n' % result.returncode)
    log.flush()
    if result.returncode != 0:
        raise SystemExit('command failed (exit %d): %s; see %s' % (result.returncode, ' '.join(command), log.name))
    return result.stdout


def test_summary(output):
    summary = {'pass': [], 'fail': [], 'skip': []}
    for kind, name in re.findall(r'^\s*--- (PASS|FAIL|SKIP): (\S+)', output, re.M):
        summary[kind.lower()].append(name)
    summary['packages'] = re.findall(r'^(ok|FAIL)\s+(\S+)', output, re.M)
    return summary


def prepare(clone, work, toolchain=DEFAULT_TOOLCHAIN):
    clone, work = Path(clone).resolve(), Path(work).resolve()
    work.mkdir(parents=True, exist_ok=False)  # never reuse a build directory
    manifest = {'timestamp': datetime.datetime.now(datetime.timezone.utc).isoformat(),
                'upstream': UPSTREAM, 'upstream_revision': REVISION, 'clone': str(clone),
                'game_executed': False, 'build_success': False}
    try:
        with (work / 'build.log').open('w') as log:
            _prepare(clone, work, toolchain, manifest, log)
        manifest['build_success'] = True
    finally:
        (work / 'build-info.json').write_text(json.dumps(manifest, indent=2) + '\n')
    return manifest


def _prepare(clone, work, toolchain, manifest, log):
    commit = git(clone, 'rev-parse', '--verify', REVISION + '^{commit}').stdout.decode().strip()
    if commit != REVISION:
        raise SystemExit('pinned revision not found in clone')
    manifest['upstream_tree'] = git(clone, 'rev-parse', REVISION + '^{tree}').stdout.decode().strip()
    manifest['git_version'] = subprocess.check_output(['git', '--version'], text=True).strip()

    # 1. Source archive of the pinned commit and its fingerprint.
    bundle = work / 'source'
    bundle.mkdir()
    prefix = 'gdxsv-' + REVISION
    archive = bundle / (prefix + '.tar')
    archive.write_bytes(git(clone, 'archive', '--format=tar', '--prefix=' + prefix + '/', REVISION).stdout)
    manifest['archive'] = {'file': str(archive.relative_to(work)), 'sha256': digest(archive),
                           'bytes': archive.stat().st_size}

    # 2. Extract twice: one tree to patch and build, one pristine for the diff.
    safe_extract(archive, work / 'src')
    safe_extract(archive, work / 'pristine')
    source, pristine = work / 'src' / prefix, work / 'pristine' / prefix
    upstream_files = {name: digest(p) for name, p in tree_files(source).items()}

    # 3. Apply the patch set with no fuzz; a stale patch fails here.
    patch_cmd = ['patch', '-p1', '-N', '-t', '-F0', '-i', str(PATCH)]
    run(patch_cmd + ['--dry-run'], source, None, log)
    run(patch_cmd, source, None, log)
    leftovers = [n for n in tree_files(source) if n.endswith(('.orig', '.rej'))]
    if leftovers:
        raise SystemExit('patch left backup/reject files: %s' % leftovers)
    patched = {name: digest(p) for name, p in tree_files(source).items()}
    manifest['patch'] = {
        'file': str(PATCH.relative_to(HERE)), 'sha256': digest(PATCH),
        'changed_files': {n: {'before': upstream_files.get(n), 'after': patched[n]}
                          for n in sorted(patched) if upstream_files.get(n) != patched[n]}}
    applied = unified_diff(pristine, source)
    (bundle / 'patches.diff').write_text(applied)
    shutil.copyfile(source / 'LICENSE', bundle / 'LICENSE')
    shutil.rmtree(work / 'pristine')

    # 4. Gateway sources (this repository).
    gateway_src = work / 'gateway-src'
    gateway_src.mkdir()
    for name in GATEWAY_FILES:
        shutil.copyfile(HERE / 'gateway' / name, gateway_src / name)
    manifest['integration_sources'] = {
        str(p.relative_to(HERE)): digest(p)
        for p in sorted([*HERE.glob('*.py'), *HERE.glob('*.json'), PATCH, *(HERE / 'gateway' / n for n in GATEWAY_FILES)])}

    # 5. Build and test. mattn/go-sqlite3 needs cgo, so CGO_ENABLED=1.
    env = {k: v for k, v in os.environ.items() if not k.startswith('GDXSV_')}
    env.update(GOTOOLCHAIN=toolchain, GOFLAGS='-mod=readonly', CGO_ENABLED='1', GOMAXPROCS='4')
    bin_dir = work / 'bin'
    bin_dir.mkdir()
    flags = ['-trimpath', '-buildvcs=false']
    ldflags = '-X main.gdxsvVersion=%s-fvzdx-loopback -X main.gdxsvRevision=%s' % (REVISION[:12], REVISION)
    commands = [
        (source, ['go', 'build', *flags, '-ldflags', ldflags, '-o', str(bin_dir / 'gdxsv'), './gdxsv']),
        (source, ['go', 'vet', './gdxsv']),
        (source, ['go', 'test', '-count=1', '-v', '-timeout', '600s', './gdxsv/...']),
        (gateway_src, ['go', 'vet', '.']),
        (gateway_src, ['go', 'test', '-count=1', '-race', '-v', '.']),
        (gateway_src, ['go', 'build', *flags, '-o', str(bin_dir / 'gateway'), '.']),
    ]
    manifest['commands'] = [{'cwd': str(cwd.relative_to(work)), 'argv': argv} for cwd, argv in commands]
    manifest['environment'] = {k: env[k] for k in ('GOTOOLCHAIN', 'GOFLAGS', 'CGO_ENABLED', 'GOMAXPROCS')}
    tests = {}
    for cwd, argv in commands:
        output = run(argv, cwd, env, log)
        if argv[1] == 'test':
            tests[str(cwd.relative_to(work))] = test_summary(output)
    manifest['tests'] = tests
    gdxsv_tests = tests[str(source.relative_to(work))]
    if gdxsv_tests['fail'] or any(t not in gdxsv_tests['pass'] for t in REQUIRED_TESTS):
        raise SystemExit('required gdxsv tests did not pass: %s' % (REQUIRED_TESTS,))

    # 6. Toolchain and module provenance.
    manifest['go_version'] = subprocess.check_output(['go', 'version'], cwd=source, env=env, text=True).strip()
    manifest['go_env'] = json.loads(subprocess.check_output(
        ['go', 'env', '-json', 'GOOS', 'GOARCH', 'CC', 'CGO_ENABLED', 'GOVERSION'], cwd=source, env=env, text=True))
    manifest['cc_version'] = subprocess.run([manifest['go_env']['CC'], '--version'], capture_output=True,
                                            text=True).stdout.splitlines()[:1]
    manifest['modules'] = {
        'gdxsv': subprocess.check_output(['go', 'list', '-m', 'all'], cwd=source, env=env, text=True).splitlines(),
        'gateway': subprocess.check_output(['go', 'list', '-m', 'all'], cwd=gateway_src, env=env, text=True).splitlines()}
    gorilla = json.loads(subprocess.check_output(['go', 'list', '-m', '-json', 'github.com/gorilla/websocket'],
                                                 cwd=gateway_src, env=env, text=True))
    shutil.copyfile(Path(gorilla['Dir']) / 'LICENSE', bundle / 'gorilla-websocket-LICENSE')
    manifest['outputs'] = {name: digest(bin_dir / name) for name in ('gdxsv', 'gateway')}

    # 7. Corresponding source for the AGPL server and the gateway.
    # Only the patched source tree; tests may leave files such as databases.
    manifest['files_created_by_tests'] = sorted(set(tree_files(source)) - set(patched))
    deterministic_tgz(source, prefix, bundle / (prefix + '-patched.tar.gz'), patched)
    deterministic_tgz(gateway_src, 'fvzdx-online-gateway', bundle / 'gateway-source.tar.gz', GATEWAY_FILES)
    (bundle / 'NOTICE').write_text(
        'bin/gdxsv is compiled from inada-s/gdxsv (%s) revision %s,\n'
        'licensed under the GNU Affero General Public License version 3 (see LICENSE),\n'
        'with the changes in patches.diff. %s-patched.tar.gz is its complete\n'
        'corresponding source; Go module versions are fixed by its go.sum.\n'
        'If anyone other than the operator interacts with this server over a network,\n'
        'offer them this source (AGPL-3.0 section 13).\n\n'
        'bin/gateway is compiled from gateway-source.tar.gz (this project) and uses\n'
        'github.com/gorilla/websocket (BSD-2-Clause, see gorilla-websocket-LICENSE).\n'
        % (UPSTREAM, REVISION, prefix))
    manifest['source_bundle'] = {p.name: digest(p) for p in sorted(bundle.iterdir())}


def main():
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--clone', type=Path, required=True, help='local gdxsv git clone containing the pinned commit')
    parser.add_argument('--work', type=Path, required=True, help='new build directory (must not exist)')
    parser.add_argument('--toolchain', default=DEFAULT_TOOLCHAIN)
    args = parser.parse_args()
    manifest = prepare(args.clone, args.work, args.toolchain)
    print(json.dumps({'work': str(args.work.resolve()), 'outputs': manifest['outputs'],
                      'go': manifest['go_version'], 'build_success': True}, indent=2))


if __name__ == '__main__':
    main()
