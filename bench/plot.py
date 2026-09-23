#!/usr/bin/env python3
"""Cactus plot of a benchmark run: for each configuration, how many problems it solves
within a given time.

    ./plot.py <results.jsonl> <out.png> [--title …]

Each curve is a configuration's solved problems sorted by time: the point (n, t) says
the n-th fastest problem it solved took t seconds. Further right is more problems
solved, lower is faster. Panels: the TPTP half, the SMT-LIB half, and both.
"""

import argparse
import json
from collections import defaultdict
from pathlib import Path

import matplotlib

matplotlib.use("Agg")
import matplotlib.pyplot as plt  # noqa: E402

STYLE = {
    "vampire": ("vampire tactic", "#c0392b", "-"),
    "vampire-before": ("vampire tactic, before", "#c0392b", ":"),
    "vampire+strategy": ("vampire tactic, strategy named", "#e67e22", "--"),
    "lean-smt": ("lean-smt tactic", "#2471a3", "-"),
    "vampire-bin": ("vampire binary", "#7f8c8d", ":"),
    "cvc5-bin": ("cvc5 binary", "#27ae60", ":"),
}


def load(path: Path, exclude: set[str]) -> dict:
    times = defaultdict(lambda: defaultdict(list))
    problems = defaultdict(set)
    for line in path.read_text().splitlines():
        r = json.loads(line)
        if r["problem"] in exclude:
            continue
        problems[r["suite"]].add(r["problem"])
        if r["status"] == "solved":
            times[r["suite"]][r["config"]].append(r["time"])
    return times, problems


def panel(ax, series: dict, total: int, title: str) -> None:
    for config, (label, color, style) in STYLE.items():
        ts = sorted(series.get(config, []))
        if not ts:
            continue
        ax.plot(range(1, len(ts) + 1), ts, style, color=color, lw=2,
                label=f"{label} ({len(ts)})", drawstyle="steps-post")
    ax.set_yscale("log")
    ax.set_xlim(0, total)
    ax.set_xlabel(f"problems solved, of {total}")
    ax.set_ylabel("time per problem (s)")
    ax.set_title(title)
    ax.grid(True, which="both", alpha=0.3)
    ax.legend(loc="upper left", fontsize=8)


def main() -> None:
    ap = argparse.ArgumentParser(description="cactus plot of a benchmark run")
    ap.add_argument("results", type=Path)
    ap.add_argument("out", type=Path)
    ap.add_argument("--title", default="")
    ap.add_argument("--exclude", nargs="*", default=[],
                    help="problems left out: ones Lean cannot elaborate the statement of")
    args = ap.parse_args()
    times, problems = load(args.results, set(args.exclude))
    fig, axes = plt.subplots(1, 3, figsize=(18, 6))
    both = defaultdict(list)
    for suite in times:
        for c, ts in times[suite].items():
            both[c] += ts
    panel(axes[0], times["tptp"], len(problems["tptp"]), "TPTP (FOF/CNF)")
    panel(axes[1], times["smt"], len(problems["smt"]), "SMT-LIB")
    panel(axes[2], both, len(problems["tptp"]) + len(problems["smt"]), "both")
    fig.suptitle(args.title)
    fig.tight_layout()
    fig.savefig(args.out, dpi=120)
    print(f"wrote {args.out}")


if __name__ == "__main__":
    main()
