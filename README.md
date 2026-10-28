# re-gvs-rvzdx

Reverse-engineering and browser recompilation of **Kidou Senshi Gundam - Renpou vs. Zeon DX (Japan, v2.00)**. The disc identity will be verified during extraction.

**Status: disc verified, first EE translation generated; native and browser
acceptance in progress. No playable release has been verified yet.**

The first target is `0.1.0`: original-speed normal boot and playable gameplay. Correctness fixes use `0.1.x`. Optimization, higher refresh rates and multiplayer are outside this stage.

- [Research record](research.md): extraction, compilation, compatibility fixes and test evidence.
- [Upstream improvement candidates](ps2-web-re-pr.md): findings to review before any future contribution.

The structure follows `re-gvs-gvzg`, without a research Wiki. Private disc inputs,
generated game translation, build workspaces and raw captures stay under ignored
`.local/`. The supplied image is ISO 9660, `SLPM-65076`, `VER = 2.00`, NTSC.
`upstream.lock` fixes its full disc and executable hashes.

## Reproduce the local candidate

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
build manifest together. Compilation does not establish a playable baseline;
consult the dated results in `research.md` before relying on a candidate.

For private archive extraction use `7zz x -o.local/disc ARCHIVE '*.iso'`.
`scripts/game/extract.py --disc DISC --output NEW_DIRECTORY --full-hash` verifies
the complete image. Normal regeneration checks disc size, actual boot settings
and the boot executable hash. Discovery inputs (`--entries`, `--overlays`,
`--vu-records`) must come from this game's measured execution.

Keyboard mappings inherited from the runtime are Enter (Start), X (Circle), Z
(Cross), A (Square), S (Triangle), arrows (D-pad), and I/J/K/L (left stick).
Which in-game journey works remains subject to the acceptance record.

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
