// Silent, isolated PC browser evidence collector. It never declares gameplay acceptance.
const fs = require('node:fs');
const path = require('node:path');
const crypto = require('node:crypto');

const configPath = path.resolve(process.argv[2] || 'config.json');
const config = JSON.parse(fs.readFileSync(configPath, 'utf8').replace(/^\uFEFF/, ''));
if (!/^[a-zA-Z0-9_-]+$/.test(config.runName)) throw Error('Unsafe runName');
const url = new URL(config.url);
if (!['127.0.0.1', 'localhost', '[::1]'].includes(url.hostname)) throw Error('Tests require a loopback URL');
if (!path.isAbsolute(config.outputRoot)) throw Error('outputRoot must be absolute');
const out = path.join(config.outputRoot, config.runName);
fs.mkdirSync(out, {recursive: false});
const {chromium} = require(config.playwrightPath || 'playwright-core');
const save = (name, value) => fs.writeFileSync(path.join(out, name), JSON.stringify(value, null, 2) + '\n');
const log = (phase, data = {}) => {
  const row = {at: new Date().toISOString(), phase, ...data};
  fs.appendFileSync(path.join(out, 'progress.jsonl'), JSON.stringify(row) + '\n');
  save('status.json', row);
};
const delay = ms => new Promise(resolve => setTimeout(resolve, ms));
let context, page, finished = false, sampleTimer, sampleBusy = false;
let sampleNumber = 0, lastControlId;
const logBytes = new Map(), logDropped = new Map();
function boundedLog(name, row) {
  const text = JSON.stringify(row) + '\n';
  const bytes = (logBytes.get(name) || 0) + Buffer.byteLength(text);
  if (bytes > 20 * 1024 * 1024) {
    logDropped.set(name, (logDropped.get(name) || 0) + 1);
    return;
  }
  fs.appendFileSync(path.join(out, name), text);
  logBytes.set(name, bytes);
}
async function snapshot() {
  return page.evaluate(() => {
    const mod = typeof Module === 'object' ? Module : {};
    const call = (name, ...args) => {
      try { return typeof mod[name] === 'function' ? mod[name](...args) : null; }
      catch (error) { return {error: String(error)}; }
    };
    let ring = null;
    if (mod._ps2web_audio_ring && mod.HEAPU8) {
      const words = new Uint32Array(mod.HEAPU8.buffer, mod._ps2web_audio_ring(), 4);
      ring = Array.from(words, (_, i) => Atomics.load(words, i));
    }
    return {
      at: performance.now(), timeOrigin: performance.timeOrigin,
      isolated: crossOriginIsolated, visibility: document.visibilityState, focused: document.hasFocus(),
      gpu: mod.gpuInfo || null, status: document.querySelector('#status')?.textContent || null,
      frames: call('_ps2web_frames'), primitives: call('_ps2web_primitives'),
      gpuMs: call('_ps2web_gpu_ms'), vuInterpreted: call('_ps2web_vu_interpreted'),
      audioQueuedMs: call('_ps2web_audio_queued_ms'),
      audioRing: ring, audioContexts: (window.__fvzdxAudioContexts || []).map(audio => ({state: audio.state, currentTime: audio.currentTime, sampleRate: audio.sampleRate})),
      canvas: mod.canvas ? [mod.canvas.width, mod.canvas.height] : null,
      viewport: [innerWidth, innerHeight], bodyData: {...document.body.dataset},
      // Opt-in Online build only: connection counters, never payload bytes.
      online: typeof window.fvzdxOnlineStats === 'function' ? (() => {
        const stats = window.fvzdxOnlineStats();
        return {configError: stats.configError, current: stats.current, connections: stats.connections.map(c => ({
          id: c.id, kind: c.kind, guestPort: c.guestPort, connected: c.connected, closed: c.closed, closeReason: c.closeReason,
          bytesIn: c.bytesIn, bytesOut: c.bytesOut, messagesIn: c.messagesIn, messagesOut: c.messagesOut, commands: c.commands.length}))};
      })() : null,
      failedResources: performance.getEntriesByType('resource').filter(entry => entry.responseStatus >= 400)
        .map(entry => ({url: entry.name, status: entry.responseStatus})),
    };
  });
}
async function takeSample(label) {
  const row = {number: sampleNumber++, label, utc: new Date().toISOString(), ...await snapshot()};
  boundedLog('samples.jsonl', row);
  save('latest.json', row);
  return row;
}
async function action(step) {
  log('action', {step});
  switch (step.action) {
    case 'wait':
      if (!(step.ms >= 0 && step.ms <= 60000)) throw Error('wait ms must be in [0, 60000]');
      await delay(step.ms); break;
    case 'click': await page.locator(step.selector).click({timeout: step.timeoutMs || 30000}); break;
    case 'reload': await page.reload({timeout: 120000}); break;
    case 'download': {
      if (!/^[a-zA-Z0-9_-]+\.[a-zA-Z0-9]+$/.test(step.name)) throw Error('Unsafe download name');
      const [download] = await Promise.all([
        page.waitForEvent('download'),
        page.locator(step.selector).click(),
      ]);
      const destination = path.join(out, step.name);
      if (fs.existsSync(destination)) throw Error('Refusing to overwrite download');
      await download.saveAs(destination);
      const bytes = fs.readFileSync(destination);
      boundedLog('downloads.jsonl', {name: step.name, suggestedFilename: download.suggestedFilename(),
        bytes: bytes.length, sha256: crypto.createHash('sha256').update(bytes).digest('hex')});
      break;
    }
    case 'press': {
      const keys = step.keys || [step.key];
      if (!keys.length || keys.some(key => typeof key !== 'string')) throw Error('press requires keys');
      try {
        for (const key of keys) await page.keyboard.down(key);
        await delay(Math.min(Math.max(step.ms || 120, 16), 30000));
      } finally {
        for (const key of keys) await page.keyboard.up(key);
      }
      break;
    }
    case 'screenshot': {
      if (!/^[a-zA-Z0-9_-]+$/.test(step.name)) throw Error('Unsafe screenshot name');
      await page.screenshot({path: path.join(out, step.name + '.png')}); break;
    }
    case 'sample': break;
    case 'online-trace': {
      // Private diagnosis only: record bounded hex of Online stream reads/writes in this page.
      await page.evaluate(limit => {
        const bridge = Module.fvzdxOnline;
        if (!bridge || bridge.__traced) return;
        const trace = window.__fvzdxOnlineTrace = [];
        const heap = () => Module.HEAPU8;
        const hex = (ptr, n) => Array.from(heap().subarray(ptr, ptr + Math.min(n, 96)), b => b.toString(16).padStart(2, '0')).join('');
        const read = bridge.read, write = bridge.write, open = bridge.open;
        bridge.open = (...a) => { trace.length < limit && trace.push({t: Math.round(performance.now()), op: 'open', a}); return open(...a); };
        bridge.read = (ptr, size) => { const n = read(ptr, size); if (n > 0 && trace.length < limit) trace.push({t: Math.round(performance.now()), op: 'r', n, hex: hex(ptr, n)}); return n; };
        bridge.write = (ptr, size) => { if (trace.length < limit) trace.push({t: Math.round(performance.now()), op: 'w', n: size, hex: hex(ptr, size)}); return write(ptr, size); };
        bridge.__traced = true;
      }, step.limit || 2000);
      break;
    }
    case 'online-trace-save': {
      if (!/^[a-zA-Z0-9_-]+$/.test(step.name)) throw Error('Unsafe trace name');
      save(step.name + '.json', await page.evaluate(() => window.__fvzdxOnlineTrace || null));
      break;
    }
    case 'guest-peek': {
      // Private diagnosis only: locate guest RAM by a known code signature, then read spans.
      if (!/^[a-zA-Z0-9_-]+$/.test(step.name) || !/^([0-9a-f]{2}){16,64}$/.test(step.signature)) throw Error('guest-peek needs name and hex signature');
      save(step.name + '.json', await page.evaluate(({signature, at, spans}) => {
        const heap = Module.HEAPU8, sig = signature.match(/../g).map(h => parseInt(h, 16));
        let base = window.__fvzdxGuestBase;
        if (base === undefined) {
          for (let i = heap.indexOf(sig[0]); i >= 0 && i < heap.length; i = heap.indexOf(sig[0], i + 1)) {
            if (sig.every((b, k) => heap[i + k] === b)) { base = i - at; break; }
          }
          window.__fvzdxGuestBase = base;
        }
        if (base === undefined) return {error: 'signature not found'};
        return {base, spans: spans.map(([address, length]) => ({address: address.toString(16), hex: Array.from(heap.subarray(base + address, base + address + length), b => b.toString(16).padStart(2, '0')).join('')}))};
      }, {signature: step.signature, at: step.at, spans: step.spans}));
      break;
    }
    case 'online-stats': {
      if (!/^[a-zA-Z0-9_-]+$/.test(step.name)) throw Error('Unsafe stats name');
      save(step.name + '.json', await page.evaluate(() => typeof window.fvzdxOnlineStats === 'function' ? window.fvzdxOnlineStats() : null));
      break;
    }
    case 'verify-audio': {
      const before = await snapshot(); await delay(1200); const after = await snapshot();
      const running = after.audioContexts.some((audio, index) => audio.state === 'running' && audio.currentTime > (before.audioContexts[index]?.currentTime ?? Infinity));
      const consumed = before.audioRing && after.audioRing && before.audioRing[1] !== after.audioRing[1];
      save('audio-check-' + sampleNumber + '.json', {before, after, running, consumed, silence: 'Chromium --mute-audio'});
      if (!running || (config.requireAudioRing !== false && !consumed)) throw Error('Audio context or ring consumption did not advance');
      break;
    }
    case 'end': finished = true; break;
    default: throw Error('Unknown action: ' + step.action);
  }
  await takeSample(step.action + (step.name ? ':' + step.name : ''));
}

