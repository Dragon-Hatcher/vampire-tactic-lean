#!/usr/bin/env python3
"""Tabulate a hammer experiment: `./report.py <out dir>`.

For each premise budget: how many premises were kept on average (those of the
selected that translate), how many theorems lean-auto translated, and how many
of those each prover proved -- alone, between them, and only it. Then, per
theorem, whether a prover proved it at any budget.
"""

import argparse
import json
from collections import defaultdict
from pathlib import Path

PROVED = {"Unsatisfiable", "Theorem"}


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    ap.add_argument("out", type=Path)
    args = ap.parse_args()
    exports = [json.loads(l) for l in (args.out / "export.jsonl").read_text().splitlines()]
    runs = [json.loads(l) for l in (args.out / "provers.jsonl").read_text().splitlines()]
    status = {(r["problem"], r["prover"]): r["status"] for r in runs}
    provers = sorted({r["prover"] for r in runs})
    theorems = sorted({e["i"] for e in exports})

    def order(b: str) -> tuple:
        return (1, 0) if b == "gt" else (0, int(b))
    budgets = sorted({e["budget"] for e in exports}, key=order)

    print(f"{len(theorems)} theorems\n")
    head = f"{'budget':>7} {'kept':>5} {'translated':>11}"
    for p in provers:
        head += f" {p[:14]:>14} {'only':>5}"
    head += f" {'either':>7} {'sat':>4}"
    print(head)
    solved = defaultdict(set)
    for b in budgets:
        rows = [e for e in exports if e["budget"] == b]
        translated = [e for e in rows if e["status"] == "exported"]
        proved = {p: {e["i"] for e in translated
                      if status.get((f"{e['i']}_{b}", p)) in PROVED} for p in provers}
        either = set().union(*proved.values())
        sat = sum(1 for e in translated for p in provers
                  if status.get((f"{e['i']}_{b}", p)) in {"Satisfiable", "CounterSatisfiable"})
        kept = sum(e.get("premises", 0) for e in translated) / max(1, len(translated))
        line = f"{b:>7} {kept:>5.0f} {len(translated):>5}/{len(rows):<5}"
        for p in provers:
            others = set().union(*(proved[q] for q in provers if q != p))
            line += f" {len(proved[p]):>14} {len(proved[p] - others):>5}"
            if b != "gt":
                solved[p] |= proved[p]
        line += f" {len(either):>7} {sat:>4}"
        print(line)
    print("\nproved at some SInE budget:")
    for p in provers:
        print(f"  {p}: {len(solved[p])}")
    print(f"  either: {len(set().union(*solved.values()))}")

    reasons = defaultdict(int)
    for e in exports:
        if e["status"] != "exported":
            reasons[e["error"].split("::")[0].strip()[:70]] += 1
    print("\nwhy translation failed:")
    for r, n in sorted(reasons.items(), key=lambda x: -x[1])[:10]:
        print(f"  {n:5d}  {r}")


if __name__ == "__main__":
    main()
