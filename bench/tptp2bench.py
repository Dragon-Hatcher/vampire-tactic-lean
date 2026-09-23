#!/usr/bin/env python3
"""A TPTP FOF/CNF problem → a Lean theorem both tactics can be run on.

    ./tptp2bench.py <tptp-dir> <problem.p> [--name T_x]

`tptp2lean.py` does the reading (see its header for what is and is not translated);
this states the problem the way `smt2lean.py` states an SMT one, so the two benchmark
halves have one shape: the problem's single sort as a type `ι` with an `Inhabited`
instance, its functors and predicates as binders, one hypothesis per axiom, and the
conjecture -- or `False` -- as the goal. The tactic line is left as `TACTIC`.
"""

import argparse
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
import tptp2lean as t2l  # noqa: E402


def convert(path: Path, root: Path, name: str, max_size: int) -> tuple[str, str]:
    text = path.read_text(errors="replace")
    m = re.search(r"%\s*Status\s*:\s*(\S+)", text)
    status = m.group(1) if m else "NONE"
    formulas = t2l.read(path, root, set())
    if not formulas:
        raise t2l.Bad("no formulas")
    sym: dict[str, tuple[str, int]] = {}
    prepared = []
    for _, role, ast in formulas:
        if role not in t2l.HYPOTHESIS_ROLES and role != "conjecture":
            raise t2l.Bad(f"unhandled role {role!r}")
        free: set[str] = set()
        t2l.walk(ast, sym, free, [])
        prepared.append((role, ast, free))
    goals = [(a, f) for role, a, f in prepared if role == "conjecture"]
    # A problem with no conjecture that says which of its clauses deny one
    # states the theorem those deny: the statement is what it asks to be
    # shown, and a prover reads which hypotheses are the goal's from it.
    denials = [] if goals else \
        [(a, f) for role, a, f in prepared if role == "negated_conjecture"]
    hyps = [(a, f) for role, a, f in prepared
            if role != "conjecture" and not (denials and role == "negated_conjecture")]
    r = t2l.Render()
    hyp_src = [r.closed(a, f) for a, f in hyps]
    if denials:
        denied = [r.closed(a, f) for a, f in denials]
        goal_src = "(¬" + ("(" + " ∧ ".join(denied) + ")" if len(denied) > 1 else denied[0]) + ")"
    elif not goals:
        goal_src = "False"
    elif len(goals) == 1:
        goal_src = r.closed(*goals[0])
    else:
        goal_src = "(" + " ∧ ".join(r.closed(a, f) for a, f in goals) + ")"
    binders = ["{ι : Type} [Inhabited ι]"]
    for s, (kind, arity) in sorted(sym.items()):
        binders.append(f"({t2l.ident(s)} : {t2l.TYPE[kind](arity)})")
    binders += [f"(h{i + 1} : {h})" for i, h in enumerate(hyp_src)]
    stmt = (f"theorem {name}\n    " + "\n    ".join(binders)
            + f" :\n    {goal_src} := by\n  TACTIC\n")
    if len(stmt) > max_size:
        raise t2l.Bad(f"the statement is over {max_size} characters")
    return stmt, status