(async () => {
  log('starting');
  const htmlResponse = await fetch(config.url);
  if (!htmlResponse.ok) throw Error('Page HTTP status ' + htmlResponse.status);
  const html = await htmlResponse.text();
  const identity = {config, node: process.version, htmlSha256: crypto.createHash('sha256').update(html).digest('hex'), isolationHeaders: {coop: htmlResponse.headers.get('cross-origin-opener-policy'), coep: htmlResponse.headers.get('cross-origin-embedder-policy')}};
  if (config.manifestPath) {
    const response = await fetch(new URL(config.manifestPath, config.url));
    if (!response.ok) throw Error('Build manifest HTTP status ' + response.status);
    identity.manifest = await response.json();
  }
  save('identity.json', identity);
  const windowPosition = config.windowPosition || '100,100';
  if (!/^[0-9]{1,4},[0-9]{1,4}$/.test(windowPosition)) throw Error('windowPosition must be x,y');
  // Optionally continue an earlier isolated test profile (for example its memory card).
  if (config.profileDir && !path.isAbsolute(config.profileDir)) throw Error('profileDir must be absolute');
  context = await chromium.launchPersistentContext(config.profileDir || path.join(out, 'profile'), {
    executablePath: config.chromePath, headless: false, viewport: null,
    args: ['--mute-audio', '--no-first-run', '--window-position=' + windowPosition, '--window-size=1280,900',
      // Several game windows on one desktop: keep occluded ones rendering at full rate.
      ...(config.keepOccludedRunning ? ['--disable-backgrounding-occluded-windows', '--disable-renderer-backgrounding', '--disable-background-timer-throttling'] : [])],
  });
  await context.addInitScript(() => {
    window.__fvzdxAudioContexts = [];
    for (const key of ['AudioContext', 'webkitAudioContext']) {
      const Constructor = window[key];
      if (!Constructor) continue;
      window[key] = new Proxy(Constructor, {construct(target, args, newTarget) {
        const instance = Reflect.construct(target, args, newTarget);
        window.__fvzdxAudioContexts.push(instance);
        return instance;
      }});
    }
  });
  page = context.pages()[0];
  page.setDefaultTimeout(30000);
  page.on('pageerror', error => boundedLog('errors.jsonl', {at: Date.now(), error: String(error), stack: error.stack}));
  page.on('console', message => boundedLog('console.jsonl', {at: Date.now(), type: message.type(), text: message.text()}));
  page.on('requestfailed', request => boundedLog('requests-failed.jsonl', {url: request.url(), failure: request.failure()}));
  page.on('response', response => {
    if (response.status() >= 400) boundedLog('http-errors.jsonl', {url: response.url(), status: response.status()});
  });
  const browser = await context.browser().newBrowserCDPSession();
  save('browser.json', await browser.send('Browser.getVersion'));
  const arguments = await browser.send('Browser.getBrowserCommandLine');
  save('arguments.json', arguments);
  if (!arguments.arguments.includes('--mute-audio')) throw Error('Browser audio output is not muted');
  save('gpu.json', await browser.send('SystemInfo.getInfo'));
  await page.goto(config.url, {timeout: 120000});
  await takeSample('loaded');
  sampleTimer = setInterval(async () => {
    if (sampleBusy) return;
    sampleBusy = true;
    try { await takeSample('periodic'); } catch (error) { boundedLog('sampling-errors.jsonl', {error: String(error)}); }
    finally { sampleBusy = false; }
  }, Math.max(1000, config.sampleMs || 5000));
  if (config.startSelector) await action({action: 'click', selector: config.startSelector, timeoutMs: 120000});
  log('ready');
  for (const step of config.steps || []) { if (finished) break; await action(step); }
  const until = Date.now() + Math.min(Math.max(config.keepAliveSeconds || 0, 0), 3600) * 1000;
  while (!finished && Date.now() < until) {
    const controlPath = path.join(out, 'control.json');
    if (fs.existsSync(controlPath)) {
      let control;
      try { control = JSON.parse(fs.readFileSync(controlPath, 'utf8').replace(/^\uFEFF/, '')); } catch {}
      if (control && control.id !== lastControlId) {
        lastControlId = control.id;
        for (const step of control.steps || [control]) { if (finished) break; await action(step); }
        save('control-result.json', {id: control.id, at: new Date().toISOString(), completed: true});
      }
    }
    await delay(500);
  }
  save('result.json', {completed: true, acceptance: 'Not determined by this collector; review screenshots, controls and timing evidence.', droppedLogRows: Object.fromEntries(logDropped)});
  log('completed');
})().catch(error => {
  save('failure.json', {error: String(error), stack: error.stack});
  log('failed', {error: String(error)}); process.exitCode = 1;
}).finally(async () => {
  clearInterval(sampleTimer);
  if (context) await context.close();
  save('closed.json', {at: new Date().toISOString()});
});
