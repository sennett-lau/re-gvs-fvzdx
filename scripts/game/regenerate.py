#!/usr/bin/env python3
"""Translate this disc's ELF and explicitly supplied discovery inputs into fresh C++."""
import argparse
from pathlib import Path
from common import ROOT, digest, fingerprints, run, write_json
from extract import extract


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--disc', type=Path, required=True)
    parser.add_argument('--tools', type=Path, default=ROOT / '.local/compiler/build')
    parser.add_argument('--output', type=Path, default=ROOT / '.local/translation')
    parser.add_argument('--entries', type=Path)
    parser.add_argument('--overlays', type=Path)
    parser.add_argument('--vu-records', type=Path)
    args = parser.parse_args()
    output = args.output.resolve()
    output.mkdir(parents=True, exist_ok=False)
    elf = extract(args.disc.resolve(), output / 'inputs')
    generated = output / 'generated'
    command = [args.tools.resolve() / 'eerecomp', elf, '--out', generated]
    for flag, path in [('--entries', args.entries), ('--overlays', args.overlays)]:
        if path:
            command.extend([flag, path.resolve()])
    run(command)
    if args.vu_records:
        run([args.tools.resolve() / 'vurecomp', args.vu_records.resolve(), generated])
    write_json(output / 'translation.json', {
        'elf_sha256': digest(elf), 'eerecomp_sha256': digest(args.tools / 'eerecomp'),
        'entries_sha256': digest(args.entries) if args.entries else None,
        'overlays': fingerprints(args.overlays) if args.overlays else {},
        'vu_records': fingerprints(args.vu_records) if args.vu_records else {},
        'generated': fingerprints(generated),
    })


if __name__ == '__main__':
    main()
