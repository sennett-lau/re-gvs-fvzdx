#!/usr/bin/env node
// Synthetic probe of the private Online Mode gateway and gdxsv lobby.
//
// Usage:
//   node tests/server/lobby_probe.mjs --client <state/client.json> --out <evidence dir>
//        [--origin http://127.0.0.1:8642] [--gateway ws://127.0.0.1:19820/]
//
// It needs Node 22 or later: the global WebSocket of Node 22+ accepts the
// non-standard `headers` option used here to send a browser-like Origin.
// (Node 20 has no stable global WebSocket; run it with Node 22+.)
//
// Checks:
//  1. /tcp/lobby with the token: the first lobby message gdxsv sends is parsed
//     (12-byte header, see gdxsv/lbs_message.go) and recorded.
//  2. /tcp/lobby with a wrong token and with a wrong Origin: the handshake is refused.
//  3. /tcp/battle with the token: the gateway's TCP connect to the battle server
//     succeeds (the WebSocket opens and is not closed with 1011).
// The token is never written to the evidence file.

import { readFileSync, mkdirSync, writeFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { join, resolve } from 'node:path';

const args = Object.fromEntries(process.argv.slice(2).reduce((pairs, value, index, all) => {
  if (value.startsWith('--')) pairs.push([value.slice(2), all[index + 1]]);
  return pairs;
}, []));
if (!args.client || !args.out) {
  console.error('usage: node lobby_probe.mjs --client <client.json> --out <dir> [--origin <origin>] [--gateway <ws url>]');
  process.exit(2);
}
if (typeof WebSocket !== 'function') {
  console.error('this Node has no global WebSocket; use Node 22 or later');
  process.exit(2);
}

const client = JSON.parse(readFileSync(args.client, 'utf8'));
const gateway = (args.gateway || client.gatewayURL).replace(/\/?$/, '/');
const origin = args.origin || 'http://127.0.0.1:8642';
const token = client.token;

const DIRECTIONS = { 0x18: 'ServerToClient', 0x81: 'ClientToServer' };
const CATEGORIES = { 0x01: 'Question', 0x02: 'Answer', 0x10: 'Notice', 0xff: 'Custom' };
const COMMANDS = { 0x6001: 'lbsLineCheck', 0x6003: 'lbsShutDown', 0x6101: 'lbsConnectionID',
  0x6102: 'lbsAskConnectionID', 0x6103: 'lbsWarningMessage', 0x6916: 'lbsAskMcsAddress', 0x9950: 'lbsPlatformInfo' };
const STATUSES = { 0x00ffffff: 'Success', 0xffffffff: 'Error' };
const hex = (n, width) => '0x' + n.toString(16).padStart(width, '0');

function parseHeader(bytes) {
  const view = new DataView(bytes.buffer, bytes.byteOffset, bytes.byteLength);
  const header = {
    direction: view.getUint8(0), category: view.getUint8(1), command: view.getUint16(2),
    bodySize: view.getUint16(4), seq: view.getUint16(6), status: view.getUint32(8),
  };
  return {
    headerHex: Buffer.from(bytes.subarray(0, 12)).toString('hex'),
    direction: hex(header.direction, 2), directionName: DIRECTIONS[header.direction] || null,
    category: hex(header.category, 2), categoryName: CATEGORIES[header.category] || null,
    command: hex(header.command, 4), commandName: COMMANDS[header.command] || null,
    bodySize: header.bodySize, seq: header.seq,
    status: hex(header.status, 8), statusName: STATUSES[header.status] || null,
  };
}

// Opens one WebSocket and resolves with what happened. onOpen(ws, state)
// may resolve early by calling state.finish().
function attempt(path, { protocols = [token], headers = { Origin: origin }, timeoutMs = 4000, onMessage, onOpen } = {}) {
  return new Promise((resolvePromise) => {
    const started = performance.now();
    const state = { url: gateway + path.replace(/^\//, ''), opened: false, openMs: null, error: false,
      closeCode: null, closeReason: null, bytes: 0, messages: 0, done: false, startedAt: started };
    let ws;
    const finish = (extra = {}) => {
      if (state.done) return;
      state.done = true;
      clearTimeout(timer);
      Object.assign(state, extra);
      try { ws.close(1000); } catch {}
      // Give the close handshake a moment so the gateway logs the close.
      setTimeout(() => resolvePromise(state), 200);
    };
    state.finish = finish;
    const timer = setTimeout(() => finish({ timedOut: true }), timeoutMs);
    ws = new WebSocket(state.url, { protocols, headers });
    ws.binaryType = 'arraybuffer';
    ws.onopen = () => {
      state.opened = true;
      state.openMs = +(performance.now() - started).toFixed(2);
      state.protocolEchoed = ws.protocol === token;
      if (onOpen) onOpen(ws, state);
    };
    ws.onerror = () => { state.error = true; };
    ws.onmessage = (event) => {
      const data = new Uint8Array(event.data);
      state.messages += 1;
      state.bytes += data.byteLength;
      if (onMessage) onMessage(data, state);
    };
    ws.onclose = (event) => {
      state.closeCode = event.code;
      state.closeReason = event.reason;
      finish();
    };
  });
}

const clean = ({ finish, done, startedAt, ...rest }) => rest;
const results = { tool: 'tests/server/lobby_probe.mjs', utc: new Date().toISOString(), node: process.version,
  gateway, origin, tokenLength: token.length, tokenSha256Prefix: createHash('sha256').update(token).digest('hex').slice(0, 8) };

// 1. First lobby message.
let received = new Uint8Array(0);
const lobby = await attempt('tcp/lobby', {
  onMessage(data, state) {
    const merged = new Uint8Array(received.length + data.length);
    merged.set(received);
    merged.set(data, received.length);
    received = merged;
    if (received.length >= 12) {
      const header = parseHeader(received);
      if (received.length >= 12 + header.bodySize) {
        state.firstMessage = { ...header, bodyHex: Buffer.from(received.subarray(12, 12 + header.bodySize)).toString('hex'),
          firstMessageMs: +(performance.now() - state.startedAt).toFixed(2) };
        state.finish();
      }
    }
  },
});
results.lobby = clean(lobby);
results.lobby.pass = lobby.opened && lobby.protocolEchoed && !!lobby.firstMessage
  && lobby.firstMessage.direction === '0x18';

// 2. Rejections.
const wrongToken = await attempt('tcp/lobby', { protocols: ['wrong-' + token] });
results.wrongToken = { ...clean(wrongToken), pass: !wrongToken.opened && wrongToken.messages === 0 };
const wrongOrigin = await attempt('tcp/lobby', { headers: { Origin: 'http://127.0.0.1:9999' } });
results.wrongOrigin = { ...clean(wrongOrigin), pass: !wrongOrigin.opened && wrongOrigin.messages === 0 };

// 3. Battle TCP connect through the gateway.
const battle = await attempt('tcp/battle', {
  timeoutMs: 1500,
  onOpen(ws, state) { setTimeout(() => state.finish({ heldOpenMs: 1000 }), 1000); },
  // The battle server greets a new TCP peer; keep the first bytes as protocol evidence.
  onMessage(data, state) { if (!state.firstBytesHex) state.firstBytesHex = Buffer.from(data.subarray(0, 32)).toString('hex'); },
});
results.battle = { ...clean(battle), pass: battle.opened && battle.protocolEchoed && battle.closeCode !== 1011 };

results.pass = results.lobby.pass && results.wrongToken.pass && results.wrongOrigin.pass && results.battle.pass;
const outDir = resolve(args.out);
mkdirSync(outDir, { recursive: true });
const file = join(outDir, 'lobby-probe-' + results.utc.replace(/[:.]/g, '-') + '.json');
writeFileSync(file, JSON.stringify(results, null, 2) + '\n');
console.log(JSON.stringify({ file, pass: results.pass, firstMessage: results.lobby.firstMessage,
  wrongToken: results.wrongToken.pass, wrongOrigin: results.wrongOrigin.pass, battle: results.battle.pass }, null, 2));
process.exit(results.pass ? 0 : 1);
