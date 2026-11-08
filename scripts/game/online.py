#!/usr/bin/env python3
"""Prepare the opt-in Online Mode translation copy; never edits tracked C++.

The hook set follows the PS2 call sites used by the gdxsv PCSX2 fork
(inada-s/pcsx2 branch gdxsv-dev, commit 84263d2787bcd28a36e5175bf675f71d4164cbde,
gdxsv_patch/src/main.c). Each site is checked again here against the supplied
ELF and the generated C++: the original word must be the expected `jal`, and
the generated call statement must be unique. Nothing is written into guest code.
"""
import argparse
import json
from pathlib import Path
import re
import shutil
import struct
import sys

from common import ROOT, digest, fingerprints, write_json

ONLINE = ROOT / 'src/online'

# (call site, expected callee, callee symbol, enclosing function, host handler)
CALL_HOOKS = [
    (0x00381DA4, 0x00350890, 'Ave_TcpOpen', 'TcpOpen', 'tcp_open'),
    (0x00382024, 0x00350910, 'Ave_TcpClose', 'TcpClose', 'tcp_close'),
    (0x00381FB4, 0x00350A50, 'Ave_TcpSend', 'TcpWrite', 'tcp_send'),
    (0x00381F7C, 0x00350B30, 'Ave_TcpRecv', 'TcpRead', 'tcp_recv'),
    (0x0037FD2C, 0x003515C0, 'McsReceive', 'GetMsgMCS', 'mcs_receive'),
    (0x00381A88, 0x003516F0, 'McsDispose', 'InetCleanupWork', 'return_zero'),
    (0x00382C6C, 0x003516F0, 'McsDispose', 'LobbyToMcsInitSocket', 'return_zero'),
    (0x00357E34, 0x00381E70, 'TcpGetStatus', 'select_ps2', 'tcp_get_status'),
    (0x0035A174, 0x00382C60, 'LobbyToMcsInitSocket', 'game_start_to_mcs', 'skip_call'),
    (0x00359E04, 0x00357C90, 'gethostbyname_ps2_0', 'tcp_init', 'resolve_begin'),
    (0x00359E78, 0x00357CD0, 'gethostbyname_ps2_1', 'tcp_init', 'resolve_result'),
    (0x00359EA4, 0x00357D50, 'gethostbyname_ps2_release', 'tcp_init', 'return_zero'),
    (0x00359EC4, 0x00357D50, 'gethostbyname_ps2_release', 'tcp_init', 'return_zero'),
    (0x003597B8, 0x003584D0, 'AvepppGetStatus', 'dialing_20', 'ppp_status'),
    (0x003643C8, 0x003584D0, 'AvepppGetStatus', 'internet_lobby_act', 'ppp_status'),
    (0x00382678, 0x00350F80, 'Ave_PppGetUsbDeviceId', 'PppGetUsbDeviceID', 'return_zero'),
    (0x003828E0, 0x00350F80, 'Ave_PppGetUsbDeviceId', 'PppGetStatus', 'return_zero'),
    (0x00359D34, 0x00358690, 'ADNS_Finalize', 'disconnect', 'return_zero'),
    (0x00359FD8, 0x00357D90, 'connect_ps2_check', 'tcp_init', 'connect_check'),
    # gdxsv writes 0 over this jal ("skip form validation").
    (0x003551C0, 0x00356640, 'Check_NecessaryInput', 'entry_move', 'skip_call'),
]

# The dial step selected through matching_connect_jmp$219[0] (0x005548E0).
ENTRY_HOOKS = [(0x0035A660, 'dummy_00', 'dial_start')]

# Data words written by the runtime patch list (place 2: boot and every vblank).
# connect_jmp_tbl$175[2]: modem_recognition (0x0015F4A0) -> network_battle.
DATA_PATCHES = [(0x003C4F58, 4, 0x0015F4A0, 0x0015F110, 'connect_jmp_tbl$175[2]')]

HEADER = 'fvzdx_online.hpp'
CALL = re.compile(r'if \(depth < kMaxDepth\) (unit_[0-9A-F]{4})\(c, ([0-9]+)u, depth \+ 1u\); '
                  r'else \{ c\.pc = 0x([0-9A-F]{8})u; return; \}')


