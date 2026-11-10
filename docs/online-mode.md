# Online Mode (experimental, private)

This is the technical record of the opt-in Online Mode work for
SLPM-65076 v2.00. It is separate from the accepted `0.1.0` baseline: the
default build, the tracked C++ translation and `apps/game/prebuilt/` are
unchanged. Online Mode needs a private backend and a separately built
`--online` web package.

**Status (2026-11-09): a private, multi-device proof of concept.** Original
clients in browsers on two machines (a Windows PC and a MacBook Pro) connected
through a private compatible server, registered accounts, logged in, used the
original lobby and were matched into one original 2v2 battle. The result and its
limits are in [Test record](#test-record). The source and research wiki are published separately. The tested client build is attached to the
[`v0.2.0` release](https://github.com/sennett-lau/re-gvs-fvzdx/releases/tag/v0.2.0); no public game or backend service is hosted. To run your own backend and
connect players, follow [Run your own Online Mode server](online-server-setup.md).

## Approach

The reference project [GVZG](https://sennett-lau.github.io/re-gvs-gvzg/) reached
original Online Mode by running the original IOP network modules and adapting
`NETMOD_AVETCP.IRX` underneath them. That method does not transfer directly:
this disc ships a different, older KDDI stack (`AVETCP.IRX`, `AVEPPP.IRX`,
`AVEDHCP.IRX`, `AVE_WRAP.IRX`, `MCS_WRAP.IRX` and modem drivers, no DNAS and
no separate network-settings program), and the GVZG server
([zdxsv](https://github.com/inada-s/zdxsv)) targets the other game.

Instead, this port follows the server project for this game,
[gdxsv](https://github.com/inada-s/gdxsv) (AGPL-3.0). gdxsv already speaks this
disc's PS2 lobby protocol (`GameDiskPS2`, game code `0x02`) and battle relay.
Its retired PCSX2 fork (`inada-s/pcsx2`, branch `gdxsv-dev`, commit
`84263d2787bcd28a36e5175bf675f71d4164cbde`, `gdxsv_patch/src/main.c`) did not
emulate the network hardware either: it replaced the game's calls into the
AVE network library with emulator socket calls. This port applies the same
call-site replacement, but to the generated C++ instead of guest memory.

```
browser (one per player)                               private backend host
  original game (WASM)
    hooked EE calls  ── MAIN_THREAD_EM_ASM ─▶ bridge.js
                                              one WebSocket per TCP stream ──▶ gateway ──▶ gdxsv lobby (TCP)
                                                ws://…/tcp/lobby                       └─▶ gdxsv MCS battle relay (TCP)
                                                ws://…/tcp/battle
```

### Client hooks

`scripts/game/online.py` copies the generated C++ and replaces 20 original
`jal` call statements and one function entry. Each site is checked against the
supplied ELF before the copy is written: the original word must be the expected
`jal`, the callee and enclosing function symbols must match, and the generated
statement must be unique. A mismatch stops the build. The tracked translation is
never edited.

| Original call (enclosing function) | Handler | Behaviour |
| --- | --- | --- |
| `Ave_TcpOpen` (`TcpOpen`) | `tcp_open` | Opens `/tcp/lobby` for the resolved lobby address, else `/tcp/battle`; waits up to 5 s like the reference |
| `Ave_TcpClose` (`TcpClose`) | `tcp_close` | Closes the stream |
| `Ave_TcpSend` (`TcpWrite`) | `tcp_send` | Sends guest bytes |
| `Ave_TcpRecv` (`TcpRead`), `McsReceive` (`GetMsgMCS`) | `tcp_recv`, `mcs_receive` | Copies available bytes into guest memory |
| `TcpGetStatus` (`select_ps2`) | `tcp_get_status` | Readable byte count, as in the reference |
| `gethostbyname_ps2_0/1/release` (`tcp_init`) | `resolve_*` | Resolves the lobby name (originally `ca1202.mmcp6`) to a marker address |
| `connect_ps2_check` (`tcp_init`) | `connect_check` | Reports the stream state |
| `AvepppGetStatus` (`dialing_20`, `internet_lobby_act`) | `ppp_status` | Reports the PPP link as up (`5`) |
| `Ave_PppGetUsbDeviceId`, `ADNS_Finalize`, `McsDispose` | `return_zero` | Not needed without a modem |
| `LobbyToMcsInitSocket` (`game_start_to_mcs`), `Check_NecessaryInput` (`entry_move`) | `skip_call` | Removed by the reference |
| entry `dummy_00` (`matching_connect_jmp$219[0]`) | `dial_start` | Skips dialing (`COM_R_No_0 = 2`) |

One data word is written through the runtime's existing patch list (place 2:
boot and every vblank): `connect_jmp_tbl$175[2]` from `modem_recognition` to
`network_battle`, so the menu entry 「モデムの認識」 (modem recognition) starts the network battle.

`src/online/bridge.js` (linked with `--pre-js`) runs on the main thread. After
the lobby stream opens it sends gdxsv's `lbsPlatformInfo` (`0x9950`) with a
per-client login key, as gdxsv's patched clients do; gdxsv then creates or
finds the account for 「ネットワーク接続」 (network connection). The key comes from the private client
configuration or is generated once per browser profile. The bridge records
connection counters and lobby command ids, never payload bytes.

### Backend

[`apps/server/`](../apps/server/README.md) builds gdxsv at commit
`46ee80b715f76ac0c7c254f6f983e5dcd9940306` with a small patch set, runs it with
a token-protected WebSocket-to-TCP gateway and supervises both. Listeners are
loopback-only; other devices reach the gateway through a tailnet listener that
admits only listed peers. The patch set binds gdxsv to the configured loopback
host and makes the battle relay's 30 s silent-peer limit configurable (see
[Findings](#findings)).

## Build and run

```sh
# Backend (once): build, initialise, start; see apps/server/README.md.
python3 apps/server/backendctl.py --config .local/online/backend/config.json build --activate
python3 apps/server/backendctl.py --config .local/online/backend/config.json init
python3 apps/server/backendctl.py --config .local/online/backend/config.json start

# Client: the --online profile hooks a copy of the tracked C++.
python3 scripts/game/build.py --disc /private/disc.iso --online --target web \
  --emsdk /path/to/emsdk --work .local/online-web-NNN --jobs 16
python3 scripts/game/serve.py --build .local/online-web-NNN/web --disc /private/disc.iso \
  --port 8642 --online-config /private/client.json
```

`client.json` is `{"gatewayURL": "ws://HOST:PORT/", "token": "…"}` with an
optional `loginKey`. `backendctl init` writes one for each listener. The page
origin must be in the backend's `origins`.

In the game: main menu 「通信対戦」 (network battle) → create or load the network file on the
memory card → enter a pilot name → 「モデムの認識」 (modem recognition; this starts the network
battle) → save → 「ネットワーク接続」 (network connection) → accept the terms and the connection →
enter a handle name and 「登録」 (register) on first use, or choose the ID → lobby map.
「新規登録」 (new registration) is not supported by gdxsv for PS2 and is refused.

## Findings

1. **Call-site replacement transfers without IOP network emulation.** All 20
   reference call sites and the dial entry matched this ELF exactly, so the
   lobby protocol reached gdxsv unchanged on the first build.
2. **The original online battle is always 2v2.** `internet_to_modem` (after
   `LobbyToMcsInit`) writes a fixed participant mask `0x0F` and count `4` into
   the system work area. During the pre-battle ping exchange (`wr_wait_1`) each
   client waits for a pong from every masked position. With gdxsv's two-player
   force start (`／ｆ` or 「あ」 in the lobby chat) the clients exchanged
   intro, ping and pong messages correctly but waited for positions 2 and 3
   until the battle relay dropped them. This was established with guest memory
   reads and a runtime store watch (`PS2_WATCH`), not by assumption. No
   gameplay patch was added; tests use four players.
3. **Slow clients need a longer silent-peer limit.** gdxsv's battle relay drops
   a TCP peer that sends nothing for 30 s. Clients are silent while they load
   the stage. A browser reading the disc image over a slow link exceeded that.
   The patch keeps 30 s by default and reads `GDXSV_BATTLE_READ_TIMEOUT`;
   the private backend uses `120s`. The game's own loading wait is 3,600 frames
   (about 60 s), so a slow disc source still matters.
4. **The game disconnects idle lobby users** (「一定時間入力が無かったため回線を切断しました」, “the line was disconnected because there was no input for a certain time”)
   and returns to the network menu; reconnecting works without a backend
   restart.

## Test record

Selected evidence: [online-mode-2026-11-09.json](evidence/online-mode-2026-11-09.json)
and the screenshots in [evidence/online/](evidence/online/). Raw captures,
cards, tokens and login keys stay in ignored `.local/online/`.

**Setup.** The backend ran on this Mac (loopback services; the gateway's tailnet
listener admitted only the PC and the MacBook Pro). The `--online` package was
built on the PC (WSL, Emscripten 6.0.11) from the working tree; the source,
bridge and hook manifest fingerprints match the files described here. Every
client used the silent collector (`tests/pc/run.cjs`): an isolated Chrome
profile, `--mute-audio`, and AudioContext/audio-ring checks.

| Client | Machine | Page | Account | Team |
| --- | --- | --- | --- | --- |
| PC-A | Windows PC, Chrome 156 | PC loopback, served from WSL | `WHSCAC` | 連邦 (Federation) |
| PC-B | same PC, second profile | PC loopback | `4YJDON` | ジオン (Zeon) |
| PC-C | same PC, third profile | PC loopback | `FRLIJT` | ジオン (Zeon) |
| MacBook Pro | MacBook Pro (M2 Pro), Chrome 156 | MacBook loopback via an SSH reverse tunnel to this Mac | `ZS8JIP` | 連邦 (Federation) |

**Observed path (2026-11-09).**

1. Each client created its network file on a fresh card, entered a pilot name,
   started the network battle, accepted the terms and connected. gdxsv received
   `lbsPlatformInfo` and the original lobby exchange (connection ID, login type,
   user list, handle registration or ID selection, lobby join).
2. All four chose シアトル (Seattle, lobby 7) and 「パートナー自動選抜」 (automatic partner selection). gdxsv started
   the lobby battle when two players per side were waiting, without force start.
3. Each client asked for the battle address (`0x6916`), closed the lobby
   stream and opened `/tcp/battle`. gdxsv placed all four in one MCS room
   (battle code `1794153391031`).
4. The clients completed machine selection, the briefing, stage loading and
   three consecutive matches (the original rematch panel). Timers matched across
   all four screens; a kill by the MacBook Pro client appeared in the PC
   clients' kill feed.
5. After the third match each client showed the results, posted them (gdxsv
   recorded `WHSCAC` 3 battles/2 wins/4 kills, `ZS8JIP` 3/2/7, `4YJDON` 3/0 wins,
   2 losses) and returned to the lobby map.

The MCS room lasted 709 s. Each battle stream carried about 346 KB up and
1.04 MB down and closed normally. All four collectors reported running, consuming
audio, no page errors and an average of 60 fps while the battle stream was open.

**Failed and partial attempts, retained.**

- Two-player force start (PC + MacBook Pro): lobby, login, matching and the
  MCS room worked; the pre-battle ping stage stalled (finding 2).
- First four-player attempt (two clients on each machine): matching, machine
  selection and the briefing worked on all four; both MacBook Pro clients then
  loaded the stage over the slow reverse tunnel for more than 30 s, the battle
  relay dropped them, and the PC clients ended the battle (finding 3). The
  successful run used one client on the MacBook Pro and the 120 s limit.
- Several navigation attempts were repeated after automated key presses landed
  during loading; these are harness timing errors, not game failures.

## Limits

- Private only: loopback and allow-listed tailnet peers, one shared token, no
  TLS, no public hosting.
- Four players are required for a battle; the original 2v2 mask is not patched.
- gdxsv code patches (`lbsGamePatch`) cannot apply to a statically recompiled
  client; the backend's patch tables stay empty.
- The game page needs a loopback origin for cross-origin isolation; another
  device needs a local copy of the package or a loopback tunnel, and a disc
  source fast enough for stage loading.
- Only SLPM-65076 v2.00 is supported; the hook table is checked against its ELF.
