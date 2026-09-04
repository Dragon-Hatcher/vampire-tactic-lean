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

/-- How long Vampire may search, in seconds. -/
register_option vampire.timeout : Nat := {
  defValue := 10
  descr := "seconds Vampire may spend searching for a refutation"
}

/-- Whether to probe with a tight budget before spending the whole one. -/
register_option vampire.escalate : Bool := {
  defValue := true
  descr := "search under a tight time limit first, then under the whole `vampire.timeout`"
}

namespace Vampire

open Lean Elab Tactic Meta

/-- The search budget, in deciseconds, from `set_option vampire.timeout`. -/
def timeoutDeciseconds : MetaM UInt32 := do
  return (((← getOptions).get `vampire.timeout (10 : Nat)) * 10).toUInt32

/--
The time limits to search under, in the order to try them.

**The time limit is a search parameter, not just a cap.** Vampire's default saturation
algorithm is the limited-resource strategy, which uses the limit to estimate which
clauses it can still reach and discards the rest — so a *tighter* budget prunes harder
and can reach a refutation sooner. Measured through the tactic on the benchmark, with
the budget the only thing changed: `MGT035+2` 14.9s at 30s against 1.6s at 2s,
`MGT035-2` 6.6s against 1.2s, `HEN009-5` 3.3s against 0.5s. Handing the prover the whole
of a generous `vampire.timeout` is therefore the slow way to use it.

So probe first and fall back. The last entry is always the whole budget, so a problem
that needs the wide search still gets it and nothing that used to be provable stops
being; what a probe costs when it fails is its own limit, which is why the limit has to
be *enforced* — see `s_embeddedSoftTimeLimit` in `ffi/vampire_build.cpp`.

The probes are absolute rather than fractions of the budget, because what makes a probe
worth trying is that it is small in itself, not that it is small relative to what the
user allowed. One at half the budget would mostly duplicate the fallback, so a probe is
dropped once it reaches that.
-/
def searchSchedule (budget : UInt32) (escalate : Bool) : Array UInt32 := Id.run do
  if !escalate then return #[budget]
  let mut out := #[]
  for probe in [(20 : UInt32), 80] do
    if 2 * probe <= budget then out := out.push probe
  return out.push budget

/-- How the tactic is configured, as `vampire +mono [h]` and friends. Follows `smt`'s
`Smt.Config`, which is where the `+mono` spelling comes from. -/
structure Config where
  /-- Monomorphise the goal with `auto` before translating it.

  Vampire's logic is monomorphic first-order logic, so a goal that quantifies over a
  type or carries a typeclass has no direct reading. `auto`'s procedure instantiates the
  polymorphic lemmas at the types the problem uses and replaces what is left with
  uninterpreted symbols. Off by default: it changes what reaches the prover, and on a
  goal that is already first-order it is cost without benefit. -/
  mono : Bool := false
deriving Inhabited

declare_config_elab elabConfig Config

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

def buildProblem (cfg : Config) (mv : MVarId) (hs : Array Expr) (all : Bool) :
    MetaM Built := mv.withContext do
  -- Only with `[*]`: everything propositional in the local context, minus what has no
  -- first-order reading. Without it, just what was named.
  let hs ←
    if all then do
      -- Not filtered under `+mono`: the filter asks whether a hypothesis translates
      -- *as it stands*, and the whole point of monomorphising is that a polymorphic one
      -- does not until it has been.
      let props := (← Preprocess.getPropHyps).map Expr.fvar
      let locals ← if cfg.mono then pure props else filterTranslatable props
      pure (locals.filter (fun l => !hs.contains l) ++ hs)
    else pure hs
  let mv₀ := (← Meta.mkFreshExprMVar (← mv.getType)).mvarId!
  -- lean-smt prunes the context to what the hints mention. We keep it, so that instance
  -- synthesis still works during replay: a refutation can need an element of a sort,
  -- and the `[Inhabited α]` that supplies it is exactly the kind of unmentioned binding
  -- pruning drops. Translation is limited by the dependency graph, not by what is in
  -- scope, so nothing else changes.
  mv₀.withContext do
  -- `mono` replaces the other three rather than joining them: auto's procedure
  -- introduces the goal's binders, negates it and pushes every hint into the context
  -- itself, so running them alongside would do the work twice. This is how `smt` wires
  -- it too.
  let steps :=
    if cfg.mono then #[Preprocess.mono]
    else #[Preprocess.pushHintsToCtx, Preprocess.intros, Preprocess.negateGoal]
  let ⟨_, hs₁, mv₁⟩ ← Preprocess.applySteps mv₀ hs steps
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

/--
Translate the goal, then search for a refutation and make something of it — once per
limit in `searchSchedule`, until one of them works.

`use` is what a refutation has to survive to end the schedule: for `vampire` it is the
whole replay, and for `vampire?` nothing at all. Escalating on a *replay* failure and
not only on a search failure is what makes the probe safe. A tighter budget prunes, so
it is a different search and finds a different proof, and a different proof can use a
rule this port does not replay: probing turned `GRP427-1` from a 5.0s pass into a
failure at "step 20895 (superposition) could not be replayed", where the wide search
finds a proof that replays. Since the last limit in the schedule is the whole budget,
falling through to it means nothing that used to replay stops replaying.

Only the search is repeated. The translation happens once, and each `Ffi.run` rebuilds
the problem from the same instruction stream, so a retry costs a rebuild and a search
and nothing on this side.
-/
def searchWith {α : Type} (cfg : Config) (mv : MVarId) (hs : Array Expr) (all : Bool)
    (deciseconds : UInt32) (use : Built → TermElabM α) :
    TermElabM (Built × Except MessageData α) := do
  let t0 ← IO.monoMsNow
  let built ← buildProblem cfg mv hs all
  trace[vampire.timing] "translated in {(← IO.monoMsNow) - t0}ms"
  let escalate := (← getOptions).getBool `vampire.escalate true
  let schedule := searchSchedule deciseconds escalate
  -- Why the schedule ran out, to report if it does. The last entry is the whole budget,
  -- so this is the wide search's own reason and not a probe's.
  let mut why : MessageData := m!"the search was not run"
  for h : k in [0:schedule.size] do
    let limit := schedule[k]
    let isLast := k + 1 == schedule.size
    let t1 ← IO.monoMsNow
    let r ← Ffi.run built.names built.code limit
    let reason ← Ffi.termination
    trace[vampire.timing] "prover took {(← IO.monoMsNow) - t1}ms at {limit}ds ({reason})"
    trace[vampire.prover] "{← Ffi.proverOutput}"
    match r with
    | .failed what => throwError "vampire: {what}"
    | .notRefuted =>
      why := m!"no refutation found ({reason}) — {← Ffi.message}"
      -- A saturated space is not a budget problem, and no later limit changes it.
      unless reason.mightYieldToMore do break
    | .refuted =>
      if isLast then return (built, .ok (← use built))
      let saved ← saveState
      try
        return (built, .ok (← use built))
      catch e =>
        saved.restore
        why := e.toMessageData
        trace[vampire.replay] "the refutation found at {limit}ds was not usable, \
          escalating:{indentD e.toMessageData}"
  return (built, .error why)

/-- Translate the goal, then search for a refutation, asking nothing of it. -/
def run (cfg : Config) (mv : MVarId) (hs : Array Expr) (all : Bool) (deciseconds : UInt32) :
    TermElabM (Outcome × Built) := do
  -- Nothing is asked of the refutation, so the first limit that finds one ends the
  -- schedule: what `vampire?` reports is what the prover would have handed the replay.
  let (built, r) ← searchWith cfg mv hs all deciseconds (fun _ => pure ())
  return (if r matches .ok _ then .refuted else .notRefuted, built)

/-- What the exported proof's symbols and input units mean in Lean. -/
def interpOf (built : Built) (syms : Symbols) : Interp where
  sort := fun s => (syms.sorts[s]?).bind (built.symbols[·]?)
  fn := fun f => ((syms.funs[f]?).map (·.name)).bind (built.symbols[·]?)
  pred := fun p => ((syms.preds[p]?).map (·.name)).bind (built.symbols[·]?)
  input := fun n => if n == 0 then none else built.inputs[n - 1]?
  -- Both filled in by `Replay.replay` as the steps that introduce them are reached.
  splitProp := fun _ => none
  skolem := fun _ => none
  definedPred := fun _ => none
  definedFn := fun _ => none

/-- Replay the refutation Vampire found as a Lean proof of `False`, in the context of
the preprocessed goal. -/
def replayRefutation (built : Built) : TermElabM Expr := built.goal.withContext do
  let tExp ← IO.monoMsNow
  match ← Ffi.exportedRefutation with
  | .error e => throwError e
  | .ok refutation =>
    let t0 ← IO.monoMsNow
    trace[vampire.timing] "read the refutation back in {t0 - tExp}ms"
    let e ← Replay.replay (interpOf built refutation.symbols) refutation
    trace[vampire.timing] "replayed {refutation.steps.size} steps in \
      {(← IO.monoMsNow) - t0}ms"
    return e

/-- Collect the hypotheses named in `vampire [h₁, h₂]`. -/
syntax vampireStar := "*"
syntax vampireHintElem := vampireStar <|> term
syntax hintList := (" [" withoutPosition(vampireHintElem,*,?) "]")?

/-- The hints, and whether the whole local context was asked for with `*`. -/
private def elabHints (stx : Syntax) : TacticM (Array Expr × Bool) := do
  if stx.getNumArgs == 0 then return (#[], false)
  let mut hs := #[]
  let mut all := false
  for arg in stx[0][1].getSepArgs do
    -- `syntax A := B <|> C` wraps the alternative, so the star is one level down.
    if arg[0].getKind == ``vampireStar then all := true
    else
      -- `Auto.Prep.elabLemma`, as `smt` uses for its own hints. Plain `elabTerm` is not
      -- enough for a polymorphic hint: `mul_assoc` on its own leaves `Group ?G` stuck,
      -- and elaboration reports it rather than waiting to see what the goal fixes it
      -- to. This elaborates with `ignoreStuckTC`, then abstracts whatever metavariables
      -- are left into binders — which is exactly the form monomorphisation wants, and a
      -- no-op on a hint whose type is already determined.
      hs := hs.push (← Auto.Prep.elabLemma ⟨arg[0]⟩ (.leaf s!"❰{arg[0]}❱")).proof
  return (hs, all)

/--
Discharge the goal with Vampire.

Only what you name is sent: `vampire [h, thm]` sends those, and `vampire [*]` sends
everything propositional in the local context. This follows `smt`, and for the same
reason — the minimum problem is usually the one the prover has the best chance on, and
naming what matters is cheap. The goal's own binders are always introduced and sent.

Under `[*]`, a hypothesis with no first-order reading is skipped rather than being
fatal; one you name explicitly is not.
-/
syntax (name := vampire) "vampire" optConfig hintList : tactic

/-- Show the problem Vampire is given for this goal, and whether it refutes it. Leaves
the goal alone. Takes the same hints as `vampire`. -/
syntax (name := vampireQ) "vampire?" optConfig hintList : tactic

elab_rules : tactic
  | `(tactic| vampire $cfg:optConfig $hints:hintList) => do
    let cfg ← elabConfig cfg
    let (hs, all) ← elabHints hints
    let g ← getMainGoal
    g.withContext do
      unless (← Ffi.init) == .ok do
        throwError "vampire: the embedded prover is not available"
      -- The replay is what the schedule has to get past, not just the search: a
      -- refutation found under a probe's budget is a different proof, and it can use a
      -- rule this port does not replay. `searchWith` escalates on either failure.
      let (built, r) ← searchWith cfg g hs all (← timeoutDeciseconds) replayRefutation
      match r with
      -- The message is the wide search's own: either Vampire's account of why it found
      -- nothing — which names the strategy, not the limit, so the termination reason
      -- goes with it — or the replay's account of the step it could not do.
      | .error why => throwError "vampire: {why}"
      | .ok proof =>
        built.goal.assign proof
        g.assign (.mvar built.root)

  | `(tactic| vampire? $cfg:optConfig $hints:hintList) => do
    let cfg ← elabConfig cfg
    let (hs, all) ← elabHints hints
    let g ← getMainGoal
    g.withContext do
      unless (← Ffi.init) == .ok do
        throwError "vampire: the embedded prover is not available"
      let (outcome, _) ← run cfg g hs all (← timeoutDeciseconds)
      let verdict := if outcome == .refuted then "refuted" else "no refutation found"
      let outlineText ← if outcome == .refuted then Ffi.proofOutline else pure ""
      let outline : MessageData :=
        if outlineText.isEmpty then m!"" else m!"\nrefutation:{indentD outlineText}"
      logInfo m!"vampire: the problem, as Vampire received it:\
        {indentD (← problemAsVampireSeesIt)}\n{verdict}{outline}"

end Vampire
