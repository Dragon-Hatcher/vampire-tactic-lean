#!/usr/bin/env python3
"""Fill `problems/smtlib/` with SMT-LIB arithmetic problems, over ℤ, ℚ and ℝ.

    SMTLIB_DIR=... VAMPIRE_BIN=... SMT2LEAN=... ./scripts/collect-smtlib.py [n]

`n` is the total wanted, 100 by default.

Same shape as `collect-problems.py`: a uniform shuffle under a fixed seed, kept when the
`vampire` binary refutes the problem inside one second and this side can state it. The
problems are `unsat`, so the Lean statement is "take the assertions as hypotheses, derive
`False`" -- an SMT problem is a conjunction asked for satisfiability and has no
conjecture to negate.

## Where each numeric sort comes from, and why it is that one

SMT-LIB has two numeric sorts, `Int` and `Real`. Lean has three that matter here.
SMT-LIB has no rational sort, so the ℚ problems rely on an argument that `unsat` over
`Real` carries over to ℚ; the sort is not simply renamed:

* **ℤ — `LIA`, `NIA`, `UFIDL`.** Integer logics; `Int` maps to `ℤ` directly.
* **ℝ — `NRA`.** *Nonlinear* real arithmetic, which is the one fragment that genuinely
  needs ℝ: `x * x = 2` is satisfiable over the reals and not over the rationals, so an
  `NRA` problem's unsatisfiability is a fact about a real-closed field and nothing else.
* **ℚ — `LRA`, rendered as ℚ.** Sound because ℚ and ℝ are *elementarily equivalent* for
  linear real arithmetic: both are dense ordered divisible abelian groups, that theory is
  complete, and Fourier-Motzkin eliminates quantifiers over either. So an `LRA` sentence
  has the same truth value in both and `unsat` transfers. Checked rather than assumed
  that this corpus's `LRA` is the pure fragment the argument needs: every `declare-fun`
  in it is 0-ary and no file declares a sort, so there are no uninterpreted functions to
  break the transfer -- which is why `UFLRA` is *not* a source here even though it would
  otherwise fit, and why `NRA` is not either.

The vampire check runs on the `.smt2` as written, over `Real`; for the ℚ problems it is
the transfer above that carries the result across, not a second measurement.

## What the tactic does with these

The tactic translates arithmetic over ℤ, ℚ and ℝ into TPTP's `$int`, `$rat` and `$real`,
and replays the arithmetic steps vampire takes, so these problems are part of the
corpus `run-problems.py` elaborates like any other.

## Where the inputs come from

Three things come from outside this repository and are named by environment variables:

  SMTLIB_DIR   the SMT-LIB `non-incremental` benchmarks (the directory holding `LIA/`,
               `LRA/`, ...)
  VAMPIRE_BIN  a vampire binary
  SMT2LEAN     the path of `smt2lean.py`, the SMT-LIB-to-Lean converter. As with
               `collect-problems.py` and `tptp2lean.py`, using the same converter as
               the corpus these problems are compared against keeps the statements the
               same. Its own header imports lean-smt, which this project does not
               depend on, so the header is rewritten here.
"""
import argparse, os, random, re, shutil, subprocess, sys, tempfile, time
from pathlib import Path

HERE = Path(__file__).resolve().parent.parent
OUT = HERE / "problems" / "smtlib"

# Set by `main`, from the environment.
CORPUS = VAMPIRE = SMT2LEAN = None

SEED, LIMIT, MAX_LEAN = 20260911, 1.0, 300_000

# (lean sort, source logics, percentage of the total wanted)
KINDS = [("ℤ", ["LIA", "NIA", "UFIDL"], 34),
         ("ℝ", ["NRA"], 33),
         ("ℚ", ["LRA"], 33)]

HEADER = """\
-- {stem}, from SMT-LIB ({logic}, status {status}).
-- The vampire binary refutes it in {wall:.2f}s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `{stem}.smt2`, beside this file. An SMT problem is a
-- conjunction of assertions asked for satisfiability, so an `unsat` one becomes: take
-- the assertions as hypotheses, derive `False`. One hypothesis per `assert`, in order;
-- `let` is inlined, because neither this tactic nor a first-order prover has one.
--
-- Arithmetic is over {sort}.{why}
import Mathlib.Algebra.Order.Archimedean.Real.Basic
import Vampire
set_option maxHeartbeats 0
set_option maxRecDepth 1000000
set_option linter.all false
"""

WHY = {
    "ℤ": "",
    "ℝ": "  This is *nonlinear* real arithmetic, the one fragment\n"
         "-- that needs ℝ rather than ℚ: `x * x = 2` is satisfiable over the reals and\n"
         "-- not over the rationals.",
    "ℚ": "  The source is linear real arithmetic, and ℚ and ℝ are\n"
         "-- elementarily equivalent for it -- both are dense ordered divisible abelian\n"
         "-- groups and that theory is complete -- so `unsat` transfers from the `Real`\n"
         "-- the problem is written over to the ℚ it is stated over here.",
}


def from_env(names: list[str]) -> list[Path]:
    """The paths the environment variables `names` give, or exit naming those unset."""
    missing = [n for n in names if not os.environ.get(n)]
    if missing:
        sys.exit(f"set {', '.join(missing)} (see --help for what each one is)")
    return [Path(os.environ[n]) for n in names]


