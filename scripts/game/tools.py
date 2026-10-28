#!/usr/bin/env python3
"""Build this game's pinned compiler in an isolated local workspace."""
import argparse
import os
from pathlib import Path
import shutil
from common import ROOT, run, source_tree


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--work', type=Path, default=ROOT / '.local/compiler')
    parser.add_argument('--jobs', type=int, default=2)
    args = parser.parse_args()
    compiler = os.environ.get('CXX') or shutil.which('clang++')
    if not compiler:
        parser.error('Set CXX to a Clang C++20 compiler with std::format support.')
    work = args.work.resolve()
    work.mkdir(parents=True, exist_ok=False)
    source = source_tree(work / 'source')
    run(['cmake', '-S', source, '-B', work / 'build', '-G', 'Ninja',
         '-DCMAKE_BUILD_TYPE=Release', '-DCMAKE_CXX_COMPILER=' + compiler])
    run(['cmake', '--build', work / 'build', '--target', 'eerecomp', 'vurecomp', '--parallel', args.jobs])


if __name__ == '__main__':
    main()
