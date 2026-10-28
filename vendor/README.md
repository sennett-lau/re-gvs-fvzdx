# Pinned upstream source

`ps2-web-recomp/` is an unmodified subset of Samir Nuri's MIT-licensed
ps2-web-recomp at `6526f4803d98e10de50bea3af104a4d26e9df033`.
`manifest.json` records the selected paths and every file's SHA-256.
It was exported from that Git object, not from the reference project's modified
working tree. The original MIT license and Play! IPU notice are retained.

Build scripts verify this snapshot, copy it under `.local`, apply the explicit
patches in `patches/`, and substitute `apps/game/shell.html`. Do not edit this
snapshot to hide local changes. No reference-game translation is included.
