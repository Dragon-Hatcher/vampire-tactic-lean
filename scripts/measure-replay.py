#!/usr/bin/env python3
"""What replaying the corpus costs, and what Lean then costs on top of it.

    ./scripts/measure-replay.py --set dev
    ./scripts/measure-replay.py --set holdout --total-only

The measure is `replay + share + check`:

  replay  the tactic's own work, from `trace.vampire.timing`
  share   Lean sharing the subterms of the term it was handed
  check   the kernel checking it

The prover's search is deliberately excluded: it is not what this measures, and
it is counted in beats so it does not move when replay does. Import and
elaboration overhead are excluded for the same reason -- they are a fixed cost
per file that would dilute any ratio.

Serial by default, because the numbers are times: seven problems at once on
sixteen cores inflates each of them by a factor that varies with what else is
running, which is how a 1.1s problem comes to read 35s.
"""
import argparse, re, subprocess, sys
from pathlib import Path

HERE = Path(__file__).resolve().parent.parent
PROBLEMS = HERE / "problems"
SPLITS = HERE / "scripts" / "splits"

OPTIONS = ("set_option profiler true\nset_option profiler.threshold 0\n"
           "set_option trace.vampire.timing true")
REPLAY = re.compile(r"replay took (\d+)ms")
SHARE = re.compile(r"share common exprs took ([\d.]+)(m?s)")
CHECK = re.compile(r"type checking took ([\d.]+)(m?s)")
STEP = re.compile(r"step (\S+) took (\d+)ms")


def ms(value: str, unit: str) -> float:
    return float(value) * (1.0 if unit == "ms" else 1000.0)


def dynlibs() -> list[str]:
    """What Lake loads when it elaborates a file importing `Vampire`.

    The replay core is precompiled, so its native code has to be loaded or the
    tactic runs in the interpreter -- which is what `lean` on its own does, and
    what would make this measure the wrong thing. Read from Lake's own setup
    rather than guessed at.
    """
    setup = HERE / ".lake" / "build" / "ir" / "Vampire" / "Frontend.setup.json"
    if not setup.exists():
        return []
    import json
    libs = json.loads(setup.read_text()).get("dynlibs", [])
    return [f"--load-dynlib={x['path'] if isinstance(x, dict) else x}" for x in libs]


def measure(stem: str, work: Path, env: dict, timeout: float,
            libs: list[str]) -> dict:
    """One problem, with the profiler on."""
    src = next(iter(PROBLEMS.glob(f"*/{stem}.lean")), None)
    if src is None:
        sys.exit(f"no such problem: {stem}")
    # The options go after `import Vampire`, which registers the trace class.
    lines = []
    for line in src.read_text().split("\n"):
        lines.append(line)
        if line == "import Vampire":
            lines.append(OPTIONS)
    (work / "problem.lean").write_text("\n".join(lines))
    for suffix in (".p", ".smt2"):
        original = src.with_suffix(suffix)
        if original.exists():
            (work / original.name).write_bytes(original.read_bytes())
    try:
        p = subprocess.run(["lean", *libs, "problem.lean"], cwd=work, env=env,
                           capture_output=True, text=True, timeout=timeout)
    except subprocess.TimeoutExpired:
        return {"stem": stem, "failed": "timed out"}
    out = p.stdout + p.stderr
    for mark in ("error:", "declaration uses 'sorry'", "which this tactic does not"):
        if mark in out:
            line = next(l for l in out.split("\n") if mark in l)
            return {"stem": stem, "failed": line.strip()[:120]}
    replay = REPLAY.search(out)
    share = SHARE.search(out)
    check = CHECK.search(out)
    if replay is None:
        return {"stem": stem, "failed": "no replay reported"}
    got = {
        "stem": stem,
        "replay": float(replay.group(1)),
        "share": ms(*share.groups()) if share else 0.0,
        "check": ms(*check.groups()) if check else 0.0,
    }
    got["total"] = got["replay"] + got["share"] + got["check"]
    # What each rule cost, so that the thing to make faster is chosen by rule
    # rather than by which problems happen to be slowest.
    got["rules"] = [(m.group(1), int(m.group(2))) for m in STEP.finditer(out)]
    return got


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--set", required=True, help="a file under scripts/splits/")
    ap.add_argument("--total-only", action="store_true",
                    help="report only the totals, not the problems")
    ap.add_argument("--timeout", type=float, default=1800.0)
    ap.add_argument("--out", help="write the per-problem numbers here as TSV")
    args = ap.parse_args()

    stems = [l.strip() for l in (SPLITS / args.set).read_text().split("\n") if l.strip()]
    env = dict(__import__("os").environ)
    env["LEAN_PATH"] = subprocess.run(
        ["lake", "env", "printenv", "LEAN_PATH"], cwd=HERE,
        capture_output=True, text=True, check=True).stdout.strip()

    work = HERE / ".measure"
    work.mkdir(exist_ok=True)
    libs = dynlibs()
    if not args.total_only:
        print(f"loading {len(libs)} precompiled librar"
              f"{'y' if len(libs) == 1 else 'ies'}")
    rows, failed = [], []
    for i, stem in enumerate(stems, 1):
        got = measure(stem, work, env, args.timeout, libs)
        if "failed" in got:
            failed.append(got)
            if not args.total_only:
                print(f"[{i:3d}/{len(stems)}] {stem:32s} FAILED {got['failed']}",
                      flush=True)
            continue
        rows.append(got)
        if not args.total_only:
            print(f"[{i:3d}/{len(stems)}] {stem:32s} "
                  f"replay {got['replay']:9.0f}  share {got['share']:8.0f}  "
                  f"check {got['check']:8.0f}  total {got['total']:9.0f} ms",
                  flush=True)

    def s(key): return sum(r[key] for r in rows)
    print(f"\n{args.set}: {len(rows)} measured, {len(failed)} not")
    print(f"  replay {s('replay') / 1000:9.1f}s")
    print(f"  share  {s('share') / 1000:9.1f}s")
    print(f"  check  {s('check') / 1000:9.1f}s")
    print(f"  TOTAL  {s('total') / 1000:9.1f}s")
    if failed and args.total_only:
        print(f"  ({len(failed)} problems reported no replay; they are excluded)")

    if not args.total_only:
        by_rule, counts = {}, {}
        for r in rows:
            for rule, took in r["rules"]:
                by_rule[rule] = by_rule.get(rule, 0) + took
                counts[rule] = counts.get(rule, 0) + 1
        accounted = sum(by_rule.values())
        print(f"\n  replay accounted to rules: {accounted / 1000:.1f}s of "
              f"{s('replay') / 1000:.1f}s")
        for rule, took in sorted(by_rule.items(), key=lambda kv: -kv[1])[:12]:
            print(f"    {took / 1000:8.1f}s  {counts[rule]:6d} steps  "
                  f"{took / max(counts[rule], 1):6.1f} ms/step  {rule}")

    if args.out:
        with open(args.out, "w") as f:
            f.write("problem\treplay_ms\tshare_ms\tcheck_ms\ttotal_ms\n")
            for r in rows:
                f.write(f"{r['stem']}\t{r['replay']:.0f}\t{r['share']:.0f}"
                        f"\t{r['check']:.0f}\t{r['total']:.0f}\n")


main()
