#!/usr/bin/env python3
"""Run a benchmark suite: every configuration on every problem, one at a time.

    ./run.py <suite-dir> <results.jsonl> [--timeout 10] [--only-config …]

Configurations, each run to completion before the next starts:
  vampire          the vampire tactic, default schedule
  vampire+strategy the vampire tactic with the strategy the default run reported, as a
                   user would after pasting the suggestion; not run where the default
                   run found nothing
  lean-smt         lean-smt's `smt` tactic
  vampire-bin      the vampire binary on the original problem
  cvc5-bin         the cvc5 binary (on the problem written as SMT-LIB, for TPTP)
Per problem the order is shuffled, except that vampire+strategy comes after vampire;
so neither tactic always runs on a warm or a cold machine.

What is timed for a tactic is what the user waits for once the file is loaded: the
tactic itself -- measured around it, kernel checks inside it included -- plus what
Lean does with the finished proof before the theorem is added (instantiating,
sharing, kernel checking). Loading imports and elaborating the statement are not.
Each search gets `--timeout` seconds.
"""

import argparse
import json
import os
import random
import re
import subprocess
import sys
import time
from pathlib import Path

HERE = Path(__file__).resolve().parent
# The vampire tactic is run from here: a checkout built at the revision measured, so
# that building another in the meantime does not change what a sweep measures.
REPO = Path(os.environ.get("VAMPIRE_PROJECT", HERE.parent))
SMT_PROJECT = Path(os.environ.get("LEAN_SMT_PROJECT",
                                  Path.home() / "Programming/random/lean-smt-test"))
DATA = Path(os.environ.get("BENCH_DATA", Path.home() / "Programming/bench-data"))
VAMPIRE_BIN = DATA / "bin/vampire"
CVC5_BIN = DATA / "bin/cvc5"

HEADER = """\
import Lean
import Mathlib.Algebra.Order.Archimedean.Real.Basic
{imports}
set_option maxHeartbeats 0
set_option maxRecDepth 1000000
set_option linter.all false
set_option Elab.async false

open Lean Elab Tactic in
elab "timed " t:tactic : tactic => do
  IO.println s!"BENCH start {{← IO.monoNanosNow}}"
  evalTactic t
  IO.println s!"BENCH solved {{← IO.monoNanosNow}}"

def benchEnd : IO Unit := do IO.println s!"BENCH end {{← IO.monoNanosNow}}"

"""

# The theorem is added -- instantiated, shared, kernel checked -- before the command
# after it runs, elaboration being synchronous here; so the time from the tactic's
# start to that command is what the user waits for once the file is loaded.
FOOTER = "\n#eval benchEnd\n"


def lean_run(project: Path, name: str, imports: str, stmt: str, tactic: str,
             hard_limit: float) -> dict:
    path = project / f"{name}.lean"
    path.write_text(HEADER.format(imports=imports)
                    + stmt.replace("TACTIC", f"timed {tactic}") + FOOTER)
    t0 = time.monotonic()
    try:
        r = subprocess.run(["lake", "lean", path.name], cwd=project, capture_output=True,
                           text=True, timeout=hard_limit)
        out = r.stdout + r.stderr
    except subprocess.TimeoutExpired as e:
        out = e.stdout.decode(errors="replace") if isinstance(e.stdout, bytes) \
            else (e.stdout or "")
        return {"status": "killed", "wall": time.monotonic() - t0, "out": out[-2000:]}
    finally:
        path.unlink(missing_ok=True)
    wall = time.monotonic() - t0
    marks = {k: int(v) for k, v in re.findall(r"^BENCH (start|solved|end) (\d+)$", out, re.M)}
    lines = out.splitlines()
    first = next((i for i, l in enumerate(lines) if ": error:" in l or l.startswith("error:")),
                 None)
    if first is not None or not {"start", "solved", "end"} <= marks.keys():
        # A message runs on over the lines after its own, up to the next message.
        error = "\n".join(lines[first:first + 40]) if first is not None else out[-2000:]
        return {"status": "failed", "wall": wall, "error": error[:4000]}
    strategy = re.search(r'the strategy that found it is "([^"]*)"', out)
    return {"status": "solved", "wall": wall,
            "time": (marks["end"] - marks["start"]) / 1e9,
            "tactic": (marks["solved"] - marks["start"]) / 1e9,
            "strategy": strategy.group(1) if strategy else None,
            "warnings": [l for l in out.splitlines() if ": warning:" in l][:5]}


