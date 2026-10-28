"""Guard the reproduced cross-platform source-transfer contamination failure."""
import importlib.util
from pathlib import Path
import tempfile
import unittest

spec = importlib.util.spec_from_file_location('game_common', Path(__file__).resolve().parents[1] / 'scripts/game/common.py')
common = importlib.util.module_from_spec(spec)
spec.loader.exec_module(common)


class TranslationTests(unittest.TestCase):
    def test_reject_modified_missing_or_appledouble_source(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            generated = root / 'generated'
            generated.mkdir()
            source = generated / 'unit_0000.cpp'
            original = b'void synthetic_unit() {}\n'
            source.write_bytes(original)
            common.write_json(root / 'translation.json', {'generated': common.fingerprints(generated)})
            common.verify_translation(root)
            sidecar = generated / '._unit_0000.cpp'
            sidecar.write_bytes(b'\x00\x05\x16\x07Mac OS X metadata')
            with self.assertRaisesRegex(ValueError, 'file set/fingerprint'):
                common.verify_translation(root)
            sidecar.unlink()
            source.write_bytes(b'void different_unit() {}\n')
            with self.assertRaises(ValueError):
                common.verify_translation(root)
            source.unlink()
            with self.assertRaises(ValueError):
                common.verify_translation(root)
            source.write_bytes(original)
            common.verify_translation(root)


if __name__ == '__main__':
    unittest.main()
