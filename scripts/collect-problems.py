#!/usr/bin/env python3
"""Fill `problems/tptp/` with TPTP problems the vampire binary refutes in under a second.

    TPTP_DIR=... VAMPIRE_BIN=... TPTP2LEAN=... ./scripts/collect-problems.py [n]

`n` is the total wanted, 100 by default.

The sample is a uniform shuffle, under a fixed seed, of every TPTP v9.3.1 problem whose
declared status is provable. It is walked in that order, and a problem is kept when the
`vampire` binary refutes it inside one second *and* the converter can state it in Lean.
The converter declines `tff`/`thf` problems, so the kept set is untyped first-order
logic without any explicit filter for it.

The run is resumable, because the seed fixes the order: asking for more walks the same
sequence and does work only for the problems not already collected. The first ten of
`problems/` were collected by this at `n = 10`; running it at 100 keeps those ten and
adds ninety.

Under a second for the binary is not under a second for the tactic. These are easy
searches on purpose, so that a failure points at the translation or the proof
reconstruction, not at the prover's ability to find a refutation.

Three things come from outside this repository and are named by environment variables:

  TPTP_DIR     a TPTP v9.3.1 checkout (the directory holding `Problems/`)
  VAMPIRE_BIN  a vampire binary
  TPTP2LEAN    the directory holding `tptp2lean.py`, the TPTP-to-Lean converter. Using
               the same converter as the corpus these problems are compared against
               keeps the statements the same.
"""
import argparse, os, random, re, shutil, subprocess, sys, tempfile, time
from pathlib import Path

HERE = Path(__file__).resolve().parent.parent          # the root of this repository
OUT = HERE / "problems" / "tptp"

SEED, LIMIT, TYPECHECK = 20260909, 1.0, 90.0

# Set by `main`, from the environment.
TPTP = VAMPIRE = TPTP2LEAN = None
tptp2lean = None


def from_env(names: list[str]) -> list[Path]:
    """The paths the environment variables `names` give, or exit naming those unset."""
    missing = [n for n in names if not os.environ.get(n)]
    if missing:
        sys.exit(f"set {', '.join(missing)} (see --help for what each one is)")
    return [Path(os.environ[n]) for n in names]


HEADER = """\
-- {stem}, from TPTP v9.3.1 ({domain}).
-- TPTP Status: {status}.  The vampire binary refutes it in {wall:.2f}s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `{stem}.p`, beside this file. This is its statement in Lean:
-- one type variable for TPTP's single sort, functors as functions into it, predicates
-- as functions into `Prop`, and the whole problem as `axiom₁ → … → axiomₙ → goal`.
-- `False` as the goal means the problem states no conjecture and asks for a refutation.
--
-- Only `Vampire` is imported, for the `vampire` tactic that closes the goal.
import Vampire
set_option maxHeartbeats 0
set_option maxRecDepth 100000000
set_option linter.all false
universe u
variable {{ι : Type u}}
variable [inst : Inhabited ι]
"""

# The statement, on its own, with nothing imported and the proof left open. This is what
# is put to `lean` before a problem is kept: it says the *statement* is well-formed Lean
# without requiring the tactic to prove it, which it cannot be asked to do while it is
# the thing being built. A malformed statement is a bad problem file; an unproved one is
# the corpus working as intended.
PROBE = """\
set_option maxHeartbeats 0
set_option maxRecDepth 100000000
set_option linter.all false
universe u
variable {ι : Type u}
variable [inst : Inhabited ι]
"""


def solves(path: Path) -> float | None:
    """Seconds vampire took, or None if it did not finish inside `LIMIT`."""
    t0 = time.monotonic()
    try:
        p = subprocess.run(
            [str(VAMPIRE), "--mode", "portfolio", "--schedule", "casc",
             "--cores", "1", "-t", str(int(LIMIT)), str(path)],
            capture_output=True, text=True, timeout=LIMIT + 10)
    except subprocess.TimeoutExpired:
        return None
    wall = time.monotonic() - t0
    out = p.stdout + p.stderr
    ok = "SZS status Unsatisfiable" in out or "SZS status Theorem" in out
    return wall if ok and wall < LIMIT else None


def statement_typechecks(decls: str, stmt: str, name: str) -> bool:
    with tempfile.TemporaryDirectory() as d:
        f = Path(d) / "probe.lean"
        f.write_text(PROBE + decls + f"\ntheorem {name} : {stmt} := by\n  sorry\n")
        try:
            p = subprocess.run(["lean", "probe.lean"], cwd=d, capture_output=True,
                               text=True, timeout=TYPECHECK)
        except subprocess.TimeoutExpired:
            return False
        return p.returncode == 0


