import Lean
import Mathlib.Tactic.Linarith

/-!
What proves an arithmetic step of vampire's.

Kept apart from the rest of the tactic because `linarith` comes with a library
whose keywords -- `lemma`, `says`, `to` -- the replay uses as names of its own.
Replay is handed `contradiction` rather than importing it.
-/

namespace Vampire.Arith

open Lean Meta

/--
`False`, from facts that cannot all hold of any numbers.

Two procedures rather than one: `omega` knows that the integers are discrete,
which is what vampire's integrality steps turn on, and `linarith` works over
any ordered field, which is where the rationals and the reals are. Neither is
asked to find the facts -- they are the step's own premises -- only to see that
together they are impossible.
-/
def contradiction (facts : Array Expr) (claim : Option Expr) : MetaM Expr := do
  -- What a symbol vampire introduced stands for is a function, so a step over
  -- one states an application of it; the procedures read what it says, which
  -- is that reduced. Stated again rather than rebuilt: the two are the same
  -- term to the kernel.
  let facts ← facts.mapM fun fact => do
    let stated ← instantiateMVars (← inferType fact)
    let reduced ← Meta.transform stated (post := fun e => return .done e.headBeta)
    if reduced == stated then pure fact else mkExpectedTypeHint fact reduced
  let claim ← claim.mapM fun claim =>
    Meta.transform claim (post := fun e => return .done e.headBeta)
  let goal ← mkFreshExprMVar (claim.getD (mkConst ``False))
  try
    -- `linarith` proves a comparison outright, which is what a theory axiom
    -- like commutativity states; `omega` wants a goal of `False`, so it is
    -- given one, the claim having been turned into a fact by the caller.
    if claim.isSome then
      Mathlib.Tactic.Linarith.linarith true facts.toList {} goal.mvarId!
    else
      Lean.Elab.Tactic.Omega.omega facts.toList goal.mvarId!
  catch omegaFailed =>
    try
      if claim.isSome then
        Lean.Elab.Tactic.Omega.omega facts.toList goal.mvarId!
      else
        Mathlib.Tactic.Linarith.linarith true facts.toList {} goal.mvarId!
    catch linarithFailed =>
      let stated ← facts.mapM fun f => do
        return indentExpr (← instantiateMVars (← inferType f))
      throwError "nothing says {(claim.map fun c =>
          m!"that{indentExpr c}\nfollows").getD m!"these cannot all hold"} \
        of any numbers:{MessageData.joinSep stated.toList ""}\n\
        omega said: {omegaFailed.toMessageData}\n\
        linarith said: {linarithFailed.toMessageData}"
  instantiateMVars goal

end Vampire.Arith
