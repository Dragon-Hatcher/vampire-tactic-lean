#!/usr/bin/env python3
"""Which of vampire's inference sites replay has certified: `./coverage.py <log>...`.

A site is a place in vampire's source where an inference is made -- where one
of `Kernel/Inference.hpp`'s helper structs (`GeneratingInference1`, ...) is
constructed, which records it (`std::source_location`). One rule is made in
several places, which do not all do the same, so coverage is counted by site.

The logs are what the tactic writes with `VAMPIRE_COVERAGE` set: a line per
step of each replayed refutation, `rule<TAB>site<TAB>status<TAB>file`.

For each rule replay implements (`Reconstruct/Rules.lean`, the section before
"Ruled out"), the report lists its sites -- those naming it literally, and
those computing their rule that a log saw make it -- and which of them some
log saw replayed. A site that cannot make a step in a proof the tactic asks
for is listed in `bench/coverage-unreachable.txt` with the reason
(`site<TAB>rule<TAB>reason`, `*` for every rule), and not counted. A site
computing its rule is attributed to rules in `bench/coverage-computed.txt`
(`site<TAB>rule,rule,...`) once it has been read.
"""

import argparse
import re
import sys
from collections import defaultdict
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
VAMPIRE = REPO / ".lake" / "build" / "vampire"
HELPERS = [
    "FormulaClauseTransformationMany", "FormulaClauseTransformation",
    "SimplifyingInferenceMany", "SimplifyingInference1", "SimplifyingInference2",
    "GeneratingInferenceMany", "GeneratingInference1", "GeneratingInference2",
    "NonspecificInferenceMany", "NonspecificInference0", "NonspecificInference1",
    "NonspecificInference2", "InferenceOfASatClause", "ComponentClauseInference",
    "NeedsMinimization", "TheoryAxiom", "FromInput",
]
# A helper constructed where it is used, or declared as a variable (`NonspecificInference0 inf(...)`).
HELPER = re.compile(r"\b(" + "|".join(HELPERS) + r")(?:\s+[A-Za-z_]\w*)?\s*[({]")
SKIP_DIRS = {"UnitTests", ".git", "cadical", "z3", "Test", "viras", "CASC", "build"}


def arguments(text: str, start: int) -> str:
    """The text of the balanced bracket group opening at `start`."""
    close = {"(": ")", "{": "}"}[text[start]]
    depth = 0
    for i in range(start, len(text)):
        c = text[i]
        if c in "({":
            depth += 1
        elif c in ")}":
            depth -= 1
            if depth == 0:
                return text[start + 1:i]
    return text[start + 1:]


def without_comments(text: str) -> str:
    """`text` with its comments blanked out, newlines kept so lines still count."""
    def blank(m: re.Match) -> str:
        return re.sub(r"[^\n]", " ", m.group(0))
    # Strings first, so that a `//` inside one is not taken for a comment.
    return re.sub(r'"(?:\\.|[^"\\\n])*"|//[^\n]*|/\*.*?\*/',
                  lambda m: m.group(0) if m.group(0).startswith('"') else blank(m),
                  text, flags=re.S)


def static_sites() -> dict[str, tuple[str, str | None]]:
    """Every site in vampire's source: `file:line` to (helper, literal rule)."""
    sites = {}
    for path in VAMPIRE.rglob("*.[ch]pp"):
        rel = path.relative_to(VAMPIRE)
        if SKIP_DIRS & set(rel.parts) or str(rel) in ("Kernel/Inference.hpp", "Kernel/Inference.cpp"):
            continue
        text = without_comments(path.read_text(errors="ignore"))
        for m in HELPER.finditer(text):
            before = text[max(0, m.start() - 8):m.start()]
            if before.rstrip().endswith("struct") or before.rstrip().endswith("::"):
                continue
            line = text.count("\n", 0, m.start()) + 1
            helper = m.group(1)
            args = arguments(text, m.end() - 1)
            # A declaration of the helper's own constructor, not a use of it.
            if re.search(r"\bInferenceRule\s+\w+\s*[,)]", args + ")"):
                continue
            if helper == "FromInput":
                rule = "input"
            else:
                # `NonspecificInference0` takes the input type first.
                position = 1 if helper == "NonspecificInference0" else 0
                parts = args.split(",")
                first = parts[position].strip() if len(parts) > position else ""
                lit = re.fullmatch(r"(?:Kernel::)?InferenceRule::(\w+)", first)
                rule = lit.group(1).lower() if lit else None
            sites[f"{rel}:{line}"] = (helper, rule)
    return sites


