# Browser host

`shell.html` starts from the pinned upstream browser host, with this project's
title. It retains the original runtime timing and controller mappings. Since
2026-11-10 it shows a loading panel: bytes received for each runtime file, the
transfer rate, the current start-up stage and any start-up error. The panel is
not in the accepted `prebuilt/` HTML, which predates it; only new builds include it.
On touch screens the settings bar is folded into a **Menu** button at the top
centre, which opens a bottom sheet. The sheet holds the status, resolution,
aspect, control visibility, memory card and fullscreen options. The fullscreen
exit is in this sheet, so no fixed button overlaps the shoulder buttons. Both
changes ship in `v0.2.1`. That release's builds report `version_target` `0.2.1`.

`prebuilt/` contains the exact four accepted `0.1.0` HTML/JS/WASM/data files and
their original build manifest. The historical manifest still calls its build a
candidate; the subsequent [acceptance record](../../docs/evidence/acceptance-0.1.0.json)
establishes the bounded gameplay result for those exact bytes. Both records are
preserved unchanged.

Launch with `python3 scripts/game/serve.py --build apps/game/prebuilt --disc
/private/path/disc.iso` from the repository root. The `.data` contains the boot
executable and boot string, not the complete game assets. The supported private
disc remains a separate runtime input. This export does not host the game or
publish a release.

New builds are written into ignored `.local` workspaces and do not overwrite
the accepted package. Run `python3 scripts/game/verify.py` to check retained
source, vendor and prebuilt fingerprints.

Automated tests mute Chrome output using `--mute-audio`, preserving the running
AudioContext, AudioWorklet and audio ring. Do not use suspended audio for timing
measurements. Build success is separate from the gameplay acceptance recorded
in `research.md`.
