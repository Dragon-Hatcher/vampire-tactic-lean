#!/usr/bin/env python3
"""Run TPTP provers on the problems `Export.lean` wrote:

    ./provers.py <out dir> [--timeout S] [--jobs N] [--provers NAME...]

Each prover gets each problem once, on one core and with the same time limit,
and what it said is appended to `<out dir>/provers.jsonl`, one run a line. A
run already there is skipped, so a run can be resumed.

The problems are lean-auto's TH0 queries: the negated goal among the axioms, no
conjecture, so a proof is `Unsatisfiable`. `Satisfiable` from a complete
strategy would mean the translation lost what the proof needs.

Both provers get the same file: lean-auto's query rewritten (`portable`) into
THF that Vampire's parser takes as well as Zipperposition's. lean-auto writes
`↔` as the constant `(=)` and if-then-else as `$ite`, neither of which Vampire
parses; the rewrite says the same without them.
"""

import argparse
import json
import re
import subprocess
import time
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

AUTO = Path(__file__).resolve().parents[2] / ".lake/packages/auto/.lake/build"
PROVERS = {
    # As lean-auto calls it (`queryZipperposition`).
    "zipperposition": lambda p, t: [str(AUTO / "zipperposition-bin-macos-big-sur.exe"),
                                     "-i=tptp", "-o=tptp", "--mode=ho-competitive",
                                     f"-t={t}", str(p)],
    # As lean-auto calls it (`queryVampire`), on one core.
    "vampire": lambda p, t: [str(Path.home() / "Programming/bench-data/bin/vampire"),
                             "--mode", "casc", "--cores", "1", "--time_limit", str(t), str(p)],
}
STATUS = re.compile(r"SZS status (\w+)")
ITE = re.compile(r"\(\^ \[IB : \$o\] : \^ \[IX : ([^\]]+)\] : \^ \[IY : \1\] : "
                 r"\$ite\(IB, IX, IY\)\)")


def portable(query: str) -> str:
    """`query` without `(=)` for `↔`, which becomes the equation of truth values
    it is, nor `$ite`: the if-then-else lean-auto writes at a sort becomes a
    constant of that sort with the two axioms that define it."""
    query = query.replace("(=)", "(^ [PL : $o, PR : $o] : PL = PR)")
    sorts: dict[str, str] = {}

    def ite(m: re.Match) -> str:
        return sorts.setdefault(m.group(1), f"t_ite{len(sorts)}")
    query = ITE.sub(ite, query)
    defs = []
    for sort, c in sorts.items():
        defs += [f"thf({c}_type, type, {c}: ($o > ({sort} > ({sort} > {sort})))).",
                 f"thf({c}_then, axiom, ! [X : {sort}, Y : {sort}] : "
                 f"((((({c} @ $true) @ X) @ Y)) = X)).",
                 f"thf({c}_else, axiom, ! [X : {sort}, Y : {sort}] : "
                 f"((((({c} @ $false) @ X) @ Y)) = Y))."]
    assert "$ite" not in query and "(=)" not in query
    # Declared before the facts that use them, as a type must be.
    at = query.find("thf(fact")
    if defs and at >= 0:
        query = query[:at] + "\n".join(defs) + "\n\n" + query[at:]
    return query + "\n"


def portableFile(problem: Path) -> Path:
    return problem.parent.parent / "portable" / problem.name


def run(prover: str, problem: Path, timeout: int) -> dict:
    out = portableFile(problem)
    started = time.monotonic()
    try:
        r = subprocess.run(PROVERS[prover](out, timeout), capture_output=True,
                           text=True, timeout=timeout + 10)
        out = r.stdout + r.stderr
        m = STATUS.search(out)
        status = m.group(1) if m else ("error" if r.returncode not in (0, 1) else "unknown")
    except subprocess.TimeoutExpired:
        status = "killed"
    return {"problem": problem.stem, "prover": prover, "status": status,
            "seconds": round(time.monotonic() - started, 2)}


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    ap.add_argument("out", type=Path)
    ap.add_argument("--timeout", type=int, default=10)
    ap.add_argument("--jobs", type=int, default=3)
    ap.add_argument("--provers", nargs="+", default=list(PROVERS))
    args = ap.parse_args()
    results = args.out / "provers.jsonl"
    done = set()
    if results.exists():
        for line in results.read_text().splitlines():
            r = json.loads(line)
            done.add((r["problem"], r["prover"]))
    todo = [(prover, p) for p in sorted((args.out / "problems").glob("*.p"))
            for prover in args.provers if (p.stem, prover) not in done]
    for p in {p for _, p in todo}:
        portableFile(p).parent.mkdir(exist_ok=True)
        portableFile(p).write_text(portable(p.read_text()))
    print(f"{len(todo)} runs", flush=True)
    with results.open("a") as f, ThreadPoolExecutor(args.jobs) as pool:
        for r in pool.map(lambda job: run(job[0], job[1], args.timeout), todo):
            f.write(json.dumps(r) + "\n")
            f.flush()
            print(f"{r['problem']:12s} {r['prover']:15s} {r['status']:16s} {r['seconds']}s",
                  flush=True)


if __name__ == "__main__":
    main()
