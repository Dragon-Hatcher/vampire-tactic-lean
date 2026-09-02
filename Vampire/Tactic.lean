/-
The driver follows lean-smt's (`Smt/Tactic/Smt.lean`), Copyright (c) 2021-2022 by the
authors listed in that project's AUTHORS file. Released under Apache 2.0; see `NOTICE`.
-/
import VampLean
import Vampire.Ffi
import Vampire.Preprocess
import Vampire.Proof
import Vampire.Reconstruct
import Vampire.Translate.Bool
import Vampire.Translate.Build
import Vampire.Translate.Prop
import Vampire.Translate.Query

/-!
# The `vampire` tactic

    goal ─▶ preprocess ─▶ translate ─▶ compile ─▶ Vampire ─▶ refutation ─▶ Lean proof
            §Preprocess    §Translate   §Build     FFI                    §Reconstruct

Preprocessing puts the goal in refutation form: hints and binders become local
hypotheses and the target becomes `False`, so what Vampire is asked is whether the
hypotheses are jointly unsatisfiable. Translation maps each hypothesis onto a
first-order formula, collecting the symbols it mentions; the query builder orders those
into declarations; and the compiler constructs the whole thing inside Vampire.

**The last arrow is not implemented for arbitrary goals.** `vampire` translates, builds
and runs, but replaying the refutation only works for the propositional resolution
demonstrated by `vampire_replay`. Until that catches up, `vampire` admits a refuted goal
with a warning, so the proof depends on `sorryAx` and says so.

Use `vampire?` to see the problem Vampire was given; it leaves the goal alone.
-/

namespace Vampire

open Lean Elab Tactic Meta

/-- What the tactic did. -/
inductive Outcome where
  /-- Vampire found a refutation. -/
  | refuted
  /-- Vampire saturated or ran out of time without one. -/
  | notRefuted
  deriving DecidableEq

/-- Names for the free variables in scope that survive a round trip through the
pretty-printer, so a symbol is spelled the same way everywhere it occurs. -/
def genUniqueFVarNames : MetaM (Std.HashMap FVarId String × Std.HashMap String Expr) := do
  let lCtx ← getLCtx
  let st : NameSanitizerState := { options := {} }
  let (lCtx, _) := (lCtx.sanitizeNames st).run
  return lCtx.getFVarIds.foldl (init := ({}, {})) fun (m₁, m₂) fvarId =>
    let nm := (lCtx.getRoundtrippingUserName? fvarId).get!.toString
    (m₁.insert fvarId nm, m₂.insert nm (.fvar fvarId))

/--
Keep the hypotheses this translation understands.

