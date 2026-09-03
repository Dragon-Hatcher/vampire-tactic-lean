#!/usr/bin/env python3
"""Extract each `fullProof` statement from a directory of reference-generated leancheck
proofs into standalone `vampire [*]` test files. Usage: extract.py <src-dir> <out-dir>
<name-prefix>"""
import re, sys, pathlib

def extract(path):
    text = path.read_text()
    lines = text.split("\n")

    # Preamble: the `variable` blocks, with their continuation lines.
    variables, i = [], 0
    while i < len(lines):
        l = lines[i]
        if l.startswith("variable "):
            block = [l]
            i += 1
            while i < len(lines) and lines[i].startswith("  ") and lines[i].strip():
                block.append(lines[i]); i += 1
            variables.append("\n".join(block))
            continue
        if l.startswith("theorem ") or l.startswith("-- step") or l.startswith("axiom "):
            break
        i += 1

    # The fullProof statement: everything between `theorem fullProof :` and ` := by`.
    m = re.search(r"^theorem fullProof :(.*?):= by$", text, re.S | re.M)
    if not m:
        return None
    return "\n".join(variables), m.group(1).strip()

def main():
    src, out, prefix = pathlib.Path(sys.argv[1]), pathlib.Path(sys.argv[2]), sys.argv[3]
    out.mkdir(exist_ok=True, parents=True)
    names = sorted(p.stem for p in src.glob("*.lean"))
    made = []
    for name in names:
        got = extract(src / (name + ".lean"))
        if got is None:
            print(f"SKIP {name}: no fullProof", file=sys.stderr); continue
        vars_, stmt = got
        # `+` and `-` are what distinguishes e.g. SYN036+1 from SYN036-1; collapsing
        # both to `_` silently drops one of the pair.
        ident = prefix + re.sub(r"[^A-Za-z0-9]", "_", name.replace("+", "p").replace("-", "m"))
        (out / (ident + ".lean")).write_text(
            "import Vampire\n"
            "set_option vampire.timeout 30\n"
            "set_option maxHeartbeats 0\n"
            "set_option maxRecDepth 100000000\n"
            "set_option linter.all false\n"
            "universe u\n"
            f"{vars_}\n\n"
            f"theorem {ident} : {stmt} := by\n  vampire [*]\n\n"
            f"#print axioms {ident}\n")
        made.append(ident)
    print("\n".join(made))

if __name__ == "__main__":
    main()
