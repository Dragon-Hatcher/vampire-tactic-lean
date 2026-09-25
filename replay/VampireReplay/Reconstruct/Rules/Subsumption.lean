import VampireReplay.Reconstruct.Basic

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
  let (⟨mainParent, mainProof, mainStated⟩, ⟨sideParent, sideProof, sideStated⟩) ← step.twoPremises
  -- The main premise is taken to be the first. It is the one that loses a
  -- literal, so it has to have one recorded against it and the side premise
  -- none; that is checked, so premises the other way round are an error
  -- rather than a wrong proof.
  let mainUse ← step.useAt 0
  let sideUse ← step.useAt 1
  let some resolved := mainUse.literal
    | throwError "subsumption resolution did not record the literal it removed"
  unless sideUse.literal.isNone do
    throwError "subsumption resolution recorded a literal against its second \
      premise, expected the first to be the main premise"
  step.underVars fun kept target => do
    -- The removed literal can be the only one mentioning a variable, which the
    -- conclusion then does not keep; σ may still mention it.
    let vars ← coverVars kept step.unit.boundVarSorts
    let (mainAt, mainType) ← instantiateAt mainParent mainUse vars mainProof mainStated
    let (sideAt, sideType) ← instantiateAt sideParent sideUse vars sideProof sideStated
    -- The side premise's literals at σ are the conclusion's but for the one
    -- that is the removed literal's complement, and the worker recorded where
    -- each went: the literals placed are carried, and the one that is not is
    -- the one to close the case with.
    let sidePlaced := step.placedAt 1
    let some placements := sidePlaced
      | throwError "subsumption resolution recorded nothing of where the side \
          premise's literals went"
    step.withInto target fun into =>
    carryPast mainType target mainAt into (· == resolved.toNat)
      (placed := step.placedAt 0) (sourceCount := mainParent.clauseSize?)
      (fun _ h =>
        carryPast sideType target sideAt into (fun k => (placements[k]?.join).isNone)
          (placed := sidePlaced) (sourceCount := sideParent.clauseSize?)
          (fun _ hSide => closeComplementary target h hSide))

end Vampire.Reconstruct.Subsumption
