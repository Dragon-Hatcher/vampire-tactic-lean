#!/usr/bin/env python3
"""Convert TPTP FOF/CNF problems straight into Lean test files.

    ./tptp2lean.py <tptp-dir> <out-dir> [--prefix T_] [--only NAME ...]

`tptp-dir` is a checkout with `Problems/` and `Axioms/` in it — what `$TPTP` points at,
which here is `../../bodingbauer-etall/bench/tptp`.

## Why this exists

`gen.sh` builds a test by running Vampire on a problem and keeping the `fullProof`
statement out of the proof it found. That makes a good regression set and a bad
comparison: **every problem in it is one Vampire could refute**, chosen by Vampire's own
search, so putting duper and lean-smt through the same set measures how they fare on
Vampire's problems rather than how the three compare. `docs/comparison.md` says so and
discounts its own headline for it.

This reads the problem instead. Nothing runs a prover, nothing is selected for being
solvable, and the axioms are the problem's own rather than whatever Vampire's
preprocessing left of them — so the resulting set is neutral between the three tactics
and covers every problem in the corpus, not the third of it Vampire gets through inside
`gen.sh`'s budget.

## What is translated

Untyped first-order logic, which is all this corpus has in it: `fof` and `cnf` only, no
`tff`/`thf`, and `$true`/`$false` the only system words anywhere — so no arithmetic, no
`$ite`, nothing that would need a theory. One TPTP sort becomes one Lean type variable
`ι`, functors become functions into `ι` and predicates functions into `Prop`, and each
is named `t_` and its own TPTP name, escaped — see `ident` for why the name is encoded
rather than used as it stands, which is a fact about comparing tactics fairly and not
about Lean.

The statement is `axiom₁ → … → axiomₙ → goal`, which is the shape `extract.py` produces,
so `retarget.py` and `sweep.py` work on these unchanged. The goal is the `conjecture`
where the problem states one, and `False` otherwise — a problem with a
`negated_conjecture`, or a bare unsatisfiable clause set, is asking for a refutation.

Two things that are easy to get wrong and are not:

* **A problem's declared `Status` decides whether it belongs in a comparison at all.**
  `Satisfiable`, `CounterSatisfiable`, `Open` and `Unknown` problems are not provable, or
  not known to be, and counting them makes every tactic look bad by the same amount
  while moving the denominator. They are converted anyway — the status is written into
  the file as a comment — and `--provable-only` is how you get just the ones that are.

* **A distinct object is rejected, not weakened.** TPTP's `"foo"` is a constant that is
  unequal to every other such constant by fiat. Rendering it as an uninterpreted
  constant and leaving the inequalities out would change what the problem says, and
  asserting them is not an option either: the six provable problems in this corpus that
  use them (the `BIO` family and `CSR099+5`) have 433 and 447 distinct objects, so the
  pairwise disequalities are ninety thousand hypotheses. They are skipped by name
  instead, which loses 6 of 321 and keeps every problem that is converted saying what
  the problem says.

* **A clause's variables are bound by the clause.** `cnf` leaves its universals implicit,
  and so do a few `fof` formulas in this corpus that have a free variable in them,
  illegal though that is. Free variables are universally quantified at the formula's own
  level, which is the standard reading and the one Vampire takes.
"""

import argparse
import re
import sys
from pathlib import Path

# ---------------------------------------------------------------- lexing

# Longest-first among the operators: `<=>` before `<=`, `!=` before `!`, `~&` before `~`.
TOKEN = re.compile(
    r"""
      [ \t\r\n]+                        # whitespace
    | %[^\n]*                           # line comment
    | /\*.*?\*/                         # block comment
    | <=>|<~>|~&|~\||=>|<=              # binary connectives
    | !=                                # disequality
    | [&|~!?(),\[\].:=]                 # punctuation, quantifiers, equality
    | '(?:[^'\\]|\\.)*'                 # single-quoted atom
    | "(?:[^"\\]|\\.)*"                 # distinct object
    | \$\$?[a-z][a-zA-Z0-9_]*           # system / defined word
    | [a-z][a-zA-Z0-9_]*                # lower word: functor or predicate
    | [A-Z][a-zA-Z0-9_]*                # upper word: variable
    | [+-]?[0-9]+(?:\.[0-9]+)?(?:[eE][+-]?[0-9]+)?(?:/[0-9]+)?   # number
    """,
    re.X | re.S,
)