def bin_run(cmd: list[str], solved: re.Pattern, hard_limit: float) -> dict:
    t0 = time.monotonic()
    try:
        r = subprocess.run(cmd, capture_output=True, text=True, timeout=hard_limit)
        out = r.stdout + r.stderr
    except subprocess.TimeoutExpired:
        return {"status": "killed", "wall": time.monotonic() - t0}
    wall = time.monotonic() - t0
    if solved.search(out):
        return {"status": "solved", "wall": wall, "time": wall}
    return {"status": "failed", "wall": wall, "error": out[-500:]}


VAMPIRE_OK = re.compile(r"SZS status (Theorem|Unsatisfiable|ContradictoryAxioms)")
CVC5_OK = re.compile(r"^unsat\s*$", re.M)


def run_config(config: str, d: Path, meta: dict, stmt: str, timeout: int,
               strategy: str | None) -> dict:
    vampire_imports = "import Vampire"
    smt_imports = "import Smt\nimport Smt.Real"
    lean_limit = 180 + 3 * timeout
    if config == "vampire":
        return lean_run(REPO, "BenchRun", vampire_imports, stmt,
                        f"vampire (timeout := {timeout}) (wallLimit := {timeout}) +stats [*]",
                        lean_limit)
    if config == "vampire+strategy":
        return lean_run(REPO, "BenchRun", vampire_imports, stmt,
                        f'vampire (timeout := {timeout}) (wallLimit := {timeout}) '
                        f'(strategy := "{strategy}") [*]', lean_limit)
    if config == "lean-smt":
        return lean_run(SMT_PROJECT, "BenchRun", smt_imports, stmt,
                        f"smt (timeout := .some {timeout}) [*]", lean_limit)
    if config == "vampire-bin":
        if meta["suite"] == "tptp":
            cmd = [str(VAMPIRE_BIN), "--mode", "portfolio", "--schedule", "casc",
                   "--cores", "4", "-t", str(timeout), "--include", meta["include"],
                   str(d / "problem.p")]
        else:
            # `casc`, as the tactic runs: the `smtcomp` schedule refuses every
            # quantifier-free problem outright, telling the user to run Z3.
            cmd = [str(VAMPIRE_BIN), "--input_syntax", "smtlib2", "--mode", "portfolio",
                   "--schedule", "casc", "--cores", "4", "-t", str(timeout),
                   str(d / "problem.smt2")]
        return bin_run(cmd, VAMPIRE_OK, timeout + 20)
    if config == "cvc5-bin":
        return bin_run([str(CVC5_BIN), f"--tlimit={timeout * 1000}", str(d / "problem.smt2")],
                       CVC5_OK, timeout + 20)
    raise ValueError(config)


CONFIGS = ["vampire", "vampire+strategy", "lean-smt", "vampire-bin", "cvc5-bin"]


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    ap.add_argument("suite", type=Path)
    ap.add_argument("results", type=Path)
    ap.add_argument("--timeout", type=int, default=10, help="seconds each search gets")
    ap.add_argument("--configs", nargs="*", default=CONFIGS)
    ap.add_argument("--seed", type=int, default=0, help="for the per-problem order")
    args = ap.parse_args()
    done = set()
    if args.results.exists():
        for l in args.results.read_text().splitlines():
            r = json.loads(l)
            done.add((r["problem"], r["config"]))
    rng = random.Random(args.seed)
    problems = sorted(p for p in args.suite.iterdir() if (p / "meta.json").exists())
    for d in problems:
        meta = json.loads((d / "meta.json").read_text())
        stmt = (d / "stmt.lean").read_text()
        order = [c for c in args.configs if c != "vampire+strategy"]
        rng.shuffle(order)
        if "vampire+strategy" in args.configs:
            k = order.index("vampire") if "vampire" in order else -1
            order.insert(rng.randint(k + 1, len(order)), "vampire+strategy")
        strategy = None
        for r in (json.loads(l) for l in (args.results.read_text().splitlines()
                                          if args.results.exists() else [])):
            if r["problem"] == d.name and r["config"] == "vampire":
                strategy = r.get("strategy")
        for config in order:
            if (d.name, config) in done:
                continue
            # Between runs, never during one, the machine can be handed over.
            while (DATA / "PAUSE").exists():
                time.sleep(5)
            if config == "vampire+strategy" and not strategy:
                res = {"status": "no-strategy"}
            else:
                res = run_config(config, d, meta, stmt, args.timeout, strategy)
            if config == "vampire":
                strategy = res.get("strategy")
            res.update(problem=d.name, suite=meta["suite"], config=config)
            with args.results.open("a") as f:
                f.write(json.dumps(res) + "\n")
            print(f"{d.name:50} {config:18} {res['status']:8} "
                  f"{res.get('time', res.get('wall', 0)) or 0:7.2f}s", flush=True)


if __name__ == "__main__":
    main()
