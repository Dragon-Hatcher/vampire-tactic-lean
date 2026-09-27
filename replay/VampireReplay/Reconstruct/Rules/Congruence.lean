import VampireReplay.Reconstruct.Basic
import VampireReplay.Reconstruct.Rules.Definition

/-!
Rules that restate a formula without changing what it says.

Flattening merges nested junctions and adjacent quantifiers, cancels double
negations and pushes a negation into a literal. Most of that is invisible once
the formula is a Lean proposition -- `∀ x y` already is two binders, and an
n-ary junction folds the same either way -- and `relate` accounts for the rest.
-/

namespace Vampire.Reconstruct.Congruence

open Lean Meta

/--
A step that restates its premise: flattening, which cancels double negations
and rebuilds literals -- sharing them, their equations' sides in vampire's
order -- and rectification, which renames variables, drops a quantifier over
one nothing mentions, and rebuilds literals too.
Closure only quantifies.
-/
def restated (step : Step) : ReconstructM Expr := do
  let ⟨_, proof, stated⟩ ← step.onlyPremise
  let r : Restating := match step.rule with
    | .flatten => { doubleNegations := true, equations := true, junctions := true }
    | .rectify => { equations := true, vacuousQuantifiers := true }
    | _ => {}
  restate proof stated (← step.conclusion) r

/--
A step that restates its first premise, the others being definitions it
applied.

Unfolding a definition rewrites `sF(t)` to what `sF` was defined as, and
folding one does the reverse. A name is bound to what it names, so both are
already the same proposition here and the definitions among the premises carry
no further weight.
-/
def unfolded (step : Step) : ReconstructM Expr := do
  let some (proof, stated) := step.premises[0]?
    | throwError "{step.rule.name} should have at least one premise, got none"
  let some parent := step.unit.parents[0]?
    | throwError "{step.rule.name} should have at least one premise, got none"
  -- Folding a clause rewrites each literal where it stands, and the worker
  -- records which: a folded literal is the premise's through the names.
  if parent.clause?.isSome then
    return ← step.underVars fun kept target => do
      let (_, args) ← premiseVars parent (← coverVars kept step.unit.boundVarSorts)
      Definition.carryThroughNames step 0 parent (← instantiateForall stated args) target
        (mkAppN proof args)
  -- Naming replaces subformulas by names applied to their free variables,
  -- which unfold to them: the conclusion through the names it introduced is
  -- the premise.
  mkExpectedTypeHint (← throughNames proof (← step.conclusion)) (← step.conclusion)

end Vampire.Reconstruct.Congruence
