#!/usr/bin/env python3
"""Verify retained C++, pinned vendor source and the accepted matched web package."""
import json
from common import ROOT, digest, fingerprints


def verify_exports(root=ROOT):
    translation = json.loads((root / 'src/generated/manifest.json').read_text())
    generated = fingerprints(root / 'generated/federation-vs-zeon-dx')
    if generated != translation['generated']:
        raise ValueError('Retained generated file set/fingerprint mismatch')
    vendor = json.loads((root / 'vendor/manifest.json').read_text())
    actual_vendor = fingerprints(root / 'vendor/ps2-web-recomp')
    if {name: record['sha256'] for name, record in actual_vendor.items()
            if '__pycache__' not in name.split('/')} != vendor['files_sha256']:
        raise ValueError('Pinned vendor file set/fingerprint mismatch')
    acceptance = json.loads((root / 'docs/evidence/acceptance-0.1.0.json').read_text())
    prebuilt = root / 'apps/game/prebuilt'
    build = json.loads((prebuilt / 'build-manifest.json').read_text())
    if build['generated'] != generated:
        raise ValueError('Prebuilt generated-input fingerprints differ')
    if build['elf_sha256'] != translation['elf_sha256']:
        raise ValueError('Prebuilt executable identity differs')
    if build['artifacts'] != acceptance['artifacts']:
        raise ValueError('Prebuilt manifest differs from accepted artifacts')
    if {p.name for p in prebuilt.iterdir()} != set(build['artifacts']) | {'build-manifest.json'}:
        raise ValueError('Unexpected or missing prebuilt files')
    for name, record in build['artifacts'].items():
        path = prebuilt / name
        if path.stat().st_size != record['bytes'] or digest(path) != record['sha256']:
            raise ValueError('Prebuilt fingerprint mismatch: ' + name)
    return {'generated_files': len(generated), 'generated_bytes': sum(v['bytes'] for v in generated.values()),
            'web_files': len(build['artifacts']), 'web_bytes': sum(v['bytes'] for v in build['artifacts'].values())}


if __name__ == '__main__':
    print(json.dumps(verify_exports(), indent=2))
