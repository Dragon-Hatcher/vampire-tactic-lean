#!/usr/bin/env python3
"""Index the TPTP and SMT-LIB archives without unpacking them.

    ./index.py tptp  <TPTP-vX.tgz>   <data-dir>   → data-dir/tptp-index.json, Axioms/
    ./index.py smt   <logic.tar.zst>… <data-dir>  → data-dir/smt-index.json

Each entry records a problem's archive, member name, status and size, which is all
sampling needs. The archives stay packed: unpacked, SMT-LIB alone is tens of gigabytes.
TPTP's `Axioms/` is unpacked, since the problems sampled include from it.
"""

import json
import re
import subprocess
import sys
import tarfile
from pathlib import Path

STATUS_TPTP = re.compile(rb"%\s*Status\s*:\s*(\S+)")
STATUS_SMT = re.compile(rb"\(\s*set-info\s+:status\s+(\w+)\s*\)")


def index_tptp(archive: Path, data: Path) -> None:
    out = []
    axioms = data / "TPTP"
    with tarfile.open(archive, "r|gz") as tar:
        for m in tar:
            if not m.isfile():
                continue
            parts = m.name.split("/")
            if "Axioms" in parts:
                tar.extract(m, axioms, filter="data")
                continue
            if len(parts) < 3 or parts[-3] != "Problems" or not m.name.endswith(".p"):
                continue
            stem = parts[-1][:-2]
            # `+` is FOF and `-` is CNF; `_` is TFF and `^` THF, which are not read.
            if "+" not in stem and "-" not in stem:
                continue
            head = tar.extractfile(m).read(8192)
            s = STATUS_TPTP.search(head)
            out.append({"archive": str(archive), "member": m.name, "stem": stem,
                        "status": s.group(1).decode() if s else "NONE", "size": m.size})
    (data / "tptp-index.json").write_text(json.dumps(out))
    print(f"{len(out)} FOF/CNF problems indexed")


def index_smt(archives: list[Path], data: Path) -> None:
    out = []
    for archive in archives:
        logic = archive.name.split(".")[0]
        zstd = subprocess.Popen(["zstd", "-dc", str(archive)], stdout=subprocess.PIPE)
        n = 0
        with tarfile.open(fileobj=zstd.stdout, mode="r|") as tar:
            for m in tar:
                if not m.isfile() or not m.name.endswith(".smt2"):
                    continue
                head = tar.extractfile(m).read(65536)
                s = STATUS_SMT.search(head)
                out.append({"archive": str(archive), "member": m.name, "logic": logic,
                            "status": s.group(1).decode() if s else "unknown",
                            "size": m.size})
                n += 1
        zstd.wait()
        print(f"{logic}: {n}", flush=True)
    (data / "smt-index.json").write_text(json.dumps(out))
    print(f"{len(out)} SMT-LIB problems indexed")


def main() -> None:
    kind, *rest = sys.argv[1:]
    data = Path(rest[-1])
    if kind == "tptp":
        index_tptp(Path(rest[0]), data)
    else:
        index_smt([Path(a) for a in rest[:-1]], data)


if __name__ == "__main__":
    main()