Used only on hypotheses collected automatically from the local context: a goal about
lists, or carrying a typeclass instance, has no first-order reading, and dropping those
is what makes it reasonable to send the context in the first place. A hypothesis the
user named explicitly is never dropped — failing to translate it is an error they asked
to hear about.
-/
def filterTranslatable (hs : Array Expr) : MetaM (Array Expr) :=
  hs.filterM fun h => withoutModifyingState do
    let ty ← inferType h
    try
      let _ ← (Translator.translateExpr' ty).run {}
      return true
    catch e =>
      trace[vampire] "not first-order, skipping{indentD m!"{h} : {ty}"}\n{e.toMessageData}"
      return false

/--
Preprocess `mv`, translate it, and build the problem inside Vampire.

Works on a copy of the goal, so nothing here changes what the user has to prove; the
copy is returned along with the hypotheses that were sent.
-/
def buildProblem (mv : MVarId) (hs : Array Expr) :
    MetaM (List Command × Array Expr × MVarId) := mv.withContext do
  -- Everything propositional in the local context, then the hints. Unlike lean-smt,
  -- which sends only what it is given, the context is swept up automatically: this is
  -- meant to be a hammer, and a hypothesis it cannot read is skipped rather than fatal.
  let locals ← filterTranslatable ((← Preprocess.getPropHyps).map Expr.fvar)
  let hs := locals.filter (fun l => !hs.contains l) ++ hs
  let mv₀ := (← Meta.mkFreshExprMVar (← mv.getType)).mvarId!
  let mv₀ ← mv₀.cleanup (← hs.foldlM (fun s h => return (← (Expr.collectFVars h).run s).snd) {}).fvarIds
  mv₀.withContext do
  let ⟨_, hs₁, mv₁⟩ ← Preprocess.applySteps mv₀ hs
    #[Preprocess.pushHintsToCtx, Preprocess.intros, Preprocess.negateGoal]
  mv₁.withContext do
    let (fvNames, _) ← genUniqueFVarNames
    let cmds ← Query.generateQuery hs₁.toList fvNames
    trace[vampire] "problem:{indentD (MessageData.joinSep (cmds.map toMessageData) Format.line)}"
    send cmds
    return (cmds, hs₁, mv₁)

/-- The problem as Vampire itself renders it, for diagnostics. -/
def problemAsVampireSeesIt : MetaM MessageData := do
  let n ← Ffi.problemSize
  let mut lines : Array MessageData := #[]
  for i in [0:n.toNat] do
    lines := lines.push (← Ffi.problemUnit i.toUInt32)
  return MessageData.joinSep lines.toList Format.line

/-- Build and run. -/
def run (mv : MVarId) (hs : Array Expr) (deciseconds : UInt32) : MetaM Outcome := do
  let _ ← buildProblem mv hs
  match ← Ffi.solve deciseconds with
  | some true => return .refuted
  | some false => return .notRefuted
  | none => throwError "vampire: the prover raised an exception"

/-- Collect the hypotheses named in `vampire [h₁, h₂]`. -/
private def elabHints (stx : Syntax) : TacticM (Array Expr) := do
  if stx.getNumArgs == 0 then return #[]
  let mut hs := #[]
  for arg in stx[0][1].getSepArgs do
    hs := hs.push (← elabTerm arg none)
  return hs

syntax hintList := (" [" withoutPosition(term,*,?) "]")?

/-- Discharge the goal with Vampire. Hypotheses in the local context are used
automatically; `vampire [h, thm]` adds more. -/
syntax (name := vampire) "vampire" hintList : tactic

/-- Show the problem Vampire is given for this goal, and whether it refutes it. Leaves
the goal alone. -/
syntax (name := vampireQ) "vampire?" hintList : tactic

elab_rules : tactic
  | `(tactic| vampire $hints:hintList) => do
    let hs ← elabHints hints
    let g ← getMainGoal
    g.withContext do
      unless (← Ffi.init) == .ok do
        throwError "vampire: the embedded prover is not available"
      match ← run g hs 100 with
      | .notRefuted =>
        throwError "vampire: no refutation found"
      | .refuted =>
        logWarning m!"vampire: the prover refuted the goal, but replaying its refutation \
          as a Lean proof is not implemented for arbitrary goals yet, so the goal is \
          admitted — this proof depends on `sorryAx`"
        g.admit true

  | `(tactic| vampire? $hints:hintList) => do
    let hs ← elabHints hints
    let g ← getMainGoal
    g.withContext do
      unless (← Ffi.init) == .ok do
        throwError "vampire: the embedded prover is not available"
      let outcome ← run g hs 100
      let verdict := if outcome == .refuted then "refuted" else "no refutation found"
      logInfo m!"vampire: the problem, as Vampire received it:\
        {indentD (← problemAsVampireSeesIt)}\n{verdict}"

/-- The propositional replay demonstrated end to end. The problem is hard-coded, so this
only closes `(p ∨ q) → ¬p → ¬q → False`; what it shows is that a refutation coming back
across the FFI becomes a real proof term, with no axioms beyond Lean's own. -/
syntax (name := vampireReplay) "vampire_replay" : tactic

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
  | `(tactic| vampire_replay) => do
    let g ← getMainGoal
    g.withContext do
      unless (← Ffi.init) == .ok do
        throwError "vampire: the embedded prover is not available"

      unless (← g.getType).isConstOf ``False do
        throwError m!"vampire_replay: the goal must be `False` (the problem is \
          hard-coded); got {← g.getType}"

      let some (a, b, hOr, hA, hB) ← matchBuiltinGoal g
        | throwError "vampire_replay: no hypotheses matching the hard-coded problem \
            `(p ∨ q), ¬p, ¬q`"

      let some proof ← Ffi.runBuiltinProblem
        | throwError "vampire_replay: no refutation found"

      let p ← Ffi.atom 0
      let q ← Ffi.atom 1
      let interp : Interp := {
        atom := fun x => if x == p then some a else if x == q then some b else none
        input := fun n =>
          match proof.find? (fun s => s.number == n) with
          | none => none
          | some s =>
            if s.literals.size == 2 then some hOr
            else if s.literals.size == 1 && s.literals[0]!.atom == p then some hA
            else if s.literals.size == 1 && s.literals[0]!.atom == q then some hB
            else none }

      let term ← reconstruct interp proof
      unless (← isDefEq (← inferType term) (.const ``False [])) do
        throwError m!"vampire_replay: replayed proof has type {← inferType term}, \
          expected False"
      g.assign term
      logInfo m!"vampire: closed by a {proof.size}-step refutation replayed from the prover"

end Vampire