SKIP = re.compile(r"^([ \t\r\n]|%|/\*)")


class Bad(Exception):
    """This problem is not something the converter handles; say why and move on."""


def lex(text: str) -> list[str]:
    out, i, n = [], 0, len(text)
    while i < n:
        m = TOKEN.match(text, i)
        if not m:
            raise Bad(f"cannot lex at {text[i:i + 30]!r}")
        i = m.end()
        tok = m.group(0)
        if not SKIP.match(tok):
            out.append(tok)
    return out


# ---------------------------------------------------------------- parsing

ASSOC = {"&": "and", "|": "or"}
NONASSOC = {"=>": "imp", "<=": "rimp", "<=>": "iff", "<~>": "xor",
            "~&": "nand", "~|": "nor"}


class Parser:
    def __init__(self, toks: list[str]):
        self.t, self.i = toks, 0

    def peek(self) -> str | None:
        return self.t[self.i] if self.i < len(self.t) else None

    def next(self) -> str:
        if self.i >= len(self.t):
            raise Bad("input ended mid-formula")
        self.i += 1
        return self.t[self.i - 1]

    def want(self, tok: str) -> None:
        got = self.next()
        if got != tok:
            raise Bad(f"expected {tok!r}, got {got!r}")

    # -- terms

    def term(self):
        tok = self.next()
        if re.fullmatch(r"[A-Z][a-zA-Z0-9_]*", tok):
            return ("var", tok)
        if tok.startswith("$"):
            raise Bad(f"system term {tok}")
        if re.fullmatch(r"[+-]?[0-9].*", tok):
            raise Bad("arithmetic: a numeric term")
        if tok.startswith('"'):
            raise Bad("distinct object")
        name = unquote(tok)
        args = []
        if self.peek() == "(":
            self.next()
            args.append(self.term())
            while self.peek() == ",":
                self.next()
                args.append(self.term())
            self.want(")")
        return ("app", name, args)

    # -- formulas

    def unitary(self):
        tok = self.peek()
        if tok == "~":
            self.next()
            return ("not", self.unitary())
        if tok in ("!", "?"):
            self.next()
            self.want("[")
            vs = [self.next()]
            while self.peek() == ",":
                self.next()
                vs.append(self.next())
            self.want("]")
            self.want(":")
            for v in vs:
                if not re.fullmatch(r"[A-Z][a-zA-Z0-9_]*", v):
                    raise Bad(f"{v!r} is not a variable")
            return ("all" if tok == "!" else "ex", vs, self.unitary())
        if tok == "(":
            self.next()
            f = self.formula()
            self.want(")")
            return f
        if tok == "$true":
            self.next()
            return ("true",)
        if tok == "$false":
            self.next()
            return ("false",)
        # An atom: a predicate application, or an (in)equality between two terms.
        lhs = self.term()
        if self.peek() in ("=", "!="):
            op = self.next()
            rhs = self.term()
            return ("eq" if op == "=" else "neq", lhs, rhs)
        if lhs[0] != "app":
            raise Bad("a variable used as an atom")
        return ("pred", lhs[1], lhs[2])

    def formula(self):
        left = self.unitary()
        tok = self.peek()
        if tok in ASSOC:
            # `&` and `|` are each associative and cannot be mixed without parentheses,
            # so a chain is one n-ary node.
            parts = [left]
            while self.peek() == tok:
                self.next()
                parts.append(self.unitary())
            node = (ASSOC[tok], parts)
            # TPTP would need parentheses to put a non-associative connective here, but
            # accept it and read it with `&`/`|` binding tighter.
            if self.peek() in NONASSOC:
                op = self.next()
                return (NONASSOC[op], node, self.formula())
            return node
        if tok in NONASSOC:
            op = self.next()
            return (NONASSOC[op], left, self.formula())
        return left


def unquote(tok: str) -> str:
    if tok.startswith("'"):
        return re.sub(r"\\(.)", r"\1", tok[1:-1])
    return tok


# ---------------------------------------------------------------- reading a problem

ANNOTATED = re.compile(r"\b(fof|cnf)\s*\(", re.S)


