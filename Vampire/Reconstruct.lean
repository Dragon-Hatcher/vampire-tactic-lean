import Vampire.Reconstruct.Basic
import Vampire.Reconstruct.Rules

namespace Vampire.Reconstruct

open Lean Meta

/-- Beta-reduces throughout, so that a reported mismatch is a real one. -/
private def betaAll (e : Expr) : MetaM Expr :=
  Meta.transform e (post := fun e => return .done e.headBeta)

/-- What came of replaying a proof. -/
structure Outcome where
  /-- A proof of `False` from the goal's hypotheses. -/
  proof : Expr
  /-- Rules that fell to `unimplemented`, so the term still contains `sorry`. -/
  unimplemented : Array String

/--
Replays a step, after its premises. Steps are shared, so each is replayed once
and remembered by vampire's number for it.
-/
partial def step (u : Vampire.Unit) : ReconstructM Expr := do
  if let some p := (← get).proofs[u.number]? then
    return p
  let some rule := u.rule?
    | throwError "step {u.number} has unknown inference rule {u.ruleIndex}"
  -- Premises first: a name vampire introduced is defined by a step that
  -- splitting and definition introduction both place among the premises of
  -- every step using it, so replaying those binds it before it is needed here.
  let premises ← u.parents.mapM fun parent => do
    return (← step parent, ← conclusionOf parent)
  let proof ←
    try
      ofRule { unit := u, rule, premises }
    catch e =>
      throwError "replaying {rule.name} for step {u.number}: {e.toMessageData}"
  -- Asked for after the rule has run, so that a rule introducing a name has
  -- bound it first; it is rebuilt once and cached.
  let conclusion ←
    try
      conclusionOf u
    catch e =>
      throwError "stating step {u.number} ({rule.name}): {e.toMessageData}"
  -- The rules are trusted to return a proof of what the step claims; check it,
  -- so a wrong implementation is caught here rather than at `assign`.
  unless ← isDefEq (← inferType proof) conclusion do
    throwError "reconstruction of {rule.name} for step {u.number} proves\
      {indentExpr (← betaAll (← inferType proof))}\n\
      but the step claims{indentExpr (← betaAll conclusion)}"
  modify fun s => { s with proofs := s.proofs.insert u.number proof }
  return proof

/--
Binds every name a definition step in the proof introduces.

Splitting makes a definition a premise of each step using its name, so
replaying premises first would reach it in time. Naming does not: it replaces a
subformula in place and states the definition as a separate root, which need
not be an ancestor of the steps mentioning the name. What a definition names
can itself mention another introduced name, so this runs until it stops making
progress rather than in one pass.
-/
private partial def bindDefinitions : ReconstructM PUnit := do
  let mut pending := (← read).proof.units.filter fun u =>
    (u.rule?.map Definition.introducesName).getD false
  repeat
    let mut progressed := false
    let mut again := #[]
    for u in pending do
      try
        Definition.register u
        progressed := true
      catch _ =>
        again := again.push u
    pending := again
    unless progressed && !pending.isEmpty do break
  -- Anything left over is reported when its name is first needed.

/--
Replays a refutation as a Lean proof of `False`.

Fails if the proof mentions a name vampire introduced itself, since nothing in
the goal corresponds to it.
-/
def run (proof : Proof) (symbols : Symbols) : MetaM (Option Outcome) := do
  let some refutation := proof.refutation? | return none
  let go : ReconstructM Outcome := do
    bindDefinitions
    let term ← step refutation
    return { proof := term, unimplemented := (← get).unimplemented.toArray }
  let (outcome, _) ← (go.run { symbols, proof }).run {}
  return some outcome

end Vampire.Reconstruct
