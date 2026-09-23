#!/usr/bin/env python3
"""SMT-LIB 2 → a Lean theorem both tactics can be run on.

    ./smt2lean.py <problem.smt2> [--name T_x]   → the theorem on stdout, or exit 2 with
                                                  the reason it cannot be stated

An `unsat` SMT problem is a conjunction of assertions asked for satisfiability, so it
becomes: the declared sorts, functions and constants as the theorem's binders, one
hypothesis per `assert`, and the goal `False`. The tactic line is left as `TACTIC`, for
the benchmark harness to fill in.

`Int` is `ℤ`, `Real` is `ℝ`, `Bool` is `Prop`, and a declared sort is a type with an
`Inhabited` instance. `let` and `define-fun` are inlined; a problem whose statement
inlining makes larger than `--max-size` is not stated at all, since no tactic reads a
term of that size in any reasonable time. A numeral is a real in a logic whose only
numbers are reals, and an integer otherwise; logics that mix the two (`…IRA`) are not
translated.
"""

import argparse
import re
import sys
from fractions import Fraction


class Bad(Exception):
    pass


# ---------------------------------------------------------------- reading

TOKEN = re.compile(r"""
    [ \t\r\n]+ | ;[^\n]*
  | \( | \)
  | \|[^|]*\|
  | "(?:[^"]|"")*"
  | [^\s()|";]+
""", re.VERBOSE)


def sexprs(text: str):
    stack = [[]]
    for m in TOKEN.finditer(text):
        tok = m.group(0)
        if tok[0] in " \t\r\n;":
            continue
        if tok == "(":
            stack.append([])
        elif tok == ")":
            if len(stack) == 1:
                raise Bad("unbalanced parentheses")
            done = stack.pop()
            stack[-1].append(done)
        else:
            stack[-1].append(tok)
    if len(stack) != 1:
        raise Bad("unbalanced parentheses")
    return stack[0]


# ---------------------------------------------------------------- names

class Names:
    """SMT-LIB symbols to Lean identifiers: `s_` and the symbol with anything Lean does
    not allow in an identifier replaced, numbered where two collide."""

    def __init__(self):
        self.of: dict[str, str] = {}
        self.taken: set[str] = set()

    def fresh(self, symbol: str, prefix: str = "s_") -> str:
        base = prefix + (re.sub(r"[^A-Za-z0-9_]", "_", symbol.strip("|")) or "x")
        name, k = base, 1
        while name in self.taken:
            name, k = f"{base}_{k}", k + 1
        self.taken.add(name)
        return name

    def declare(self, symbol: str) -> str:
        if symbol in self.of:
            raise Bad(f"{symbol} declared twice")
        self.of[symbol] = self.fresh(symbol)
        return self.of[symbol]


# ---------------------------------------------------------------- translating

ARITH_SORTS = {"Int", "Real"}


