# Attribution and local game inputs

The project's independently written code and documentation use the
[MIT License](LICENSE). The [content notice](CONTENT_NOTICE.md) describes the
game-derived material, which that license does not cover.

The pinned compiler, runtime and original browser shell are copyright 2026
Samir Nuri, under the [MIT license](ps2-web-recomp-MIT.txt). The MPEG VLC tables
retain the [Play! BSD 2-clause notice](Play-BSD-2-Clause.txt).

Emscripten and its emdawnwebgpu port are external build dependencies. Their own
licenses apply; they are not relicensed by this repository. Any additional
native GPU dependency must retain its source/version and notices.

The local web build uses Emscripten 6.0.11 and its pinned EmdawnWebGPU package
`v20260423.175430`. Copies from the actual PC SDK/package are retained as
[Emscripten](Emscripten.txt), [EmdawnWebGPU](EmdawnWebGPU.txt) and
[EmdawnWebGPU C++ bindings](EmdawnWebGPU-CPP.txt). The SDK source revision is
recorded in `research.md`; the port's download integrity hash is pinned in the
Emscripten source.

The SDK's linked standard-library/runtime notices are also retained:
[musl](musl-COPYRIGHT.txt), [libc++](LLVM-libcxx.txt),
[libc++abi](LLVM-libcxxabi.txt), and [compiler-rt](LLVM-compiler-rt.txt).

The opt-in Online Mode backend in `apps/server/` builds
[gdxsv](https://github.com/inada-s/gdxsv) (commit
`46ee80b715f76ac0c7c254f6f983e5dcd9940306`) under the GNU Affero General Public
License version 3. Its complete, unmodified text from that commit is retained
in [GDXSV_AGPL-3.0.txt](GDXSV_AGPL-3.0.txt).
`apps/server/patches/gdxsv-loopback.diff` modifies gdxsv and is under the same
license, separate from the project's MIT grant. The gdxsv source snapshot and
binaries are not bundled; each private backend build keeps the upstream archive,
applied patch, license and notice. The gateway uses
[gorilla/websocket](https://github.com/gorilla/websocket) v1.5.3
([BSD-2-Clause](gorilla-websocket-BSD-2-Clause.txt)).
The client hook table follows the call sites of gdxsv's retired PCSX2 patch
(`inada-s/pcsx2`, branch `gdxsv-dev`); no gdxsv or PCSX2 code is linked into the
game package. See [`docs/online-mode.md`](../online-mode.md).

The research reader bundles Manrope under its [SIL Open Font License](../../apps/wiki/fonts/OFL.txt).
Its Markdown build dependency, Marked 17.0.5, is MIT-licensed; it is used at
build time and is not loaded by the reader in the browser.

The original disc, executable, game assets, derived game translation and built
game package are separate from these third-party source licenses. The retained
translation and matched prebuilt package are now included in the local Git
repository. The prebuilt `.data` contains the original boot executable; it is
game-derived content, not a complete ISO or independently authored game source.
The disc, archives, private saves and raw captures remain excluded. The repository and research wiki are published separately; no game release
is created by the wiki deployment. This project is not affiliated with
or endorsed by the game publisher or PlayStation.