def reread(lean: Path) -> tuple[str, float]:
    """The status and the vampire time out of a file this script wrote earlier."""
    m = re.search(r"TPTP Status: (\S+?)\.\s+The vampire binary refutes it in "
                  r"([0-9.]+)s", lean.read_text())
    return (m.group(1), float(m.group(2))) if m else ("unknown", 0.0)


def candidates() -> list[Path]:
    """Provable, and not enormous -- in a fixed random order."""
    out = []
    for p in sorted(TPTP.glob("Problems/*/*.p")):
        if p.stat().st_size > 200_000:      # the converter is not the point of this
            continue
        head = p.read_text(errors="replace")[:4000]
        if "% Status   : " not in head:
            continue
        if head.split("% Status   : ", 1)[1].split("\n", 1)[0].strip() \
                not in tptp2lean.PROVABLE:
            continue
        out.append(p)
    random.Random(SEED).shuffle(out)
    return out


def main() -> None:
    global TPTP, VAMPIRE, TPTP2LEAN, tptp2lean
    ap = argparse.ArgumentParser(
        description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("n", nargs="?", type=int, default=100,
                    help="how many problems `problems/tptp/` should hold (default: 100)")
    want = ap.parse_args().n
    TPTP, VAMPIRE, TPTP2LEAN = from_env(["TPTP_DIR", "VAMPIRE_BIN", "TPTP2LEAN"])
    sys.setrecursionlimit(100000)
    for needed in (TPTP, VAMPIRE, TPTP2LEAN / "tptp2lean.py"):
        if not needed.exists():
            sys.exit(f"not found: {needed}")
    sys.path.insert(0, str(TPTP2LEAN))
    import tptp2lean
    OUT.mkdir(parents=True, exist_ok=True)
    pool = candidates()
    print(f"{len(pool)} provable problems in the pool, seed {SEED}, want {want}",
          flush=True)

    kept, tried = [], 0
    for path in pool:
        if len(kept) == want:
            break
        if (OUT / path.name).exists() and (OUT / f"{path.stem}.lean").exists():
            # Already here. Its status and timing are read back out of the header rather
            # than re-measured, so the manifest covers every problem in the directory
            # and not only the ones this run collected.
            kept.append((path.stem, path.parent.name) + reread(OUT / f"{path.stem}.lean"))
            continue
        tried += 1
        # Converted first: it is nearly free, and a problem this side cannot state is
        # not worth a second of the prover's time.
        try:
            _, body, status = tptp2lean.convert(path, TPTP, "T_")
        except (tptp2lean.Bad, RecursionError):
            continue
        stmt = body.split("\ntheorem ", 1)[1].split(" := by\n", 1)[0]
        name = stmt.split(" :", 1)[0]
        decls = body.split("variable [inst : Inhabited ι]\n", 1)[1] \
                    .split("\ntheorem", 1)[0]
        # Vampire runs before the typecheck because it is the cheaper filter per
        # rejection: the prover rejects roughly seven candidates in eight and costs at
        # most a second, while `lean` costs a few seconds and accepts nearly everything.
        # Typechecking first would pay the expensive check on every candidate to save
        # the cheap one on an eighth of them.
        wall = solves(path)
        if wall is None:
            continue
        if not statement_typechecks(decls, stmt.split(" : ", 1)[1], name):
            print(f"  skip {path.stem}: statement does not typecheck", flush=True)
            continue

        (OUT / f"{path.stem}.lean").write_text(
            HEADER.format(stem=path.stem, domain=path.parent.name,
                          status=status, wall=wall)
            + decls + f"\ntheorem {stmt} := by\n  vampire\n")
        shutil.copy2(path, OUT / path.name)
        kept.append((path.stem, path.parent.name, status, wall))
        print(f"[{len(kept):3d}/{want}] {path.stem:16s} {path.parent.name:4s} "
              f"{status:14s} {wall:.2f}s", flush=True)

    # The list of kept problems, with their status and vampire's time, as a TSV file
    # rather than a table in a README.
    rows = sorted(kept)
    (OUT / "MANIFEST.tsv").write_text(
        "problem\tdomain\tstatus\tvampire_s\n"
        + "".join(f"{s}\t{d}\t{st}\t{w:.2f}\n" for s, d, st, w in rows))
    print(f"\n{len(kept)} in {OUT} ({tried} tried this run)")


if __name__ == "__main__":
    main()
