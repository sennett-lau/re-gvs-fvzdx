"""Validate generated research pages and their documentation-only artifact."""
from html.parser import HTMLParser
from pathlib import Path
from urllib.parse import unquote, urlsplit
import hashlib
import json

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / '.local/wiki'


class Page(HTMLParser):
    def __init__(self, path):
        super().__init__()
        self.refs = []
        self.ids = set()
        self.feed(path.read_text())

    def handle_starttag(self, tag, attrs):
        attrs = dict(attrs)
        if 'id' in attrs:
            self.ids.add(attrs['id'])
        self.refs.extend(attrs[key] for key in ('href', 'src', 'poster') if key in attrs)


def main():
    pages = {p: Page(p) for p in OUT.rglob('*.html')}
    if not pages or OUT / 'index.html' not in pages:
        raise SystemExit('Build the wiki first')
    manifest = json.loads((OUT / 'build-manifest.json').read_text())
    allowed = set(manifest['sources']) | {'build-manifest.json'}
    allowed.update(str(p.relative_to(OUT)) for p in pages)
    allowed.update('assets/' + p[len('apps/wiki/'):] for p in manifest['sources'] if p.startswith('apps/wiki/'))
    for p in OUT.rglob('*'):
        if p.is_symlink():
            raise SystemExit(f'Symlink in artifact: {p}')
        if not p.is_file():
            continue
        rel = str(p.relative_to(OUT))
        if rel not in allowed or (p.name != 'LICENSE' and p.suffix.lower() not in {'.html', '.md', '.json', '.png', '.jpg', '.jpeg', '.webp', '.txt', '.lock', '.js', '.css', '.ttf'}):
            raise SystemExit(f'Unexpected artifact: {rel}')
    for name, expected in manifest['sources'].items():
        if hashlib.sha256((ROOT / name).read_bytes()).hexdigest() != expected:
            raise SystemExit(f'Stale build input: {name}')
    count = 0
    for p, page in pages.items():
        for ref in page.refs:
            url = urlsplit(ref)
            if url.scheme or url.netloc:
                continue
            count += 1
            target = (p.parent / unquote(url.path)).resolve() if url.path else p
            if not target.is_relative_to(OUT) or not target.exists():
                raise SystemExit(f'{p.name}: missing or escaping link {ref}')
            if url.fragment and target in pages and unquote(url.fragment) not in pages[target].ids:
                raise SystemExit(f'{p.name}: missing anchor {ref}')
    print(f'Checked {len(pages)} pages, {count} local links and documentation-only artifact')


if __name__ == '__main__':
    main()
