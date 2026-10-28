# re-gvs-rvzdx

Reverse-engineering and browser recompilation of **Kidou Senshi Gundam - Renpou vs. Zeon DX (Japan, v2.00)**. The supplied disc identity is verified in `upstream.lock`.

**Status: local `0.1.0` baseline verified on the declared PC Chrome path.**
Normal boot, menus, selection, active battle, controls, pause/resume, Continue,
Game Over and return to the menu passed. This is a bounded first baseline;
other modes, stages, browsers and save persistence remain untested.

The baseline uses the original upstream NTSC timing, measured at approximately
60 Hz during active gameplay. Correctness fixes use `0.1.x`. Optimization,
higher refresh rates and multiplayer are outside this stage.

- [Research record](research.md): extraction, compilation, compatibility fixes and test evidence.
- [Upstream improvement candidates](ps2-web-re-pr.md): findings to review before any future contribution.
- [0.1.0 acceptance manifest](docs/evidence/acceptance-0.1.0.json): exact builds,
  tests, selected screenshots and limitations.

The structure follows `re-gvs-gvzg`, without a research Wiki. Private disc inputs,
generated game translation, build workspaces and raw captures stay under ignored
`.local/`. The supplied image is ISO 9660, `SLPM-65076`, `VER = 2.00`, NTSC.
`upstream.lock` fixes its full disc and executable hashes.

## Reproduce the local baseline

Use Python 3.9+, CMake 3.20+, Ninja, `patch`, and a Clang C++20 toolchain with
`std::format`. The web build uses Emscripten 6.0.11 and its emdawnwebgpu port.
Supply the verified disc separately. These commands create fresh workspaces:

```sh
python3 scripts/game/tools.py --jobs 2
python3 scripts/game/regenerate.py --disc /private/path/disc.iso
python3 scripts/game/build.py --target native --work .local/native-build --jobs 2
# Activate the existing SDK before the browser build.
python3 scripts/game/build.py --target web --emsdk /path/to/emsdk --jobs 2
python3 scripts/game/serve.py --build .local/game-build/web --disc /private/path/disc.iso
```

The server uses `http://127.0.0.1:8642/`, HTTP byte ranges and cross-origin
isolation. The original ELF is included in the generated `.data` file; the full
disc remains a separate private runtime input. Keep HTML, JS, WASM, data and the
build manifest together. Compilation alone does not establish acceptance; the
dated `0.1.0` record identifies the tested artifacts. A new build needs its own
comparison and runtime checks.

For private archive extraction use `7zz x -o.local/disc ARCHIVE '*.iso'`.
`scripts/game/extract.py --disc DISC --output NEW_DIRECTORY --full-hash` verifies
the complete image. Normal regeneration checks disc size, actual boot settings
and the boot executable hash. Discovery inputs (`--entries`, `--overlays`,
`--vu-records`) must come from this game's measured execution.

Keyboard mappings inherited from the runtime are Enter (Start), X (Circle), Z
(Cross), A (Square), S (Triangle), arrows (D-pad), and I/J/K/L (left stick).
The verified path is Arcade → Federation → Side 7 → Gundam/beam rifle,
through a completed loss and return to the menu. At pilot-name entry, Start
accepts a default name. Wait for menu transitions before confirming again.

The prepared matched build is in ignored `.local/game-build/web`. Create a
standalone local directory, including the server, notices and evidence:

```sh
python3 scripts/game/package.py --build .local/game-build/web
```

The resulting `.local/package-0.1.0` excludes the disc and private saves. It is
a local artifact, not a downloadable or published release.

## Validation and scope

```sh
python3 -m unittest discover -s tests -p 'test_*.py'
node --check tests/pc/run.cjs
```

The [silent PC harness](tests/pc/README.md) records real Chrome input,
screenshots, errors, build identity and audio-ring consumption over an isolated
profile. Test execution is through the user's authorized SSH PC, using
project-owned resources. Timing tests use `--mute-audio`, preserving the audio
engine; they do not change system volume.

The local history uses the approved personal identity. There is no remote,
published release, PR or public tunnel. [Third-party notices](docs/license/README.md)
describe the pinned source and external dependencies.
