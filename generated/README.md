# Retained game translation

`federation-vs-zeon-dx/` contains the exact generated input used by the accepted
Japanese v2.00 `SLPM-65076` baseline: 168 C++ files and one header, totaling
45,855,118 bytes. The largest file is 407,872 bytes. The existing
[translation manifest](../src/generated/manifest.json) records every size and
SHA-256 together with generator and executable provenance.

These are translations of game executable behavior, not the original developer's
handwritten source. No source from another game is used. Preserve the retained
files unchanged; regenerate candidates into an ignored workspace and compare
their manifest before replacing an accepted input.

The original disc, private saves, native captures and recorded program images
are not included. See the [local workflow](../README.md#local-workflow) for
building the retained C++ or making a separate disc-to-C++ translation.