class Elf:
    def __init__(self, path):
        data = Path(path).read_bytes()
        if data[:4] != b'\x7fELF':
            raise ValueError('not an ELF file')
        self.data = data
        phoff, = struct.unpack_from('<I', data, 0x1C)
        phentsize, phnum = struct.unpack_from('<HH', data, 0x2A)
        self.segments = []
        for i in range(phnum):
            kind, offset, vaddr, _, filesz, _, _, _ = struct.unpack_from('<IIIIIIII', data, phoff + i * phentsize)
            if kind == 1:
                self.segments.append((vaddr, offset, filesz))
        shoff, = struct.unpack_from('<I', data, 0x20)
        shentsize, shnum = struct.unpack_from('<HH', data, 0x2E)
        sections = [struct.unpack_from('<IIIIIIIIII', data, shoff + i * shentsize) for i in range(shnum)]
        self.symbols = {}   # name -> every (value, size); local names can repeat
        self.functions = []
        for sec in sections:
            if sec[1] != 2:
                continue
            strings = sections[sec[6]][4]
            for at in range(sec[4], sec[4] + sec[5], 16):
                name, value, size, info, _, _ = struct.unpack_from('<IIIBBH', data, at)
                if name and info & 0xF in (1, 2):
                    end = data.index(b'\0', strings + name)
                    label = data[strings + name:end].decode('latin1')
                    self.symbols.setdefault(label, []).append((value, size))
                    if info & 0xF == 2:
                        self.functions.append((value, label))
        self.functions.sort()

    def word(self, address):
        for vaddr, offset, size in self.segments:
            if vaddr <= address < vaddr + size:
                return struct.unpack_from('<I', self.data, offset + address - vaddr)[0]
        raise ValueError('address outside loaded segments: %08X' % address)

    def has(self, name, address):
        return any(value == address for value, _ in self.symbols.get(name, ()))

    def owner(self, address):
        """Name of the nearest preceding function symbol (some symbol sizes are short)."""
        best = None
        for value, label in self.functions:
            if value > address:
                break
            best = label
        return best


def verify_elf(elf):
    """Check every hooked word in the actual ELF; return a record of the checks."""
    checks = []
    for site, callee, callee_name, owner, handler in CALL_HOOKS:
        word = elf.word(site)
        if word != 0x0C000000 | (callee >> 2):
            raise ValueError('%08X: expected jal %08X, found %08X' % (site, callee, word))
        if callee_name and not elf.has(callee_name, callee):
            raise ValueError('%08X: callee symbol %s mismatch' % (site, callee_name))
        if elf.owner(site) != owner:
            raise ValueError('%08X: not inside %s' % (site, owner))
        checks.append({'site': '%08X' % site, 'word': '%08X' % word, 'owner': owner,
                       'callee': callee_name or '%08X' % callee, 'handler': handler})
    for entry, name, handler in ENTRY_HOOKS:
        if not elf.has(name, entry):
            raise ValueError('%s is not at %08X' % (name, entry))
        checks.append({'entry': '%08X' % entry, 'symbol': name, 'handler': handler})
    tables = elf.symbols.get('matching_connect_jmp$219', [])
    if len(tables) != 1 or elf.word(tables[0][0]) != ENTRY_HOOKS[0][0]:
        raise ValueError('matching_connect_jmp$219[0] does not select dummy_00')
    for address, size, original, value, label in DATA_PATCHES:
        if size != 4 or elf.word(address) != original:
            raise ValueError('%s: unexpected original word' % label)
        if not elf.has('network_battle', value):
            raise ValueError('network_battle is not at %08X' % value)
        checks.append({'data': '%08X' % address, 'original': '%08X' % original, 'value': '%08X' % value, 'label': label})
    return checks