def read(path: Path, root: Path, seen: set[Path]) -> list[tuple[str, str, tuple]]:
    """Every annotated formula in `path` and everything it includes, as
    `(name, role, ast)`."""
    if path in seen:
        return []
    seen.add(path)
    text = path.read_text(errors="replace")
    out: list[tuple[str, str, tuple]] = []

    src = strip_comments(text)

    for inc, sel in re.findall(
            r"(?m)^\s*include\('([^']*)'(?:\s*,\s*\[([^\]]*)\])?\s*\)", src):
        target = root / inc
        if not target.exists():
            raise Bad(f"include {inc} does not resolve")
        got = read(target, root, seen)
        if sel.strip():
            keep = {s.strip() for s in sel.split(",")}
            got = [f for f in got if f[0] in keep]
        out += got

    # Scan rather than `finditer`: an annotated formula's trailing source field can hold
    # a nested `fof(...)`, and its extent has to be found by matching brackets anyway
    # because a `)` can sit inside a quoted atom.
    pos = 0
    while (m := ANNOTATED.search(src, pos)) is not None:
        body, pos = take_annotated(src, m.end())
        p = Parser(lex(body))
        name = p.next()
        p.want(",")
        role = p.next()
        p.want(",")
        # Whatever follows the formula is provenance, and is left unparsed.
        out.append((unquote(name), role, p.formula()))
    return out


def strip_comments(text: str) -> str:
    text = re.sub(r"/\*.*?\*/", " ", text, flags=re.S)
    return re.sub(r"(?m)%.*$", "", text)


def take_annotated(text: str, start: int) -> tuple[str, int]:
    """The body of an annotated formula whose `(` has just been consumed, up to the
    matching `)`. The optional source and useful-info fields are dropped."""
    depth, i, n = 1, start, len(text)
    while i < n:
        c = text[i]
        if c == "'":
            i += 1
            while i < n and text[i] != "'":
                i += 2 if text[i] == "\\" else 1
        elif c == '"':
            i += 1
            while i < n and text[i] != '"':
                i += 2 if text[i] == "\\" else 1
        elif c in "([":
            depth += 1
        elif c in ")]":
            depth -= 1
            if depth == 0:
                return text[start:i], i + 1
        i += 1
    raise Bad("an annotated formula is not closed")


# ---------------------------------------------------------------- symbols and rendering

def walk_terms(t: tuple, sym: dict, bound: set):
    if t[0] == "var":
        return
    _, name, args = t
    kind, arity = sym.get(name, ("fn", len(args)))
    if kind != "fn" or arity != len(args):
        raise Bad(f"{name!r} used at two arities or as both function and predicate")
    sym[name] = ("fn", len(args))
    for a in args:
        walk_terms(a, sym, bound)


def walk(f: tuple, sym: dict, free: set, bound: list):
    tag = f[0]
    if tag in ("true", "false"):
        return
    if tag == "not":
        walk(f[1], sym, free, bound)
    elif tag in ("and", "or"):
        for g in f[1]:
            walk(g, sym, free, bound)
    elif tag in ("imp", "rimp", "iff", "xor", "nand", "nor"):
        walk(f[1], sym, free, bound)
        walk(f[2], sym, free, bound)
    elif tag in ("all", "ex"):
        bound.append(set(f[1]))
        walk(f[2], sym, free, bound)
        bound.pop()
    elif tag in ("eq", "neq"):
        for t in (f[1], f[2]):
            collect_vars(t, free, bound)
            walk_terms(t, sym, set())
    elif tag == "pred":
        name, args = f[1], f[2]
        kind, arity = sym.get(name, ("pred", len(args)))
        if kind != "pred" or arity != len(args):
            raise Bad(f"{name!r} used at two arities or as both function and predicate")
        sym[name] = ("pred", len(args))
        for a in args:
            collect_vars(a, free, bound)
            walk_terms(a, sym, set())
    else:
        raise Bad(f"unhandled node {tag}")


def collect_vars(t: tuple, free: set, bound: list):
    if t[0] == "var":
        if not any(t[1] in b for b in bound):
            free.add(t[1])
        return
    for a in t[2]:
        collect_vars(a, free, bound)


