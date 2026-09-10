import Vampire.Reconstruct.Basic

/-!
Rewriting with an equation.

`ForwardDemodulation` finds a unit equation in the index whose left-hand side
matches a subterm of a literal of the clause being simplified, and replaces
every occurrence of that subterm by the right-hand side under the match. So the
conclusion is the premise with one literal rewritten, and the equation is what
rewrites it.

Which subterm of which literal, and which side of the equation was matched, is
gone once the inference is done -- vampire's own proof checker calls working it
out afterwards "very hard" and guesses -- so the fork records it.
-/

namespace Vampire.Reconstruct.Rewrite

open Lean Meta

/-- The same proposition with every occurrence of `from` replaced by `to`. -/
private def rewriteWith (heq «from» to : Expr) (h : Expr) : ReconstructM Expr := do
  let stated ← instantiateMVars (← inferType h)
  let τ ← inferType «from»
  let motive ← withLocalDeclD `x τ fun x => do
    mkLambdaFVars #[x] (stated.replace fun e => if e == «from» then some x else none)
  mkAppOptM ``Eq.subst #[some τ, some motive, some «from», some to, some heq, some h]

/-- `forward_demodulation`: the premise with one literal rewritten. -/
def demodulation (step : Step) : ReconstructM Expr := do
  let #[(mainProof, mainStated), (sideProof, sideStated)] := step.premises
    | throwError "demodulation should have two premises, got {step.premises.size}"
  let #[mainParent, sideParent] := step.unit.parents
    | throwError "demodulation should have two premises"
  let mainUse ← step.useOf mainParent.number
  let sideUse ← step.useOf sideParent.number
  let some rewrittenLiteral := mainUse.literal
    | throwError "demodulation did not record the literal it rewrote"
  let some rewrittenTerm := mainUse.term
    | throwError "demodulation did not record the term it rewrote"
  let some equationSide := sideUse.term
    | throwError "demodulation did not record which side of the equation it used"
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut kept : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      kept := kept.insert v x
    -- Rewriting can be what removes a variable from the clause.
    let vars ← coverVars mainParent kept
    let (mainAt, mainType) ← instantiateAt mainParent mainUse vars mainProof mainStated
    let (sideAt, sideType) ← instantiateAt sideParent sideUse vars sideProof sideStated
    let «from» ← do
      -- The equation's variables stand for what the match bound them to, which
      -- is what makes its left-hand side the subterm being rewritten.
      let mut sideVars : Vars := {}
      for (v, image) in sideUse.bindings do
        sideVars := sideVars.insert v (← term vars image)
      term sideVars equationSide
    let rewritten ← term vars rewrittenTerm
    let some (_, lhs, rhs) := (← instantiateMVars sideType).eq?
      | throwError "demodulation's side premise is not an equation:\
        {indentExpr sideType}"
    -- The recorded side says which way round the equation was used; nothing is
    -- tried and rejected here.
    let heq ←
      if ← isDefEq lhs «from» then pure sideAt
      else if ← isDefEq rhs «from» then mkAppM ``Eq.symm #[sideAt]
      else throwError "neither side of{indentExpr sideType}\nis the term\
        {indentExpr «from»}\nthe equation was matched at"
    let to := if ← isDefEq lhs «from» then rhs else lhs
    let place := placeLiteral target
    let body ← elimParts mainType 0 (fun i h => do
      if i == rewrittenLiteral.toNat then
        place (← rewriteWith heq rewritten to h)
      else
        place h) mainAt
    mkLambdaFVars xs body

end Vampire.Reconstruct.Rewrite
