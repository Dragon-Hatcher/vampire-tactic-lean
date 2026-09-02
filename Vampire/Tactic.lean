import VampLean
import Vampire.Ffi
import Vampire.Proof
import Vampire.Reconstruct

/-!
# The `vampire` tactic

Frontend for discharging a Lean goal with the Vampire theorem prover.

The pipeline, once complete:

1. collect the goal and the hypotheses it may use;
2. translate them into Vampire's term representation — directly, over an FFI boundary,
   rather than by printing and reparsing a text format;
3. run saturation and, on success, get back the proof;
4. replay that proof as a Lean term, checked by the kernel.

Steps 3 and 4 are done. Step 1–2 is not: the problem Vampire is given is hard-coded to

    (p ∨ q),  ¬p,  ¬q  ⊢  ⊥

so the tactic only closes goals of that exact shape. It closes them with a real proof
term — no `sorry`, no axioms beyond Lean's own — which is what makes the replay path
testable ahead of the translation.
-/

namespace Vampire

open Lean Elab Tactic Meta

/--
Discharge the goal with Vampire.

**The problem sent to Vampire is currently hard-coded**, so this only works on a goal
of the form `(p ∨ q) → ¬p → ¬q → False` (after `intro`). It is a real proof, not an
admission: the refutation is replayed as a Lean term.
-/
syntax (name := vampire) "vampire" : tactic

/-- Match `(a ∨ b) → ¬a → ¬b → False` and return `(a, b, h₁, h₂, h₃)`. -/
private def matchBuiltinGoal (g : MVarId) : MetaM (Option (Expr × Expr × Expr × Expr × Expr)) :=
  g.withContext do
    let lctx ← getLCtx
    let mut disj : Option (Expr × Expr × Expr) := none
    let mut negs : Array (Expr × Expr) := #[]
    for d in lctx do
      if d.isImplementationDetail then continue
      let ty ← instantiateMVars d.type
      match ty.app2? ``Or with
      | some (a, b) => if disj.isNone then disj := some (a, b, d.toExpr)
      | none =>
        if let some a := ty.not? then negs := negs.push (a, d.toExpr)
    let some (a, b, hOr) := disj | return none
    let some (_, hA) := negs.find? (fun (x, _) => x == a) | return none
    let some (_, hB) := negs.find? (fun (x, _) => x == b) | return none
    return some (a, b, hOr, hA, hB)

elab_rules : tactic
  | `(tactic| vampire) => do
    let g ← getMainGoal
    g.withContext do
      let status ← Ffi.init
      unless status == .ok do
        throwError m!"vampire: FFI unavailable: {status}"

      unless (← g.getType).isConstOf ``False do
        throwError m!"vampire: the goal must be `False` for now \
          (the problem sent to Vampire is hard-coded); got {← g.getType}"

      let some (a, b, hOr, hA, hB) ← matchBuiltinGoal g
        | throwError m!"vampire: no hypotheses matching the hard-coded problem \
            `(p ∨ q), ¬p, ¬q`; goal translation is not implemented yet"

      let some proof ← Ffi.runBuiltinProblem
        | throwError "vampire: no refutation found"

      -- Map Vampire's atoms and input clauses onto the goal's own terms.
      let p ← Ffi.atom 0
      let q ← Ffi.atom 1
      let interp : Interp := {
        atom := fun x => if x == p then some a else if x == q then some b else none
        input := fun n =>
          -- input clauses, identified by the literals Vampire recorded for them
          match proof.find? (fun s => s.number == n) with
          | none => none
          | some s =>
            if s.literals.size == 2 then some hOr
            else if s.literals.size == 1 && s.literals[0]!.atom == p then some hA
            else if s.literals.size == 1 && s.literals[0]!.atom == q then some hB
            else none }

      let term ← reconstruct interp proof
      unless (← isDefEq (← inferType term) (.const ``False [])) do
        throwError m!"vampire: replayed proof has type {← inferType term}, expected False"
      g.assign term
      logInfo m!"vampire: closed by a {proof.size}-step refutation replayed from the prover"

end Vampire