class Translator:
    def __init__(self, logic: str, max_size: int):
        self.logic = logic
        self.max_size = max_size
        self.names = Names()
        self.sorts: dict[str, str] = {}              # declared sort → Lean name
        self.funs: dict[str, tuple[list, str]] = {}  # symbol → (argument sorts, sort)
        self.defs: dict[str, tuple[list, str, object]] = {}
        self.numeral = "Real" if self.reals_only(logic) else "Int"
        self.binders: list[str] = []
        self.hyps: list[str] = []
        self.bound = 0

    @staticmethod
    def reals_only(logic: str) -> bool:
        core = logic.removeprefix("QF_")
        if "IRA" in core or "LIRA" in core:
            raise Bad(f"logic {logic} mixes integers and reals")
        return core.endswith(("RA", "RDL")) or core in {"LRA", "NRA", "RDL"}

    def sort(self, s) -> str:
        if s == "Int":
            return "ℤ"
        if s == "Real":
            return "ℝ"
        if s == "Bool":
            return "Prop"
        if isinstance(s, str) and s in self.sorts:
            return self.sorts[s]
        raise Bad(f"unsupported sort {s}")

    def check_size(self, text: str) -> str:
        if len(text) > self.max_size:
            raise Bad(f"a formula is over {self.max_size} characters once inlined")
        return text

    # A term is translated to (text, sort), `env` mapping a bound name to what it is:
    # a Lean variable, or the translated value a `let` or a defined function's parameter
    # stands for.
    def term(self, t, env: dict) -> tuple[str, str]:
        if isinstance(t, str):
            return self.atom(t, env)
        if not t:
            raise Bad("empty application")
        head = t[0]
        if head == "!":
            return self.term(t[1], env)
        if head == "let":
            inner = dict(env)
            for name, value in t[1]:
                inner[name] = self.term(value, env)
            return self.term(t[2], inner)
        if head in ("forall", "exists"):
            inner = dict(env)
            names = []
            for name, s in t[1]:
                lean = f"v{self.bound}"
                self.bound += 1
                inner[name] = (lean, s)
                names.append(f"({lean} : {self.sort(s)})")
            body, bs = self.term(t[2], inner)
            if bs != "Bool":
                raise Bad("a quantifier over a term that is not a formula")
            q = "∀" if head == "forall" else "∃"
            return f"({q} {' '.join(names)}, {body})", "Bool"
        if isinstance(head, list):
            # `(_ ...)` indexed identifiers and `(as ...)` are outside the logics taken.
            raise Bad(f"unsupported head {head}")
        args = [self.term(a, env) for a in t[1:]]
        return self.apply(head, args, env)

    def atom(self, a: str, env: dict) -> tuple[str, str]:
        if a in env:
            return env[a]
        if a == "true":
            return "True", "Bool"
        if a == "false":
            return "False", "Bool"
        if re.fullmatch(r"[0-9]+", a):
            return (f"({a} : ℝ)" if self.numeral == "Real" else f"({a} : ℤ)"), self.numeral
        if re.fullmatch(r"[0-9]+\.[0-9]+", a):
            if self.numeral != "Real":
                raise Bad("a decimal in an integer logic")
            q = Fraction(a)
            return f"(({q.numerator} : ℝ) / {q.denominator})", "Real"
        if a in self.defs:
            params, s, body = self.defs[a]
            if params:
                raise Bad(f"{a} applied to no arguments")
            return self.term(body, {}), s
        if a in self.funs:
            argsorts, s = self.funs[a]
            if argsorts:
                raise Bad(f"{a} applied to no arguments")
            return self.names.of[a], s
        raise Bad(f"unknown symbol {a}")

    def apply(self, f: str, args: list, env: dict) -> tuple[str, str]:
        texts = [x for x, _ in args]
        sorts = [s for _, s in args]
        n = len(args)
        if f == "not":
            return f"(¬{texts[0]})", "Bool"
        if f == "and":
            return ("(" + " ∧ ".join(texts) + ")" if n else "True"), "Bool"
        if f == "or":
            return ("(" + " ∨ ".join(texts) + ")" if n else "False"), "Bool"
        if f == "=>":
            out = texts[-1]
            for x in reversed(texts[:-1]):
                out = f"({x} → {out})"
            return out, "Bool"
        if f == "xor":
            out = texts[0]
            for x in texts[1:]:
                out = f"(¬({out} ↔ {x}))"
            return out, "Bool"
        if f == "=":
            rel = "↔" if sorts[0] == "Bool" else "="
            pairs = [f"({texts[i]} {rel} {texts[i + 1]})" for i in range(n - 1)]
            return (pairs[0] if len(pairs) == 1 else "(" + " ∧ ".join(pairs) + ")"), "Bool"
        if f == "distinct":
            rel = "↔" if sorts[0] == "Bool" else "="
            pairs = [f"(¬({texts[i]} {rel} {texts[j]}))"
                     for i in range(n) for j in range(i + 1, n)]
            return (pairs[0] if len(pairs) == 1 else "(" + " ∧ ".join(pairs) + ")"), "Bool"
        if f == "ite":
            c, a, b = texts
            if sorts[1] == "Bool":
                return f"(({c} ∧ {a}) ∨ (¬{c} ∧ {b}))", "Bool"
            return f"(@ite _ {c} (Classical.propDecidable _) {a} {b})", sorts[1]
        if f in ("<", "<=", ">", ">="):
            op = {"<": "<", "<=": "≤", ">": ">", ">=": "≥"}[f]
            pairs = [f"({texts[i]} {op} {texts[i + 1]})" for i in range(n - 1)]
            return (pairs[0] if len(pairs) == 1 else "(" + " ∧ ".join(pairs) + ")"), "Bool"
        if f in ("+", "*"):
            op = f" {f} "
            return "(" + op.join(texts) + ")", sorts[0]
        if f == "-":
            if n == 1:
                return f"(-{texts[0]})", sorts[0]
            return "(" + " - ".join(texts) + ")", sorts[0]
        if f == "/":
            return "(" + " / ".join(texts) + ")", "Real"
        if f == "div":
            return f"({texts[0]} / {texts[1]})", "Int"
        if f == "mod":
            return f"({texts[0]} % {texts[1]})", "Int"
        if f == "abs":
            return f"(|{texts[0]}|)", sorts[0]
        if f == "to_real":
            return f"(({texts[0]} : ℤ) : ℝ)", "Real"
        if f == "to_int":
            return f"(⌊{texts[0]}⌋)", "Int"
        if f == "is_int":
            return f"(((⌊{texts[0]}⌋ : ℤ) : ℝ) = {texts[0]})", "Bool"
        if f in self.defs:
            params, s, body = self.defs[f]
            if len(params) != n:
                raise Bad(f"{f} applied to {n} arguments, defined with {len(params)}")
            inner = {p: a for (p, _), a in zip(params, args)}
            return self.term(body, inner), s
        if f in self.funs:
            argsorts, s = self.funs[f]
            if len(argsorts) != n:
                raise Bad(f"{f} applied to {n} arguments, declared with {len(argsorts)}")
            return "(" + self.names.of[f] + " " + " ".join(texts) + ")", s
        raise Bad(f"unsupported operator {f}")

    # ------------------------------------------------------------ commands

    def command(self, c) -> None:
        if not isinstance(c, list) or not c:
            raise Bad(f"not a command: {c}")
        op = c[0]
        if op in ("set-info", "set-option", "set-logic", "check-sat", "exit",
                  "get-model", "get-info", "get-value", "get-unsat-core", "get-proof"):
            return
        if op == "declare-sort":
            if c[2] != "0":
                raise Bad("a sort with parameters")
            name = self.names.fresh(c[1], "S_")
            self.sorts[c[1]] = name
            self.binders.append(f"{{{name} : Type}} [Inhabited {name}]")
        elif op in ("declare-fun", "declare-const"):
            name, argsorts, s = (c[1], c[2], c[3]) if op == "declare-fun" else (c[1], [], c[2])
            lean = self.names.declare(name)
            ty = " → ".join([self.sort(a) for a in argsorts] + [self.sort(s)])
            self.funs[name] = (argsorts, s)
            self.binders.append(f"({lean} : {ty})")
        elif op == "define-fun":
            self.defs[c[1]] = ([(p, s) for p, s in c[2]], c[3], c[4])
        elif op == "assert":
            text, s = self.term(c[1], {})
            if s != "Bool":
                raise Bad("an assertion that is not a formula")
            self.hyps.append(self.check_size(text))
        elif op in ("push", "pop", "define-sort", "declare-datatypes", "declare-datatype",
                    "define-funs-rec", "define-fun-rec"):
            raise Bad(f"unsupported command {op}")
        else:
            raise Bad(f"unknown command {op}")


