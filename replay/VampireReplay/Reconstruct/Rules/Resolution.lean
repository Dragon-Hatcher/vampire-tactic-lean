import VampireReplay.Reconstruct.Basic

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
    | throwError "resolution should have two premises, got {step.unit.parents.size}"
  let use₁ ← step.useAt 0
  let use₂ ← step.useAt 1
  let some resolved₁ := use₁.literal
    | throwError "resolution did not record the literal it resolved on in step \
      {parent₁.number}"
  let some resolved₂ := use₂.literal
    | throwError "resolution did not record the literal it resolved on in step \
      {parent₂.number}"
  step.underVars fun kept target => do
    -- Resolving away the last literal a variable occurs in leaves it out of
    -- the conclusion, while the unifier still speaks of it; such a variable
    -- stands for an arbitrary element, the same one wherever it is met.
    let vars ← coverVars parent₂ (← coverVars parent₁ kept) step.unit.boundVarSorts
    let (p₁, t₁) ← instantiateAt parent₁ use₁ vars proof₁ stated₁
    let (p₂, t₂) ← instantiateAt parent₂ use₂ vars proof₂ stated₂
    -- Every literal but the resolved one carries over, so the conclusion keeps
    -- it; where it keeps it is a lookup, not a search.
    -- The resolved pair is complementary, which closes that case -- against
    -- what the two carries have left of the conclusion, which is what the
    -- innermost of them says it is and not what the outer one was given.
    let into := step.into target
    let body ← carryPast t₁ target p₁ (· == resolved₁.toNat)
      (fun _ h₁ rest at_ => carryPast t₂ rest p₂ (· == resolved₂.toNat)
        (fun _ h₂ inner _ => closeComplementary inner h₁ h₂)
        (placed := step.placedAt 1) (into := into.from at_)
        (sourceCount := parent₂.clauseSize?))
      (placed := step.placedAt 0) (into := into) (sourceCount := parent₁.clauseSize?)
    pure body

/--
`unit_resulting_resolution`: a clause every literal of which but one is
resolved away against a unit.

`URResolution` resolves each literal of the clause with a unit premise, at most
one literal surviving, and the unifiers it applies come one at a time; what
each premise's variables ended up bound to, and which literal of the clause
each unit resolved away, are recorded rather than found again.
-/
def unitResulting (step : Step) : ReconstructM Expr := do
  let some (mainProof, mainStated) := step.premises[0]?
    | throwError "unit resulting resolution without a clause"
  let some main := step.unit.parents[0]?
    | throwError "unit resulting resolution without a clause"
  let mainUse ← step.useAt 0
  step.underVars fun kept target => do
    -- Every literal but one is resolved away, and with it any variable it was
    -- the last to mention.
    let mut vars ← coverVars main kept step.unit.boundVarSorts
    for parent in step.unit.parents do
      vars ← coverVars parent vars
    let (mainAt, mainType) ← instantiateAt main mainUse vars mainProof mainStated
    -- Which unit resolved away which of the clause's literals.
    let mut units : Std.HashMap Nat (Expr × Expr) := {}
    for i in [1:step.premises.size] do
      let some (proof, stated) := step.premises[i]?
        | throwError "a premise without a proof"
      let some parent := step.unit.parents[i]?
        | throwError "a premise without a step"
      let use ← step.useAt i
      let some literal := use.literal
        | throwError "nothing says which literal the unit in step \
          {parent.number} resolved away"
      units := units.insert literal.toNat (← instantiateAt parent use vars proof stated)
    let body ← carryPast mainType target mainAt (units.contains ·)
      (fun i h rest _ => do
        let some (unitAt, unitType) := units[i]?
          | throwError "no unit resolved literal {i} away"
        carryPast unitType rest unitAt (fun _ => true)
          (fun _ hu inner _ => closeComplementary inner h hu) (sourceCount := some 1))
      (placed := step.placedAt 0) (into := step.into target)
      (sourceCount := main.clauseSize?)
    pure body

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
    | throwError "factoring should have one premise, got none"
  let use ← step.useAt 0
  step.underVars fun kept target => do
    let vars ← coverVars parent kept step.unit.boundVarSorts
    let (premiseAt, premiseType) ←
      instantiateAt parent use vars premiseProof premiseStated
    carryAll premiseType target premiseAt (placed := step.placedAt 0)
      (into := step.into target)

/--
`rest`, where an abstracting unifier left constraints among the conclusion's
literals and `h` denies the equality the step resolved on.

