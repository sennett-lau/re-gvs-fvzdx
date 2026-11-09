# Run your own Online Mode server

This guide starts a private Online Mode backend from this repository and
connects the `v0.2.0` Online client to it. No public server exists. Each group
of players runs its own.

Steps 1 to 6 were repeated from a fresh gdxsv clone on 2026-11-10 (macOS on
Apple silicon, Go 1.22.5 fetching Go 1.26.0, Python 3.9). That run built the
backend, generated its private files, started it and passed the lobby probe. A
full battle needs four players. That was tested on 2026-11-09; see the
[test record](online-mode.md#test-record).

## What you need

- **Server machine**: macOS or Linux. You need `git`, Python 3.9 or later, `lsof`
  and a C compiler (Xcode Command Line Tools or `build-essential`; the SQLite
  driver uses cgo). You also need Go 1.21 or later, which downloads the pinned
  Go 1.26.0 toolchain by itself, and Node.js 20 or later for the probe.
- **Each player**: the `v0.2.0` Online browser package from the
  [release page](https://github.com/sennett-lau/re-gvs-fvzdx/releases/tag/v0.2.0),
  Python 3, a current Chrome or Edge, and their own copy of the Japanese v2.00 disc
  (`SLPM-65076`).
- **Four players.** The original lobby starts a battle only with two players on
  each side. One machine can run several players, each in its own Chrome profile.
- **Remote players**: [Tailscale](https://tailscale.com/) on every machine. The
  backend never listens on a LAN or public address.

## Private files

`backendctl.py init` generates these files. They live in the ignored `state/`
directory, mostly with mode `0600`. They are not in Git or in any release,
because anyone who has them can use your server or impersonate a player.
Generate your own; do not copy someone else's.

| File | What it is | Who needs it |
| --- | --- | --- |
| `state/token` | A random shared secret (`fvzdx-` plus 43 characters). The gateway accepts a browser only if it presents this token. | Only the server; it is copied into every client file |
| `state/client.json` | `{"gatewayURL": "ws://127.0.0.1:<port>/", "token": "…"}`, the client settings for a page on the server machine itself | Players on the server machine |
| `state/client-<label>.json` | The same for a Tailscale listener, with the server's `100.x` address | Remote players allowed on that listener |
| `state/gateway.json` | The gateway's own settings: listeners, token, allowed origins and peers | Only the server |
| `state/gdxsv.db` | The gdxsv database of accounts and battle results | Only the server |
| `state/logs/` | Service logs (no game payloads and no token) | Only the server |

A **login key** is the player's identity on the server. gdxsv maps it to one
game account, such as `WHSCAC`. The Online client creates a random 8-digit key
the first time it connects. It stores the key in the browser profile's
`localStorage` as `fvzdx-online-login-key`, so each Chrome profile is a
separate player. To keep an account on another profile or machine, add
`"loginKey": "<4-16 letters or digits>"` to that player's client file. Anyone
who knows a login key can sign in as that player.

## 1. Get the sources

```sh
git clone https://github.com/sennett-lau/re-gvs-fvzdx.git
cd re-gvs-fvzdx
mkdir -p .local/online
git clone https://github.com/inada-s/gdxsv.git .local/online/gdxsv
```

The build archives the pinned gdxsv commit
`46ee80b715f76ac0c7c254f6f983e5dcd9940306` from this clone. It does not need a
checkout of that commit.

## 2. Write the backend config

Create `.local/online/backend/config.json`. Relative paths resolve from this
file's directory:

```json
{
  "root": ".",
  "gdxsv_clone": "../gdxsv",
  "base_port": 19800,
  "toolchain": "go1.26.0",
  "origins": ["http://127.0.0.1:8642"],
  "battle_read_timeout": "120s"
}
```

- `base_port`: gdxsv uses base+0, base+1 and base+3. The loopback gateway uses
  base+20, so with the default it is `ws://127.0.0.1:19820/`.
- `origins`: the exact address of every game page that may connect. Add one
  entry per local player port, for example `http://127.0.0.1:8643` for a second
  player on the same machine.
- `battle_read_timeout`: keep `120s`. Clients are silent while a stage loads,
  and the upstream default of 30 s dropped slow loaders in testing.

For remote players over Tailscale, also add a peer-restricted listener. Use
`tailscale ip -4` on each machine to find its address:

```json
  "tailnet_listeners": {
    "friends": {"port": 19830, "peers": ["100.a.b.c", "100.d.e.f"]}
  }
```

Every remote page must still use a loopback origin from `origins`. Each remote
player runs `serve.py` on their own machine, on the port listed there.

## 3. Build the backend

```sh
python3 apps/server/backendctl.py --config .local/online/backend/config.json build --activate
```

This takes several minutes. It applies `apps/server/patches/gdxsv-loopback.diff`
without fuzz, builds gdxsv and the gateway, and runs both test suites. The
results go to `builds/<utc>/build-info.json`. A failing test stops the build.

## 4. Generate the private files

```sh
python3 apps/server/backendctl.py --config .local/online/backend/config.json init
```

This step creates `state/token`, `state/gdxsv.db`, `state/gateway.json`,
`state/client.json` and one `state/client-<label>.json` for each Tailscale
listener. Running it again keeps the token and the database, and rewrites the
client files.

## 5. Start the backend and check it

```sh
python3 apps/server/backendctl.py --config .local/online/backend/config.json start
python3 apps/server/backendctl.py --config .local/online/backend/config.json status
```

`start` returns once every listener is up. `status` exits with 0 and
`"ready": true` when the backend is healthy.

On zsh (the macOS default), a variable such as `C="python3 …"` followed by `$C start`
fails, because zsh does not split the variable into words. Type the full
command, or use `alias C='python3 apps/server/backendctl.py --config .local/online/backend/config.json'`.

## 6. Probe the gateway

```sh
node tests/server/lobby_probe.mjs --client .local/online/backend/state/client.json \
  --out .local/online/evidence --origin http://127.0.0.1:8642
```

`--origin` must be one of the configured `origins`. A passing probe refuses a
wrong token and a wrong origin, receives the first lobby message, and reaches the
battle server. It does not test a game client.

## 7. Start each player's game page

Each player extracts `re-gvs-fvzdx-v0.2.0-online-browser.zip`, puts their
client file next to it, and starts the page on their own allowed port:

```sh
cd re-gvs-fvzdx-v0.2.0-online-browser
python3 serve.py --build web --disc /path/to/disc.iso --port 8642 --online-config /path/to/client.json
```

Open `http://127.0.0.1:8642/` in Chrome. Use `client.json` on the server
machine and `client-<label>.json` on a remote machine. Give a second player on
the same machine a separate Chrome profile and its own port, such as `8643`.

## 8. In the game

1. From the main menu choose 「通信対戦」 (network battle). Create or load the
   network file on the memory card, then enter a pilot name.
2. Choose 「モデムの認識」 (modem recognition). In this build it starts the
   network battle. Save, then choose 「ネットワーク接続」 (network connection).
3. Accept the terms and the connection. On first use enter a handle name and
   choose 「登録」 (register); later choose your ID. 「新規登録」 (new
   registration) is not supported and is refused.
4. In the lobby map, all four players pick the same lobby and
   「パートナー自動選抜」 (automatic partner selection). The battle starts when
   each side has two players.

## Stop, rotate and reset

```sh
python3 apps/server/backendctl.py --config .local/online/backend/config.json stop
```

- **New token**: stop the backend, delete `state/token` and run `init`. Then give
  every player their new client file.
- **Clear all accounts**: stop the backend, delete `state/gdxsv.db` and run
  `init`.
- **New player identity**: clear `fvzdx-online-login-key` from the browser's
  site data, or use a new Chrome profile.

## Troubleshooting

- **`configured ports are in use`** or **`configured ports overlap ports held by
  other projects`**: choose a different `base_port`.
- **`backend did not report ready`**: read `state/logs/supervisor.log`.
- **The probe fails only on the battle step**, or **the page never connects**:
  check that the page address is listed exactly in `origins`. `127.0.0.1` and
  `localhost` count as different origins.
- **A two-player battle stalls before it starts**: the original battle is 2v2.
  Use four players.
- **Players drop during stage loading**: keep `battle_read_timeout` at `120s`.
  Serve the disc from a local disk on each player's machine.
- **Security**: there is no TLS and only one shared token. Do not forward any
  port to a LAN or the internet. If anyone other than you uses the server over a
  network, gdxsv's AGPL-3.0 licence requires that you offer them its source. Each
  build keeps that source in `builds/<utc>/source/`.
