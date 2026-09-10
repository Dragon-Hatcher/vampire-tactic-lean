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

/-- `resolution`: both premises but for the complementary pair resolved on. -/
def resolution (step : Step) : ReconstructM Expr := do
  let #[(proof₁, stated₁), (proof₂, stated₂)] := step.premises
    | throwError "resolution should have two premises, got {step.premises.size}"
  let #[parent₁, parent₂] := step.unit.parents
    | throwError "resolution should have two premises"
  let use₁ ← step.useAt 0
  let use₂ ← step.useAt 1
  let some resolved₁ := use₁.literal
    | throwError "resolution did not record the literal it resolved on in step \
      {parent₁.number}"
  let some resolved₂ := use₂.literal
    | throwError "resolution did not record the literal it resolved on in step \
      {parent₂.number}"
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut kept : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      kept := kept.insert v x
    -- Resolving away the last literal a variable occurs in leaves it out of
    -- the conclusion, while the unifier still speaks of it; such a variable
    -- stands for an arbitrary element, the same one wherever it is met.
    let vars ← coverVars parent₂ (← coverVars parent₁ kept)
    let (p₁, t₁) ← instantiateAt parent₁ use₁ vars proof₁ stated₁
    let (p₂, t₂) ← instantiateAt parent₂ use₂ vars proof₂ stated₂
    -- Every literal but the resolved one carries over, so the conclusion keeps
    -- it; where it keeps it is a lookup, not a search.
    let place := placeLiteral target
    -- The resolved pair is complementary, which closes that case.
    let body ← elimParts t₁ 0 (fun i h₁ => do
      unless i == resolved₁.toNat do
        return ← place h₁
      elimParts t₂ 0 (fun j h₂ => do
        unless j == resolved₂.toNat do
          return ← place h₂
        -- Which of the two is the negation of the other is settled by
        -- comparing them, and an equality can be stated either way round, so
        -- one of them may have to be turned about first.
        let (positive, negative) ←
          if (asNegation (← instantiateMVars (← inferType h₁))).isSome then
            pure (h₂, h₁)
          else pure (h₁, h₂)
        let stated ← instantiateMVars (← inferType positive)
        let some refuted := asNegation (← instantiateMVars (← inferType negative))
          | throwError "the literals resolved on are not complementary"
        let positive ←
          if ← isDefEq refuted stated then pure positive
          else
            let some flipped ← flipEquality positive
              | throwError "the literals resolved on{indentExpr stated}\nand\
                  {indentExpr refuted}\nare not complementary"
            pure flipped
        mkAppOptM ``absurd
          #[some (← inferType positive), some target, some positive, some negative])
        p₂) p₁
    mkLambdaFVars xs body

/--
`factoring`: the premise at the unifier that makes two of its literals one.

The literal dropped is one of the two, and its image is the other's, which the
conclusion keeps; so every literal of the premise at the unifier is a literal
of the conclusion, and there is no case to close.
-/
def factoring (step : Step) : ReconstructM Expr := do
  let #[(premiseProof, premiseStated)] := step.premises
    | throwError "factoring should have one premise, got {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "factoring without a premise"
  let use ← step.useAt 0
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut kept : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      kept := kept.insert v x
    let vars ← coverVars parent kept
    let (premiseAt, premiseType) ←
      instantiateAt parent use vars premiseProof premiseStated
    let place := placeLiteral target
    mkLambdaFVars xs (← elimParts premiseType 0 (fun _ h => place h) premiseAt)

/--
`equality_resolution_with_deletion`: the premise at the binding one of its
inequalities gives, less that inequality.

`EqResWithDeletion` takes the first negative equality between a variable and a
term not containing it, binds the variable to the term, drops the inequality
and applies the binding to the rest -- once per step, so a clause with several
such inequalities takes several steps.
-/
def equalityResolutionWithDeletion (step : Step) : ReconstructM Expr := do
  let #[(premiseProof, premiseStated)] := step.premises
    | throwError "equality resolution with deletion should have one premise, \
      got {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "equality resolution with deletion without a premise"
  let use ← step.useAt 0
  let some resolved := use.literal
    | throwError "equality resolution with deletion did not record the \
      inequality it resolved"
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut kept : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      kept := kept.insert v x
    let vars ← coverVars parent kept
    let (premiseAt, premiseType) ←
      instantiateAt parent use vars premiseProof premiseStated
    let place := placeLiteral target
    let body ← elimParts premiseType 0 (fun i h => do
      unless i == resolved.toNat do
        return ← place h
      -- The binding is what makes the two sides of the inequality one term.
      let stated ← instantiateMVars (← inferType h)
      let some inner := stated.not?
        | throwError "the literal resolved on is not a negation:{indentExpr stated}"
      let some (_, lhs, _) := inner.eq?
        | throwError "the literal resolved on is not an equality:{indentExpr inner}"
      mkAppOptM ``absurd
        #[some inner, some target, some (← mkEqRefl lhs), some h]) premiseAt
    mkLambdaFVars xs body

end Vampire.Reconstruct.Resolution
