import Vampire.Reconstruct.Basic
import Vampire.Reconstruct.Rules

namespace Vampire.Reconstruct

open Lean Meta

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
    return (← step parent, ← conclusion' parent)
  -- A definition step states its own conclusion in the name it introduces, so
  -- bind that before reading the conclusion back.
  match rule with
  | .functionDefinition => registerFunctionDefinition u
  | .avatarDefinition => registerAvatarDefinition u
  | _ => pure ()
  let conclusion ← conclusion u
  let proof ← ofRule { unit := u, rule, conclusion, premises }
  -- The rules are trusted to return a proof of what the step claims; check it,
  -- so a wrong implementation is caught here rather than at `assign`.
  unless ← isDefEq (← inferType proof) conclusion do
    throwError "reconstruction of {rule.name} for step {u.number} proves\
      {indentExpr (← inferType proof)}\nbut the step claims{indentExpr conclusion}"
  modify fun s => { s with proofs := s.proofs.insert u.number proof }
  return proof
where
  /-- A parent's conclusion, rebuilt for the premise list. -/
  conclusion' (parent : Vampire.Unit) : ReconstructM Expr := conclusion parent

/--
Replays a refutation as a Lean proof of `False`.

Fails if the proof mentions a name vampire introduced itself, since nothing in
the goal corresponds to it.
-/
def run (proof : Proof) (symbols : Symbols) : MetaM (Option Outcome) := do
  let some refutation := proof.refutation? | return none
  let go : ReconstructM Outcome := do
    let term ← step refutation
    return { proof := term, unimplemented := (← get).unimplemented.toArray }
  let (outcome, _) ← (go.run { symbols, proof }).run {}
  return some outcome

end Vampire.Reconstruct
