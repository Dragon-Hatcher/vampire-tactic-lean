#!/usr/bin/env python3
"""Fill `problems/smtlib/` with SMT-LIB arithmetic problems, over ℤ, ℚ and ℝ.

    ./scripts/collect-smtlib.py [n]        # n total, default 100

Same shape as `collect-problems.py`: a uniform shuffle under a fixed seed, kept when the
`vampire` binary refutes the problem inside one second and this side can state it. The
problems are `unsat`, so the Lean statement is "take the assertions as hypotheses, derive
`False`" -- an SMT problem is a conjunction asked for satisfiability and has no
conjecture to negate.

## Where each numeric sort comes from, and why it is that one

SMT-LIB has two numeric sorts, `Int` and `Real`. Lean has three that matter here, and
getting ℚ out of a corpus that does not mention it takes an argument rather than a
substitution:

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

## What the tactic has to do with these

Nothing, yet. `Vampire/` has no arithmetic translation at all -- no file in it mentions
ℤ, ℚ or ℝ -- so every problem here fails today. They are the target, in the same way
`problems/tptp/` was a target when its proofs were `sorry`.

`smt2lean.py` comes from the tree next door, for the reason `collect-problems.py` reuses
`tptp2lean.py`: one translation, so these statements say what that corpus's statements
say. Its own header imports lean-smt, which this project does not depend on, so the
header is rewritten here.
"""
import os, random, re, shutil, subprocess, sys, tempfile, time
from pathlib import Path

HERE = Path(__file__).resolve().parent.parent
OUT = HERE / "problems" / "smtlib"
NEXT_DOOR = HERE.parent.parent / "vampire-tactic"

CORPUS = Path(os.environ.get("SMTLIB_DIR", NEXT_DOOR / "smtlib" / "non-incremental"))
VAMPIRE = Path(os.environ.get(
    "VAMPIRE_BIN", NEXT_DOOR / "vampire-tactic-vampire" / "build" / "vampire"))
SMT2LEAN = Path(os.environ.get(
    "SMT2LEAN", NEXT_DOOR / "bench-smtlib" / "smt2lean.py"))

WANT = int(sys.argv[1]) if len(sys.argv) > 1 else 100
SEED, LIMIT, MAX_LEAN = 20260911, 1.0, 300_000

# (lean sort, source logics, share of WANT)
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
import Mathlib
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
    for needed in (CORPUS, VAMPIRE, SMT2LEAN):
        if not needed.exists():
            sys.exit(f"not found: {needed}")
    OUT.mkdir(parents=True, exist_ok=True)
    kept = []
    for sort, logics, share in KINDS:
        share = round(share * WANT / 100)
        got = 0
        print(f"=== {sort} from {'/'.join(logics)}: want {share} ===", flush=True)
        for logic, path in pool(logics):
            if got >= share:
                break
            stem = stem_for(logic, path)
            if (OUT / f"{stem}.lean").exists():
                got += 1
                kept.append((stem, logic, sort, 0.0))
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
            print(f"[{len(kept):3d}/{WANT}] {stem[:44]:44s} {sort} {wall:.2f}s",
                  flush=True)
        if got < share:
            print(f"  only {got} of {share} for {sort}", flush=True)

    (OUT / "MANIFEST.tsv").write_text(
        "problem\tlogic\tsort\tvampire_s\n"
        + "".join(f"{s}\t{l}\t{k}\t{w:.2f}\n" for s, l, k, w in sorted(kept)))
    print(f"\n{len(kept)} in {OUT}")


if __name__ == "__main__":
    main()
