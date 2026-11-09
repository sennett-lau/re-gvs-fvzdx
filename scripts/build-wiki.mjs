import fs from 'node:fs/promises';
import path from 'node:path';
import {fileURLToPath} from 'node:url';
import {createHash} from 'node:crypto';
import {marked} from 'marked';

const root = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const out = path.join(root, '.local/wiki');
const escape = value => String(value).replace(/[&<>"']/g, c => ({'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;',"'":'&#39;'}[c]));
const pages = [
  {source:'docs/research-reader.md', output:'index.html', lang:'en', label:'Research reader'},
  {source:'research.md', output:'research.html', lang:'en', label:'Technical record'},
  {source:'README.md', output:'setup.html', lang:'en', label:'Build & setup'},
  {source:'docs/online-mode.md', output:'online-mode.html', lang:'en', label:'Online Mode experiment'},
  {source:'docs/online-server-setup.md', output:'online-server-setup.html', lang:'en', label:'Run your own server'},
  {source:'apps/server/README.md', output:'online-backend.html', lang:'en', label:'Private backend setup'},
  {source:'ps2-web-re-pr.md', output:'upstream-ideas.html', lang:'en', label:'Upstream proposals'},
  {source:'docs/license/README.md', output:'docs/license/index.html', lang:'en', label:'Third-party notices'},
];
const bySource = new Map(pages.map(p => [p.source,p.output]));
async function files(directory) {
  const entries = await fs.readdir(path.join(root,directory),{withFileTypes:true});
  return (await Promise.all(entries.filter(e=>!e.name.startsWith('.')).map(e=>e.isDirectory()?files(path.posix.join(directory,e.name)):[path.posix.join(directory,e.name)]))).flat().sort();
}
// Explicit public documentation only. No repository-root or .local traversal.
const publicFiles = [...pages.map(p=>p.source),'upstream.lock','tests/pc/README.md','apps/wiki/fonts/OFL.txt',...await files('docs/evidence'),...await files('docs/license')];
const assetFiles = await files('apps/wiki');
const manifest = {schema:1, sources:{}};
for (const name of [...new Set([...publicFiles,...assetFiles,'scripts/build-wiki.mjs','package.json','package-lock.json'])]) {
  if (!/\.(?:md|json|png|jpg|jpeg|webp|txt|lock|mjs|js|css|ttf)$/i.test(name) && !/(?:^|\/)LICENSE$/.test(name)) throw Error('Unexpected reader input: '+name);
  manifest.sources[name] = createHash('sha256').update(await fs.readFile(path.join(root,name))).digest('hex');
}
manifest.sourceSet = createHash('sha256').update(JSON.stringify(manifest.sources)).digest('hex');
await fs.rm(out,{recursive:true,force:true});
await fs.mkdir(out,{recursive:true});
for (const name of new Set(publicFiles)) {
  const target = path.join(out,name);
  await fs.mkdir(path.dirname(target),{recursive:true});
  await fs.copyFile(path.join(root,name),target);
}
await fs.cp(path.join(root,'apps/wiki'),path.join(out,'assets'),{recursive:true});
for (const page of pages) {
  const text = await fs.readFile(path.join(root,page.source),'utf8');
  const title = text.match(/^# (.+)$/m)?.[1];
  if (!title) throw Error('Missing title: '+page.source);
  const rel = target => path.posix.relative(path.posix.dirname(page.output),target) || path.posix.basename(target);
  const rewrite = href => {
    if (/^(?:[a-z]+:|\/\/|#)/i.test(href)) return href;
    const [raw,fragment] = href.split('#');
    const canonical = path.posix.normalize(path.posix.join(path.posix.dirname(page.source),decodeURIComponent(raw)));
    if (canonical.startsWith('../') || canonical.startsWith('.local/')) throw Error('Private reader link: '+href);
    const target = bySource.get(canonical) || canonical;
    return rel(target)+(fragment?'#'+fragment:'');
  };
  const outline = [], ids = new Map();
  const renderer = new marked.Renderer();
  renderer.heading = function({tokens,depth,text}) {
    const base=text.toLowerCase().replace(/<[^>]*>/g,'').replace(/[^\p{L}\p{N}\s-]/gu,'').trim().replace(/\s+/g,'-');
    const count=ids.get(base)||0;ids.set(base,count+1);const id=base+(count?'-'+count:'');
    if(depth===2) outline.push({id,label:text.replace(/[*`]/g,'')});
    return `<h${depth} id="${escape(id)}">${this.parser.parseInline(tokens)}</h${depth}>\n`;
  };
  renderer.link = function({href,tokens,title}) {return `<a href="${escape(rewrite(href))}"${title?' title="'+escape(title)+'"':''}>${this.parser.parseInline(tokens)}</a>`;};
  renderer.image = ({href,text}) => `<img src="${escape(rewrite(href))}" alt="${escape(text)}" loading="lazy">`;
  renderer.html = ({text}) => text.replace(/(<(?:img|video|source)\b[^>]*?)\b(src|poster)="([^"]+)"/g,(_,tag,key,url)=>`${tag}${key}="${escape(rewrite(url))}"`);
  renderer.blockquote = function({text,tokens}) {
    const marker=/^\[!(IMPORTANT|NOTE|TIP)\]\s*\n/.exec(text);
    if(!marker)return `<blockquote>${this.parser.parse(tokens)}</blockquote>`;
    const kind=marker[1].toLowerCase();
    return `<aside class="callout ${kind}"><p class="callout-label">${kind==='important'?'Key finding':kind==='note'?'Evidence scope':'Next step'}</p>${this.parser.parse(marked.lexer(text.slice(marker[0].length)))}</aside>`;
  };
  const body=marked.parse(text,{renderer,gfm:true}).replace(/^<h1[^>]*>[\s\S]*?<\/h1>\s*/,'').replace(/<table>/g,'<p class="table-hint">Scroll tables sideways on narrow screens.</p><div class="table-wrap" tabindex="0" role="region" aria-label="Scrollable data table"><table>').replace(/<\/table>/g,'</table></div>');
  const nav=outline.map(h=>`<a href="#${escape(h.id)}">${escape(h.label)}</a>`).join('');
  const references=pages.filter(p=>p.source!==page.source).map(p=>`<a href="${escape(rel(p.output))}">${escape(p.label)}</a>`).join('');
  const html=`<!doctype html>
<html lang="${page.lang}" data-theme="dark"><head><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1"><title>${escape(title)} · rg-gvs-fvzdx</title><meta name="description" content="Reusing the GVZG method to verify browser recompilation of another PS2 game, with new findings and measured results."><script src="${rel('assets/reader.js')}"></script><link rel="stylesheet" href="${rel('assets/wiki.css')}"></head>
<body><a class="skip" href="#article">Skip to content</a><header class="masthead"><a class="wordmark" href="${rel('index.html')}">Gundam VS. Series — Federation vs. Zeon DX<small>rg-gvs-fvzdx · RESEARCH / REPLICATION</small></a><button class="theme-toggle" data-theme-toggle hidden>Light mode</button></header>
<div class="layout"><aside class="sidebar"><div class="sidebar-inner"><details class="contents" open><summary>On this page</summary><nav class="outline" aria-label="Page sections">${nav}</nav></details><details class="references"><summary>Technical record and references</summary><nav>${references}<a href="https://sennett-lau.github.io/re-gvs-gvzg/">GVZG research ↗</a></nav></details><p class="side-note">From method to a second verifiable result.<br>Original timing model · local research build</p></div></aside>
<main id="article" tabindex="-1"><div class="article-meta"><span class="kicker">REPLICATION STUDY / 01</span><a href="${escape(rel(page.source))}">Markdown source ↗</a></div><h1>${escape(title)}</h1><p class="subtitle">rg-gvs-fvzdx / ${escape(page.label)}</p><article class="article-body">${body}</article><footer class="footer"><span>One article source · documents and evidence reader</span><span>Source set <code>${manifest.sourceSet.slice(0,12)}</code></span></footer></main></div></body></html>`;
  const target=path.join(out,page.output);await fs.mkdir(path.dirname(target),{recursive:true});await fs.writeFile(target,html);
}
await fs.writeFile(path.join(out,'build-manifest.json'),JSON.stringify(manifest,null,2)+'\n');
console.log(`Built ${pages.length} research/reference pages at .local/wiki (source ${manifest.sourceSet.slice(0,12)})`);
