#!/usr/bin/env python3
"""Draw a benchmark sample: problems chosen uniformly at random, not by any prover.

    ./sample.py <data-dir> <suite-name> --seed N [--tptp 100] [--smt 100]

The population is every problem that is provable and can be stated in Lean:
* TPTP: FOF and CNF problems whose Status is Theorem, Unsatisfiable or
  ContradictoryAxioms (TFF and THF are typed or higher-order, which neither the
  converter nor the vampire tactic reads);
* SMT-LIB: `unsat` benchmarks of the indexed logics.
A problem is drawn, converted, and kept if the converter can state it within its size
cap and Lean elaborates the statement; otherwise the next one is drawn. Problems in this repository's corpus, and in any
suite already under `<data-dir>/suites/`, are never drawn: those have been looked at.

Each problem gets a directory with the original input, the statement (`stmt.lean`,
ending in `TACTIC`), an SMT-LIB rendering for cvc5 (`problem.smt2`) and `meta.json`.
"""

import argparse
import json
import random
import re
import shutil
import subprocess
import sys
import tarfile
from pathlib import Path

HERE = Path(__file__).resolve().parent
REPO = HERE.parent
PROVABLE = {"Theorem", "Unsatisfiable", "ContradictoryAxioms"}


def seen(data: Path) -> set[str]:
    out = {p.stem for p in (REPO / "problems").glob("*/*.lean")}
    for meta in (data / "suites").glob("*/*/meta.json"):
        out.add(json.loads(meta.read_text())["stem"])
    return out


STATABLE = """import Lean
import Mathlib.Algebra.Order.Archimedean.Real.Basic
set_option maxHeartbeats 0
set_option maxRecDepth 1000000
set_option linter.all false
"""


def statable(stmt: str) -> bool:
    """Whether Lean elaborates the statement at all: some problems exceed what it can
    represent, and then no tactic can be run on them, so they are no problem to draw."""
    path = REPO / "BenchStatable.lean"
    path.write_text(STATABLE + stmt.replace("TACTIC", "sorry"))
    try:
        r = subprocess.run(["lake", "lean", path.name], cwd=REPO, capture_output=True,
                           text=True, timeout=600)
        return r.returncode == 0 and ": error:" not in r.stdout + r.stderr
    except subprocess.TimeoutExpired:
        return False
    finally:
        path.unlink(missing_ok=True)


def extract(entries: list[dict], dest: Path, zst: bool) -> dict[str, Path]:
    """The members, unpacked in one pass per archive."""
    by_archive: dict[str, list[dict]] = {}
    for e in entries:
        by_archive.setdefault(e["archive"], []).append(e)
    got = {}
    for archive, es in by_archive.items():
        want = {e["member"]: e for e in es}
        if zst:
            proc = subprocess.Popen(["zstd", "-dc", archive], stdout=subprocess.PIPE)
            tar = tarfile.open(fileobj=proc.stdout, mode="r|")
        else:
            proc, tar = None, tarfile.open(archive, "r|gz")
        with tar:
            for m in tar:
                if m.name in want:
                    path = dest / (str(len(got)) + Path(m.name).suffix)
                    path.write_bytes(tar.extractfile(m).read())
                    got[m.name] = path
                    if len(got) == len(want):
                        break
        if proc:
            proc.kill()
    return got


