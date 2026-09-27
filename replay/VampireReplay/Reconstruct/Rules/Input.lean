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

The hypothesis proves it, but not always as stated: vampire's parser folds a
`~` into an atom's polarity, so `~~p` is `p`, merges nested junctions of one
connective, as the translation writes them, and shares an equation with its
sides in an order of its own; and an equation between propositions is written
`<=>`.
-/
def input (step : Step) : ReconstructM Expr := do
  let some name := step.unit.name?
    | throwError "an input step should carry the name of the formula it states"
  let some hypothesis := (← read).symbols.hypotheses[name]?
    | throwError "no hypothesis was given the name `{name}`"
  restate hypothesis (← inferType hypothesis) (← step.conclusion)
    { atomDoubleNegations := true, equations := true, junctions := true,
      propositionEquations := true }

end Vampire.Reconstruct.Input
