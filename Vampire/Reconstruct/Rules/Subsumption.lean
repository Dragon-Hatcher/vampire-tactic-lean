import Vampire.Reconstruct.Basic

/-!
Subsumption resolution.

`SATSubsumptionAndResolution` looks for a substitution σ making every literal
of the side premise a literal of the main premise, except that one of them
becomes the complement of the main premise's literal `m`. The conclusion is
then the main premise without `m`.

So the main premise gives either a literal of the conclusion, which carries
over, or `m` -- and in that case the side premise at σ gives either the
complement of `m`, which closes the case, or again a literal of the conclusion.
Nothing here is substituted but the side premise: the conclusion keeps the main
premise's variables.

σ is a satisfying assignment of a SAT problem, which the solver forgets as soon
as it is reused, so the fork reads it out of the model and records it.
-/

namespace Vampire.Reconstruct.Subsumption

open Lean Meta

/--
`subsumption_resolution`: the main premise without the literal the side
premise resolves away.
-/
def subsumptionResolution (step : Step) : ReconstructM Expr := do
  let #[(mainProof, mainStated), (sideProof, sideStated)] := step.premises
    | throwError "subsumption resolution should have two premises, got \
      {step.premises.size}"
  let #[mainParent, sideParent] := step.unit.parents
    | throwError "subsumption resolution should have two premises"
  -- Which premise is which is read off the record rather than assumed: it is
  -- the main premise that loses a literal, so it is the one with a literal
  -- recorded against it.
  let mainUse ← step.useAt 0
  let sideUse ← step.useAt 1
  let some resolved := mainUse.literal
    | throwError "subsumption resolution did not record the literal it removed"
  unless sideUse.literal.isNone do
    throwError "subsumption resolution recorded a literal against the side \
      premise, so which premise is which is not clear"
  forallBoundedTelescope (← step.conclusion) (some step.unit.varSorts.size)
      fun xs target => do
    let mut kept : Vars := {}
    for (x, (v, _)) in xs.zip step.unit.varSorts do
      kept := kept.insert v x
    -- The removed literal can be the only one mentioning a variable, which the
    -- conclusion then does not keep; σ may still mention it.
    let vars ← coverVars mainParent kept step.unit.boundVarSorts
    let (mainAt, mainType) ← instantiateAt mainParent mainUse vars mainProof mainStated
    let (sideAt, sideType) ← instantiateAt sideParent sideUse vars sideProof sideStated
    let body ← carryPast mainType target mainAt (· == resolved.toNat)
      (fun _ h rest =>
        carryPast sideType rest sideAt (fun _ => true)
          (fun _ hSide inner => do
            let removed ← instantiateMVars (← inferType h)
            -- The one literal of the side premise the substitution makes
            -- complementary to the removed one closes the case; the rest are
            -- literals of the conclusion.
            for candidate in #[some hSide, ← flipEquality hSide] do
              let some candidate := candidate | continue
              let stated ← instantiateMVars (← inferType candidate)
              let complementary ←
                match asNegation stated, asNegation removed with
                | some inner, _ => isDefEq inner removed
                | _, some inner => isDefEq inner stated
                | _, _ => pure false
              unless complementary do
                continue
              let (positive, negative) :=
                if (asNegation stated).isSome then (h, candidate) else (candidate, h)
              return ← mkAppOptM ``absurd
                #[some (← inferType positive), some inner, some positive,
                  some negative]
            placeLiteral inner hSide))
    mkLambdaFVars xs body

end Vampire.Reconstruct.Subsumption
