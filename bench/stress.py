#!/usr/bin/env python3
"""Rerun problems that replay with options that steer vampire into other rules:

    ./stress.py <results.jsonl> <audit.jsonl>... [--per-suite N]

Each problem an audit found `replayed` is run again under each option set that
fits it -- the arithmetic ones for SMT-LIB problems over numbers, the others for
the rest -- and what happened is appended to `results.jsonl`, one run a line.
A run already in the results is skipped, so a run can be resumed. Runs one at a
time, with the audit's time and memory limits.
"""

import argparse
import json
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import run  # noqa: E402

ALASCA = ("abstracting_linear_arithmetic_superposition_calculus", "on")
ARITHMETIC = {
    "ev-force": [("evaluation", "force")],
    "ev-simple-norm": [("evaluation", "simple"), ("normalize_inequalities", "on")],
    "cancel": [("cancellation", "force"), ("evaluation", "force")],
    "alasca": [ALASCA],
    "pum": [("push_unary_minus", "on")],
    "asg": [("arithmetic_subterm_generalizations", "force")],
    "gve": [("gaussian_variable_elimination", "force")],
}
LOGIC = {
    "ep": [("equality_proxy", "RSTC")],
    "gsp": [("general_splitting", "on")],
    "ins": [("inequality_splitting", "1")],
    "noavatar": [("avatar", "off")],
    "urr": [("unit_resulting_resolution", "on")],
    "cond": [("condensation", "on")],
    "acc": [("avatar_congruence_closure", "on")],
}
NUMBERS = re.compile(r"ℤ|ℝ|ℚ")


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    ap.add_argument("results", type=Path)
    ap.add_argument("audits", type=Path, nargs="+")
    ap.add_argument("--timeout", type=int, default=10)
    args = ap.parse_args()
    done = set()
    if args.results.exists():
        for line in args.results.read_text().splitlines():
            r = json.loads(line)
            done.add((r["problem"], r["options"]))
    todo = []
    for audit in args.audits:
        suite = audit.parent / "suites" / audit.name.split("-")[0]
        for line in audit.read_text().splitlines():
            r = json.loads(line)
            if r["status"] != "replayed":
                continue
            d = suite / r["problem"]
            stmt = (d / "stmt.lean").read_text()
            sets = ARITHMETIC if NUMBERS.search(stmt) else LOGIC
            for name, opts in sets.items():
                if (r["problem"], name) not in done:
                    todo.append((d, stmt, name, opts))
    print(f"{len(todo)} runs", flush=True)
    for d, stmt, name, opts in todo:
        options = ", ".join(f'("{k}", "{v}")' for k, v in opts)
        res = run.lean_run(run.REPO, "Stress_" + re.sub(r"[^A-Za-z0-9]", "_", d.name),
                           "import Vampire", stmt,
                           f"vampire (timeout := {args.timeout}) (wallLimit := {3 * args.timeout}) "
                           f"(options := #[{options}]) [*]",
                           180 + 3 * args.timeout)
        status = res["status"]
        if status == "solved":
            status = "replayed"
        elif status == "failed" and "vampire did not refute the goal" in res.get("error", ""):
            status = "no-proof"
        out = {"problem": d.name, "options": name, "status": status}
        if status == "failed":
            out["error"] = res.get("error", "")
        with args.results.open("a") as f:
            f.write(json.dumps(out) + "\n")
        print(f"{d.name:60} {name:16} {status}", flush=True)


if __name__ == "__main__":
    main()
