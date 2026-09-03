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

Replay is a port of Vampire's own Lean code generator into the elaborator: the same
lemma per inference, proved by the same tactic script, assembled into the same chain —
built as `Expr`s and tactic `Syntax` rather than written to a file. See
`Vampire/Reconstruct.lean`, which also lists the rules that are not ported yet.

Use `vampire?` to see the problem Vampire was given and the refutation it found; it
leaves the goal alone.
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
structure Built where
  /-- The declarations and assertions Vampire was given. -/
  commands : List Command
  /-- What each declared symbol means in Lean, by the name Vampire knows it under. -/
  symbols : Std.HashMap String Expr
  /-- What each assertion in the built problem is, in the order Vampire numbers its
  input units — so input unit `k` is `inputs[k-1]`. -/
  inputs : Array Input
  /-- The compiled problem: the symbol names and the instruction stream. -/
  names : Array String
  code : Array UInt32
  /-- The preprocessed goal, whose target is `False`. -/
  goal : MVarId
  /-- The copy of the original goal that preprocessing worked on. Assigning it is what
  transfers the replayed proof back to the user's goal. -/
  root : MVarId

def buildProblem (mv : MVarId) (hs : Array Expr) : MetaM Built := mv.withContext do
  -- Everything propositional in the local context, then the hints. Unlike lean-smt,
  -- which sends only what it is given, the context is swept up automatically: this is
  -- meant to be a hammer, and a hypothesis it cannot read is skipped rather than fatal.
  let locals ← filterTranslatable ((← Preprocess.getPropHyps).map Expr.fvar)
  let hs := locals.filter (fun l => !hs.contains l) ++ hs
  let mv₀ := (← Meta.mkFreshExprMVar (← mv.getType)).mvarId!
  -- lean-smt prunes the context to what the hints mention. We keep it, so that instance
  -- synthesis still works during replay: a refutation can need an element of a sort,
  -- and the `[Inhabited α]` that supplies it is exactly the kind of unmentioned binding
  -- pruning drops. Translation is limited by the dependency graph, not by what is in
  -- scope, so nothing else changes.
  mv₀.withContext do
  let ⟨_, hs₁, mv₁⟩ ← Preprocess.applySteps mv₀ hs
    #[Preprocess.pushHintsToCtx, Preprocess.intros, Preprocess.negateGoal]
  mv₁.withContext do
    let (fvNames, _) ← genUniqueFVarNames
    let q ← Query.generateQuery hs₁.toList fvNames
    let rendered := MessageData.joinSep (q.commands.map toMessageData) Format.line
    trace[vampire] "problem:{indentD rendered}"
    let (names, code, sources) ← compile q.commands
    let mut inputs : Array Input := #[]
    let mut next := 0
    for src in sources do
      match src with
      | .hypothesis =>
        let some p := q.asserted[next]?
          | throwError "vampire: the problem has more assertions than hypotheses"
        inputs := inputs.push (.hypothesis p)
        next := next + 1
      | .definition nm =>
        let some e := q.symbols[nm]?
          | throwError "vampire: no Lean term for the definition '{nm}'"
        inputs := inputs.push (.definition e)
    return { commands := q.commands, symbols := q.symbols, inputs, names, code,
             goal := mv₁, root := mv₀ }

/-- The problem as Vampire itself renders it, for diagnostics. -/
def problemAsVampireSeesIt : MetaM MessageData := do
  let n ← Ffi.problemSize
  let mut lines : Array MessageData := #[]
  for i in [0:n.toNat] do
    lines := lines.push (← Ffi.problemUnit i.toUInt32)
  return MessageData.joinSep lines.toList Format.line

/-- Translate the goal, then build, solve and export in one call. -/
def run (mv : MVarId) (hs : Array Expr) (deciseconds : UInt32) : MetaM (Outcome × Built) := do
  let built ← buildProblem mv hs
  match ← Ffi.run built.names built.code deciseconds with
  | .refuted => return (.refuted, built)
  | .notRefuted => return (.notRefuted, built)
  | .failed what => throwError "vampire: {what}"

/-- What the exported proof's symbols and input units mean in Lean. -/
def interpOf (built : Built) (syms : Symbols) : Interp where
  sort := fun s => (syms.sorts[s]?).bind (built.symbols[·]?)
  fn := fun f => ((syms.funs[f]?).map (·.name)).bind (built.symbols[·]?)
  pred := fun p => ((syms.preds[p]?).map (·.name)).bind (built.symbols[·]?)
  input := fun n => if n == 0 then none else built.inputs[n - 1]?
  -- Both filled in by `Replay.replay` as the steps that introduce them are reached.
  splitProp := fun _ => none
  skolem := fun _ => none

/-- Replay the refutation Vampire found as a Lean proof of `False`, in the context of
the preprocessed goal. -/
def replayRefutation (built : Built) : TermElabM Expr := built.goal.withContext do
  match ← Ffi.exportedRefutation with
  | .error e => throwError e
  | .ok refutation =>
    trace[vampire] "replaying {refutation.steps.size} steps"
    Replay.replay (interpOf built refutation.symbols) refutation

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
      | (.notRefuted, _) =>
        throwError "vampire: no refutation found — {← Ffi.message}"
      | (.refuted, built) =>
        let proof ← replayRefutation built
        built.goal.assign proof
        g.assign (.mvar built.root)
        logInfo m!"vampire: closed by a refutation replayed from the prover"

  | `(tactic| vampire? $hints:hintList) => do
    let hs ← elabHints hints
    let g ← getMainGoal
    g.withContext do
      unless (← Ffi.init) == .ok do
        throwError "vampire: the embedded prover is not available"
      let (outcome, _) ← run g hs 100
      let verdict := if outcome == .refuted then "refuted" else "no refutation found"
      let outlineText ← if outcome == .refuted then Ffi.proofOutline else pure ""
      let outline : MessageData :=
        if outlineText.isEmpty then m!"" else m!"\nrefutation:{indentD outlineText}"
      logInfo m!"vampire: the problem, as Vampire received it:\
        {indentD (← problemAsVampireSeesIt)}\n{verdict}{outline}"

end Vampire
