#!/usr/bin/env python3
"""Put every extracted test in one file, and measure the tactic without the start-up.

    ./onefile.py <tests-dir> <out.lean> [--run] [--trace] [--no-profile]

## Why

`one.sh` runs each test as its own `lake lean`, which is the right shape for a pass/fail
sweep — a problem that hangs or dies takes nothing else with it — and the wrong shape
for a timing. Start-up is 1.70s a file against a median problem of about a quarter of a
second of actual work, so 195 files spend 331s getting ready and 120s working, and every
ratio quoted from the total is diluted by a factor of four.

One file pays start-up once. It also pays for the environment *once*: the simp sets,
`grind`'s extensions and the instance caches are built per process, and amortising them
across 195 problems is why this comes out below even the start-up-corrected figure from
the per-file run rather than equal to it. Which of the two numbers is "right" depends on
the question -- a user checking one file in an editor pays the per-process cost, a CI
run over a library does not -- so this is a second instrument and not a replacement.

Two things make it work at all:

- **`set_option Elab.async false`.** Declarations in one file elaborate concurrently in
  the cmdline driver, and while that is *safe* -- the FFI entry lock serialises the
  prover, which is what `Test/Concurrency.lean` asserts -- it makes CPU time
  meaningless, because a thread spinning for a core is charged to the process. Turning
  it off is what makes the number comparable to the per-file run's.

- **A `section` per problem.** Every extracted test declares the same `variable` names
  (`ι`, `inst`, `_e0`, `_op`), so concatenating them without scoping redeclares them.

## What it reports

The file's own wall and CPU time is the authoritative total; everything else is a
decomposition of it and the two available decompositions answer different questions.

`--run` uses Lean's profiler, which reports per declaration and so attributes per
problem. The number to take from it is

    type checking took Yms      the kernel, on the replayed proof term

because it happens *after* the tactic returns and no trace inside the tactic can see it:
it was the largest unaccounted block, 11.6s over the 195, and on `ALG190+1` it is 1.6s
against 1.5s for everything the tactic did.

**Profiler categories do not nest.** `tactic execution of Vampire.vampire` excludes the
`simp`, `grind` and `type checking` the tactic causes, because those get categories of
their own and are printed beside it rather than within it. So it is a floor on the
tactic's cost and not a measure of it -- 40.0s against the 76.4s the tactic's own traces
account for -- and summing the categories double-counts instead. For the tactic's
internals use `--trace`, which turns on `trace.vampire.timing` and reports the phases
the tactic measures itself. That costs about 6% on the whole file (114.2s against
108.5s), which is the price of the 40500 trace messages.

## Caveats

**Peak RSS is not comparable.** One process accumulates every problem's environment and
proof terms -- 5.0GB against 2.0GB for the worst single file -- because the allocator is
never reset (see `docs/STATUS.md`, "Open questions"). Quote memory from the per-file run.

**A failure is not isolated.** One problem that hangs stops the whole file, and an error
in one `section` can leave later ones unelaborated. Use `one.sh` or `sweep.py` to
establish pass/fail and this to measure what passes.
"""
import argparse
import pathlib
import re
import resource
import subprocess
import sys
import time

PREAMBLE = [
    "import Vampire",
    "set_option vampire.timeout 30",
    "set_option maxHeartbeats 0",
    "set_option maxRecDepth 100000000",
    "set_option linter.all false",
    # Sequential, so CPU time means something. See the module docstring.
    "set_option Elab.async false",
    "universe u",
]

# `extract.py` writes these per file; they are the preamble above and would be
# redeclared in every section.
SKIP = ("import ", "set_option ", "universe ")


def combine(tests: pathlib.Path, out: pathlib.Path, profile: bool,
             trace: bool = False) -> int:
    lines = list(PREAMBLE)
    if profile:
        lines += ["set_option profiler true", "set_option profiler.threshold 1"]
    if trace:
        lines += ["set_option trace.vampire.timing true"]
    lines.append("")
    names = sorted(p.stem for p in tests.glob("*.lean"))
    for name in names:
        body = [l for l in (tests / (name + ".lean")).read_text().split("\n")
                if not l.startswith(SKIP)]
        while body and not body[0].strip():
            body.pop(0)
        while body and not body[-1].strip():
            body.pop()
        lines += [f"section {name}"] + body + [f"end {name}", ""]
    out.write_text("\n".join(lines) + "\n")
    return len(names)


# `'name' depends on axioms: [...]` — or, for a proof that needs none at all,
# `'name' does not depend on any axioms`. Both are passes; `sorryAx` in the list is not.
AXIOMS = re.compile(r"'([A-Za-z0-9_]+)' (?:depends on axioms: \[(.*?)\]|"
                    r"does not depend on any axioms)")
