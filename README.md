# re-gvs-fvzdx

Reverse-engineering and browser recompilation of **Kidou Senshi Gundam - Renpou vs. Zeon DX (Japan, v2.00)**. The supplied disc identity is verified in `upstream.lock`.

**Status: `0.1.0` baseline verified on the declared PC Chrome path.**
Normal boot, menus, selection, active battle, controls, pause/resume, Continue,
Game Over and return to the menu passed. This is a bounded first baseline;
later checks also passed Side 7 victory into active stage 2 and system/options
save persistence across a page reload in the same browser profile. Other modes,
campaign completion, browsers and cross-profile saves remain untested.

The baseline uses the original upstream NTSC timing, measured at approximately
60 Hz during active gameplay. Correctness fixes use `0.1.x`. Optimization,
higher refresh rates and multiplayer are outside this stage.

- [Research wiki](https://sennett-lau.github.io/re-gvs-fvzdx/): the hosted research reader.
- [v0.1.0 release](https://github.com/sennett-lau/re-gvs-fvzdx/releases/tag/v0.1.0): the matched browser package and a wiki archive. No disc is included.
- [v0.2.0 pre-release](https://github.com/sennett-lau/re-gvs-fvzdx/releases/tag/v0.2.0): the tested Online Mode client package. It needs a private backend.
- [Research reader source](docs/research-reader.md): the comparison with GVZG, reusable methods, new findings and further work.
- [Research record](research.md): the English technical log, extraction, compilation and test evidence.
- [Upstream improvement candidates](ps2-web-re-pr.md): findings to review before any future contribution.
- [0.1.0 acceptance manifest](docs/evidence/acceptance-0.1.0.json): exact builds,
  tests, selected screenshots and limitations.
- [Follow-up checks](research.md#2026-10-29-win-progression-and-savereload):
  the added win and save paths, with test settings and selected evidence.

The structure follows `re-gvs-gvzg`, with a separate static research reader. The accepted C++
translation is tracked in `generated/federation-vs-zeon-dx/`; its matched web
package is tracked in `apps/game/prebuilt/`. Private disc inputs, new build
workspaces and raw captures stay under ignored `.local/`.
The supplied image is ISO 9660, `SLPM-65076`, `VER = 2.00`, NTSC.
`upstream.lock` fixes its full disc and executable hashes.

## Research reader

```sh
npm ci --ignore-scripts
npm run wiki:build
npm run wiki:serve
```

Open **http://127.0.0.1:8777/**. The reader covers replication of the baseline,
comparison with GVZG, the later Online Mode experiment and selected evidence. It contains no game runtime or disc
assets. The reader article has one Markdown source; the English technical
record and upstream proposals remain secondary references. Output is ignored in
`.local/wiki/`. No public deployment is performed by these commands.

### Publishing status (2026-11-10)

GitHub-hosted Actions jobs for this account are blocked by a billing lock, so
`.github/workflows/wiki-pages.yml` cannot run at present. The self-hosted runner
experiment was dropped: in a public repository, a pull request can change a
workflow to target a self-hosted runner and run its own code there.

Until the lock is lifted, the maintainer builds and checks the wiki locally and
pushes `.local/wiki/` with a `.nojekyll` marker to the `gh-pages` branch. GitHub
Pages serves that branch through its built-in deployment, which was not blocked.
Release assets are also built and checked locally. See the
[research record](research.md#2026-11-10-manual-wiki-and-release-publishing).

## Online Mode (experimental)

An opt-in Online build connects original clients to a private compatible
server ([gdxsv](https://github.com/inada-s/gdxsv)) through a token-protected
gateway. Four browser clients on a PC and a MacBook Pro completed one original
2v2 lobby battle with three consecutive matches and returned to the lobby. The tested server remains private;
see [docs/online-mode.md](docs/online-mode.md) and
[apps/server/README.md](apps/server/README.md). To start your own backend step
by step, see [Run your own Online Mode server](docs/online-server-setup.md).

The `v0.2.0` pre-release attaches that exact tested client build. It differs
from the `0.1.0` package: its WASM and JavaScript contain the network hooks and
the WebSocket bridge. It also needs a private gdxsv backend and gateway, built
from `apps/server/`. No public backend is provided.

## Local workflow

Run the retained `0.1.0` package without compiling it again:

```sh
python3 scripts/game/verify.py
python3 scripts/game/serve.py --build apps/game/prebuilt --disc /private/path/disc.iso
```

Open **http://127.0.0.1:8642/**. The matched package includes HTML, JavaScript,
WASM, `.data` and its original build manifest. The `.data` contains the boot
executable, not the complete disc assets; the supported private ISO remains a
separate runtime input.

### Compile the retained C++

Use Python 3.9+, CMake 3.20+, Ninja, `patch`, and a Clang C++20 toolchain with
`std::format`. The web build uses Emscripten 6.0.11 and its emdawnwebgpu port.
The `--disc` path compiles tracked C++ directly and extracts the verified boot
input into the new workspace. It does not invoke the recompiler or consume
historical object files. Use a new `--work` directory for each build:

```sh
python3 scripts/game/build.py --disc /private/path/disc.iso --target web \
  --emsdk /path/to/emsdk --work .local/rebuild-001 --jobs 2
```

For a native build, use `--target native` and another work directory.

A fresh PC WSL build from these retained sources produced all four accepted
web files byte for byte. See the [rebuild record](docs/evidence/retained-source-rebuild.json)
for the exact toolchain, input hashes and comparison scope.

### Regenerate a separate translation candidate

Regeneration is distinct from compiling the retained source. These commands
write fresh ignored workspaces, preserving the accepted source and prebuilt:

```sh
python3 scripts/game/tools.py --jobs 2
python3 scripts/game/regenerate.py --disc /private/path/disc.iso
python3 scripts/game/build.py --translation .local/translation --target native --work .local/native-build --jobs 2
# Activate the existing SDK before the browser build.
python3 scripts/game/build.py --translation .local/translation --target web --emsdk /path/to/emsdk --jobs 2
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

Create a standalone local directory from the tracked matched package, including
the server, notices and evidence:

```sh
python3 scripts/game/package.py --output .local/package-export-001
```

The resulting `.local/package-export-001` excludes the disc and private saves. It is
a local artifact. The `v0.1.0` release attaches the same export as a ZIP file.

### Tracked source and package

| Path | Contents | File bytes |
| --- | --- | ---: |
| `generated/federation-vs-zeon-dx/` | 168 C++ files and one header | 45,855,118 |
| `src/generated/manifest.json` | Original generator/input fingerprints | 23,588 |
| `apps/game/prebuilt/` | Four accepted web files and build manifest | 24,072,200 |

The largest generated file is 407,872 bytes; the WASM is 17,360,658 bytes. These
files use ordinary Git without LFS or split archives. Only this accepted web set
is tracked; experimental builds remain ignored. Original ISO/ROM archives and
raw diagnostic captures are excluded.

## Validation and scope

```sh
python3 -m unittest discover -s tests -p 'test_*.py'
python3 scripts/game/verify.py
node --check tests/pc/run.cjs
```

The [silent PC harness](tests/pc/README.md) records real Chrome input,
screenshots, errors, build identity and audio-ring consumption over an isolated
profile. Test execution is through the user's authorized SSH PC, using
project-owned resources. Timing tests use `--mute-audio`, preserving the audio
engine; they do not change system volume.

The repository is published at [sennett-lau/re-gvs-fvzdx](https://github.com/sennett-lau/re-gvs-fvzdx).
The research wiki is served by GitHub Pages from the `gh-pages` branch. The
manual `.github/workflows/wiki-pages.yml` deploys only `.local/wiki/` once
Actions jobs can run again; the Pages source must then be switched back to
GitHub Actions. No public game server is hosted. Original code and documentation use the [MIT License](docs/license/LICENSE);
game-derived material is described in the [content notice](docs/license/CONTENT_NOTICE.md). [Third-party notices](docs/license/README.md)
describe the pinned source and external dependencies.