def sample_tptp(data: Path, suite: Path, rng: random.Random, n: int, avoid: set[str]):
    index = [e for e in json.loads((data / "tptp-index.json").read_text())
             if e["status"] in PROVABLE and e["stem"] not in avoid]
    rng.shuffle(index)
    root = next((data / "TPTP").glob("TPTP-v*"))
    kept, i = 0, 0
    staging = suite / ".staging"
    while kept < n and i < len(index):
        batch = index[i:i + 4 * (n - kept)]
        i += len(batch)
        staging.mkdir(parents=True, exist_ok=True)
        files = extract(batch, staging, zst=False)
        for e in batch:
            if kept == n:
                break
            src = files.get(e["member"])
            if src is None:
                continue
            d = suite / f"tptp-{kept:03d}-{e['stem']}"
            d.mkdir(parents=True)
            shutil.copy(src, d / "problem.p")
            r = subprocess.run([sys.executable, str(HERE / "tptp2bench.py"), str(root),
                                str(d / "problem.p"), "--name", "T",
                                "--smt2", str(d / "problem.smt2")],
                               capture_output=True, text=True, timeout=600)
            if r.returncode != 0:
                print(f"skip {e['stem']}: {r.stderr.strip()[:100]}", flush=True)
                shutil.rmtree(d)
                continue
            if not statable(r.stdout):
                print(f"skip {e['stem']}: Lean cannot elaborate the statement", flush=True)
                shutil.rmtree(d)
                continue
            (d / "stmt.lean").write_text(r.stdout)
            (d / "meta.json").write_text(json.dumps(
                {"suite": "tptp", "stem": e["stem"], "status": e["status"],
                 "include": str(root)}))
            kept += 1
        shutil.rmtree(staging)
    print(f"tptp: {kept} kept of {i} drawn")


def sample_smt(data: Path, suite: Path, rng: random.Random, n: int, avoid: set[str]):
    index = [e for e in json.loads((data / "smt-index.json").read_text())
             if e["status"] == "unsat"]
    for e in index:
        e["stem"] = e["logic"] + "_" + re.sub(r"[^A-Za-z0-9]", "_", Path(e["member"]).stem)
    index = [e for e in index if e["stem"] not in avoid]
    rng.shuffle(index)
    kept, i = 0, 0
    staging = suite / ".staging"
    while kept < n and i < len(index):
        batch = index[i:i + 4 * (n - kept)]
        i += len(batch)
        staging.mkdir(parents=True, exist_ok=True)
        files = extract(batch, staging, zst=True)
        for e in batch:
            if kept == n:
                break
            src = files.get(e["member"])
            if src is None:
                continue
            d = suite / f"smt-{kept:03d}-{e['stem'][:60]}"
            d.mkdir(parents=True)
            shutil.copy(src, d / "problem.smt2")
            r = subprocess.run([sys.executable, str(HERE / "smt2lean.py"),
                                str(d / "problem.smt2"), "--name", "T"],
                               capture_output=True, text=True, timeout=600)
            if r.returncode != 0:
                print(f"skip {e['stem']}: {r.stderr.strip()[:100]}", flush=True)
                shutil.rmtree(d)
                continue
            if not statable(r.stdout):
                print(f"skip {e['stem']}: Lean cannot elaborate the statement", flush=True)
                shutil.rmtree(d)
                continue
            (d / "stmt.lean").write_text(r.stdout)
            (d / "meta.json").write_text(json.dumps(
                {"suite": "smt", "stem": e["stem"], "status": "unsat",
                 "logic": e["logic"]}))
            kept += 1
        shutil.rmtree(staging)
    print(f"smt: {kept} kept of {i} drawn")


def main() -> None:
    ap = argparse.ArgumentParser(description="draw a benchmark sample uniformly at random")
    ap.add_argument("data", type=Path)
    ap.add_argument("name")
    ap.add_argument("--seed", type=int, required=True)
    ap.add_argument("--tptp", type=int, default=100)
    ap.add_argument("--smt", type=int, default=100)
    args = ap.parse_args()
    suite = args.data / "suites" / args.name
    avoid = seen(args.data)
    suite.mkdir(parents=True, exist_ok=True)
    # Each half is drawn once, from its own generator, so drawing the SMT half later
    # draws the same problems as drawing both at once.
    if args.tptp:
        if any(suite.glob("tptp-*")):
            sys.exit(f"{suite} already has its TPTP problems")
        sample_tptp(args.data, suite, random.Random(f"{args.seed}-tptp"), args.tptp, avoid)
    if args.smt:
        if any(suite.glob("smt-*")):
            sys.exit(f"{suite} already has its SMT problems")
        sample_smt(args.data, suite, random.Random(f"{args.seed}-smt"), args.smt, avoid)


if __name__ == "__main__":
    main()
