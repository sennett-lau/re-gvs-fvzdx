# Silent PC evidence collector

`run.cjs` launches a new visible Chrome profile with `--mute-audio`. It does not
click the game's mute control or suspend the audio engine. The constructor
observer records AudioContext time/state without changing the audio graph.
`verify-audio` requires a running context with advancing time and an advancing
runtime audio-ring read pointer. Screenshots, samples, console errors, browser
identity and the actual command line are retained in a new private run directory.
Completion of the collector is **not** gameplay acceptance.

Copy `run.cjs`, `scripts/pc/launch.ps1` and a private configuration based on
`config.example.json` to a new project-specific Windows directory. Set existing
Chrome, Node and Playwright paths in the private configuration/launch arguments.
Serve the matched build and supplied disc on PC loopback port 8641. Never reuse
another project's profile, port, scheduled task or server process.

Windows SSH launches services outside the interactive desktop. Start the test
using an interactive, Limited scheduled task:

```powershell
./launch.ps1 -Config ./config.json -Node C:/path/to/node.exe -Runner ./run.cjs -TaskName Rvzdx-boot-001
```

The task refuses to overwrite any existing task. Its ownership record is written
beside the configuration. After `closed.json` appears, unregister **that exact
owned task**. The collector closes only its own Chrome context.

While the collector is in its configured keep-alive interval, write a new
`control.json` into its output directory. Every command requires a unique `id`:

```json
{"id":"start-1","steps":[{"action":"press","key":"Enter","ms":150},{"action":"wait","ms":4000},{"action":"screenshot","name":"after-start"}]}
```

Actions are `wait` (up to 60 seconds), `click` (CSS selector), `press` (one `key`
or an array of `keys`, held for `ms`), `screenshot` (safe `name`), `sample`,
`verify-audio` and `end`. Keyboard events use Playwright's real input path. No
game addresses, modes, overlay assumptions or timing changes are built into the
harness. Review `control-result.json` before sending the next command. Raw output
belongs under `.local/`; copy only selected reviewed evidence into tracked docs.

The parameterized `scripts/pc/ssh.py --host PRIVATE_ALIAS` sends PowerShell stdin
as an encoded command. Add `--wsl DISTRIBUTION` for Bash stdin. Host/account paths
and credentials must remain in private configuration, never these scripts.
