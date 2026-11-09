# Research reader

The English research reader article is `docs/research-reader.md`. The English
`research.md` remains the detailed experiment log. Edit those sources rather
than generated HTML. Numeric evidence and original capture identities remain
in `docs/evidence/`; the article links to those records. The later Online Mode
experiment and backend instructions are rendered from `docs/online-mode.md`
and `apps/server/README.md`, separate from the baseline acceptance.

Run `npm ci --ignore-scripts` and `npm run wiki:build`. Output is confined to
ignored `.local/wiki/`. The reader exports an explicit documentation allowlist;
it never copies game packages, disc images, saves or private captures.

The design follows the existing GVZG reader: dark by default, optional light
theme, a visible mobile outline, evidence alongside claims and secondary
technical references. Manrope is reused under its included OFL notice. The
page has no game runtime, external font requests or telemetry. Publishing is
separate and requires explicit user authorization.
