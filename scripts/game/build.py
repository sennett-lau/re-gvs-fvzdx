#!/usr/bin/env python3
"""Build a matched original-timing native or web candidate; never publishes."""
import argparse
import json
import os
from pathlib import Path
import shutil
from common import ROOT, digest, fingerprints, run, source_tree, verify_generated, verify_translation, write_json
from extract import extract
import online

# Version recorded by new builds. The accepted 0.1.0 package keeps its own manifest.
VERSION = '0.2.1'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    inputs = parser.add_mutually_exclusive_group()
    inputs.add_argument('--translation', type=Path, help='Build a separately regenerated candidate workspace')
    inputs.add_argument('--disc', type=Path, help='Compile tracked C++; extract only the verified boot input from this private disc')
    parser.add_argument('--work', type=Path, default=ROOT / '.local/game-build')
    parser.add_argument('--target', choices=['native', 'web'], default='web')
    parser.add_argument('--emsdk', type=Path, default=os.environ.get('EMSDK'))
    parser.add_argument('--jobs', type=int, default=2)
    parser.add_argument('--online', action='store_true',
                        help='Opt-in Online Mode profile: hook verified network call sites in a copy of the C++')
    args = parser.parse_args()
    lock = json.loads((ROOT / 'upstream.lock').read_text())
    if args.target == 'web' and not args.emsdk:
        parser.error('Activate Emscripten 6.0.11 and pass --emsdk or set EMSDK')
    if args.jobs < 1:
        parser.error('--jobs must be positive')
    work = args.work.resolve()
    if args.disc:
        generated = ROOT / 'generated/federation-vs-zeon-dx'
        verify_generated(generated, ROOT / 'src/generated/manifest.json')
    else:
        translation = (args.translation or ROOT / '.local/translation').resolve()
        verify_translation(translation)
        generated = translation / 'generated'
        elf = translation / 'inputs' / lock['elf']['name']
        if digest(elf) != lock['elf']['sha256']:
            parser.error('ELF fingerprint mismatch')
    work.mkdir(parents=True, exist_ok=False)
    if args.disc:
        elf = extract(args.disc.resolve(), work / 'inputs')
    boot_file = elf.parent / 'boot.txt'
    online_manifest = None
    if args.online:
        online_manifest = online.prepare(generated, elf, work / 'online')
        generated = work / 'online/generated'
    source = source_tree(work / 'source')
    build = work / args.target
    command = ['cmake', '-S', source, '-B', build, '-G', 'Ninja', '-DCMAKE_BUILD_TYPE=Release',
               '-DPS2_GENERATED=' + str(generated)]
    if args.target == 'web':
        command.insert(0, args.emsdk.resolve() / 'upstream/emscripten/emcmake')
        command += ['-DPS2_WEB_ELF=' + str(elf),
                    '-DPS2_WEB_BOOT_FILE=' + str(boot_file)]
        target = 'ps2web'
        if online_manifest:
            command += ['-DPS2_WEB_PATCHES=' + str(work / 'online/patches.txt'),
                        '-DCMAKE_EXE_LINKER_FLAGS=--pre-js ' + str(work / 'online/online-bridge.js')]
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
        'version_target': VERSION, 'acceptance': 'candidate; not a playable release claim',
        'target': args.target, 'upstream': lock['upstream']['revision'],
        'elf_sha256': digest(elf), 'generated': fingerprints(generated),
        'source_provenance_sha256': digest(source / 'provenance.json'),
        'cmake_cache_sha256': digest(build / 'CMakeCache.txt'), 'artifacts': artifacts,
        'profile': 'online-gdxsv' if online_manifest else 'default',
        'online_manifest_sha256': digest(work / 'online/online-manifest.json') if online_manifest else None,
    })
    print('Candidate artifacts: ' + str(build))


if __name__ == '__main__':
    main()
