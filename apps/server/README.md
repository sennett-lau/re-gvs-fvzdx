# Private Online Mode backend

This directory is the private backend for Online Mode of the SLPM-65076 v2.00
port: a pinned, patched build of the compatible server
[inada-s/gdxsv](https://github.com/inada-s/gdxsv), a token-protected
WebSocket-to-TCP byte gateway, and a supervisor that runs both. gdxsv speaks the
PS2 lobby protocol of this disc natively (`GameDiskPS2`); nothing here parses or
rewrites game bytes.

| File | Purpose |
| --- | --- |
| `prepare_backend.py` | Archives the pinned gdxsv commit, applies the patch set, builds and tests gdxsv and the gateway, writes `build-info.json` |
| `backendctl.py` | `build`, `init`, `start`, `status`, `stop` for the persistent private service |
| `backend.example.json` | Config fields for `backendctl.py` |
| `patches/gdxsv-loopback.diff` | The gdxsv patch set (with its regression test) |
| `gateway/` | Gateway source (`main.go`), unit tests (`main_test.go`), `go.mod`, `go.sum` |
| `../../tests/server/lobby_probe.mjs` | Synthetic probe through the running gateway |

For a step-by-step setup, including what each generated private file is, see
[Run your own Online Mode server](../../docs/online-server-setup.md).

## Architecture

```
browser page (http://127.0.0.1:8642)          this machine, loopback only
  game EE network hooks                        ┌──────────────────────────────────────────┐
  one TCP stream = one WebSocket  ── ws ──▶    │ gateway 127.0.0.1:base+20                │
    /tcp/lobby                                 │   (+ optional tailnet listener)          │
    /tcp/battle                                │      │ TCP            │ TCP              │
                                               │      ▼                ▼                  │
                                               │ gdxsv lbs         gdxsv MCS (in process) │
                                               │ 127.0.0.1:base+0  127.0.0.1:base+1       │
                                               └──────────────────────────────────────────┘
```

The game opens TCP to the lobby; gdxsv later answers `lbsAskMcsAddress` (0x6916)
with `GDXSV_BATTLE_PUBLIC_ADDR` (`127.0.0.1:base+1`), and the game closes the
lobby connection and opens TCP to that address. In the browser each TCP stream
is one WebSocket to the gateway:

* `ws://HOST:PORT/tcp/lobby` dials the gdxsv lobby listener.
* `ws://HOST:PORT/tcp/battle` dials the gdxsv battle (MCS) listener.
* `Sec-WebSocket-Protocol` must be exactly one value equal to the token
  (constant-time comparison); the gateway echoes it.
* `Origin` must be one of the configured origins. A request without `Origin`
  is refused as well.
* The `Host` header must equal the listener address (`127.0.0.1:PORT` on the
  loopback listener, `100.x.y.z:PORT` on a tailnet listener). This blocks DNS
  rebinding. A query string is refused.
* Binary messages are raw TCP bytes in both directions, in order, with no added
  framing. Text messages close the WebSocket with 1003.
* TCP EOF closes the WebSocket with 1000; a TCP error or a failed dial closes it
  with 1011; a gateway stop closes it with 1001. WebSocket close or error closes
  the TCP connection. Each connection waits for both copy loops before it ends.
* Each connection writes one log line with listener, peer, path, the
  gateway-side service address (to join with the gdxsv log), duration, close
  reason, and byte/frame counts per direction. No payload and no token is logged.
  Refused requests log one `reject` line with the reason.

## Ports

| Port | Listener |
| --- | --- |
| base+0 TCP | gdxsv lobby (`GDXSV_LOBBY_ADDR`) |
| base+0 UDP | gdxsv lobby UDP responder (same host as the lobby) |
| base+1 TCP+UDP | gdxsv battle server MCS (`GDXSV_BATTLE_ADDR`, `GDXSV_BATTLE_PUBLIC_ADDR`) |
| base+3 TCP | gdxsv HTTP API (`GDXSV_LOBBY_HTTP_ADDR`), loopback only |
| base+20 TCP | gateway loopback listener |
| configured | gateway tailnet listeners, for example base+30 |

The default base is 19800. `backendctl.py` refuses ports 18800-18853, 8860 and
8767, which other local projects use. The rollback relay (`GDXSV_RELAY_ADDR`) is
empty, so it does not start; pprof and the cloud profiler are off (`-pprof=0
-cprof=0`). Webhook, GCE on-demand servers and the replay bucket are disabled by
empty settings.

## Commands

```sh
alias C='python3 apps/server/backendctl.py --config .local/online/backend/config.json'  # works in bash and zsh
C build --activate   # builds/<utc>/ from the pinned commit; 'build' links the active one
C init               # state/: token, gdxsv.db (initdb), gateway.json, client.json
C start              # supervisor; returns after every listener is verified
C status             # liveness, listener inventory, TCP probes; exit 0 only when healthy
C stop
node tests/server/lobby_probe.mjs --client .local/online/backend/state/client.json --out .local/online/evidence
```

The config is private (`.local/` is ignored by Git); `backend.example.json`
shows the fields. Relative paths resolve against the config file's directory.

* `build` runs `prepare_backend.py`: `git archive` of revision
  `46ee80b715f76ac0c7c254f6f983e5dcd9940306` from the local clone (`gdxsv_clone`),
  SHA-256 of the archive, safe extraction, `patch -p1 -N -t -F0` with
  `patches/gdxsv-loopback.diff` (no fuzz; a stale patch fails), then
  `go build`, `go vet` and the full `go test ./gdxsv/...` suite of gdxsv, and
  `go vet`, `go test -race` and `go build` of the gateway. Builds use
  `GOTOOLCHAIN=go1.26.0` (gdxsv requires Go 1.26), `-trimpath`,
  `-mod=readonly` and `CGO_ENABLED=1` (the SQLite driver needs cgo). The build
  fails if `TestLoopbackBinding` or `TestLbs_TCPLoginIntegration` does not pass.
  `build-info.json` records the commit, tree, archive hash, patch hash and
  per-file before/after hashes, integration source hashes, commands, test
  results, Go version and environment, C compiler, module lists and output
  hashes. An existing build directory is never reused.
* `init` keeps an existing token and database. gdxsv `initdb` deletes an
  existing database, so it runs only when `state/gdxsv.db` is absent. It
  writes `state/gateway.json` and `state/client.json`
  (`{"gatewayURL": "ws://127.0.0.1:19820/", "token": "...", "tailnetGatewayURLs": {...}}`)
  plus `state/client-<label>.json` per tailnet listener, all mode 0600.
* `start` checks the active build hashes and that no configured port is held,
  then starts a detached supervisor (`state/run/supervisor.pid`,
  `state/run/status.json`). It runs `gdxsv -pprof=0 -cprof=0 -cpu=2 lbs` and the
  gateway with logs in `state/logs/`. The supervisor reads the processes'
  actual sockets with `lsof` and reports ready only when they exactly equal the
  expected set; any listener on another address is an error. If a service
  exits, the supervisor stops the other and records the error.
* `stop` stops the gateway first (browsers see 1001), then gdxsv.

## Security limits

* Loopback by default. Every gdxsv listener binds 127.0.0.1. Upstream
  `stripHost()` bound the lobby and battle servers to all interfaces and the
  lobby UDP responder always bound all interfaces; the patch fixes both.
* A tailnet listener exists only when configured, binds only this machine's
  tailnet address, and closes any connection whose source is not a listed
  tailnet peer (all addresses must be in 100.64.0.0/10). The token, Origin and
  Host checks also apply there.
* One shared token for all clients. It is a capability, not a user account;
  anyone who has `client.json` can use the backend. Rotate it by deleting
  `state/token` and running `init` again.
* No TLS. Traffic is plain `ws://` on loopback or inside the tailnet (which
  WireGuard encrypts). Do not expose any port to a LAN or the internet, and do
  not host this publicly. Native clients can forge `Origin`; the Origin check
  only stops other web pages in a browser.
* The gdxsv HTTP API on base+3 is unauthenticated and also serves Go's pprof
  handlers on the default mux. It is reachable only on loopback.

## Third-party provenance and licenses

* gdxsv: <https://github.com/inada-s/gdxsv>, commit
  `46ee80b715f76ac0c7c254f6f983e5dcd9940306`, GNU Affero General Public License
  version 3. Each build directory has `source/` with the exact upstream archive,
  `patches.diff` as applied, the upstream `LICENSE`, a deterministic patched
  source archive and a `NOTICE`. AGPL-3.0 section 13: if anyone other than the
  operator interacts with this server over a network, offer them that
  corresponding source. `patches/gdxsv-loopback.diff` is a modification of
  gdxsv and is under the same license.
* Gateway: this project's source (`gateway/`), using
  [gorilla/websocket](https://github.com/gorilla/websocket) v1.5.3
  (BSD-2-Clause; the build copies its license into `source/`). Go module
  versions are fixed by `gateway/go.sum` and gdxsv's `go.sum`.
* The design follows the GVZG reference backend (`../re-gvs-gvzg/apps/server`)
  for loopback binding, token as subprotocol, Origin allowlist, peer-restricted
  tailnet listeners and payload-free connection logs. GVZG-specific services
  (zdxsv, DNAS, UDP DNS, login) do not apply to this disc.

## Known limits

* Game-verified on 2026-11-09 with four original clients on a PC and a
  MacBook Pro (registration, login, lobby, one 2v2 battle of three matches,
  results and lobby return); see
  [`docs/online-mode.md`](../../docs/online-mode.md#test-record). The synthetic
  probe still covers only the first lobby message and the battle greeting.
* A fresh database has no `m_lobby_setting`, `m_patch` or `m_rule` rows; the PS2
  client reached the lobby and battled with gdxsv's built-in defaults. The
  original online battle is 2v2: a two-player force start stalls in the client
  (finding 2 in `docs/online-mode.md`). gdxsv can send `lbsGamePatch` (0x9960) code patches when a lobby setting
  names patches; a statically recompiled client cannot apply injected code, so
  keep those settings empty.
* `battle_read_timeout` (config, Go duration, passed as the patched
  `GDXSV_BATTLE_READ_TIMEOUT`) sets how long a silent battle peer is kept;
  unset keeps upstream's 30 s. Clients are silent while loading a stage, and a
  slow disc source exceeded 30 s; the tested backend used `120s`.
* The battle server also listens on UDP (base+1). The gateway carries only TCP
  streams; the hooked client path for this port is TCP to the lobby, then TCP
  to the battle server.
