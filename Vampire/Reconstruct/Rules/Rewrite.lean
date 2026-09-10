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

/--
The equation a premise use points at, as an oriented rewrite: the side the
inference matched, what it rewrites to, and the equation itself.

Which way round the equation was used is read off the recorded side, and the
recorded match is what states that side in the premise's own variables.
-/
private def orientedEquation (parent : Vampire.Unit) (use : PremiseUse)
    (vars : Vars) (proof stated : Expr) : ReconstructM (Expr × Expr × Expr) := do
  let some equationSide := use.term
    | throwError "the step did not record which side of the equation it used"
  let «from» ← term (← substitutedVars use vars) equationSide
  let some (_, lhs, rhs) := (← instantiateMVars stated).eq?
    | throwError "the equation is not one:{indentExpr stated}"
  if ← isDefEq lhs «from» then
    return («from», rhs, proof)
  if ← isDefEq rhs «from» then
    return («from», lhs, ← mkAppM ``Eq.symm #[proof])
  throwError "neither side of{indentExpr stated}\nis the term{indentExpr «from»}\n\
    the equation was matched at"

/-- `forward_demodulation`: the premise with one literal rewritten. -/
def demodulation (step : Step) : ReconstructM Expr := do
  let #[(mainProof, mainStated), (sideProof, sideStated)] := step.premises
    | throwError "demodulation should have two premises, got {step.premises.size}"
  let #[mainParent, sideParent] := step.unit.parents
    | throwError "demodulation should have two premises"
  let mainUse ← step.useAt 0
  let sideUse ← step.useAt 1
  let some rewrittenLiteral := mainUse.literal
    | throwError "demodulation did not record the literal it rewrote"
  let some rewrittenTerm := mainUse.term
    | throwError "demodulation did not record the term it rewrote"
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut kept : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      kept := kept.insert v x
    -- Rewriting can be what removes a variable from the clause.
    let vars ← coverVars mainParent kept
    let (mainAt, mainType) ← instantiateAt mainParent mainUse vars mainProof mainStated
    let (sideAt, sideType) ← instantiateAt sideParent sideUse vars sideProof sideStated
    let (_, to, heq) ← orientedEquation sideParent sideUse vars sideAt sideType
    let rewritten ← term (← substitutedVars mainUse vars) rewrittenTerm
    let place := placeLiteral target
    let body ← elimParts mainType 0 (fun i h => do
      if i == rewrittenLiteral.toNat then
        place (← rewriteWith heq rewritten to h)
      else
        place h) mainAt
    mkLambdaFVars xs body

/--
`superposition`: the clause being rewritten and the equation rewriting it, both
at the unifier, with the rewritten literal in place of the equation's.
-/
def superposition (step : Step) : ReconstructM Expr := do
  let #[(mainProof, mainStated), (sideProof, sideStated)] := step.premises
    | throwError "superposition should have two premises, got {step.premises.size}"
  let #[mainParent, sideParent] := step.unit.parents
    | throwError "superposition should have two premises"
  let mainUse ← step.useAt 0
  let sideUse ← step.useAt 1
  let some rewrittenLiteral := mainUse.literal
    | throwError "superposition did not record the literal it rewrote"
  let some rewrittenTerm := mainUse.term
    | throwError "superposition did not record the term it rewrote"
  let some equationLiteral := sideUse.literal
    | throwError "superposition did not record which literal is the equation"
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut kept : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      kept := kept.insert v x
    let vars ← coverVars sideParent (← coverVars mainParent kept)
    let (mainAt, mainType) ← instantiateAt mainParent mainUse vars mainProof mainStated
    let (sideAt, sideType) ← instantiateAt sideParent sideUse vars sideProof sideStated
    let place := placeLiteral target
    let rewritten ← term (← substitutedVars mainUse vars) rewrittenTerm
    -- The equation is a literal of its own premise, so the case where it holds
    -- is the one that rewrites; its other literals are literals of the
    -- conclusion, as are the ones the rewritten premise keeps.
    let body ← elimParts mainType 0 (fun i h => do
      let rewrite (h : Expr) : ReconstructM Expr :=
        elimParts sideType 0 (fun j hSide => do
          unless j == equationLiteral.toNat do
            return ← place hSide
          let (_, to, heq) ← orientedEquation sideParent sideUse vars hSide
            (← inferType hSide)
          place (← rewriteWith heq rewritten to h)) sideAt
      if i == rewrittenLiteral.toNat || mainUse.rewritesWholePremise then
        rewrite h
      else
        place h) mainAt
    mkLambdaFVars xs body


end Vampire.Reconstruct.Rewrite
