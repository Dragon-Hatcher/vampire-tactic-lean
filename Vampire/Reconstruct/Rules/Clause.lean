import Vampire.Reconstruct.Basic

/-!
Rules that leave a clause's literals alone but for dropping, repeating or
reorienting them.

Each comes to the same thing: every literal of the premise is a literal of the
conclusion, or is refutable on its own. `implies` settles that by looking each
one up, so nothing is searched for and nothing is rederived.
-/

namespace Vampire.Reconstruct.Clause

open Lean Meta

/--
Instantiates a premise clause at the variables the conclusion kept.

A clause is universally quantified over the variables occurring in it, and a
rule that drops a literal can drop the last occurrence of a variable with it.
Such a variable is instantiated at an arbitrary element of its sort; vampire's
domains are never empty.
-/
def instantiateAt (parent : Vampire.Unit) (vars : Vars) (proof stated : Expr) :
    ReconstructM (Expr × Expr) := do
  let mut args := #[]
  for (v, sortName) in parent.varSorts do
    match vars[v]? with
    | some x => args := args.push x
    | none => args := args.push (← someElement (← sortType sortName))
  return (mkAppN proof args, ← instantiateForall stated args)

/--
A step whose conclusion restates its premise's literals.

The literals are taken as vampire has them rather than found by taking the
clause apart: a literal naming a subformula stands for a whole formula, and the
disjuncts of what it rebuilds to are not literals of the clause.
-/
def literals (step : Step) : ReconstructM Expr := do
  let #[(premiseProof, _)] := step.premises
    | throwError "expected one premise, got {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "expected a premise"
  let some source := parent.clause?
    | throwError "expected a clause"
  let some conclusion := step.unit.clause?
    | throwError "expected a clause"
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut kept : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      kept := kept.insert v x
    -- Dropping a literal can drop the last occurrence of a variable with it.
    let vars ← coverVars parent kept
    let mut args := #[]
    for (v, sortName) in parent.varSorts do
      match vars[v]? with
      | some x => args := args.push x
      | none => args := args.push (← someElement (← sortType sortName))
    let sourceParts ← source.literals.mapM (Reconstruct.literal vars)
    let targetParts ← conclusion.literals.mapM (Reconstruct.literal vars)
    let body ← elimGiven sourceParts (fun _ h => do
      -- Every literal the step kept is one of the conclusion's; one it dropped
      -- has to be refutable on its own, as `t ≠ t` is.
      let stated ← instantiateMVars (← inferType h)
      for candidate in #[h] ++ (← doubleNegations h) ++
          ((← flipEquality h).toArray) do
        let says ← instantiateMVars (← inferType candidate)
        for (part, i) in targetParts.zipIdx do
          if ← isDefEq part says then
            return ← injectGiven targetParts i candidate
      if let some inner := asNegation stated then
        if let some (_, lhs, rhs) := inner.eq? then
          if ← isDefEq lhs rhs then
            return ← mkAppOptM ``absurd
              #[some inner, some target, some (← mkEqRefl lhs), some h]
      if stated.isConstOf ``False then
        return ← mkAppOptM ``False.elim #[some target, some h]
      throwError "the literal{indentExpr stated}\nis neither among        {indentExpr target}\nnor refutable on its own")
      (mkAppN premiseProof args)
    mkLambdaFVars xs body

/--
`polarity_flipping`: nothing, once the predicates it flipped are read as
meaning the opposite.

`Shuffling::polarityFlip` picks a set of predicates and replaces every literal
over them, in every clause of the problem, by its complement. That says
nothing about the clauses: it says that those predicates now mean the opposite
of what they did. Reading the steps after it that way -- which is what the framework does --
leaves this step stating what its premise does, up to the order shuffling put
its literals in.
-/
def polarityFlipping (step : Step) : ReconstructM Expr := literals step

end Vampire.Reconstruct.Clause
