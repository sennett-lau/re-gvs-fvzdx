# ps2-web-recomp improvement candidates

This file records findings for later review; it does not authorize a push or
pull request. No new EE compiler or runtime correctness defect has been
reproduced in the tested boot/menu/Side 7 battle path so far. No reference-game
compatibility patch has been applied.

## Build input guard: reject transferred metadata as generated C++

- **Source revision:** `6526f4803d98e10de50bea3af104a4d26e9df033`,
  `CMakeLists.txt` generated-source `file(GLOB ... "*.cpp")`.
- **Observed trigger:** transferring generated units from macOS using default
  `tar -czf` created AppleDouble `._unit_*.cpp` and `._table.cpp` files in WSL.
  CMake accepted them in the source glob. Clang then reported binary/null-byte
  errors while compiling `._table.cpp`; the build stopped. The corrected
  transfer removed only those task-owned sidecars and used
  `COPYFILE_DISABLE=1 tar --no-xattrs`. The same real game translation then
  compiled successfully (200 steps instead of 368).
- **General explanation:** a filename suffix is insufficient evidence that a
  transferred file belongs to a generated source set. This is a packaging/build
  guard candidate, not an R5900 translation defect.
- **Proposed upstream improvement:** emit a generated-file manifest and verify
  it before CMake configuration, or at minimum reject AppleDouble source
  filenames with an actionable error. Do not silently accept altered source.
- **Local change:** the builder verifies names, lengths and SHA-256 values
  against `translation.json` before configuration. The pristine vendor stays
  unchanged.
- **Portable regression:** `tests/test_translation.py` creates synthetic C++,
  verifies a matching set, then separately adds an AppleDouble file, alters the
  source, and removes it. Each mismatch must fail; restoring it must pass.
- **Observed result:** the corrected real transfer compiled and reached normal
  boot and battle on the PC. The synthetic regression passes without game data.

See [research.md](research.md) for the complete experiment and remaining
acceptance limits. No upstream contact or submission has occurred.

For each candidate, record the problem, pinned upstream revision, reproducible trigger, game-independent explanation, proposed change, regression test and observed result. Separate shared compiler/runtime defects from this game's configuration or patches. Link to research.md rather than duplicating the narrative.
