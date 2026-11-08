// Opt-in Online Mode bridge (linked with --pre-js into the Online build only).
//
// The emulation thread calls these methods synchronously on the main thread
// (MAIN_THREAD_EM_ASM_INT in online.cpp). One WebSocket carries the game's
// single TCP stream to the private gateway: /tcp/lobby, then /tcp/battle.
// Payload bytes are never logged; lobby message headers are counted by
// command id for diagnostics.
(function () {
  'use strict';
  const LOBBY = 0, BATTLE = 1;
  const CONNECTING = 1, OPEN = 2, CLOSED = 3;
  const MAX_EVENTS = 400;
  const params = new URLSearchParams(typeof location === 'undefined' ? '' : location.search);
  let config = null;
  let configError = '';
  let socket = null;      // { ws, kind, state, chunks, offset, available, record }
  let nextId = 1;
  const history = [];
  const events = [];

  function note(kind, detail) {
    events.push(Object.assign({ t: Math.round(performance.now()), kind }, detail || {}));
    if (events.length > MAX_EVENTS) events.shift();
  }

  function loadConfig() {
    if (Module.onlineConfig) { config = Module.onlineConfig; return Promise.resolve(config); }
    const url = params.get('online-config') || 'online-config.json';
    return fetch(url, { cache: 'no-store' }).then((r) => {
      if (!r.ok) throw new Error('HTTP ' + r.status);
      return r.json();
    }).then((value) => {
      if (typeof value.gatewayURL !== 'string' || typeof value.token !== 'string') throw new Error('gatewayURL and token are required');
      config = value;
      note('config', { gateway: value.gatewayURL });
      return value;
    }).catch((e) => { configError = String(e && e.message || e); note('config-error', { error: configError }); });
  }
  const ready = loadConfig();

  function loginKey() {
    if (config && typeof config.loginKey === 'string' && /^[0-9A-Za-z]{4,16}$/.test(config.loginKey)) return config.loginKey;
    const name = 'fvzdx-online-login-key';
    let key = null;
    try { key = localStorage.getItem(name); } catch (e) { key = null; }
    if (!key || !/^[0-9]{8}$/.test(key)) {
      const digits = new Uint8Array(8);
      crypto.getRandomValues(digits);
      key = Array.from(digits, (d) => String(d % 10)).join('');
      try { localStorage.setItem(name, key); } catch (e) { /* session-only key */ }
    }
    return key;
  }

  // gdxsv lbsPlatformInfo (0x9950), as sent by its patched clients after the
  // lobby connection opens: platform text, then the login key XOR 46 cf 2d 55.
  function platformInfo() {
    const text = new TextEncoder().encode('ps2web=fvzdx-online-0.1\ncpu=wasm32\nos=browser\n');
    const key = new TextEncoder().encode(loginKey());
    const magic = [0x46, 0xcf, 0x2d, 0x55];
    const body = new Uint8Array(2 + text.length + 2 + key.length);
    body[0] = text.length >> 8; body[1] = text.length & 0xff; body.set(text, 2);
    let at = 2 + text.length;
    body[at] = key.length >> 8; body[at + 1] = key.length & 0xff; at += 2;
    for (let i = 0; i < key.length; ++i) body[at + i] = key[i] ^ magic[i & 3];
    const packet = new Uint8Array(12 + body.length);
    packet.set([0x81, 0xff, 0x99, 0x50, body.length >> 8, body.length & 0xff, 0, 0, 0, 0xff, 0xff, 0xff]);
    packet.set(body, 12);
    return packet;
  }

  // Count lobby message headers per direction without retaining bodies.
  function headerScanner(direction, record) {
    let pending = new Uint8Array(0);
    return (bytes) => {
      const joined = new Uint8Array(pending.length + bytes.length);
      joined.set(pending); joined.set(bytes, pending.length);
      let at = 0;
      while (joined.length - at >= 12) {
        const size = (joined[at + 4] << 8) | joined[at + 5];
        if (joined.length - at < 12 + size) break;
        const cmd = '0x' + ((joined[at + 2] << 8) | joined[at + 3]).toString(16).padStart(4, '0');
        record.commands.push({ dir: direction, cat: joined[at + 1], cmd, size });
        if (record.commands.length > MAX_EVENTS) record.commands.shift();
        at += 12 + size;
      }
      pending = joined.slice(at);
    };
  }

  function finishRecord(s, why) {
    if (!s.record.closed) {
      s.record.closed = Math.round(performance.now());
      s.record.closeReason = why;
    }
  }

  function open(kind, ip, port) {
    close(-1);
    const record = {
      id: nextId++, kind: kind === LOBBY ? 'lobby' : 'battle', guestIp: ip >>> 0, guestPort: port,
      opened: Math.round(performance.now()), connected: 0, closed: 0, closeReason: '',
      bytesIn: 0, bytesOut: 0, messagesIn: 0, messagesOut: 0, commands: [],
    };
    history.push(record);
    if (history.length > 64) history.shift();
    if (!config) {
      record.closeReason = 'no config: ' + configError;
      note('open-refused', { id: record.id, reason: record.closeReason });
      socket = { ws: null, kind, state: CLOSED, chunks: [], offset: 0, available: 0, record };
      return -1;
    }
    const url = new URL((kind === LOBBY ? 'tcp/lobby' : 'tcp/battle'), config.gatewayURL).href;
    const ws = new WebSocket(url, config.token);
    ws.binaryType = 'arraybuffer';
    const s = { ws, kind, state: CONNECTING, chunks: [], offset: 0, available: 0, record, queue: [] };
    s.scanIn = kind === LOBBY ? headerScanner('in', record) : null;
    s.scanOut = kind === LOBBY ? headerScanner('out', record) : null;
    socket = s;
    note('open', { id: record.id, kind: record.kind, port });
    ws.onopen = () => {
      if (socket !== s) return;
      s.state = OPEN;
      record.connected = Math.round(performance.now());
      if (kind === LOBBY) send(s, platformInfo());
      for (const bytes of s.queue) send(s, bytes);
      s.queue = [];
      note('connected', { id: record.id });
    };
    ws.onmessage = (event) => {
      if (socket !== s) return;
      const bytes = new Uint8Array(event.data);
      s.chunks.push(bytes);
      s.available += bytes.length;
      record.bytesIn += bytes.length;
      record.messagesIn += 1;
      if (s.scanIn) s.scanIn(bytes);
    };
    ws.onerror = () => { note('error', { id: record.id }); };
    ws.onclose = (event) => {
      if (s.state !== CLOSED) s.state = CLOSED;
      finishRecord(s, 'remote ' + event.code);
      note('closed', { id: record.id, code: event.code });
    };
    return record.id;
  }

  function send(s, bytes) {
    s.ws.send(bytes);
    s.record.bytesOut += bytes.length;
    s.record.messagesOut += 1;
    if (s.scanOut) s.scanOut(bytes);
  }

  function state() { return socket ? socket.state : 0; }

  // Bytes already received stay readable after a remote close, like TCP.
  function available() { return socket ? socket.available : 0; }

  function read(ptr, size) {
    const s = socket;
    if (!s) return -1;
    let done = 0;
    while (done < size && s.chunks.length) {
      const chunk = s.chunks[0];
      const n = Math.min(size - done, chunk.length - s.offset);
      HEAPU8.set(chunk.subarray(s.offset, s.offset + n), ptr + done);
      done += n;
      s.offset += n;
      if (s.offset === chunk.length) { s.chunks.shift(); s.offset = 0; }
    }
    s.available -= done;
    return done;
  }

  function write(ptr, size) {
    const s = socket;
    if (!s || s.state === CLOSED) return -1;
    const bytes = HEAPU8.slice(ptr, ptr + size);
    if (s.state === CONNECTING) s.queue.push(bytes);
    else send(s, bytes);
    return size;
  }

  function close(reason) {
    const s = socket;
    if (!s) return 0;
    socket = null;
    s.state = CLOSED;
    finishRecord(s, reason < 0 ? 'replaced' : 'guest close');
    if (s.ws && s.ws.readyState <= 1) s.ws.close(1000);
    return 0;
  }

  function writeLoginKey(ptr, size) {
    const key = new TextEncoder().encode(loginKey());
    if (key.length >= size) return 0;
    HEAPU8.set(key, ptr);
    return key.length;
  }

  Module.fvzdxOnline = {
    open, state, available, read, write, close, loginKey: writeLoginKey, ready,
    stats() {
      return {
        config: config ? { gatewayURL: config.gatewayURL } : null, configError,
        current: socket ? { id: socket.record.id, state: socket.state, available: socket.available } : null,
        connections: history.map((r) => Object.assign({}, r, { commands: r.commands.slice() })),
        events: events.slice(),
      };
    },
  };
  if (typeof window !== 'undefined') window.fvzdxOnlineStats = () => Module.fvzdxOnline.stats();
})();
