import Mathlib
import Vampire.Bridge.Poly

/-!
# `Vampire/Bridge/Poly.lean` decides whether two comparisons are the same comparison

The `SAME` cases are the rewrites `theory normalization` and the ALASCA normalisations
actually perform, taken off traced replays: a reassociated sum, `A ≥ 0` restated as
`¬ A < 0`, a reordered product, a rescaled inequality, `^` folded or not.

The `DIFF` cases matter as much and for a different reason. This normal form is what the
bridge's leaves use *instead of* handing the atom to a search procedure, and the rules
above them — `pick`, `conjLeaves` — decide which premise leaf matches which conclusion
leaf by trying a transport and keeping the first that succeeds. A leaf test that said yes
to everything would make that choice arbitrary: the first version of this pairing rule
matched `2 * x + 3 * y ≤ 1` with `x - y ≤ 5` and handed `linarith` an obligation that is
not true. So the first `DIFF` below is a regression test for a wrong proof, not for a
slow one, and `x ≤ y` against `y ≤ x` and `-2 * x ≤ 2` against `x ≤ 1` are there because
scaling and direction are the two ways a normal form can be too generous.
-/

open Lean Elab Meta Vampire.Bridge

opaque x : ℝ
opaque y : ℝ
opaque a : ℝ
opaque b : ℝ
opaque v6 : ℝ
opaque v9 : ℝ

/-- `#same expect, p, q` — check whether `p` and `q` normalise to the same atom. -/
elab "#same " expect:str ", " p:term ", " q:term : command =>
  Command.liftTermElabM do
    let ep ← instantiateMVars (← Term.elabTerm p (some (.sort .zero)))
    let eq_ ← instantiateMVars (← Term.elabTerm q (some (.sort .zero)))
    let got := match atomNF ep, atomNF eq_ with
      | some u, some v => if u.sameAs v then "SAME" else "DIFF"
      | _, _ => "NOTATOM"
    if got == expect.getString then logInfo m!"ok    {got}  {p} ⋈ {q}"
    else throwError "FAIL: got {got}, expected {expect.getString} for {p} ⋈ {q}"

-- must MATCH: exactly the rewrites `theory normalization` performs
#same "SAME", (x + y) + 1 ≤ 0, 1 + (y + x) ≤ 0
#same "SAME", a + b ≥ 0, ¬ (a + b < 0)
#same "SAME", 3*y + 2*x ≤ 1, 2*x + 3*y ≤ 1
#same "SAME", x * y * a ≤ 0, y * a * x ≤ 0     -- products reassociated/reordered
#same "SAME", 2*x ≤ 2, x ≤ 1                 -- positive rescaling
#same "SAME", x = y, y = x                   -- equality has no orientation
#same "SAME", (1/2) * (2*x) ≤ 0, x ≤ 0       -- rational coefficient
#same "SAME", x^2 + x ≤ 0, x*x + x ≤ 0       -- `^` folded or not
#same "SAME", 13*v9 + -20*v6 + x + 20*y ≤ -14, -14 ≥ 20*y + x + 13*v9 - 20*v6

-- must DIFFER: this is the pair that mispaired when the leaf always succeeded
#same "DIFF", 2*x + 3*y ≤ 1, x - y ≤ 5
#same "DIFF", x ≤ y, y ≤ x                   -- direction matters for ≤
#same "DIFF", x ≤ 0, x < 0                   -- strictness matters
#same "DIFF", -2*x ≤ 2, x ≤ 1                -- negative rescaling flips ≤
#same "DIFF", x = y, x ≠ y

-- not a comparison at all: falls back rather than guessing
#same "NOTATOM", True, True