class SmtRender:
    """The same problem as SMT-LIB, for a solver that reads no TPTP: one sort `I`, the
    symbols as functions over it, the axioms asserted and the conjecture denied."""

    def __init__(self):
        self.n = 0
        self.scope: dict[str, list[str]] = {}

    @staticmethod
    def sym(name: str) -> str:
        return "|" + t2l.ident(name) + "|"

    def term(self, t: tuple) -> str:
        if t[0] == "var":
            return self.scope[t[1]][-1]
        _, name, args = t
        if not args:
            return self.sym(name)
        return "(" + self.sym(name) + " " + " ".join(self.term(a) for a in args) + ")"

    def form(self, f: tuple) -> str:
        tag = f[0]
        if tag == "true":
            return "true"
        if tag == "false":
            return "false"
        if tag == "not":
            return f"(not {self.form(f[1])})"
        if tag in ("and", "or"):
            parts = [self.form(g) for g in f[1]]
            return f"({tag} {' '.join(parts)})" if len(parts) > 1 else parts[0]
        if tag == "imp":
            return f"(=> {self.form(f[1])} {self.form(f[2])})"
        if tag == "rimp":
            return f"(=> {self.form(f[2])} {self.form(f[1])})"
        if tag == "iff":
            return f"(= {self.form(f[1])} {self.form(f[2])})"
        if tag == "xor":
            return f"(xor {self.form(f[1])} {self.form(f[2])})"
        if tag == "nand":
            return f"(not (and {self.form(f[1])} {self.form(f[2])}))"
        if tag == "nor":
            return f"(not (or {self.form(f[1])} {self.form(f[2])}))"
        if tag == "eq":
            return f"(= {self.term(f[1])} {self.term(f[2])})"
        if tag == "neq":
            return f"(not (= {self.term(f[1])} {self.term(f[2])}))"
        if tag == "pred":
            name, args = f[1], f[2]
            if not args:
                return self.sym(name)
            return "(" + self.sym(name) + " " + " ".join(self.term(a) for a in args) + ")"
        if tag in ("all", "ex"):
            names = []
            for v in f[1]:
                nm = f"v{self.n}"
                self.n += 1
                self.scope.setdefault(v, []).append(nm)
                names.append(nm)
            body = self.form(f[2])
            for v in f[1]:
                self.scope[v].pop()
            q = "forall" if tag == "all" else "exists"
            return f"({q} ({' '.join(f'({n} I)' for n in names)}) {body})"
        raise t2l.Bad(f"unhandled node {tag}")

    def closed(self, f: tuple, free: set) -> str:
        if not free:
            return self.form(f)
        return self.form(("all", sorted(free), f))


def smt2(path: Path, root: Path) -> str:
    formulas = t2l.read(path, root, set())
    sym: dict[str, tuple[str, int]] = {}
    prepared = []
    for _, role, ast in formulas:
        free: set[str] = set()
        t2l.walk(ast, sym, free, [])
        prepared.append((role, ast, free))
    r = SmtRender()
    out = ["(set-logic UF)", "(declare-sort I 0)"]
    for s, (kind, arity) in sorted(sym.items()):
        out.append(f"(declare-fun {SmtRender.sym(s)} ({' '.join(['I'] * arity)}) "
                   f"{'I' if kind == 'fn' else 'Bool'})")
    goals = []
    for role, a, f in prepared:
        if role == "conjecture":
            goals.append(r.closed(a, f))
        else:
            out.append(f"(assert {r.closed(a, f)})")
    if goals:
        g = goals[0] if len(goals) == 1 else f"(and {' '.join(goals)})"
        out.append(f"(assert (not {g}))")
    out.append("(check-sat)")
    return "\n".join(out) + "\n"


def main() -> None:
    sys.setrecursionlimit(100000)
    ap = argparse.ArgumentParser(description="TPTP FOF/CNF problem → a Lean theorem")
    ap.add_argument("tptp", type=Path)
    ap.add_argument("problem", type=Path)
    ap.add_argument("--name", default="T")
    ap.add_argument("--max-size", type=int, default=200_000)
    ap.add_argument("--smt2", type=Path, help="also write the problem as SMT-LIB here")
    args = ap.parse_args()
    try:
        if args.smt2:
            args.smt2.write_text(smt2(args.problem, args.tptp))
        stmt, status = convert(args.problem, args.tptp, args.name, args.max_size)
    except (t2l.Bad, RecursionError) as e:
        print(f"cannot state: {e}", file=sys.stderr)
        sys.exit(2)
    print(f"-- status {status}")
    print(stmt, end="")


if __name__ == "__main__":
    main()
