import VampireReplay.Reconstruct.Basic

/-!
The leaves of a proof: the formulas the problem was given.

Vampire keeps the name each input formula was given, and the translation named
each hypothesis after its position, so the step says outright which hypothesis
it restates. Nothing has to be searched for or matched up.
-/

namespace Vampire.Reconstruct.Input

open Lean Meta

/--
`input`: a formula of the problem, which is a hypothesis of the goal.

The hypothesis proves it, but not always as stated: vampire's parser reverses a
junction's arguments, so the formula's own reading of itself can order the
disjuncts differently. `implies` relates the two.
-/
def input (step : Step) : ReconstructM Expr := do
  let some name := step.unit.name?
    | throwError "an input step should carry the name of the formula it states"
  let some hypothesis := (← read).symbols.hypotheses[name]?
    | throwError "no hypothesis was given the name `{name}`"
  let conclusion ← step.conclusion
  let stated ← inferType hypothesis
  if ← isDefEq stated conclusion then
    return hypothesis
  try
    mkAppM ``Iff.mp #[← equiv stated conclusion, hypothesis]
  catch _ =>
    -- The two can also differ by the order of the clause's literals, which
    -- `equiv` walks position by position and so cannot relate. Carrying each
    -- literal into where the conclusion keeps it does not care about order,
    -- and says the same thing one way round: what the hypothesis says is
    -- what the step states.
    return mkApp (← implies stated conclusion) hypothesis

end Vampire.Reconstruct.Input
