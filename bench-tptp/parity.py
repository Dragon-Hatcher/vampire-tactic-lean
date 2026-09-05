#!/usr/bin/env python3
"""Compare a sweep's results against what the Vampire binary refutes.

    ./parity.py <binary.tsv> <results.jsonl> [<results.jsonl> ...]

`binary.tsv` is `parity.sh`'s output and the `results.jsonl`s are sweeps of the tests
`tptp2lean.py` generated from the same problems; pass more than one when the run was
split (a baseline and the goals it left over, say) and a problem counts as passed if any
of them passed it.

The number this exists to produce is not the tactic's score but the *difference*: which
problems the prover it embeds can refute and it cannot, and what it did with them
instead. A search that found nothing is a fact about one core and twenty seconds; a
refutation it could not replay is a fact about this port; a run that exhausted the CPU
before the prover exhausted its budget is usually a fact about the size of the generated
statement, and worth checking with `sorry` in place of the tactic before believing
otherwise.
"""

import json
import re
import sys
from collections import Counter
from pathlib import Path


def stem(problem: str) -> str:
    """The Lean identifier `tptp2lean.py` gives a problem, minus its prefix."""
    return re.sub(r"[^A-Za-z0-9]", "_", problem.replace("+", "p").replace("-", "m"))


def main() -> int:
    if len(sys.argv) < 3:
        print(__doc__)
        return 2
    binary = {}
    for line in Path(sys.argv[1]).read_text().splitlines():
        verdict, problem, _ = line.split("\t")
        binary[stem(problem)] = verdict == "REF"

    passed, seen, records = set(), set(), {}
    for path in sys.argv[2:]:
        # sweep.py writes each run's output beside its results file, as `log/<name>.log`.
        logs = Path(path).parent / "log"
        for line in Path(path).read_text().splitlines():
            r = json.loads(line)
            name = r["name"]
            r["logfile"] = logs / f"{name}.log"
            key = name.split("_", 1)[1] if "_" in name else name
            seen.add(key)
            records.setdefault(key, r)
            if r["state"] == "passed":
                passed.add(key)
            else:
                records[key] = r

    common = seen & set(binary)
    only_binary = sorted(k for k in common if binary[k] and k not in passed)
    only_tactic = sorted(k for k in common if not binary[k] and k in passed)
    print(f"{len(common)} problems: the tactic passes {len(passed & common)}, "
          f"the binary refutes {sum(binary[k] for k in common)}")
    print(f"  binary only {len(only_binary)}   tactic only {len(only_tactic)}")

    why = Counter()
    for key in only_binary:
        r = records[key]
        text = r["logfile"].read_text() if r["logfile"].is_file() else ""
        if r.get("timed_out"):
            why["the tactic ran out of CPU"] += 1
        elif str(r.get("reason", "")).startswith("exit 13"):
            why["the tactic crashed or was killed"] += 1
        elif "could not be replayed" in text or "could not be exported" in text:
            why["a refutation was found and could not be used"] += 1
        elif "no refutation found" in text or not text:
            why["no refutation found in the budget"] += 1
        else:
            why["something else"] += 1
    for reason, n in why.most_common():
        print(f"  {n:4d}  {reason}")
    if only_tactic:
        print("  the tactic got, and the binary did not:", " ".join(only_tactic))
    return 0


if __name__ == "__main__":
    sys.exit(main())
