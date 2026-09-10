import Vampire.Reconstruct.Basic

/-!
Binary resolution.

`BinaryResolution::generateClause` unifies a literal of one premise with the
complement of a literal of the other, then builds the rest of both premises
under that unifier and discards it. The fork records it, along with which
literal each premise contributed, so replay instantiates both premises at what
was recorded: it neither unifies anything nor matches the conclusion back
against its premises.
-/

namespace Vampire.Reconstruct.Resolution

open Lean Meta

/-- Instantiates a premise at what the unifier bound its variables to. -/
def instantiateAt (parent : Vampire.Unit) (use : PremiseUse) (vars : Vars)
    (proof stated : Expr) : ReconstructM (Expr × Expr) := do
  let bound := Std.HashMap.ofList use.bindings.toList
  let mut args := #[]
  for (v, sortName) in parent.varSorts do
    match bound[v]? with
    | some image => args := args.push (← term vars image)
    | none => args := args.push (← someElement (← sortType sortName))
  return (mkAppN proof args, ← instantiateForall stated args)

/-- How a step used the premise numbered `number`. -/
def useOf (step : Step) (number : UInt32) : ReconstructM PremiseUse := do
  let some use := step.unit.premiseUses.find? (·.premise == number)
    | throwError "step {step.unit.number} did not record how it used step {number}"
  return use

/-- `resolution`: both premises but for the complementary pair resolved on. -/
def resolution (step : Step) : ReconstructM Expr := do
  let #[(proof₁, stated₁), (proof₂, stated₂)] := step.premises
    | throwError "resolution should have two premises, got {step.premises.size}"
  let #[parent₁, parent₂] := step.unit.parents
    | throwError "resolution should have two premises"
  let use₁ ← useOf step parent₁.number
  let use₂ ← useOf step parent₂.number
  let some resolved₁ := use₁.literal
    | throwError "resolution did not record the literal it resolved on in step \
      {parent₁.number}"
  let some resolved₂ := use₂.literal
    | throwError "resolution did not record the literal it resolved on in step \
      {parent₂.number}"
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut vars : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      vars := vars.insert v x
    let (p₁, t₁) ← instantiateAt parent₁ use₁ vars proof₁ stated₁
    let (p₂, t₂) ← instantiateAt parent₂ use₂ vars proof₂ stated₂
    -- Every literal but the resolved one carries over, so the conclusion keeps
    -- it; where it keeps it is a lookup, not a search.
    let index := (junctionParts ``Or target).zipIdx.foldl
      (init := ({} : Std.HashMap Expr Nat)) fun acc (p, i) => acc.insert p i
    let place (h : Expr) : ReconstructM Expr := do
      let stated ← inferType h
      let some i := index[stated]?
        | throwError "the literal{indentExpr stated}\nis not among\
          {indentExpr target}"
      injectPart ``Or target i h
    -- The resolved pair is complementary, which closes that case.
    let body ← elimParts t₁ 0 (fun i h₁ => do
      unless i == resolved₁.toNat do
        return ← place h₁
      elimParts t₂ 0 (fun j h₂ => do
        unless j == resolved₂.toNat do
          return ← place h₂
        let (positive, negative) ←
          if (← inferType h₁).not?.isSome then pure (h₂, h₁) else pure (h₁, h₂)
        mkAppOptM ``absurd
          #[some (← inferType positive), some target, some positive, some negative])
        p₂) p₁
    mkLambdaFVars xs body

end Vampire.Reconstruct.Resolution