def reread(lean: Path) -> tuple[str, float]:
    """The logic and the vampire time out of a file this script wrote earlier."""
    text = lean.read_text()
    logic = re.search(r"from SMT-LIB \((\S+?), status", text)
    wall = re.search(r"The vampire binary refutes it in ([0-9.]+)s", text)
    return (logic.group(1) if logic else "unknown",
            float(wall.group(1)) if wall else 0.0)


def solves(path: Path) -> float | None:
    t0 = time.monotonic()
    try:
        p = subprocess.run(
            [str(VAMPIRE), "--input_syntax", "smtlib2", "--mode", "portfolio",
             "--schedule", "casc", "--cores", "1", "-t", str(int(LIMIT)), str(path)],
            capture_output=True, text=True, timeout=LIMIT + 10)
    except subprocess.TimeoutExpired:
        return None
    wall = time.monotonic() - t0
    out = p.stdout + p.stderr
    ok = "SZS status Unsatisfiable" in out or "SZS status Theorem" in out
    return wall if ok and wall < LIMIT else None


def convert(path: Path):
    """`(theorem name, statement, status, logic)`, or None if declined."""
    try:
        p = subprocess.run([sys.executable, str(SMT2LEAN), str(path),
                            "--max-bytes", str(MAX_LEAN)],
                           capture_output=True, text=True, timeout=180)
    except subprocess.TimeoutExpired:
        return None
    if p.returncode != 0 or "\n" not in p.stdout:
        return None
    lines = p.stdout.split("\n")
    name, status, logic = lines[0], lines[1], lines[2]
    if status != "unsat":
        return None
    body = "\n".join(lines[3:])
    m = re.search(r"^theorem (.+?) := by\n", body, re.S | re.M)
    if not m:
        return None
    return name, m.group(1), status, logic


def pool(logics: list[str]) -> list[tuple[str, Path]]:
    """`(logic, path)` pairs -- the logic is the top directory, not `path.parent`.

    These benchmarks nest: `LRA/keymaera/...` and `NRA/keymaera/...` both exist, and
    naming a problem after `path.parent.name` gave two different problems the same name.
    Twelve of the first hundred collected that way overwrote each other, which showed up
    as 88 files against 100 manifest rows.
    """
    out = []
    for logic in logics:
        for p in sorted((CORPUS / logic).rglob("*.smt2")):
            if p.stat().st_size > 400_000:
                continue
            head = p.read_text(errors="replace")[:3000]
            if ":status unsat" in head:
                out.append((logic, p))
    random.Random(SEED).shuffle(out)
    return out


def stem_for(logic: str, path: Path) -> str:
    """A name unique across the corpus: the logic plus the whole relative path."""
    rel = path.relative_to(CORPUS / logic).with_suffix("")
    return logic + "_" + re.sub(r"[^A-Za-z0-9]+", "_", str(rel)).strip("_")


def main() -> None:
    global CORPUS, VAMPIRE, SMT2LEAN
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("n", nargs="?", type=int, default=100,
                    help="how many problems `problems/smtlib/` should hold "
                         "(default: 100)")
    want = ap.parse_args().n
    CORPUS, VAMPIRE, SMT2LEAN = from_env(["SMTLIB_DIR", "VAMPIRE_BIN", "SMT2LEAN"])
    for needed in (CORPUS, VAMPIRE, SMT2LEAN):
        if not needed.exists():
            sys.exit(f"not found: {needed}")
    OUT.mkdir(parents=True, exist_ok=True)
    kept = []
    for sort, logics, share in KINDS:
        share = round(share * want / 100)
        got = 0
        print(f"=== {sort} from {'/'.join(logics)}: want {share} ===", flush=True)
        for logic, path in pool(logics):
            if got >= share:
                break
            stem = stem_for(logic, path)
            if (OUT / f"{stem}.lean").exists():
                # Already here. Its logic and timing are read back out of the header
                # rather than re-measured, so the manifest keeps the real timings.
                got += 1
                was_logic, was_wall = reread(OUT / f"{stem}.lean")
                kept.append((stem, was_logic, sort, was_wall))
                continue
            c = convert(path)
            if c is None:
                continue
            name, stmt, status, logic = c
            wall = solves(path)
            if wall is None:
                continue
            if sort != "ℝ":
                # Only the sort is rewritten, and only because the generated statement
                # uses `ℝ` for nothing else: no `Real.*` lemma, no scientific-notation
                # literal (`1.5` arrives as `(15 / 10)`, exact in ℚ as in ℝ).
                stmt = stmt.replace("ℝ", sort)
            (OUT / f"{stem}.lean").write_text(
                HEADER.format(stem=stem, logic=logic, status=status, wall=wall,
                              sort=sort, why=WHY[sort])
                + f"\ntheorem {stmt} := by\n  vampire [*]\n")
            shutil.copy2(path, OUT / f"{stem}.smt2")
            kept.append((stem, logic, sort, wall))
            got += 1
            print(f"[{len(kept):3d}/{want}] {stem[:44]:44s} {sort} {wall:.2f}s",
                  flush=True)
        if got < share:
            print(f"  only {got} of {share} for {sort}", flush=True)

    (OUT / "MANIFEST.tsv").write_text(
        "problem\tlogic\tsort\tvampire_s\n"
        + "".join(f"{s}\t{l}\t{k}\t{w:.2f}\n" for s, l, k, w in sorted(kept)))
    print(f"\n{len(kept)} in {OUT}")


if __name__ == "__main__":
    main()
