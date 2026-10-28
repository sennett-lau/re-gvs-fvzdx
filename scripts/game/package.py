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
    args = parser.parse_args()
    build = args.build.resolve()
    manifest = json.loads((build / 'build-manifest.json').read_text())
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
    (output / 'README.txt').write_text(
        'Renpou vs. Zeon DX 0.1.0 local package\n\n'
        'Supply the verified Japanese v2.00 SLPM_650.76 disc separately.\n'
        'Run: python3 serve.py --build web --disc /private/path/disc.iso\n'
        'Open http://127.0.0.1:8642/ in a browser supporting WebGPU and JSPI.\n'
        'Keyboard: Enter=Start, X=Circle, Z=Cross, A=Square, S=Triangle, arrows=D-pad.\n'
        'See research.md for the actual acceptance evidence and limitations.\n'
        'This directory contains local game-derived output. It is not a published release.\n'
    )
    write_json(output / 'package-manifest.json', {
        'version': '0.1.0', 'publication': 'local only', 'files': fingerprints(output),
    })
    print('Verified local package: ' + str(output))


if __name__ == '__main__':
    main()
