#!/usr/bin/env python3
"""Elaborate every problem in `problems/` and report which ones the tactic closes.

    ./scripts/run-problems.py                 # the whole corpus
    ./scripts/run-problems.py tptp            # one directory of it
    ./scripts/run-problems.py ALG033+1 ...    # named problems, wherever they live
    ./scripts/run-problems.py --split smoke   # the problems a file of scripts/splits/ names
    ./scripts/run-problems.py --skip-known-failures   # all but scripts/splits/known-failures

Each problem is a standalone Lean file whose only proof is `by vampire`, so running
one is just `lean` on it under the package's `LEAN_PATH`. They are independent, so
the corpus is elaborated across all cores; `-j` sets the width.

Output is one line per problem -- `ok`, or the first error `lean` reported -- and a
summary. The tactic itself starts the worker as a separate process, so the default
width leaves a core spare.
"""
import argparse, concurrent.futures as cf, os, subprocess, sys, time
from pathlib import Path

from _common import PROBLEMS, dynlibs, find_problem, incomplete, lean_path, read_split


def select(names: list[str]) -> list[Path]:
    """The problem files a command line asks for, in a stable order."""
    if not names:
        return sorted(PROBLEMS.glob("*/*.lean"))
    out: list[Path] = []
    for name in names:
        if (PROBLEMS / name).is_dir():
            out += sorted((PROBLEMS / name).glob("*.lean"))
        else:
            hits = find_problem(name)
            if not hits:
                sys.exit(f"no such problem: {name}")
            out += hits
    return out


def verdict(returncode: int, out: str) -> str | None:
    """Why the problem failed, or none if it passed.

    The one thing a passing problem does print is the tactic's offer to name the
    strategy that found the proof.
    """
    if (line := incomplete(out)) is not None:
        return line
    if returncode != 0:
        return out.strip() or f"exit {returncode} with no output"
    return None


def run(path: Path, env: dict[str, str], timeout: float,
        libs: list[str]) -> tuple[Path, float, str | None]:
    """The problem, the seconds it took, and why it failed if it did."""
    t0 = time.monotonic()
    try:
        p = subprocess.run(["lean", *libs, path.name], cwd=path.parent, env=env,
                           capture_output=True, text=True, timeout=timeout)
    except subprocess.TimeoutExpired:
        return path, time.monotonic() - t0, f"timed out after {timeout:.0f}s"
    return path, time.monotonic() - t0, verdict(p.returncode, p.stdout + p.stderr)


def main() -> None:
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("names", nargs="*", help="a problems/ subdirectory, or problem stems")
    ap.add_argument("-j", type=int, default=max(1, (os.cpu_count() or 2) - 1),
                    help="how many problems to elaborate at once "
                         "(default: one fewer than the cores)")
    ap.add_argument("--timeout", type=float, default=600.0,
                    help="seconds before a problem counts as failed (default: 600)")
    ap.add_argument("--full", action="store_true", help="whole error, not its first line")
    ap.add_argument("--split", help="a file under scripts/splits/, one problem per line")
    ap.add_argument("--skip-known-failures", action="store_true",
                    help="leave out the problems scripts/splits/known-failures names: "
                         "vampire finds no proof for them, and only gives up after "
                         "a long search")
    args = ap.parse_args()
    if args.split:
        args.names += read_split(args.split)

    libs = dynlibs()
    env = dict(os.environ, LEAN_PATH=lean_path())
    files = select(args.names)
    if args.skip_known_failures:
        known = set(read_split("known-failures"))
        files = [f for f in files if f.stem not in known]
    print(f"{len(files)} problems, {args.j} at a time", flush=True)

    failed = []
    with cf.ThreadPoolExecutor(args.j) as pool:
        futures = [pool.submit(run, f, env, args.timeout, libs) for f in files]
        for done, fut in enumerate(cf.as_completed(futures), 1):
            path, wall, err = fut.result()
            tag = f"[{done:3d}/{len(files)}] {path.parent.name}/{path.stem:28s} {wall:6.1f}s"
            if err is None:
                print(f"{tag}  ok", flush=True)
            else:
                failed.append((path, err))
                shown = err if args.full else err.split("\n")[0]
                print(f"{tag}  FAIL  {shown}", flush=True)

    print(f"\n{len(files) - len(failed)}/{len(files)} passed")
    for path, err in sorted(failed):
        print(f"  {path.parent.name}/{path.stem}: {err.split(chr(10))[0]}")
    sys.exit(1 if failed else 0)


if __name__ == "__main__":
    main()
