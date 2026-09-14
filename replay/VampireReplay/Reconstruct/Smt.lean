import VampireReplay.Abstract
import VampireReplay.Reconstruct.Monad

/-!
Asking an SMT solver, with what vampire introduced put aside.
-/

namespace Vampire.Reconstruct

open Lean Meta

/--
What an SMT solver makes of the facts given.

A skolem symbol stands for a term Hilbert choice picked out, and that rebuilds
to a lambda, which SMT-LIB has no notion of; a subformula vampire named is a
lambda too. What they stand for does not matter to the question -- the solver
needs only to tell one such term from another -- so each is put aside as a
variable of its own and the answer applied back to it, the way the arithmetic
procedures are handed the numbers rather than what produced them.
-/
def bySmt (facts : Array Expr) (goal : Expr) : ReconstructM Expr := do
  let introduced := (← get).introduced.toArray.map (·.2)
  let solver := (← read).smt
  let ask (facts : Array Expr) (claim : Option Expr) : MetaM Expr :=
    solver facts (claim.getD (mkConst ``False))
  VampireReplay.Abstract.abstractingTerms introduced ask facts
    (if goal.isConstOf ``False then none else some goal)

end Vampire.Reconstruct
