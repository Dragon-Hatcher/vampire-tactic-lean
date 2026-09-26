#!/usr/bin/env python3
"""Tabulate a hammer experiment: `./report.py <out dir>`.

For each premise budget (`<selector>:<k>`, or `gt` for the proof's own
premises): how many premises were kept on average (those of the selected that
translate), how many facts the problems ended up with (median), how many
theorems lean-auto translated, and how many of those each prover proved --
alone, between them, and only it. Then, per selector, how many theorems a
prover proved at some budget.
"""

import argparse
import json
import statistics
from collections import defaultdict
from pathlib import Path

PROVED = {"Unsatisfiable", "Theorem"}


def facts(path: Path) -> int:
    return sum(1 for line in path.read_text().splitlines() if line.startswith("thf(fact"))


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    ap.add_argument("out", type=Path)
    args = ap.parse_args()
    exports = [json.loads(l) for l in (args.out / "export.jsonl").read_text().splitlines()]
    runs = [json.loads(l) for l in (args.out / "provers.jsonl").read_text().splitlines()]
    status = {(r["problem"], r["prover"]): r["status"] for r in runs}
    provers = sorted({r["prover"] for r in runs})
    theorems = sorted({e["i"] for e in exports})

    def stem(e: dict) -> str:
        return f"{e['i']}_{e['budget'].replace(':', '-')}"

    def order(b: str) -> tuple:
        if b == "gt":
            return ("~", 0)
        sel, _, k = b.rpartition(":")
        return (sel, int(k))
    budgets = sorted({e["budget"] for e in exports}, key=order)

    print(f"{len(theorems)} theorems\n")
    head = f"{'budget':>9} {'kept':>5} {'facts':>6} {'translated':>11}"
    for p in provers:
        head += f" {p[:14]:>14} {'only':>5}"
    head += f" {'either':>7} {'sat':>4}"
    print(head)
    solved: dict[str, dict[str, set]] = defaultdict(lambda: defaultdict(set))
    for b in budgets:
        rows = [e for e in exports if e["budget"] == b]
        translated = [e for e in rows if e["status"] == "exported"]
        ran = [e for e in translated
               if all((stem(e), p) in status for p in provers)]
        proved = {p: {e["i"] for e in ran if status[(stem(e), p)] in PROVED} for p in provers}
        either = set().union(*proved.values())
        sat = sum(1 for e in ran for p in provers
                  if status[(stem(e), p)] in {"Satisfiable", "CounterSatisfiable"})
        kept = sum(e.get("premises", 0) for e in translated) / max(1, len(translated))
        sizes = [facts(args.out / "problems" / f"{stem(e)}.p") for e in translated
                 if (args.out / "problems" / f"{stem(e)}.p").exists()]
        med = statistics.median(sizes) if sizes else 0
        line = f"{b:>9} {kept:>5.0f} {med:>6.0f} {len(translated):>5}/{len(rows):<5}"
        for p in provers:
            others = set().union(*(proved[q] for q in provers if q != p))
            line += f" {len(proved[p]):>14} {len(proved[p] - others):>5}"
            solved[b.rpartition(":")[0] or b][p] |= proved[p]
        line += f" {len(either):>7} {sat:>4}"
        if len(ran) < len(translated):
            line += f"   ({len(translated) - len(ran)} not yet run)"
        print(line)
    print("\nproved at some budget:")
    for sel, by in sorted(solved.items()):
        cells = ", ".join(f"{p} {len(by[p])}" for p in provers)
        print(f"  {sel:>5}: {cells}, either {len(set().union(*by.values()))}")

    reasons = defaultdict(int)
    for e in exports:
        if e["status"] != "exported":
            reasons[e["error"].split("::")[0].strip()[:70]] += 1
    if reasons:
        print("\nwhy translation failed:")
        for r, n in sorted(reasons.items(), key=lambda x: -x[1])[:10]:
            print(f"  {n:5d}  {r}")


if __name__ == "__main__":
    main()
