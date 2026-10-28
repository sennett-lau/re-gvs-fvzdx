"""Shared local build helpers; no network or publication operations."""
import hashlib
import json
from pathlib import Path
import shutil
import subprocess

ROOT = Path(__file__).resolve().parents[2]


def digest(path):
    h = hashlib.sha256()
    with Path(path).open('rb') as f:
        for chunk in iter(lambda: f.read(4 << 20), b''):
            h.update(chunk)
    return h.hexdigest()


def write_json(path, value):
    Path(path).write_text(json.dumps(value, indent=2) + '\n')


def run(command, **kwargs):
    command = list(map(str, command))
    print('+ ' + ' '.join(command), flush=True)
    return subprocess.run(command, check=True, **kwargs)


def fingerprints(directory):
    directory = Path(directory)
    return {str(p.relative_to(directory)): {'bytes': p.stat().st_size, 'sha256': digest(p)}
            for p in sorted(directory.rglob('*')) if p.is_file()}


def verify_translation(directory):
    directory = Path(directory)
    expected = json.loads((directory / 'translation.json').read_text())['generated']
    if fingerprints(directory / 'generated') != expected:
        raise ValueError('Generated file set/fingerprint mismatch; regenerate or verify the transfer')


def source_tree(destination):
    """Verify the pristine snapshot before applying this project's explicit patches."""
    vendor = ROOT / 'vendor/ps2-web-recomp'
    manifest = json.loads((ROOT / 'vendor/manifest.json').read_text())
    for name, expected in manifest['files_sha256'].items():
        if digest(vendor / name) != expected:
            raise ValueError('Vendor fingerprint mismatch: ' + name)
    shutil.copytree(vendor, destination, ignore=shutil.ignore_patterns('__pycache__', '._*', '.DS_Store'))
    applied = {}
    for patch in sorted((ROOT / 'patches').rglob('*.patch')):
        run(['patch', '--dry-run', '-p1', '-i', patch], cwd=destination)
        run(['patch', '-p1', '-i', patch], cwd=destination)
        applied[str(patch.relative_to(ROOT))] = digest(patch)
    shell = ROOT / 'apps/game/shell.html'
    if shell.exists():
        shutil.copy2(shell, destination / 'web/shell.html')
    write_json(destination / 'provenance.json', {
        'upstream': manifest['revision'], 'patches': applied,
        'source_files': fingerprints(destination),
    })
    return destination