def rewrite(generated, output):
    """Copy generated C++ and replace each hooked call or entry exactly once."""
    shutil.copytree(generated, output)
    sources = {p: p.read_text() for p in sorted(output.glob('unit_*.cpp'))}
    changed = set()
    for site, callee, _, _, handler in CALL_HOOKS:
        marker = 'static_cast<std::int32_t>(0x%08Xu);' % (site + 8)
        hits = []
        for path, text in sources.items():
            for line_no, line in enumerate(text.split('\n')):
                if line.lstrip().startswith('{ c.r[31].sd[0] = ' + marker):
                    hits.append((path, line_no, line))
        if len(hits) != 1:
            raise ValueError('%08X: expected one generated call statement, found %d' % (site, len(hits)))
        path, line_no, line = hits[0]
        calls = CALL.findall(line)
        if len(calls) != 1 or int(calls[0][2], 16) != callee:
            raise ValueError('%08X: generated call does not target %08X' % (site, callee))
        new = CALL.sub('fvzdx_online::%s(c);' % handler, line)
        lines = sources[path].split('\n')
        lines[line_no] = new
        sources[path] = '\n'.join(lines)
        changed.add(path)
    for entry, name, handler in ENTRY_HOOKS:
        label = 'L_%08X:' % entry
        hits = [p for p, text in sources.items() if ('\n' + label + '\n') in text]
        if len(hits) != 1:
            raise ValueError('%s: expected one label %s, found %d' % (name, label, len(hits)))
        sources[hits[0]] = sources[hits[0]].replace(
            '\n' + label + '\n',
            '\n' + label + '\n    fvzdx_online::%s(c); return;\n' % handler, 1)
        changed.add(hits[0])
    for path in changed:
        text = sources[path]
        if '#include "units.hpp"\n' not in text:
            raise ValueError(path.name + ': missing units.hpp include')
        path.write_text(text.replace('#include "units.hpp"\n', '#include "units.hpp"\n#include "%s"\n' % HEADER, 1))
    shutil.copy2(ONLINE / HEADER, output / HEADER)
    shutil.copy2(ONLINE / 'online.cpp', output / 'fvzdx_online.cpp')
    return sorted(p.name for p in changed)


def prepare(generated, elf_path, output):
    """Return a manifest after writing the Online translation copy and patch list."""
    output = Path(output)
    if output.exists():
        raise ValueError('Online work directory already exists: %s' % output)
    elf = Elf(elf_path)
    checks = verify_elf(elf)
    units = rewrite(Path(generated), output / 'generated')
    patches = output / 'patches.txt'
    patches.write_text(''.join('2 %x %d %x\n' % (a, s, v) for a, s, _, v, _ in DATA_PATCHES))
    bridge = output / 'online-bridge.js'
    shutil.copy2(ONLINE / 'bridge.js', bridge)
    manifest = {
        'profile': 'online-gdxsv',
        'reference': 'inada-s/pcsx2 gdxsv-dev 84263d2787bcd28a36e5175bf675f71d4164cbde gdxsv_patch/src/main.c',
        'elf_sha256': digest(elf_path), 'checks': checks, 'changed_units': units,
        'patches_txt_sha256': digest(patches), 'bridge_sha256': digest(bridge),
        'online_sources': {p.name: digest(p) for p in sorted(ONLINE.iterdir()) if p.is_file()},
        'generated': fingerprints(output / 'generated'),
    }
    write_json(output / 'online-manifest.json', manifest)
    return manifest


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--generated', type=Path, default=ROOT / 'generated/federation-vs-zeon-dx')
    parser.add_argument('--elf', type=Path, required=True, help='Verified private SLPM_650.76')
    parser.add_argument('--output', type=Path, help='New directory')
    parser.add_argument('--check-only', action='store_true', help='Verify ELF words and print them')
    args = parser.parse_args()
    if args.check_only:
        json.dump(verify_elf(Elf(args.elf)), sys.stdout, indent=2)
        print()
        return
    if args.output is None:
        parser.error('--output is required unless --check-only')
    manifest = prepare(args.generated, args.elf, args.output)
    print('Online translation copy: %s (%d units changed)' % (args.output / 'generated', len(manifest['changed_units'])))


if __name__ == '__main__':
    main()
