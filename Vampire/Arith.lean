import Lean
import Mathlib.Tactic.NormNum.Core
import Vampire.Lemmas

/-!
What evaluates the closed facts about numerals replay's certificates ask for:
that a coefficient is positive or not zero, that a numeral lies between two
integers. Kept apart because replay is precompiled and imports no Mathlib; it
is handed `numerically` rather than importing it. `Vampire.Lemmas` is imported
so that the lemmas replay names are in the environment it runs in.
-/

namespace Vampire.Arith

open Lean Meta

/--
A proof of `claim`, a true closed fact about numerals: evaluated by
`norm_num`'s extensions, which compute with numerals rather than search for a
proof.
-/
def numerically (claim : Expr) : MetaM Expr := do
  let ⟨true, proof⟩ ← Mathlib.Meta.NormNum.deriveBool claim
    | throwError "{claim} is false"
  return proof

end Vampire.Arith
