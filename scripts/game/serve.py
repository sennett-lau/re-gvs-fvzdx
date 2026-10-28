#!/usr/bin/env python3
"""Serve a local game build, disc ranges, and optional VU recordings.

Implements the disc/VU HTTP protocol used by ps2-web-recomp at revision
6526f4803d98e10de50bea3af104a4d26e9df033. The upstream scripts/serve.py and
re-gvs-gvzg scripts/game/serve.py were read as protocol references; this server
adds strict range validation and bounded, non-overwriting VU recording.
"""

import argparse
import http.server
import mimetypes
from pathlib import Path
import re
import socket
import threading
from urllib.parse import unquote, urlsplit


VU_SIZE = 16384
VU_NAME = re.compile(r"[0-9A-F]{16}_[0-9A-F]{4}\.bin")
BYTE_RANGE = re.compile(r"bytes=([0-9]{0,20})-([0-9]{0,20})", re.IGNORECASE)
TYPES = {
    ".html": "text/html; charset=utf-8",
    ".js": "text/javascript; charset=utf-8",
    ".mjs": "text/javascript; charset=utf-8",
    ".wasm": "application/wasm",
    ".data": "application/octet-stream",
    ".iso": "application/octet-stream",
    ".json": "application/json; charset=utf-8",
}


def byte_range(value, size):
    """Return inclusive endpoints for one satisfiable byte range, or raise."""
    match = BYTE_RANGE.fullmatch(value.strip())
    if match is None or not any(match.groups()) or size == 0:
        raise ValueError("Expected one satisfiable byte range")
    first, last = match.groups()
    if first:
        start = int(first)
        end = min(int(last), size - 1) if last else size - 1
        if start >= size or start > end:
            raise ValueError("Unsatisfiable byte range")
    else:
        count = int(last)
        if count == 0:
            raise ValueError("Empty suffix range")
        start, end = max(0, size - count), size - 1
    return start, end


def handler(build, disc, record=None):
    """Create a handler bound to explicit local inputs; never list directories."""
    build, disc = Path(build).resolve(), Path(disc).resolve()
    record = Path(record).resolve() if record is not None else None
    record_lock = threading.Lock()

    class Handler(http.server.BaseHTTPRequestHandler):
        server_version = "FVZDXLocal/0.1"

        def setup(self):
            super().setup()
            self.connection.settimeout(15)

        def end_headers(self):
            self.send_header("Cross-Origin-Opener-Policy", "same-origin")
            self.send_header("Cross-Origin-Embedder-Policy", "require-corp")
            self.send_header("Cross-Origin-Resource-Policy", "same-origin")
            super().end_headers()

        def request_path(self):
            try:
                path = unquote(urlsplit(self.path).path, errors="strict")
            except (ValueError, UnicodeError):
                return None
            return None if "\0" in path or "\\" in path else path

        def target(self):
            name = self.request_path()
            if name is None:
                return None
            if name == "/disc.iso":
                return disc
            if name in ("/", "/index.html"):
                name = "/index.html" if (build / "index.html").is_file() else "/ps2web.html"
            try:
                file = (build / name.lstrip("/")).resolve()
                file.relative_to(build)
                return file if file.is_file() else None
            except (ValueError, OSError, RuntimeError):
                return None

        def empty_response(self, status, **headers):
            self.send_response(status)
            self.send_header("Content-Length", "0")
            self.send_header("Cache-Control", "no-store")
            for name, value in headers.items():
                self.send_header(name.replace("_", "-"), str(value))
            self.end_headers()

        def send_file(self, head=False):
            if self.request_path() == "/favicon.ico" and not (build / 'favicon.ico').is_file():
                self.empty_response(204)
                return
            file = self.target()
            if file is None:
                self.send_error(404)
                return
            try:
                source = file.open("rb")
            except OSError:
                self.send_error(404)
                return
            with source:
                source.seek(0, 2)
                size = source.tell()
                start, end = 0, size - 1
                ranges = self.headers.get_all("Range", [])
                if ranges:
                    try:
                        if len(ranges) != 1:
                            raise ValueError("Multiple Range headers")
                        start, end = byte_range(ranges[0], size)
                    except ValueError:
                        self.empty_response(416, Content_Range="bytes */%d" % size)
                        return
                self.send_response(206 if ranges else 200)
                if ranges:
                    self.send_header("Content-Range", "bytes %d-%d/%d" % (start, end, size))
                mime = TYPES.get(file.suffix.lower()) or mimetypes.guess_type(str(file))[0]
                self.send_header("Content-Type", mime or "application/octet-stream")
                self.send_header("Content-Length", str(end - start + 1))
                self.send_header("Accept-Ranges", "bytes")
                self.send_header("Cache-Control", "no-cache")
                self.end_headers()
                if head:
                    return
                try:
                    source.seek(start)
                    remaining = end - start + 1
                    while remaining:
                        data = source.read(min(1 << 20, remaining))
                        if not data:
                            break
                        self.wfile.write(data)
                        remaining -= len(data)
                except (BrokenPipeError, ConnectionResetError, socket.timeout):
                    pass

        def do_HEAD(self):
            self.send_file(head=True)

        def do_GET(self):
            self.send_file()

        def do_PUT(self):
            if record is None:
                self.empty_response(501)
                return
            path = self.request_path()
            name = path[len("/vu1/"):] if path and path.startswith("/vu1/") else ""
            lengths = self.headers.get_all("Content-Length", [])
            if (VU_NAME.fullmatch(name) is None or len(lengths) != 1
                    or lengths[0] != str(VU_SIZE) or "Transfer-Encoding" in self.headers):
                self.empty_response(400)
                return
            try:
                data = self.rfile.read(VU_SIZE)
            except (OSError, socket.timeout):
                self.empty_response(400)
                return
            if len(data) != VU_SIZE:
                self.empty_response(400)
                return
            target = record / name
            try:
                with record_lock:
                    record.mkdir(parents=True, exist_ok=True)
                    if target.is_symlink():
                        status = 409
                    elif target.exists():
                        status = 200 if target.is_file() and target.read_bytes() == data else 409
                    else:
                        with target.open("xb") as output:
                            output.write(data)
                        status = 201
            except OSError:
                self.empty_response(500)
                return
            self.empty_response(status)

        def log_message(self, *_):
            pass

    return Handler


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--build", type=Path, required=True, help="Matched HTML/JS/WASM/data directory")
    parser.add_argument("--disc", type=Path, required=True, help="Private ISO served at /disc.iso")
    parser.add_argument("--record", type=Path, help="Private directory for discovered VU1 programs")
    parser.add_argument("--port", type=int, default=8642)
    args = parser.parse_args()
    if not args.build.is_dir() or not any((args.build / name).is_file() for name in ("index.html", "ps2web.html")):
        parser.error("--build must contain index.html or ps2web.html")
    if not args.disc.is_file():
        parser.error("--disc must be an existing file")
    if args.record is not None and args.record.exists() and not args.record.is_dir():
        parser.error("--record must name a directory")
    if not 0 <= args.port <= 65535:
        parser.error("--port must be between 0 and 65535")
    server = http.server.ThreadingHTTPServer(("127.0.0.1", args.port), handler(args.build, args.disc, args.record))
    print("Game ready at http://127.0.0.1:%d/" % server.server_port, flush=True)
    try:
        server.serve_forever()
    except KeyboardInterrupt:
        pass
    finally:
        server.server_close()


if __name__ == "__main__":
    main()
