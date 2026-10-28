# Generated game translation

The accepted C++ is tracked in
[`generated/federation-vs-zeon-dx/`](../../generated/federation-vs-zeon-dx/).
This directory retains the original canonical `manifest.json`, unchanged from
the baseline acceptance record. It identifies all 169 generated files and their
generator provenance.

Run `scripts/game/regenerate.py` with the supported private disc to create a new
ignored translation workspace. Its `translation.json` can be compared with this
manifest; regeneration does not overwrite the tracked accepted source.

No translation from another game is used. The initial pass produced 167 EE
units, `table.cpp` and a header. Source fingerprints establish build input;
[gameplay acceptance](../../docs/evidence/acceptance-0.1.0.json) establishes the
tested runtime behavior. The separate original executable and recorded VU images
remain private; the matched prebuilt `.data` contains the boot executable.
