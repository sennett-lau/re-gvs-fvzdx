# Browser host

`shell.html` starts from the pinned upstream browser host, with this project's
title. It retains the original runtime timing and controller mappings. A matched
HTML/JS/WASM/data set is produced under `.local` by `scripts/game/build.py`.

Automated tests mute Chrome output using `--mute-audio`, preserving the running
AudioContext, AudioWorklet and audio ring. Do not use suspended audio for timing
measurements. Build success is separate from the gameplay acceptance recorded
in `research.md`.