def ident(name: str) -> str:
    """A Lean identifier for a TPTP symbol: `t_` and then the name, escaped.

    Encoded rather than used as it stands, and the reason is fairness rather than Lean.
    A TPTP problem may have a predicate named `not`, `and`, `or` or `xor` — eighteen in
    this corpus do — and a tactic that translates to SMT-LIB passes the symbol's name
    through to a solver in which those are *theory* symbols. cvc5 refuses the query
    ("Symbol `not\' is shadowing a theory function symbol"), lean-smt logs the refusal
    and admits the goal, and eighteen problems read as ones lean-smt cannot do. They are
    a naming accident and nothing else: a symbol carries no logical content, so the
    encoding picks names that no tool involved reserves.

    Injective, so no two symbols can be merged into one: an alphanumeric character
    stands for itself, `_` doubles, and anything else becomes `_x` and its byte in hex —
    which is unambiguous precisely because a literal underscore is doubled.
    """
    out = ["t_"]
    for ch in name:
        if ch.isascii() and ch.isalnum():
            out.append(ch)
        elif ch == "_":
            out.append("__")
        else:
            out += [f"_x{b:02X}" for b in ch.encode()]
    return "".join(out)


class Render:
    """Render an AST as a fully parenthesised Lean term.

    Bound variables are renamed to `v0`, `v1`, … as they are introduced, with a counter
    that never reuses a number. TPTP allows a binder to shadow an outer one of the same
    name, and renaming positionally is what keeps the inner and outer occurrences apart.
    """

    def __init__(self):
        self.n = 0
        self.scope: dict[str, list[str]] = {}

    def push(self, vs: list[str]) -> list[str]:
        names = []
        for v in vs:
            nm = f"v{self.n}"
            self.n += 1
            self.scope.setdefault(v, []).append(nm)
            names.append(nm)
        return names

    def pop(self, vs: list[str]) -> None:
        for v in vs:
            self.scope[v].pop()

    def term(self, t: tuple) -> str:
        if t[0] == "var":
            st = self.scope.get(t[1])
            if not st:
                raise Bad(f"variable {t[1]} is not in scope")
            return st[-1]
        _, name, args = t
        if not args:
            return ident(name)
        return "(" + ident(name) + " " + " ".join(self.term(a) for a in args) + ")"

    def form(self, f: tuple) -> str:
        tag = f[0]
        if tag == "true":
            return "True"
        if tag == "false":
            return "False"
        if tag == "not":
            return f"(¬{self.form(f[1])})"
        if tag == "and":
            return "(" + " ∧ ".join(self.form(g) for g in f[1]) + ")"
        if tag == "or":
            return "(" + " ∨ ".join(self.form(g) for g in f[1]) + ")"
        if tag == "imp":
            return f"({self.form(f[1])} → {self.form(f[2])})"
        if tag == "rimp":
            return f"({self.form(f[2])} → {self.form(f[1])})"
        if tag == "iff":
            return f"({self.form(f[1])} ↔ {self.form(f[2])})"
        if tag == "xor":
            return f"(¬({self.form(f[1])} ↔ {self.form(f[2])}))"
        if tag == "nand":
            return f"(¬({self.form(f[1])} ∧ {self.form(f[2])}))"
        if tag == "nor":
            return f"(¬({self.form(f[1])} ∨ {self.form(f[2])}))"
        if tag == "eq":
            return f"({self.term(f[1])} = {self.term(f[2])})"
        if tag == "neq":
            return f"(¬({self.term(f[1])} = {self.term(f[2])}))"
        if tag == "pred":
            name, args = f[1], f[2]
            if not args:
                return ident(name)
            return "(" + ident(name) + " " + " ".join(self.term(a) for a in args) + ")"
        if tag in ("all", "ex"):
            names = self.push(f[1])
            body = self.form(f[2])
            self.pop(f[1])
            binder = "∀" if tag == "all" else "∃"
            return f"({binder} {' '.join(names)} : ι, {body})"
        raise Bad(f"unhandled node {tag}")

    def closed(self, f: tuple, free: set) -> str:
        """The formula with its free variables universally quantified, which is what a
        `cnf` clause means and how Vampire reads a `fof` formula that has one."""
        if not free:
            return self.form(f)
        vs = sorted(free)
        names = self.push(vs)
        body = self.form(f)
        self.pop(vs)
        return f"(∀ {' '.join(names)} : ι, {body})"


TYPE = {"fn": lambda k: " → ".join(["ι"] * (k + 1)),
        "pred": lambda k: " → ".join(["ι"] * k + ["Prop"]) if k else "Prop"}

