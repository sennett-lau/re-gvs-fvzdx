"""Synthetic checks for the Online translation rewriter; no game data required."""
import sys
import tempfile
import unittest
from pathlib import Path
from unittest import mock

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'scripts/game'))
import online  # noqa: E402

CALL = ('    { c.r[31].sd[0] = static_cast<std::int32_t>(0x%08Xu); set32(c.r[4], 1u);  '
        'if (depth < kMaxDepth) unit_0001(c, 5u, depth + 1u); else { c.pc = 0x%08Xu; return; } '
        'if (c.pc != 0x%08Xu) [[unlikely]] return; }\n')


def unit(*lines, label=None):
    body = ''.join(lines)
    if label:
        body += 'L_%08X:\n    set32(c.r[3], 0u + 1u);\n' % label
    return '#include "units.hpp"\n\nnamespace gen {\nvoid unit_0001(ps2::Cpu &c, std::uint32_t entry, std::uint32_t depth) {\n' + body + '}\n}\n'


class RewriteTest(unittest.TestCase):
    def setUp(self):
        self.tmp = tempfile.TemporaryDirectory()
        self.root = Path(self.tmp.name)
        self.generated = self.root / 'generated'
        self.generated.mkdir()
        hooks = [(0x1000, 0x2000, 'callee', 'owner', 'tcp_open')]
        entries = [(0x3000, 'dummy', 'dial_start')]
        self.patches = [mock.patch.object(online, 'CALL_HOOKS', hooks), mock.patch.object(online, 'ENTRY_HOOKS', entries)]
        for p in self.patches:
            p.start()

    def tearDown(self):
        for p in self.patches:
            p.stop()
        self.tmp.cleanup()

    def write(self, name, text):
        (self.generated / name).write_text(text)

    def test_replaces_call_and_entry_once_and_includes_header(self):
        self.write('unit_0001.cpp', unit(CALL % (0x1008, 0x2000, 0x1008), label=0x3000))
        self.write('unit_0002.cpp', unit())
        changed = online.rewrite(self.generated, self.root / 'out')
        self.assertEqual(changed, ['unit_0001.cpp'])
        text = (self.root / 'out/unit_0001.cpp').read_text()
        self.assertIn('fvzdx_online::tcp_open(c); if (c.pc != 0x00001008u)', text)
        self.assertNotIn('unit_0001(c, 5u', text)
        self.assertIn('L_00003000:\n    fvzdx_online::dial_start(c); return;\n', text)
        self.assertEqual(text.count('#include "fvzdx_online.hpp"'), 1)
        self.assertEqual((self.root / 'out/unit_0002.cpp').read_text(), unit())
        self.assertTrue((self.root / 'out/fvzdx_online.cpp').is_file())

    def test_duplicate_call_statement_is_rejected(self):
        self.write('unit_0001.cpp', unit(CALL % (0x1008, 0x2000, 0x1008), label=0x3000))
        self.write('unit_0002.cpp', unit(CALL % (0x1008, 0x2000, 0x1008)))
        with self.assertRaisesRegex(ValueError, 'expected one generated call'):
            online.rewrite(self.generated, self.root / 'out')

    def test_wrong_callee_is_rejected(self):
        self.write('unit_0001.cpp', unit(CALL % (0x1008, 0x2004, 0x1008), label=0x3000))
        with self.assertRaisesRegex(ValueError, 'does not target'):
            online.rewrite(self.generated, self.root / 'out')

    def test_missing_entry_label_is_rejected(self):
        self.write('unit_0001.cpp', unit(CALL % (0x1008, 0x2000, 0x1008)))
        with self.assertRaisesRegex(ValueError, 'expected one label'):
            online.rewrite(self.generated, self.root / 'out')


class TrackedSourceTest(unittest.TestCase):
    def test_every_hook_handler_is_declared(self):
        header = (online.ONLINE / online.HEADER).read_text()
        handlers = {h for *_, h in online.CALL_HOOKS} | {h for *_, h in online.ENTRY_HOOKS}
        for handler in handlers:
            self.assertIn('void %s(ps2::Cpu &c);' % handler, header)

    def test_hook_sites_are_unique(self):
        sites = [site for site, *_ in online.CALL_HOOKS]
        self.assertEqual(len(sites), len(set(sites)))

    def test_tracked_translation_matches_hook_table(self):
        generated = online.ROOT / 'generated/federation-vs-zeon-dx'
        if not generated.is_dir():
            self.skipTest('tracked translation absent')
        with tempfile.TemporaryDirectory() as tmp:
            changed = online.rewrite(generated, Path(tmp) / 'out')
        self.assertEqual(len(changed), 5)


if __name__ == '__main__':
    unittest.main()