The unifier does not make the two terms one: what it could not unify it defers
into disequality literals of the conclusion. So the conclusion holds either
because one of those disequalities does -- and then it is that literal -- or
because none does, and then the pairs deferred are equal, the two terms are one
by congruence at those pairs, and `h` denies it.
-/
def fromConstraints (step : Step) (vars : Vars) (rest inner h : Expr) :
    ReconstructM Expr := do
  if step.unit.constraints.isNone then
    -- Equality resolution either unifies the two sides or defers what it
    -- could not unify into constraints. Neither here: the step resolved an
    -- inequality between two terms that no substitution makes one, which is
    -- vampire's https://github.com/vprover/vampire/issues/938. The premise
    -- gives the conclusion only of the terms that do make them equal, not of
    -- every term, so there is nothing here to replay.
    throwError "step {step.unit.number}: vampire resolved{indentExpr inner}\n\
      although no substitution makes its sides equal and no constraints were \
      recorded (vampire bug https://github.com/vprover/vampire/issues/938)"
  let some (_, lhs, rhs) := inner.eq?
    | throwError "the literal resolved on is not an equality:{indentExpr inner}"
  underConstraints step vars rest fun equal => do
    let some made ← equalUnder equal lhs rhs
      | throwError "step {step.unit.number}: the sides of{indentExpr inner}\n\
          are not equal even assuming the unifier's deferred constraints"
    mkAppOptM ``absurd #[some inner, some rest, some made, some h]

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
    | throwError "equality resolution with deletion should have one premise, \
      got none"
  let use ← step.useAt 0
  let some resolved := use.literal
    | throwError "equality resolution with deletion did not record the \
      inequality it resolved"
  step.underVars fun kept target => do
    let vars ← coverVars parent kept step.unit.boundVarSorts
    let (premiseAt, premiseType) ←
      instantiateAt parent use vars premiseProof premiseStated
    let body ← carryPast premiseType target premiseAt (· == resolved.toNat)
      (placed := step.placedAt 0) (into := step.into target)
      (sourceCount := parent.clauseSize?)
      (fun _ h rest _ => do
        -- The binding is what makes the two sides of the inequality one term,
        -- unless the unifier abstracted: then what it could not unify it left
        -- as disequalities among the conclusion's own literals, and the two
        -- sides are one only once those are denied.
        let stated ← instantiateMVars (← inferType h)
        let some inner := stated.not?
          | throwError "the literal resolved on is not a negation:{indentExpr stated}"
        let some (_, lhs, rhs) := inner.eq?
          | throwError "the literal resolved on is not an equality:{indentExpr inner}"
        if ← sameFormula lhs rhs then
          mkAppOptM ``absurd
            #[some inner, some rest, some (← mkEqRefl lhs), some h]
        else
          fromConstraints step vars rest inner h)
    pure body

/--
`equality_factoring`: one of the premise's equalities factored against another.

From `C ∨ s ≈ t ∨ u ≈ v` with `sσ = uσ`, the rule concludes
`tσ ≉ vσ ∨ Cσ ∨ (uσ ≈ vσ)`: every literal but the selected equality is carried
over, so the side equality is among them, and the disequality is put in front.

The selected equality is the only one that has to be made anything of. Holding
`sσ ≈ tσ`, either `tσ` and `vσ` differ -- and the disequality the rule put in
front is the conclusion -- or they do not, and then `uσ ≈ sσ ≈ tσ ≈ vσ` is the
side equality, which the conclusion carries. Which of the two it is is settled
by the case, not looked for.
-/
def equalityFactoring (step : Step) : ReconstructM Expr := do
  let #[(premiseProof, premiseStated)] := step.premises
    | throwError "equality factoring should have one premise, got \
      {step.premises.size}"
  let some parent := step.unit.parents[0]?
    | throwError "equality factoring should have one premise, got none"
  let uses := step.unit.premiseUses.filter (·.premise == parent.number)
  let #[selected, side] := uses
    | throwError "equality factoring recorded {uses.size} uses of its premise, \
      expected the selected equality and the one it was factored against"
  let some selectedIdx := selected.literal
    | throwError "equality factoring did not record the equality it factored"
  let some sideIdx := side.literal
    | throwError "equality factoring did not record the equality it factored \
      against"
  step.underVars fun kept target => do
    let vars ← coverVars parent kept step.unit.boundVarSorts
    let (premiseAt, premiseType) ←
      instantiateAt parent selected vars premiseProof premiseStated
    -- Either side of an equality can be the one that was unified, and which
    -- it was is the recorded side.
    let selectedLeft ← recordedSideIsLeft parent selected selectedIdx.toNat
    let sideLeft ← recordedSideIsLeft parent side sideIdx.toNat
    let parts := junctionParts ``Or premiseType
    let some sideLit := parts[sideIdx.toNat]?
      | throwError "the premise has no literal {sideIdx}"
    let some (_, fa, fb) := sideLit.eq?
      | throwError "the equality factored against is not an equality:\
        {indentExpr sideLit}"
    let (fLHS, fRHS) := if sideLeft then (fa, fb) else (fb, fa)
    let body ← carryPast premiseType target premiseAt (· == selectedIdx.toNat)
      (placed := step.placedAt 0) (into := step.into target)
      (sourceCount := parent.clauseSize?)
      (fun _ h rest _ => do
        let stated ← instantiateMVars (← inferType h)
        let some (α, sa, sb) := stated.eq?
          | throwError "the equality factored is not an equality:\
            {indentExpr stated}"
        let sRHS := if selectedLeft then sb else sa
        let h ← if selectedLeft then pure h else mkEqSymm h
        -- `h : sLHS = sRHS`, and the two cases of whether `sRHS` is `fRHS`:
        -- the one where it is not stated as a clause states a disequality,
        -- `¬a = b`, so that it is found among the conclusion's literals
        -- either way round.
        let equal ← mkAppOptM ``Eq #[some α, some sRHS, some fRHS]
        let differ ← withLocalDeclD `h (mkApp (mkConst ``Not) equal) fun hne => do
          mkLambdaFVars #[hne] (← placeLiteral rest hne)
        let agree ← withLocalDeclD `h equal fun he => do
            let chain ← mkAppM ``Eq.trans #[h, he]
            let stated ← mkAppOptM ``Eq #[some α, some fLHS, some fRHS]
            mkLambdaFVars #[he] (← placeLiteral rest (← mkExpectedTypeHint chain stated))
        mkAppM ``Classical.byCases #[agree, differ])
    pure body

end Vampire.Reconstruct.Resolution
