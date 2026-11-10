#!/usr/bin/env python3
"""Copy a verified matched build and local server into a new private directory."""
import argparse
import json
from pathlib import Path
import shutil
from common import ROOT, digest, fingerprints, write_json


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--build', type=Path, default=ROOT / 'apps/game/prebuilt')
    parser.add_argument('--output', type=Path, default=ROOT / '.local/package-0.1.0')
    parser.add_argument('--release', metavar='TAG', help='GitHub release tag this export is attached to')
    parser.add_argument('--version', help="Package version (default: the build manifest's version_target)")
    parser.add_argument('--online', type=Path, metavar='DIR',
                        help='Online build sidecar directory (online-manifest.json) for an --online web build')
    args = parser.parse_args()
    build = args.build.resolve()
    manifest = json.loads((build / 'build-manifest.json').read_text())
    online = (manifest.get('profile') or '').startswith('online')
    args.version = args.version or manifest['version_target']
    if online != (args.online is not None):
        parser.error('--online is required for, and only for, an Online build manifest')
    if online and digest(args.online / 'online-manifest.json') != manifest['online_manifest_sha256']:
        parser.error('Online hook manifest does not match the build manifest')
    required = ['ps2web.html', 'ps2web.js', 'ps2web.wasm', 'ps2web.data']
    for name in required:
        expected = manifest['artifacts'][name]
        if (build / name).stat().st_size != expected['bytes'] or digest(build / name) != expected['sha256']:
            parser.error('Artifact fingerprint mismatch: ' + name)
    output = args.output.resolve()
    output.mkdir(parents=True, exist_ok=False)
    web = output / 'web'
    web.mkdir()
    for name in required + ['build-manifest.json']:
        shutil.copy2(build / name, web / name)
    shutil.copy2(ROOT / 'scripts/game/serve.py', output / 'serve.py')
    shutil.copy2(ROOT / 'upstream.lock', output / 'upstream.lock')
    shutil.copytree(ROOT / 'docs/license', output / 'notices')
    shutil.copy2(ROOT / 'research.md', output / 'research.md')
    shutil.copy2(ROOT / 'ps2-web-re-pr.md', output / 'ps2-web-re-pr.md')
    if (ROOT / 'docs/evidence').is_dir():
        shutil.copytree(ROOT / 'docs/evidence', output / 'docs/evidence')
    if online:
        shutil.copy2(args.online / 'online-manifest.json', web / 'online-manifest.json')
        shutil.copy2(ROOT / 'docs/online-mode.md', output / 'docs/online-mode.md')
        shutil.copy2(ROOT / 'apps/server/README.md', output / 'docs/server.md')
    online_text = (
        'Online Mode: this build needs a private gdxsv backend and gateway (see docs/online-mode.md and\n'
        'docs/server.md; build them from apps/server in the source archive). Start the page with\n'
        'python3 serve.py --build web --disc /private/path/disc.iso --online-config /private/client.json\n'
        'where client.json is {"gatewayURL": "ws://HOST:PORT/", "token": "..."}. A battle needs four players.\n'
    ) if online else ''
    (output / 'README.txt').write_text(
        'Renpou vs. Zeon DX ' + args.version + (' Online' if online else '') + ' local package\n\n'
        'Supply the verified Japanese v2.00 SLPM_650.76 disc separately.\n'
        'Run: python3 serve.py --build web --disc /private/path/disc.iso\n'
        'Open http://127.0.0.1:8642/ in a browser supporting WebGPU and JSPI.\n'
        'Keyboard: Enter=Start, X=Circle, Z=Cross, A=Square, S=Triangle, arrows=D-pad.\n'
        'See research.md for the actual acceptance evidence and limitations.\n'
        + online_text
        + ('This package is attached to the GitHub release ' + args.release + '. It contains no disc.\n'
           if args.release else
           'This directory contains local game-derived output. It is not a published release.\n')
    )
    write_json(output / 'package-manifest.json', {
        'version': args.version, 'publication': ('GitHub release ' + args.release) if args.release else 'local only', 'files': fingerprints(output),
    })
    print('Verified local package: ' + str(output))


if __name__ == '__main__':
    main()
