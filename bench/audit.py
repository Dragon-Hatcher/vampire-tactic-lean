#!/usr/bin/env python3
"""Run the vampire tactic on every problem of a suite and sort what happened:

    ./audit.py <suite-dir> <results.jsonl> [--timeout 10] [-j 1]

  replayed  vampire found a proof and it was replayed
  no-proof  vampire found none within the timeout (or found a model)
  failed    vampire found a proof and replaying it failed -- the bugs
  killed    the run went past the hard limit, which a replay stuck on a step does

Unlike `run.py` this measures nothing, so problems run side by side. A problem
already in the results file is skipped, so a run can be resumed. The failures are
printed, grouped by their first line, at the end.
"""

import argparse
import concurrent.futures as cf
import json
import re
import sys
from collections import Counter
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import run  # noqa: E402

# What the tactic says when the search came back without a proof. Everything
# else it can fail with comes after vampire has found one.
NO_PROOF = ("vampire did not refute the goal",)


def audit(d: Path, timeout: int) -> dict:
    meta = json.loads((d / "meta.json").read_text())
    stmt = (d / "stmt.lean").read_text()
    res = run.lean_run(run.REPO, "Audit_" + re.sub(r"[^A-Za-z0-9]", "_", d.name),
                       "import Vampire", stmt,
                       f"vampire (timeout := {timeout}) (wallLimit := {3 * timeout}) [*]",
                       180 + 3 * timeout)
    status = res["status"]
    if status == "solved":
        status = "replayed"
    elif status == "failed" and any(m in res.get("error", "") for m in NO_PROOF):
        status = "no-proof"
    out = {"problem": d.name, "suite": meta["suite"], "status": status}
    if status in ("failed", "killed"):
        out["error"] = res.get("error") or res.get("out", "")
    return out


def headline(error: str) -> str:
    """The first line of a failure that says what went wrong, without the
    problem-specific parts."""
    for line in error.splitlines():
        if ": error:" in line:
            line = line.split(": error:", 1)[1].strip()
            return re.sub(r"\d+", "N", line)[:160]
    return error.strip().splitlines()[0][:160] if error.strip() else "(no output)"


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    ap.add_argument("suite", type=Path)
    ap.add_argument("results", type=Path)
    ap.add_argument("--timeout", type=int, default=10)
    ap.add_argument("-j", type=int, default=1,
                    help="problems at once; each loads Mathlib, several GB")
    args = ap.parse_args()
    done = {}
    if args.results.exists():
        for line in args.results.read_text().splitlines():
            r = json.loads(line)
            done[r["problem"]] = r
    todo = sorted(p for p in args.suite.iterdir()
                  if (p / "meta.json").exists() and p.name not in done)
    with cf.ThreadPoolExecutor(args.j) as pool:
        for r in pool.map(lambda d: audit(d, args.timeout), todo):
            done[r["problem"]] = r
            with args.results.open("a") as f:
                f.write(json.dumps(r) + "\n")
            print(f"{r['problem']:60} {r['status']}", flush=True)
    counts = Counter((r["suite"], r["status"]) for r in done.values())
    for suite in ("tptp", "smt"):
        print(suite, {s: n for (su, s), n in sorted(counts.items()) if su == suite})
    bad = [r for r in done.values() if r["status"] in ("failed", "killed")]
    print(f"\n{len(bad)} proofs vampire found were not replayed")
    for h, n in Counter(headline(r.get("error", "")) for r in bad).most_common():
        print(f"  {n:3}  {h}")


if __name__ == "__main__":
    main()
