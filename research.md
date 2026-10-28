# Research record

## Scope

Reproduce the disc-to-C++-to-browser workflow for the supplied Japanese v2.00 game. Deliver a verified `0.1.0` baseline, then only necessary `0.1.x` fixes. Preserve original game timing; do not add optimization or multiplayer work.

## Current status

Disc identification and the first EE translation are complete. Native/browser
compilation and gameplay acceptance are in progress. No playable `0.1.0` release
or tag is claimed. All work remains local.

## 2026-10-28: independent input and toolchain bring-up

The supplied 253,898,693-byte 7z archive contains a 4,282,515,456-byte ISO and a
small text file. Only the ISO was extracted into ignored `.local/disc/`, using
`7zz x -y -o.local/disc ARCHIVE '*.iso'`. Full SHA-256 values are in
`upstream.lock`: archive `8964d5b6…3df4e1`, disc `11023ffb…37fd579`.

The pinned upstream ISO reader reports one ISO 9660 layer, 2,091,072 sectors,
and an empty volume identifier. The actual `SYSTEM.CNF` names
`cdrom0:\SLPM_650.76;1`, `VER = 2.00`, `VMODE = NTSC`, and
`HDDUNITPOWER = NICHDD`. The ELF is 6,511,244 bytes, SHA-256
`222e5a12e9dbb7e5be674327b9e2f53abbaf75fd19fc9136c7a11879c2f3d092`,
little-endian ELF32 MIPS with symbols, entry `0x00100008`. Its initialized
read/write/execute load segment begins at `0x00100000`, has file size
`0x47fa80`, and memory size `0x9ace00`. A second non-executable segment has
zero file and memory size. The serial is `SLPM-65076`.

The disc has 40 files. `AFS_DATA.AFS` contains 1,629 entries and `G_ADX.AFS`
contains 2,319. A bounded scan of the first 16 bytes of each entry found no
MWo3 or SNR2 header. TIM2, HITS, model-like numeric headers, IPU movie and ADX
headers were observed. This does not prove the absence of nested or compressed
code. No overlay from the reference game is reused.

REA `open_binary` independently identified the same ELF SHA-256 and MIPS
architecture. Its `binary_overview` returned `capability_unavailable`: the
available providers do not admit this machine-specific PS2 MIPS variant.
The session was closed. No decompilation success is claimed; the dedicated
R5900 recompiler and explicit file parsing remain available.

The compiler/runtime source is exported from the local Git object
`6526f4803d98e10de50bea3af104a4d26e9df033`, with a per-file manifest. The retained
upstream working tree and reference project's adaptive package are not source
inputs. Required reference documentation, extraction/build/server scripts and
baseline/rebuild evidence were reviewed read-only. The reference's old native
round completion and later adaptive browser checks do not transfer to this game.

Initial commands on the Mac (two compile jobs):

```sh
cmake -S vendor/ps2-web-recomp -B .local/tools -G Ninja \
  -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_COMPILER=/usr/bin/clang++
cmake --build .local/tools --target eerecomp vurecomp --parallel 2
.local/tools/eerecomp .local/inputs/SLPM_650.76 --out .local/generated-pristine
```

AppleClang 16.0.0 built both tools. Translation reported 668,526 instructions,
10,825 functions, 62,169 entries, zero rejected seeds and 167 units (about
44 MiB). No runtime execution is implied by those counts. The repeatable
`scripts/game/regenerate.py` extracts a verified ELF with its serial filename
and writes source/input fingerprints. `boot.txt` preserves the exact disc boot
path for the browser build.

SSH connectivity to the authorized PC is verified. The PC has Windows 11,
Core i9-12900K, 64 GiB RAM, RTX 3080 Ti plus UHD 770, and Chrome 156.0.8078.48.
WSL Ubuntu 22.04 is available; Clang 17 and Ninja are installed but CMake and
Emscripten were not on PATH. Project-local tool setup and a dedicated browser
profile/task are being prepared. Tests will use browser-output mute, with audio
processing intact. Private host/account details and raw captures stay in `.local`.

Setup observations: system Python on the Mac is 3.9; its `tarfile.extractall`
does not accept `filter=` and `/opt/homebrew/bin/python3` is absent. The vendor
export instead copies regular members from the known local Git archive.
Repository scripts target Python 3.9 or later. These setup failures did not
change the reference project.

## Record as work proceeds

1. Disc metadata, executable serial, sizes and SHA-256 fingerprints.
2. Pinned recompiler/runtime versions and the compatibility patches actually required.
3. Extraction and module discovery, EE translation and VU discovery/translation where needed.
4. Native and browser build commands, outputs and reproducibility boundaries.
5. Failures, reproduction steps, fixes and negative controls where useful.
6. Silent PC tests: hardware/browser context, normal boot, menus, inputs, active gameplay, audio processing and remaining limits.
7. Baseline acceptance and a truthful `0.1.x` fix history.

Keep the narrative here. Supporting code and selected non-private evidence may live beside the tests. Raw captures, private paths, network addresses and credentials stay in ignored local output. Upstream candidates belong in [ps2-web-re-pr.md](ps2-web-re-pr.md).
