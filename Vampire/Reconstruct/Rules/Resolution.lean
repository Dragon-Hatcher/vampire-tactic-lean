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
    let vars ← coverVars parent₂ (← coverVars parent₁ kept) step.unit.boundVarSorts
    let (p₁, t₁) ← instantiateAt parent₁ use₁ vars proof₁ stated₁
    let (p₂, t₂) ← instantiateAt parent₂ use₂ vars proof₂ stated₂
    -- Every literal but the resolved one carries over, so the conclusion keeps
    -- it; where it keeps it is a lookup, not a search.
    -- The resolved pair is complementary, which closes that case.
    let body ← carryPast t₁ target p₁ (· == resolved₁.toNat)
      (fun _ h₁ rest => carryPast t₂ rest p₂ (· == resolved₂.toNat)
        (fun _ h₂ _ => closeComplementary rest h₁ h₂))
    mkLambdaFVars xs body

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
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut kept : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      kept := kept.insert v x
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
      (fun i h rest => do
        let some (unitAt, unitType) := units[i]?
          | throwError "no unit resolved literal {i} away"
        carryPast unitType rest unitAt (fun _ => true)
          (fun _ hu _ => closeComplementary rest h hu))
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
    let vars ← coverVars parent kept step.unit.boundVarSorts
    let (premiseAt, premiseType) ←
      instantiateAt parent use vars premiseProof premiseStated
    let place := placeLiteral target
    mkLambdaFVars xs (← carryAll premiseType target premiseAt)

/--
`rest`, where an abstracting unifier left constraints among the conclusion's
literals and `h` denies the equality the step resolved on.

The unifier does not make the two terms one: what it could not unify it defers
into disequality literals of the conclusion. So the conclusion holds either
because one of those disequalities does -- and then it is that literal -- or
because none does, and then the pairs deferred are equal, the two terms really
are one, and `h` denies it.
-/
partial def fromConstraints (step : Step) (vars : Vars) (rest inner h : Expr) :
    ReconstructM Expr := do
  let some (first, count) := step.unit.constraints
    | -- Equality resolution either unifies the two sides or defers what it
      -- could not unify into constraints. Neither here: the step resolved an
      -- inequality between two terms that no substitution makes one, which is
      -- vampire's https://github.com/vprover/vampire/issues/938. The premise
      -- gives the conclusion only of the terms that do make them equal, not of
      -- every term, so there is nothing here to replay.
      throwError "vampire resolved an inequality between{indentExpr inner}\n\
        whose sides no substitution makes one, and recorded neither a unifier \
        nor a constraint: this is vampire's unsoundness bug \
        https://github.com/vprover/vampire/issues/938, and the step does not \
        hold"
  let some clause := step.unit.clause?
    | throwError "a step with unification constraints is not a clause"
  let mut constraints := #[]
  for i in [first : first + count] do
    let some l := clause.literals[i]?
      | throwError "the step records a constraint at literal {i}, and its \
          conclusion has {clause.literals.size}"
    constraints := constraints.push (← Reconstruct.literal vars l)
  let rec go (facts : Array Expr) (i : Nat) : ReconstructM Expr := do
    let some constraint := constraints[i]?
      | -- Every pair the unifier deferred is equal, so the two terms it was to
        -- unify are one.
        let made ← byArithmetic facts inner
        return ← mkAppOptM ``absurd #[some inner, some rest, some made, some h]
    let some equal := constraint.not?
      | throwError "the constraint{indentExpr constraint}\nis not a \
          disequality"
    let deferred ← withLocalDeclD `h equal fun x => do
      mkLambdaFVars #[x] (← go (facts.push x) (i + 1))
    let held ← withLocalDeclD `h constraint fun x => do
      mkLambdaFVars #[x] (← placeLiteral rest x)
    mkAppM ``Classical.byCases #[deferred, held]
  go #[] 0

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
    let vars ← coverVars parent kept step.unit.boundVarSorts
    let (premiseAt, premiseType) ←
      instantiateAt parent use vars premiseProof premiseStated
    let body ← carryPast premiseType target premiseAt (· == resolved.toNat)
      (fun _ h rest => do
        -- The binding is what makes the two sides of the inequality one term,
        -- unless the unifier abstracted: then what it could not unify it left
        -- as disequalities among the conclusion's own literals, and the two
        -- sides are one only once those are denied.
        let stated ← instantiateMVars (← inferType h)
        let some inner := stated.not?
          | throwError "the literal resolved on is not a negation:{indentExpr stated}"
        let some (_, lhs, rhs) := inner.eq?
          | throwError "the literal resolved on is not an equality:{indentExpr inner}"
        if ← isDefEq lhs rhs then
          mkAppOptM ``absurd
            #[some inner, some rest, some (← mkEqRefl lhs), some h]
        else
          fromConstraints step vars rest inner h)
    mkLambdaFVars xs body

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
    | throwError "equality factoring without a premise"
  let uses := step.unit.premiseUses.filter (·.premise == parent.number)
  let #[selected, side] := uses
    | throwError "equality factoring recorded {uses.size} uses of its premise, \
      expected the selected equality and the one it was factored against"
  let some selectedIdx := selected.literal
    | throwError "equality factoring did not record the equality it factored"
  let some sideIdx := side.literal
    | throwError "equality factoring did not record the equality it factored \
      against"
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut kept : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      kept := kept.insert v x
    let vars ← coverVars parent kept step.unit.boundVarSorts
    let (premiseAt, premiseType) ←
      instantiateAt parent selected vars premiseProof premiseStated
    -- The unified side of each equality, as the premise states it here.
    let unified (use : PremiseUse) : ReconstructM Expr := do
      let some recorded := use.term
        | throwError "equality factoring did not record which side it unified"
      -- Recorded as the premise states it, so it is read back in the premise's
      -- own variables, under what the unifier bound them to.
      term (← substitutedVars use vars) recorded
    let sLHS ← unified selected
    let fLHS ← unified side
    let parts := junctionParts ``Or premiseType
    let some sideLit := parts[sideIdx.toNat]?
      | throwError "the premise has no literal {sideIdx}"
    let some (_, fa, fb) := sideLit.eq?
      | throwError "the equality factored against is not an equality:\
        {indentExpr sideLit}"
    -- Either side of an equality can be the one that was unified.
    let fRHS := if ← isDefEq fa fLHS then fb else fa
    let body ← carryPast premiseType target premiseAt (· == selectedIdx.toNat)
      (fun _ h rest => do
        let stated ← instantiateMVars (← inferType h)
        let some (α, sa, sb) := stated.eq?
          | throwError "the equality factored is not an equality:\
            {indentExpr stated}"
        let sRHS := if ← isDefEq sa sLHS then sb else sa
        let h ← if ← isDefEq sa sLHS then pure h
          else pure (← mkAppM ``Eq.symm #[h])
        -- `h : sLHS = sRHS`, and the two cases of whether `sRHS` is `fRHS`.
        let differ ← withLocalDeclD `h (← mkAppM ``Ne #[sRHS, fRHS]) fun hne => do
          mkLambdaFVars #[hne] (← placeLiteral rest hne)
        let agree ← withLocalDeclD `h (← mkAppOptM ``Eq #[some α, some sRHS, some fRHS])
          fun he => do
            let chain ← mkAppM ``Eq.trans #[h, he]
            let stated ← mkAppOptM ``Eq #[some α, some fLHS, some fRHS]
            mkLambdaFVars #[he] (← placeLiteral rest (← mkExpectedTypeHint chain stated))
        mkAppM ``Classical.byCases #[agree, differ])
    mkLambdaFVars xs body

end Vampire.Reconstruct.Resolution
