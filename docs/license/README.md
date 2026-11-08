# Attribution and local game inputs

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
License version 3; `apps/server/patches/gdxsv-loopback.diff` modifies it and is
under the same license. Each backend build keeps the upstream archive, applied
patch, license and notice. The gateway uses
[gorilla/websocket](https://github.com/gorilla/websocket) v1.5.3 (BSD-2-Clause).
The client hook table follows the call sites of gdxsv's retired PCSX2 patch
(`inada-s/pcsx2`, branch `gdxsv-dev`); no gdxsv or PCSX2 code is linked into the
game package. See [`docs/online-mode.md`](../online-mode.md).

The original disc, executable, game assets, derived game translation and built
game package are separate from these third-party source licenses. The retained
translation and matched prebuilt package are now included in the local Git
repository. The prebuilt `.data` contains the original boot executable; it is
game-derived content, not a complete ISO or independently authored game source.
The disc, archives, private saves and raw captures remain excluded. No remote
publication or release has been performed. This project is not affiliated with
or endorsed by the game publisher or PlayStation.
