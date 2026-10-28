# Project instructions

Read README.md and research.md before changing this project. This is a separate game port, based on the workflow in ../re-gvs-gvzg. Do not modify that reference repository or its running services.

## Scope and acceptance

- Target the user-supplied Japanese v2.00 disc of Kidou Senshi Gundam - Renpou vs. Zeon DX. Verify serial, ELF and disc metadata from the actual input.
- Deliver the first working baseline as 0.1.0. Subsequent correctness and compatibility fixes belong to 0.1.x.
- No 0.2.x optimization, adaptive/high-refresh rendering, multiplayer, or research Wiki in this task. Use the game's original timing. Ordinary compiler defaults are fine; do not import the other game's optimization experiments.
- Keep a similar repository layout: apps/game, src/generated, scripts/game, tests, vendor, patches, and docs/license where needed.
- Keep the research narrative in research.md. Record concrete upstream improvement candidates in ps2-web-re-pr.md; do not submit them.
- Do not assume the other game's addresses, boot recipe, overlays, generated source, VU code or fingerprints apply. Share the method, verify each game's inputs.
- Keep source/build provenance and third-party notices. Exclude the original ROM/disc, archives, private saves, credentials and raw diagnostic captures from Git.
- Do not claim a playable baseline based only on compilation. Test normal boot, menu input, selection and active gameplay, retaining precise limits and selected evidence.

## Publishing and identity

- Never push any branch or tag, create or publish a PR, create a remote fork/repository, publish a release/site, contact maintainers, or perform remote cleanup without explicit permission for that action.
- An implementation, test or research request is not publication permission. Earlier permissions for another repository do not apply here.
- Before asking to publish, present the exact account, destination repository, branch and changes.
- Use sennett-lau for this personal project. Never use ns-capy; that account is restricted to Nutshell Studio work.
- Before local commits, verify effective author and committer. Approved identity: sennett-lau <47737641+sennett-lau@users.noreply.github.com>.
- Git identity and authenticated GitHub account are separate. Verify both and every outgoing commit before an explicitly approved publication.
- Prefer repository-scoped identity settings. Do not change global identity or shared active GitHub login. Keep work local if identity or permission is unclear.
- Use small truthful commits. Do not invent or backdate history. Do not tag a working version before the acceptance checks pass.

## Testing and communication

- Prefer the user's PC through SSH for game execution and substantial build/test workloads. Keep the Mac workload modest.
- Keep every game test silent with browser-output mute or zero-gain output. Never change system volume. Keep AudioContext and audio-ring consumption running for timing tests.
- Use isolated test browser profiles and uniquely named test resources. Do not kill unrelated processes or disturb other projects. Clean up only resources created for this task.
- Chat updates in Cantonese; code, UI and repository documentation in English. Use generic AI/agent wording in public documentation.
- Record actual commands, fingerprints, outcomes and blockers in research.md. No fabricated game tests, evidence or completion claims.
