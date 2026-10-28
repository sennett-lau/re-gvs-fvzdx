#!/usr/bin/env python3
"""Identify the supported private ISO and extract only its boot configuration/ELF."""
import argparse
import importlib.util
import json
from pathlib import Path
import re
import struct
from common import ROOT, digest, write_json

spec = importlib.util.spec_from_file_location('iso_reader', ROOT / 'vendor/ps2-web-recomp/scripts/disc.py')
iso_reader = importlib.util.module_from_spec(spec)
spec.loader.exec_module(iso_reader)


def extract(disc, output, full_hash=False):
    lock = json.loads((ROOT / 'upstream.lock').read_text())
    image = iso_reader.Image(disc)
    try:
        if image.size != lock['disc']['bytes']:
            raise ValueError('Unsupported disc size')
        cnf_entry = image.find('SYSTEM.CNF')
        if not cnf_entry:
            raise ValueError('Missing SYSTEM.CNF')
        image.file.seek(cnf_entry[2] * 2048)
        cnf = image.file.read(cnf_entry[3])
        settings = dict(re.findall(r'^([A-Z0-9]+)\s*=\s*([^\r\n]+)', cnf.decode('ascii'), re.M))
        if any(settings.get(k) != v for k, v in lock['disc']['system_cnf'].items()):
            raise ValueError('Unsupported SYSTEM.CNF')
        elf_name = settings['BOOT2'].split('\\')[-1].split(';')[0]
        entry = image.find(elf_name)
        if not entry or entry[3] != lock['elf']['bytes']:
            raise ValueError('Unsupported boot executable')
        image.file.seek(entry[2] * 2048)
        elf = image.file.read(entry[3])
        import hashlib
        if hashlib.sha256(elf).hexdigest() != lock['elf']['sha256']:
            raise ValueError('Unsupported executable SHA-256')
        disc_hash = digest(disc) if full_hash else None
        if full_hash and disc_hash != lock['disc']['sha256']:
            raise ValueError('Unsupported disc SHA-256')
        output.mkdir(parents=True, exist_ok=False)
        (output / elf_name).write_bytes(elf)
        (output / 'SYSTEM.CNF').write_bytes(cnf)
        (output / 'boot.txt').write_text(settings['BOOT2'] + '\n')
        inventory = [{'path': p, 'layer': layer.index, 'lba': lba, 'bytes': size}
                     for p, layer, lba, size in image.files()]
        record = {'disc_bytes': image.size, 'disc_sha256': disc_hash,
                  'verification': 'full-disc' if full_hash else 'size, boot configuration and ELF',
                  'system_cnf': settings, 'elf': lock['elf'], 'files': inventory,
                  'volumes': [{'volume': l.volume, 'sectors': l.sectors, 'base': l.base} for l in image.layers]}
        write_json(output / 'inputs.json', record)
        return output / elf_name
    finally:
        image.file.close()


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--disc', type=Path, required=True)
    parser.add_argument('--output', type=Path, default=ROOT / '.local/inputs')
    parser.add_argument('--full-hash', action='store_true')
    args = parser.parse_args()
    print(extract(args.disc.resolve(), args.output.resolve(), args.full_hash))
