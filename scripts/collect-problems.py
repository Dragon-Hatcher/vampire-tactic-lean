#!/usr/bin/env python3
"""Fill `problems/` with TPTP problems the vampire binary refutes in under a second.

    ./scripts/collect-problems.py [n]        # n total, default 100

The sample is a uniform shuffle, under a fixed seed, of every TPTP v9.3.1 problem whose
declared status is provable. It is walked in that order and a problem is kept when the
`vampire` binary refutes it inside one second *and* this side can state it. The second
condition is what confines the set to untyped first-order logic: a `tff`/`thf` problem is
one the converter declines, so it falls out of the sample rather than being filtered for.

**Resumable, and that is the point of the seed.** The order is fixed, so asking for more
walks the same sequence and pays only for the problems it does not already have. The
first ten of `problems/` were collected by this at `n = 10`; running it at 100 keeps
those ten and adds ninety.

**Under a second for the binary is not under a second for the tactic.** These are easy
*searches* on purpose, so that a failure here points at the translation or the proof
reconstruction rather than at the prover's ability to find a refutation. The search is
deliberately not the variable.

Two things live outside this project and are read from the tree next door: the TPTP
checkout, and `tptp2lean.py`, which is the translation. Using that converter rather than
writing a second one means these statements say what the other corpus's statements say.
Override with `$TPTP_DIR`, `$VAMPIRE_BIN` and `$TPTP2LEAN`.
"""
import os, random, re, shutil, subprocess, sys, tempfile, time
from pathlib import Path

HERE = Path(__file__).resolve().parent.parent          # the `lean/` package
OUT = HERE / "problems" / "tptp"
NEXT_DOOR = HERE.parent.parent / "vampire-tactic"

TPTP = Path(os.environ.get("TPTP_DIR", NEXT_DOOR / "tptp" / "TPTP-v9.3.1"))
VAMPIRE = Path(os.environ.get(
    "VAMPIRE_BIN", NEXT_DOOR / "vampire-tactic-vampire" / "build" / "vampire"))
TPTP2LEAN = Path(os.environ.get(
    "TPTP2LEAN", NEXT_DOOR / "vampire-tactic-lean" / "bench-tptp"))

WANT = int(sys.argv[1]) if len(sys.argv) > 1 else 100
SEED, LIMIT, TYPECHECK = 20260909, 1.0, 90.0

sys.path.insert(0, str(TPTP2LEAN))
import tptp2lean  # noqa: E402

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
    sys.setrecursionlimit(100000)
    for needed in (TPTP, VAMPIRE, TPTP2LEAN / "tptp2lean.py"):
        if not needed.exists():
            sys.exit(f"not found: {needed}  (see the module docstring for the overrides)")
    OUT.mkdir(parents=True, exist_ok=True)
    pool = candidates()
    print(f"{len(pool)} provable problems in the pool, seed {SEED}, want {WANT}",
          flush=True)

    kept, tried = [], 0
    for path in pool:
        if len(kept) == WANT:
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
        # Vampire before the typecheck, and the order is worth a second's thought: the
        # prover rejects roughly seven candidates in eight and costs at most a second,
        # while `lean` costs a few and accepts nearly everything. Typechecking first
        # meant paying the expensive filter on every candidate to save the cheap one on
        # an eighth of them.
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
        print(f"[{len(kept):3d}/{WANT}] {path.stem:16s} {path.parent.name:4s} "
              f"{status:14s} {wall:.2f}s", flush=True)

    # A manifest, because a hundred rows is a table nobody reads in a README.
    rows = sorted(kept)
    (OUT / "MANIFEST.tsv").write_text(
        "problem\tdomain\tstatus\tvampire_s\n"
        + "".join(f"{s}\t{d}\t{st}\t{w:.2f}\n" for s, d, st, w in rows))
    print(f"\n{len(kept)} in {OUT} ({tried} tried this run)")


if __name__ == "__main__":
    main()