TOOK = re.compile(r"^(.*?) took ([0-9.]+)(ms|s)$")


def parse(text: str, names: list[str]) -> tuple[dict, dict]:
    """Per-problem timings, and each problem's verdict.

    The profiler prints its lines *before* the `#print axioms` of the declaration they
    belong to, so a block is accumulated until a name appears and then attributed to it.
    """
    pending: dict[str, float] = {}
    per: dict[str, dict[str, float]] = {}
    verdict: dict[str, str] = {}
    for line in text.split("\n"):
        m = TOOK.match(line.strip())
        if m:
            what, n, unit = m.group(1), float(m.group(2)), m.group(3)
            pending[what] = pending.get(what, 0.0) + (n if unit == "ms" else n * 1000)
            continue
        m = AXIOMS.search(line)
        if m:
            name, axioms = m.group(1), m.group(2)
            per[name] = pending
            pending = {}
            verdict[name] = "FAIL" if axioms and "sorryAx" in axioms else "PASS"
    for name in names:
        verdict.setdefault(name, "MISSING")
    return per, verdict


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("tests", type=pathlib.Path)
    ap.add_argument("out", type=pathlib.Path)
    ap.add_argument("--run", action="store_true", help="elaborate it and report")
    ap.add_argument("--no-profile", action="store_true",
                    help="omit the profiler, for a timing with nothing measuring it")
    ap.add_argument("--trace", action="store_true",
                    help="turn on trace.vampire.timing and report the tactic's phases")
    args = ap.parse_args()

    n = combine(args.tests, args.out, profile=args.run and not args.no_profile,
                trace=args.trace)
    print(f"{n} problems -> {args.out}")
    if not args.run:
        return 0

    names = sorted(p.stem for p in args.tests.glob("*.lean"))
    root = pathlib.Path(__file__).resolve().parent.parent
    t0 = time.monotonic()
    before = resource.getrusage(resource.RUSAGE_CHILDREN)
    proc = subprocess.run(["lake", "lean", str(args.out)], cwd=root,
                          capture_output=True, text=True)
    after = resource.getrusage(resource.RUSAGE_CHILDREN)
    wall = time.monotonic() - t0
    cpu = ((after.ru_utime - before.ru_utime) + (after.ru_stime - before.ru_stime))
    rss = after.ru_maxrss / (1 << 30 if sys.platform == "darwin" else 1 << 20)
    text = proc.stdout + proc.stderr
    log = args.out.with_suffix(".log")
    log.write_text(text)

    per, verdict = parse(text, names)
    rows = []
    for name in names:
        d = per.get(name, {})
        rows.append((name, d.get("tactic execution of Vampire.vampire", 0.0),
                     d.get("type checking", 0.0)))
    rows.sort(key=lambda r: -(r[1] + r[2]))

    print(f"\n{'problem':16s} {'tactic*':>9s} {'kernel':>9s}")
    for name, tac, kern in rows[:15]:
        print(f"{name:16s} {tac:8.0f}ms {kern:8.0f}ms")
    print(f"{'... ' + str(max(0, len(rows) - 15)) + ' more':16s}")
    print(f"{'TOTAL':16s} {sum(r[1] for r in rows) / 1000:8.1f}s "
          f"{sum(r[2] for r in rows) / 1000:8.1f}s")
    print("  * a floor, not a total: the profiler's categories do not nest, so the "
          "`simp`,\n    `grind` and kernel time the tactic causes is reported beside "
          "it. Use --trace\n    for the tactic's own decomposition.")

    if args.trace:
        def total(pat: str) -> float:
            return sum(int(m) for m in re.findall(pat, text)) / 1000
        print(f"\n  translate   {total(r'translated in (\d+)ms'):6.1f}s")
        print(f"  prover      {total(r'prover took (\d+)ms'):6.1f}s"
              f"   (search {total(r'searched in (\d+)ms'):.1f}s,"
              f" export {total(r'exported in (\d+)ms'):.1f}s)")
        print(f"  replay      {total(r'replayed \d+ steps in (\d+)ms'):6.1f}s"
              f"   (step scripts {total(r'run (\d+)ms'):.1f}s,"
              f" mkLetFVars {total(r'abstracted \d+ definitions in (\d+)ms'):.1f}s)")

    passed = sum(1 for v in verdict.values() if v == "PASS")
    print(f"\n{passed}/{len(names)} pass, whole file {wall:.1f}s wall / "
          f"{cpu:.1f}s CPU, peak RSS {rss:.1f}GB, exit {proc.returncode}")
    for name in names:
        if verdict[name] != "PASS":
            print(f"  {verdict[name]} {name}")
    return 0 if passed == len(names) else 1


if __name__ == "__main__":
    sys.exit(main())