HEADER = """\
-- Generated from {src} by bench-tptp/tptp2lean.py. TPTP Status: {status}
import Vampire
set_option vampire.timeout 30
set_option maxHeartbeats 0
set_option maxRecDepth 100000000
set_option linter.all false
universe u
variable {{ι : Type u}}
variable [inst : Inhabited ι]
"""

PROVABLE = {"Theorem", "Unsatisfiable", "ContradictoryAxioms"}

# `unknown` is a role one problem in this corpus uses; it states an axiom.
HYPOTHESIS_ROLES = {"axiom", "hypothesis", "lemma", "definition", "theorem",
                    "assumption", "unknown", "negated_conjecture"}


def convert(path: Path, root: Path, prefix: str) -> tuple[str, str, str]:
    """`(lean-identifier, file contents, status)` for one problem."""
    text = path.read_text(errors="replace")
    m = re.search(r"%\s*Status\s*:\s*(\S+)", text)
    status = m.group(1) if m else "NONE"

    formulas = read(path, root, set())
    if not formulas:
        raise Bad("no formulas")

    sym: dict[str, tuple[str, int]] = {}
    prepared = []
    for name, role, ast in formulas:
        if role not in HYPOTHESIS_ROLES and role != "conjecture":
            raise Bad(f"unhandled role {role!r}")
        free: set[str] = set()
        walk(ast, sym, free, [])
        prepared.append((role, ast, free))

    goals = [(a, f) for role, a, f in prepared if role == "conjecture"]
    hyps = [(a, f) for role, a, f in prepared if role != "conjecture"]

    r = Render()
    hyp_src = [r.closed(a, f) for a, f in hyps]
    if not goals:
        # A `negated_conjecture`, or a bare clause set: the problem asks for `False`.
        goal_src = "False"
    elif len(goals) == 1:
        goal_src = r.closed(*goals[0])
    else:
        goal_src = "(" + " ∧ ".join(r.closed(a, f) for a, f in goals) + ")"

    ident_name = prefix + re.sub(
        r"[^A-Za-z0-9]", "_", path.stem.replace("+", "p").replace("-", "m"))

    groups: dict[tuple[str, int], list[str]] = {}
    for name, (kind, arity) in sorted(sym.items()):
        groups.setdefault((kind, arity), []).append(name)
    decls = "".join(
        "variable {" + " ".join(ident(n) for n in names) + " : "
        + TYPE[kind](arity) + "}\n"
        for (kind, arity), names in sorted(groups.items(), key=lambda kv: kv[0]))

    stmt = " → ".join(hyp_src + [goal_src]) if hyp_src else goal_src
    body = (HEADER.format(src=path.name, status=status) + decls
            + f"\ntheorem {ident_name} : {stmt} := by\n  vampire [*]\n\n"
            + f"#print axioms {ident_name}\n")
    return ident_name, body, status


def main() -> None:
    # A few problems in this corpus nest a formula hundreds deep.
    sys.setrecursionlimit(100000)
    ap = argparse.ArgumentParser()
    ap.add_argument("tptp", type=Path, help="a $TPTP directory: Problems/ and Axioms/")
    ap.add_argument("out", type=Path, help="where the .lean tests go")
    ap.add_argument("--prefix", default="T_")
    ap.add_argument("--provable-only", action="store_true",
                    help="keep only Theorem/Unsatisfiable/ContradictoryAxioms problems")
    ap.add_argument("--only", nargs="*", default=None, help="convert just these stems")
    args = ap.parse_args()

    args.out.mkdir(parents=True, exist_ok=True)
    problems = sorted(args.tptp.glob("Problems/*/*.p"))
    if args.only:
        want = set(args.only)
        problems = [p for p in problems if p.stem in want]

    made, skipped, bad = 0, 0, 0
    for p in problems:
        try:
            name, body, status = convert(p, args.tptp, args.prefix)
        except Bad as e:
            print(f"SKIP {p.stem}: {e}", file=sys.stderr)
            bad += 1
            continue
        except RecursionError:
            print(f"SKIP {p.stem}: formula nested too deeply to render", file=sys.stderr)
            bad += 1
            continue
        if args.provable_only and status not in PROVABLE:
            print(f"SKIP {p.stem}: Status {status} is not provable", file=sys.stderr)
            skipped += 1
            continue
        (args.out / f"{name}.lean").write_text(body)
        made += 1
    print(f"{made} written, {skipped} skipped for status, {bad} could not be converted")


if __name__ == "__main__":
    main()
