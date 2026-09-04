#!/usr/bin/env python3
"""Rewrite extracted benchmark tests to be proved by a different tactic.

    ./retarget.py <tests-dir> <out-dir> duper|smt

The statements are unchanged — same preamble, same `variable` blocks, same theorem — so
what is compared is the tactic and nothing else. Three things do have to change:

* **The import and the options.** `import Vampire` becomes the other tool's, and
  `set_option vampire.timeout` goes, since an unknown option is an error rather than a
  no-op. `maxHeartbeats 0` stays: without it a slow tactic dies on the heartbeat count
  rather than on the harness's CPU limit, which would report as a different kind of
  failure at a threshold nobody chose.

* **The hypotheses have to be introduced.** An extracted statement is an implication
  chain, `h₁ → … → hₙ → goal`, and `vampire`'s own preprocessing introduces the binders
  before translating. Another tactic sees the chain as the goal, with an empty context,
  so `[*]` would send it nothing. `intros` first, which is what `vampire` does
  internally, and then the tactic over the whole context.

* **`vampire [*]` becomes that tool's spelling of the same request.** `duper [*]` and
  `smt [*]` both mean "use everything in the local context" — `vampire`'s hint syntax
  was modelled on `smt`'s.

`#print axioms` is kept, and the harness still fails a test whose output mentions
`sorryAx`, so a tactic that logs an error and admits the goal is not counted as a pass.
"""

import re
import sys
from pathlib import Path

TARGETS = {
    "duper": {
        "import": "import Duper",
        # `duper [*]` is duper's own "everything in context". Its portfolio mode has an
        # internal deadline of its own; left at the default, so what is measured is the
        # tool as it ships rather than a configuration chosen here.
        "tactic": "intros\n  duper [*]",
    },
    "smt": {
        "import": "import Smt",
        # The `have` is not a hint, it is the non-emptiness assumption. Vampire's logic
        # assumes every sort is inhabited and our own tactic gets that from the
        # preamble's `[Inhabited ι]` through `inhabitant`; lean-smt's preprocessing asks
        # for `Nonempty ι` and does not find it in the shape these files provide, and
        # then *logs* the failure and admits the goal — 43 of 194 came back depending on
        # `sorryAx` for that reason alone, which is a fact about this harness rather than
        # about lean-smt. Stating it explicitly gives lean-smt the same assumption the
        # tactic it is being compared against has.
        "tactic": ("have _hne : Nonempty ι := ⟨default⟩\n"
                   "  intros\n  smt [*]"),
    },
}


def retarget(text: str, target: dict) -> str:
    out = []
    for line in text.split("\n"):
        if line.startswith("import Vampire"):
            out.append(target["import"])
        elif line.startswith("set_option vampire."):
            continue                      # an unknown option is an error, not a no-op
        elif line.strip() == "vampire [*]":
            out.append("  " + target["tactic"])
        else:
            out.append(line)
    return "\n".join(out)


def main():
    if len(sys.argv) != 4 or sys.argv[3] not in TARGETS:
        sys.exit(f"usage: {sys.argv[0]} <tests-dir> <out-dir> {'|'.join(TARGETS)}")
    src, dst, name = Path(sys.argv[1]), Path(sys.argv[2]), sys.argv[3]
    target = TARGETS[name]
    dst.mkdir(parents=True, exist_ok=True)
    n = 0
    for path in sorted(src.glob("*.lean")):
        text = path.read_text()
        if "vampire [*]" not in text:
            print(f"SKIP {path.stem}: no `vampire [*]`", file=sys.stderr)
            continue
        (dst / path.name).write_text(retarget(text, target))
        n += 1
    print(f"{n} tests retargeted at {name} in {dst}")


if __name__ == "__main__":
    main()
