"""Synthetic HTTP checks; no game, browser, or private disc is needed."""

from contextlib import contextmanager
import http.client
import http.server
import importlib.util
from pathlib import Path
import tempfile
import threading
import unittest


ROOT = Path(__file__).resolve().parents[1]
SPEC = importlib.util.spec_from_file_location("game_server", ROOT / "scripts/game/serve.py")
serve = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(serve)


@contextmanager
def running_server(build, disc, record=None, online_config=None):
    server = http.server.ThreadingHTTPServer(("127.0.0.1", 0), serve.handler(build, disc, record, online_config))
    thread = threading.Thread(target=server.serve_forever, kwargs={"poll_interval": 0.01}, daemon=True)
    thread.start()
    try:
        yield server.server_port
    finally:
        server.shutdown()
        server.server_close()
        thread.join()


class ServerTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        self.build = self.root / "build"
        self.build.mkdir()
        self.disc = self.root / "disc.iso"
        self.disc_data = bytes(range(256)) * 256
        self.disc.write_bytes(self.disc_data)
        (self.build / "index.html").write_text("<html>synthetic</html>")
        (self.build / "index.js").write_text("/* synthetic */")
        (self.build / "index.wasm").write_bytes(b"\x00asm\x01\x00\x00\x00")
        (self.build / "index.data").write_bytes(b"synthetic")
        (self.build / "empty").touch()
        self.record = self.root / "private-vu"
        self.server = running_server(self.build, self.disc, self.record)
        self.port = self.server.__enter__()
        self.addCleanup(self.server.__exit__, None, None, None)

    def request(self, method, path, body=None, headers=None, port=None):
        connection = http.client.HTTPConnection("127.0.0.1", port or self.port, timeout=3)
        try:
            connection.request(method, path, body=body, headers=headers or {})
            response = connection.getresponse()
            return response.status, dict(response.getheaders()), response.read()
        finally:
            connection.close()

    def assert_isolated(self, headers):
        self.assertEqual(headers["Cross-Origin-Opener-Policy"], "same-origin")
        self.assertEqual(headers["Cross-Origin-Embedder-Policy"], "require-corp")
        self.assertEqual(headers["Cross-Origin-Resource-Policy"], "same-origin")

    def test_matched_assets_and_mime(self):
        for name, mime in [("index.html", "text/html"), ("index.js", "text/javascript"),
                           ("index.wasm", "application/wasm"), ("index.data", "application/octet-stream")]:
            with self.subTest(name=name):
                status, headers, data = self.request("GET", "/" + name)
                self.assertEqual(status, 200)
                self.assertEqual(data, (self.build / name).read_bytes())
                self.assertEqual(int(headers["Content-Length"]), len(data))
                self.assertTrue(headers["Content-Type"].startswith(mime))
                self.assert_isolated(headers)
        self.assertEqual(self.request("GET", "/")[2], (self.build / "index.html").read_bytes())

    def test_upstream_html_name_is_supported(self):
        (self.build / "index.html").rename(self.build / "ps2web.html")
        self.assertEqual(self.request("GET", "/")[2], (self.build / "ps2web.html").read_bytes())

    def test_optional_favicon_does_not_report_missing_game_resource(self):
        for method in ['GET', 'HEAD']:
            status, headers, data = self.request(method, '/favicon.ico')
            self.assertEqual(status, 204)
            self.assertEqual(data, b'')
            self.assert_isolated(headers)
        (self.build / 'favicon.ico').write_bytes(b'synthetic icon')
        self.assertEqual(self.request('GET', '/favicon.ico')[0], 200)

    def test_disc_head_does_not_transfer_data(self):
        status, headers, data = self.request("HEAD", "/disc.iso?probe=1")
        self.assertEqual(status, 200)
        self.assertEqual(data, b"")
        self.assertEqual(int(headers["Content-Length"]), len(self.disc_data))
        self.assertEqual(headers["Accept-Ranges"], "bytes")
        self.assert_isolated(headers)

    def test_ranges_return_exact_disc_bytes(self):
        cases = [("bytes=0-0", 0, 0), ("bytes=123-1023", 123, 1023),
                 ("bytes=65000-", 65000, 65535), ("bytes=-17", 65519, 65535),
                 ("bytes=65000-999999", 65000, 65535), ("bytes=-999999", 0, 65535)]
        for value, first, last in cases:
            with self.subTest(value=value):
                status, headers, data = self.request("GET", "/disc.iso", headers={"Range": value})
                self.assertEqual(status, 206)
                self.assertEqual(data, self.disc_data[first:last + 1])
                self.assertEqual(headers["Content-Range"], "bytes %d-%d/65536" % (first, last))
                self.assertEqual(int(headers["Content-Length"]), last - first + 1)
                self.assert_isolated(headers)

    def test_head_range_matches_get_headers_without_body(self):
        get = self.request("GET", "/disc.iso", headers={"Range": "bytes=2048-4095"})
        head = self.request("HEAD", "/disc.iso", headers={"Range": "bytes=2048-4095"})
        self.assertEqual(head[0], 206)
        self.assertEqual(head[2], b"")
        for name in ("Content-Length", "Content-Range", "Content-Type", "Accept-Ranges"):
            self.assertEqual(head[1][name], get[1][name])

    def test_invalid_and_unsatisfiable_ranges_are_rejected(self):
        for value in ("bytes=65536-", "bytes=50-49", "bytes=-0", "bytes=-", "bytes=0-1,4-5",
                      "items=0-4", "bytes=1x-4", "bytes=+1-4", "bytes=0-1junk", "bytes=" + "9" * 5000 + "-"):
            with self.subTest(value=value[:50]):
                status, headers, data = self.request("GET", "/disc.iso", headers={"Range": value})
                self.assertEqual(status, 416)
                self.assertEqual(headers["Content-Range"], "bytes */65536")
                self.assertEqual(data, b"")
                self.assert_isolated(headers)

    def test_empty_file_and_range(self):
        status, headers, data = self.request("GET", "/empty")
        self.assertEqual((status, headers["Content-Length"], data), (200, "0", b""))
        status, headers, data = self.request("GET", "/empty", headers={"Range": "bytes=0-"})
        self.assertEqual((status, headers["Content-Range"], data), (416, "bytes */0", b""))

    def test_duplicate_range_headers_are_rejected(self):
        connection = http.client.HTTPConnection("127.0.0.1", self.port, timeout=3)
        try:
            connection.putrequest("GET", "/disc.iso")
            connection.putheader("Range", "bytes=0-1")
            connection.putheader("Range", "bytes=4-5")
            connection.endheaders()
            response = connection.getresponse()
            self.assertEqual(response.status, 416)
            self.assertEqual(response.getheader("Content-Range"), "bytes */65536")
            self.assertEqual(response.read(), b"")
        finally:
            connection.close()

    def test_paths_cannot_escape_build_or_list_directories(self):
        for path in ("/../disc.iso", "/%2e%2e/disc.iso", "/%00", "/%ff", "/%5c..%5cdisc.iso", "/missing"):
            with self.subTest(path=path):
                status, headers, _ = self.request("GET", path)
                self.assertEqual(status, 404)
                self.assert_isolated(headers)
        (self.build / "directory").mkdir()
        self.assertEqual(self.request("GET", "/directory/")[0], 404)

    def test_symlink_cannot_export_files_outside_build(self):
        try:
            (self.build / "outside").symlink_to(self.disc)
        except OSError as error:
            self.skipTest("Host cannot create symlinks: %s" % error)
        self.assertEqual(self.request("GET", "/outside")[0], 404)

    def test_vu_recording_preserves_existing_image(self):
        name = "0123456789ABCDEF_0040.bin"
        data = bytes(range(256)) * 64
        self.assertEqual(self.request("PUT", "/vu1/" + name, data)[0], 201)
        self.assertEqual((self.record / name).read_bytes(), data)
        self.assertEqual(self.request("PUT", "/vu1/" + name, data)[0], 200)
        self.assertEqual(self.request("PUT", "/vu1/" + name, b"x" * serve.VU_SIZE)[0], 409)
        self.assertEqual((self.record / name).read_bytes(), data)

    def test_vu_recording_rejects_other_paths_and_sizes(self):
        name = "0123456789ABCDEF_0040.bin"
        data = b"x" * serve.VU_SIZE
        for path, payload in [("/vu1/../outside", data), ("/vu1/not-a-program.bin", data),
                              ("/vu1/" + name, data[:-1]), ("/vu1/" + name, data + b"x")]:
            with self.subTest(path=path, size=len(payload)):
                self.assertEqual(self.request("PUT", path, payload)[0], 400)
        self.assertFalse(self.record.exists())

    def test_vu_recording_cannot_follow_symlink(self):
        name = "0123456789ABCDEF_0040.bin"
        self.record.mkdir()
        try:
            (self.record / name).symlink_to(self.disc)
        except OSError as error:
            self.skipTest("Host cannot create symlinks: %s" % error)
        self.assertEqual(self.request("PUT", "/vu1/" + name, b"x" * serve.VU_SIZE)[0], 409)
        self.assertEqual(self.disc.read_bytes(), self.disc_data)

    def test_recording_is_disabled_without_explicit_directory(self):
        with running_server(self.build, self.disc) as port:
            status, headers, data = self.request("PUT", "/vu1/0123456789ABCDEF_0040.bin",
                                                 b"x" * serve.VU_SIZE, port=port)
            self.assertEqual((status, data), (501, b""))
            self.assert_isolated(headers)
        self.assertFalse(self.record.exists())

    def test_online_config_is_served_only_when_explicit(self):
        status, _, _ = self.request("GET", "/online-config.json")
        self.assertEqual(status, 404)
        (self.build / "online-config.json").write_text('{"from": "build"}')
        status, _, _ = self.request("GET", "/online-config.json")
        self.assertEqual(status, 404)
        private = self.root / "private-online.json"
        private.write_text('{"gatewayURL": "ws://127.0.0.1:1/", "token": "t"}')
        with running_server(self.build, self.disc, online_config=private) as port:
            status, headers, data = self.request("GET", "/online-config.json", port=port)
            self.assertEqual((status, data), (200, private.read_bytes()))
            self.assertTrue(headers["Content-Type"].startswith("application/json"))
            self.assert_isolated(headers)


if __name__ == "__main__":
    unittest.main()