def convert(text: str, name: str, max_size: int) -> tuple[str, str, str]:
    """`(statement, logic, status)`, the statement ending in `TACTIC`."""
    commands = sexprs(text)
    logic = next((c[1] for c in commands if isinstance(c, list) and c[:1] == ["set-logic"]),
                 None)
    if logic is None:
        raise Bad("no set-logic")
    status = next((c[2] for c in commands if isinstance(c, list) and c[:2] == ["set-info", ":status"]),
                  "unknown")
    tr = Translator(logic, max_size)
    for c in commands:
        tr.command(c)
    hyps = [f"(h{i + 1} : {h})" for i, h in enumerate(tr.hyps)]
    signature = "\n    ".join(tr.binders + hyps)
    stmt = f"theorem {name}\n    {signature} :\n    False := by\n  TACTIC\n"
    return stmt, logic, status


def main() -> None:
    sys.setrecursionlimit(1000000)
    ap = argparse.ArgumentParser(description="SMT-LIB 2 problem → a Lean theorem")
    ap.add_argument("problem")
    ap.add_argument("--name", default="T")
    ap.add_argument("--max-size", type=int, default=200_000,
                    help="largest formula to state, in characters, once inlined")
    args = ap.parse_args()
    try:
        stmt, logic, status = convert(open(args.problem).read(), args.name, args.max_size)
    except (Bad, RecursionError, IndexError, ValueError) as e:
        print(f"cannot state: {e}", file=sys.stderr)
        sys.exit(2)
    print(f"-- logic {logic}, status {status}")
    print(stmt, end="")


if __name__ == "__main__":
    main()
