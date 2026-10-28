#!/usr/bin/env python3
"""Build a matched original-timing native or web candidate; never publishes."""
import argparse
import json
import os
from pathlib import Path
import shutil
from common import ROOT, digest, fingerprints, run, source_tree, verify_translation, write_json


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--translation', type=Path, default=ROOT / '.local/translation')
    parser.add_argument('--work', type=Path, default=ROOT / '.local/game-build')
    parser.add_argument('--target', choices=['native', 'web'], default='web')
    parser.add_argument('--emsdk', type=Path, default=os.environ.get('EMSDK'))
    parser.add_argument('--jobs', type=int, default=2)
    args = parser.parse_args()
    translation = args.translation.resolve()
    lock = json.loads((ROOT / 'upstream.lock').read_text())
    elf = translation / 'inputs' / lock['elf']['name']
    if digest(elf) != lock['elf']['sha256']:
        parser.error('ELF fingerprint mismatch')
    verify_translation(translation)
    work = args.work.resolve()
    work.mkdir(parents=True, exist_ok=False)
    source = source_tree(work / 'source')
    build = work / args.target
    command = ['cmake', '-S', source, '-B', build, '-G', 'Ninja', '-DCMAKE_BUILD_TYPE=Release',
               '-DPS2_GENERATED=' + str(translation / 'generated')]
    if args.target == 'web':
        if not args.emsdk:
            parser.error('Activate Emscripten 6.0.11 and pass --emsdk or set EMSDK')
        command.insert(0, args.emsdk.resolve() / 'upstream/emscripten/emcmake')
        command += ['-DPS2_WEB_ELF=' + str(elf),
                    '-DPS2_WEB_BOOT_FILE=' + str(translation / 'inputs/boot.txt')]
        target = 'ps2web'
    else:
        compiler = os.environ.get('CXX') or shutil.which('clang++')
        if not compiler:
            parser.error('Set CXX to a Clang C++20 compiler')
        command += ['-DCMAKE_CXX_COMPILER=' + compiler, '-DCMAKE_CXX_FLAGS_RELEASE=-O1 -DNDEBUG']
        target = 'ps2run'
    run(command)
    run(['cmake', '--build', build, '--target', target, '--parallel', args.jobs])
    artifacts = {p.name: {'bytes': p.stat().st_size, 'sha256': digest(p)}
                 for p in sorted(build.glob('ps2*')) if p.is_file()}
    write_json(build / 'build-manifest.json', {
        'version_target': '0.1.0', 'acceptance': 'candidate; not a playable release claim',
        'target': args.target, 'upstream': lock['upstream']['revision'],
        'elf_sha256': digest(elf), 'generated': fingerprints(translation / 'generated'),
        'source_provenance_sha256': digest(source / 'provenance.json'),
        'cmake_cache_sha256': digest(build / 'CMakeCache.txt'), 'artifacts': artifacts,
    })
    print('Candidate artifacts: ' + str(build))


if __name__ == '__main__':
    main()
