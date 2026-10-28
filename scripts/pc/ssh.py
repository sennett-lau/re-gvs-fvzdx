#!/usr/bin/env python3
"""Run stdin on an explicitly selected Windows SSH host, without shell interpolation."""
import argparse
import base64
import subprocess
import sys

parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument("--host", required=True, help="Private SSH alias (never put credentials here)")
parser.add_argument("--wsl", metavar="DISTRIBUTION", help="Run Bash stdin in this WSL distribution")
parser.add_argument("--timeout", type=int, default=55)
args = parser.parse_args()
source = sys.stdin.read()
if args.wsl:
    if not args.wsl.replace("-", "").replace("_", "").isalnum():
        parser.error("Use a simple WSL distribution name")
    command = f"wsl.exe -d {args.wsl} -- bash -s"
    data = source.encode()
else:
    prefix = "[Console]::OutputEncoding=[System.Text.UTF8Encoding]::new($false); $OutputEncoding=[Console]::OutputEncoding; $ProgressPreference='SilentlyContinue';\n"
    encoded = base64.b64encode((prefix + source).encode("utf-16le")).decode()
    command = "powershell.exe -NoProfile -EncodedCommand " + encoded
    data = None
result = subprocess.run(
    ["ssh", "-o", "BatchMode=yes", "-o", "LogLevel=ERROR", "-o", "ConnectTimeout=10", args.host, command],
    input=data, capture_output=True, timeout=args.timeout,
)
sys.stdout.buffer.write(result.stdout)
sys.stderr.buffer.write(result.stderr)
raise SystemExit(result.returncode)
