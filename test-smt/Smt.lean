import Mathlib
import Vampire

/-!
Steps vampire settled inside an SMT solver, replayed by asking cvc5.

These need a vampire built against Z3, which is what `VAMPIRE_Z3=1 lake build`
gives; without it vampire has no SMT solver to hand AVATAR to, refuses
`sas=z3`, and none of this is reached. That is why they are not in `test/`,
which `lake test` runs against whatever build is there.

    VAMPIRE_Z3=1 lake build
    VAMPIRE_Z3=1 lake env lean test-smt/Smt.lean

`sas=z3` is forced rather than named in a strategy, so that whichever slice
of the schedule wins hands its components to Z3.
-/

set_option maxHeartbeats 1000000

/--
Splitting on arithmetic literals: `x > 10` and `x < 5` cannot both be
assumed, which is a conflict the theory sees rather than the propositional
structure, so Z3 is what sees it and cvc5 is what replays it.
-/
example (x : ℤ) (p q : Prop)
    (h1 : x > 10 ∨ p) (h2 : x < 5 ∨ q) (h3 : ¬p) (h4 : ¬q) : False := by
  vampire (forced := #[("sas", "z3")]) [h1, h2, h3, h4]

-- The same over the reals does not go through, and not for want of anything
-- here: `lean-smt` cannot translate a real numeral against this Lean and
-- Mathlib -- `smt` on `(x : ℝ) (h : x < 1) (h2 : x ≥ 1) ⊢ False` says
-- `cannot translate 1` on its own. Integers it handles.


/-- Uninterpreted symbols, where what Z3 refutes is propositional. -/
example (ι : Type) [Inhabited ι] (f : ι → ι) (a b : ι) (p : Prop)
    (h1 : f a = b ∨ p) (h2 : ¬(f a = b)) (h3 : ¬p) : False := by
  vampire (forced := #[("sas", "z3")]) [h1, h2, h3]
