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
  context = await chromium.launchPersistentContext(path.join(out, 'profile'), {
    executablePath: config.chromePath, headless: false, viewport: null,
    args: ['--mute-audio', '--no-first-run', '--window-position=100,100', '--window-size=1280,900'],
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