def implemented_rules() -> set[str]:
    """The rules `ofRule` replays, by name."""
    lean_names = {}
    for m in re.finditer(r'\|\s*\.(\w+)\s*=>\s*"(\w+)"',
                         (REPO / "replay/VampireReplay/InferenceRule.lean").read_text()):
        lean_names[m.group(1)] = m.group(2)
    rules = (REPO / "replay/VampireReplay/Reconstruct/Rules.lean").read_text()
    section = rules[:rules.index("-- Ruled out")]
    return {lean_names[c] for c in re.findall(r"\|\s*\.(\w+)\s*=>", section)}


def table(path: Path, width: int) -> list[list[str]]:
    if not path.exists():
        return []
    rows = []
    for line in path.read_text().splitlines():
        if line.strip() and not line.startswith("#"):
            rows.append(line.split("\t", width - 1))
    return rows


def main() -> None:
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    ap.add_argument("logs", nargs="+", type=Path)
    ap.add_argument("--rule", help="list the sites of this rule only")
    args = ap.parse_args()

    sites = static_sites()
    implemented = implemented_rules()
    unreachable = {(s, r): why for s, r, why in table(REPO / "bench/coverage-unreachable.txt", 3)}
    computed = {s: set(rs.split(",")) for s, rs in table(REPO / "bench/coverage-computed.txt", 2)}

    seen: dict[tuple[str, str], set[str]] = defaultdict(set)
    for log in args.logs:
        for line in log.read_text().splitlines():
            parts = line.split("\t")
            if len(parts) >= 3:
                seen[(parts[1], parts[0])].add(parts[2])

    # A rule's sites: named literally, attributed after reading, or seen making it.
    by_rule: dict[str, set[str]] = defaultdict(set)
    for site, (_, rule) in sites.items():
        if rule is not None:
            by_rule[rule].add(site)
        for r in computed.get(site, ()):
            by_rule[r].add(site)
    for site, rule in seen:
        by_rule[rule].add(site)

    unknown = sorted({s for s, _ in seen if s not in sites and s != "?"})
    unread = sorted(s for s, (_, r) in sites.items() if r is None and s not in computed)

    total = covered = 0
    rows = []
    for rule in sorted(implemented):
        rule_sites = sorted(by_rule.get(rule, ()))
        counted = [s for s in rule_sites
                   if (s, rule) not in unreachable and (s, "*") not in unreachable]
        hit = [s for s in counted if "replayed" in seen.get((s, rule), ())]
        total += len(counted)
        covered += len(hit)
        rows.append((rule, counted, hit))

    if args.rule:
        for rule, counted, hit in rows:
            if rule == args.rule:
                for s in counted:
                    print(("covered " if s in hit else "MISSING ") + s)
        return

    print(f"{'rule':44} {'sites':>5} {'covered':>7}")
    for rule, counted, hit in rows:
        mark = "" if len(hit) == len(counted) else "  <--"
        print(f"{rule:44} {len(counted):5} {len(hit):7}{mark}")
    pct = 100 * covered / total if total else 100.0
    print(f"\n{covered}/{total} sites of implemented rules covered ({pct:.1f}%)")
    missing = [(r, s) for r, counted, hit in rows for s in counted if s not in hit]
    if missing:
        print("\nnot covered:")
        for r, s in missing:
            print(f"  {r:40} {s}")
    if unread:
        print(f"\n{len(unread)} sites computing their rule, not yet attributed "
              "(bench/coverage-computed.txt):")
        for s in unread:
            print(f"  {s}  {sites[s][0]}")
    if unknown:
        print("\nsites the logs saw that the source scan did not find:")
        for s in unknown:
            print(f"  {s}")
    sys.exit(0 if not missing and not unread else 1)


if __name__ == "__main__":
    main()
