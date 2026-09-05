#!/usr/bin/env python3
"""Compare two `--trace` logs on the problems where the same proof was replayed.

    ./paired.py <before.log> <after.log> [--all]

## Why this and not the totals

`onefile.py`'s totals are the right thing to quote for a release and the wrong thing to
optimise against, because two of the three numbers in them move on their own.

**The search is nondeterministic.** Vampire's limit is wall-clock and its default
saturation algorithm reads the limit as a *search parameter*, so which refutation it finds
varies between runs of identical code. Over the 199 problems here the prover's own time
ranged from 26.7s to 44.2s across four runs of one build — ±17s on a ~125s total.

**And a different refutation is a different replay.** It is not just noise on the same
work: the step mix changes. A per-rule bucket can double because one problem's new proof
has steps of that rule its old proof did not, which reads exactly like a regression in
that rule. `flattening` did this once, for +1.34s.

So a problem is *paired* only when both runs replayed the same number of steps, which is
the cheapest available witness that the same refutation came back. Everything else is
listed as unpaired and left out of the totals.

## What the paired total is and is not

It is a controlled comparison of the replay, per bucket. It is **not** a share of the
benchmark: the problems that fail to pair are disproportionately the expensive ones,
because a hard search is both slow and nondeterministic. Pairing a run against its own
repeat pairs 188 problems and 47s of replay; pairing it against a different build pairs
160 and 26s. A percentage over the second is not comparable to a percentage over the
first, so quote the paired figure together with how much of the replay it covers — this
prints both.

## And run the two builds interleaved

Pairing controls for the search. It does not control for the machine, and a long sequence
of full-load runs drifts: late in a session of eight consecutive two-minute runs,
`Q_PRD001p1` replayed the same 1384-step proof in 3646ms that it had replayed in 1812ms
earlier. On a 16GB machine holding 5GB of accumulated environments that is memory
pressure. Alternate the builds — B A B A — and compare adjacent pairs, or the drift is
charged to whichever ran last.
"""
import argparse
import collections
import pathlib
import re

STEP = re.compile(r"\[vampire\.timing\] step \d+ (.*?): "
                  r"type (\d+)ms, script (\d+)ms, run (\d+)ms")
REPLAYED = re.compile(r"\[vampire\.timing\] replayed (\d+) steps in (\d+)ms")
# `#print axioms` closes a problem. The profiler's lines carry no source position and
# neither do the traces, so a declaration has to be closed by something.
AXIOMS = re.compile(r"'([A-Za-z0-9_]+)' (?:depends on axioms|does not depend)")
# The phases of a replay that are not per-step, each named as a bucket of its own.
OTHER = [
    (re.compile(r"clausified parent \d+ \(\w+ prenex\) in (\d+)ms"), "(clausify parent)"),
    (re.compile(r"abstracted \d+ definitions in (\d+)ms"), "(mkLetFVars)"),
    (re.compile(r"step \d+ cnf transformation \(shared\): run (\d+)ms"), "(cnf shared)"),
    (re.compile(r"step \d+ input: run (\d+)ms"), "(input steps)"),
    (re.compile(r"step \d+ avatar sat refutation: run (\d+)ms"), "(sat refutation)"),
    (re.compile(r"step \d+ skolemisation: run (\d+)ms"), "(skolemisation)"),
]


def load(path: pathlib.Path) -> dict:
    """Per problem: how many steps it replayed, how long that took, and per bucket."""
    out, buckets, steps, total = {}, collections.Counter(), None, None
    for line in path.read_text().split("\n"):
        m = STEP.match(line)
        if m:
            buckets[m.group(1)] += int(m.group(2)) + int(m.group(3)) + int(m.group(4))
            continue
        m = REPLAYED.search(line)
        if m:
            steps, total = int(m.group(1)), int(m.group(2))
            continue
        hit = False
        for pat, name in OTHER:
            mm = pat.search(line)
            if mm:
                buckets[name] += int(mm.group(1))
                hit = True
                break
        if hit:
            continue
        m = AXIOMS.search(line)
        if m:
            out[m.group(1)] = (steps, total, buckets)
            buckets, steps, total = collections.Counter(), None, None
    return out


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("before", type=pathlib.Path)
    ap.add_argument("after", type=pathlib.Path)
    ap.add_argument("--all", action="store_true", help="list the unpaired problems too")
    args = ap.parse_args()
    a, b = load(args.before), load(args.after)

    both = set(a) & set(b)
    paired = [k for k in both if a[k][0] is not None and a[k][0] == b[k][0]]
    unpaired = sorted(k for k in both if k not in paired)
    ta = sum(a[k][1] or 0 for k in paired)
    tb = sum(b[k][1] or 0 for k in paired)
    # How much of each run's whole replay the paired set covers. Without this the
    # percentage below cannot be read: see the module docstring.
    wa = sum(v[1] or 0 for v in a.values())
    wb = sum(v[1] or 0 for v in b.values())
    print(f"paired {len(paired)} of {len(both)} problems (same step count = same proof)")
    print(f"replay over paired: {ta / 1000:.2f}s -> {tb / 1000:.2f}s"
          f"   ({(tb - ta) * 100.0 / max(ta, 1):+.1f}%)")
    print(f"  covering {ta * 100.0 / max(wa, 1):.0f}% of the before run's {wa / 1000:.1f}s"
          f" and {tb * 100.0 / max(wb, 1):.0f}% of the after run's {wb / 1000:.1f}s")

    agg = collections.defaultdict(lambda: [0, 0])
    for k in paired:
        for r, v in a[k][2].items():
            agg[r][0] += v
        for r, v in b[k][2].items():
            agg[r][1] += v
    print(f"\n{'bucket':36}{'before':>10}{'after':>10}{'delta':>10}")
    for r, (x, y) in sorted(agg.items(), key=lambda kv: -max(kv[1])):
        if max(x, y) < 100:
            continue
        print(f"{r:36}{x / 1000:9.2f}s{y / 1000:9.2f}s{(y - x) / 1000:+9.2f}s")
    if unpaired:
        print(f"\n{len(unpaired)} unpaired (a different refutation was found)")
        if args.all:
            for k in unpaired:
                print(f"  {k:16} {a[k][0]} steps -> {b[k][0]} steps")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
