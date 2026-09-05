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

/-- Whether a goal the default strategy does not refute is put to Vampire's portfolio. -/
register_option vampire.portfolio : Bool := {
  defValue := true
  descr := "after the default strategy has had the whole budget, try the strategies of \
    Vampire's own schedule, each for a share of a second budget of `vampire.timeout`"
}

/-- The most one strategy of the portfolio may search for. -/
register_option vampire.portfolioSlice : Nat := {
  defValue := 20
  descr := "deciseconds a single portfolio strategy may search for, capping what the \
    schedule asks for; 0 for no cap"
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

/-- One attempt at the problem: a strategy, and how long it may search for. -/
structure Attempt where
  /-- Deciseconds for the saturation loop. -/
  limit : UInt32
  /-- An encoded Vampire strategy, or `""` for Vampire's default. -/
  strategy : String := ""
  deriving Inhabited

instance : ToMessageData Attempt where
  toMessageData a :=
    if a.strategy.isEmpty then m!"{a.limit}ds" else m!"{a.limit}ds {a.strategy}"

/--
The portfolio, as attempts, from the schedule Vampire chose for this problem.

**The tactic runs one strategy and Vampire's strength is its portfolio.** Measured over
the 121 problems of the corpus that are provable and that the default strategy does not
refute inside 20s, `--mode portfolio --schedule casc` refutes 71 of them in the same 20s
— where tripling the default's budget buys three and no single alternative strategy
buys any. `docs/portfolio.md` has the table. So the thing that is missing is not time
and not a better strategy but *diversity*, and the way to get the diversity Vampire has
is to run Vampire's own schedule rather than a schedule invented here.

Two departures from what the executable does with the same schedule, both forced by
running in a Lean process rather than in a fork of one:

- **A slice's own budget is capped.** The schedule assigns each strategy a share, and
  in the executable those shares are spent by workers in parallel — so a slice that
  wants 36s and one that wants 0.1s can both be had. Sequentially they cannot: one such
  slice is the whole budget. The cap keeps the sequence to the part of the schedule the
  portfolio's advantage comes from, which is its first few dozen strategies at about a
  tenth of a second each.
- **A slice's share is in instructions, and this counts time.** The schedule budgets
  with `i=`, mega-instructions, which needs `perf` and so exists only under Linux. They
  are converted at the same nominal rate the portfolio itself uses when it has no
  `perf`; `sliceDeciseconds` in `ffi/vampire_build.cpp` does it.
-/
def portfolioSchedule (slices : Array Ffi.Slice) (budget cap : UInt32) : Array Attempt :=
  slices.map fun s =>
    let want := if s.deciseconds == 0 then budget else s.deciseconds
    let want := if cap == 0 then want else min want cap
    { limit := min want budget, strategy := s.strategy }

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
  /-- Run this strategy first, before anything else.

  The point is to stop paying for a search whose answer is already known. A goal the
  portfolio refutes has spent the whole default budget failing and then some number of
  strategies getting there, and none of that is information the *next* elaboration
  lacks: the tactic reports which strategy refuted it, and naming it here makes the next
  run go straight to it.

  It is a hint and not an instruction. If the strategy does not refute the goal — the
  goal has changed, or the search is wall-clock bounded and lost a race — the ordinary
  schedule follows behind it, so pinning one can cost time but cannot lose a proof.

  The value is one encoded line of a Vampire schedule, which is what the tactic prints
  and what `Shell/Schedules.cpp` is written in. -/
  strategy : String := ""
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
What to tell the user about a search that produced no refutation.

Three things have to be kept apart, and the reason alone does not keep them apart:

- **The search ran out of budget.** Raising `vampire.timeout` is the thing to do, and
  saying so is the whole point of the message. Vampire's own explanation is appended but
  not presented as the reason, because it describes the *strategy* — a search cut off by
  the limit still reports "non-redundant clauses discarded", which reads like a statement
  about the problem.
- **The search finished the space.** No budget changes that: the goal does not follow
  from what the prover was given, so the thing to do is give it more.
- **The budget went somewhere the budget does not bound.** The soft limit is checked in
  the saturation loop only, so a run can spend its whole allowance in `Preprocess` and
  report a search that never really happened. The phase split is the only way to see it,
  which is why it is in the message rather than only in the trace.
-/
private def whyNoRefutation (limit : UInt32) (reason : Ffi.Termination)
    (ps : Ffi.Phases) (explanation : String) : MessageData :=
  let where_ :=
    if ps.clausify > ps.search && ps.clausify > 100 * limit / 2 then
      m!"\n  Most of it went to clausification ({ps.clausify}ms against \
        {ps.search}ms of search), which `vampire.timeout` does not bound — it is \
        checked in the saturation loop only. A goal whose clausification is the \
        expensive part needs a smaller problem, not a larger budget."
    else m!""
  let advice :=
    match reason with
    | .satisfiable =>
      m!"the prover finished the search space without finding one, so no larger \
        `vampire.timeout` will help: the goal does not follow from what it was given. \
        Name more hypotheses, or use `vampire [*]`"
    | .timeLimit | .memoryLimit | .activationLimit | .instructionLimit =>
      m!"the search ran out of budget after {(limit / 10 : UInt32)}s — raise \
        `set_option vampire.timeout`{where_}"
    | .refutationNotFound =>
      m!"the search exhausted what it had not discarded, under a strategy that \
        discards clauses to fit the budget — raise `set_option vampire.timeout` and it \
        will discard less{where_}"
    | _ => m!"the prover stopped for a reason this side does not know ({reason})"
  m!"no refutation found: {advice}\n  the prover's own account: {explanation}"

/-- What a run of attempts learned, carried from one phase of the schedule to the next. -/
private structure Progress where
  /-- Why the last attempt that reached the prover found nothing. -/
  why : MessageData := m!"the search was not run"
  /-- The first refutation that was found and could not be replayed. Kept separately
  because otherwise the next attempt's "no refutation found" overwrites it and the user
  is told the prover found nothing, when in fact it found a proof this port could not
  use — a different problem with a different answer. -/
  unreplayable : Option MessageData := none
  /-- A search finished the space. That is a fact about the problem and not about the
  budget or the strategy, so nothing later in the schedule can change it. -/
  settled : Bool := false
  /-- How many strategies of the portfolio were reached before the budget ran out.
  Worth reporting: the schedule is long and what a goal gets through is a fact about the
  budget, not about the schedule. -/
  tried : Nat := 0
  /-- The strategy that produced a usable refutation, once one has. -/
  winner : Option Attempt := none

/--
Work through `attempts`, stopping at the first refutation `use` accepts.

`use` is what a refutation has to survive: for `vampire` it is the whole replay, and for
`vampire?` nothing at all. Escalating on a *replay* failure and not only on a search
failure is what makes a probe safe. A tighter budget prunes, so it is a different search
and finds a different proof, and a different proof can use a rule this port does not
replay: probing turned `GRP427-1` from a 5.0s pass into a failure at "step 20895
(superposition) could not be replayed", where the wide search finds a proof that
replays. The same is true, and more so, of a different *strategy*.

The one attempt that does not catch a replay failure is the final one, which is where
the error the user should see is: at that point there is nothing left to escalate to, so
"this step could not be replayed" is the answer and not something on the way to it.
`moreAfter` says another phase of the schedule follows this array, and `deadline` — a
`monoMsNow` reading — bounds the phase as a whole, so which attempt turns out to be the
final one is decided when it happens rather than in advance.
-/
private def runAttempts {α : Type} (built : Built) (as : Array Attempt)
    (deadline : Option Nat) (moreAfter : Bool) (use : Built → TermElabM α)
    (st : Progress) (headline : Bool := true) : TermElabM (Progress × Option α) := do
  let mut st := st
  for h : k in [0:as.size] do
    let a := as[k]
    let spent ← IO.monoMsNow
    if deadline.any (· <= spent) then break
    -- Never more than the phase has left: a slice's own share is what the schedule
    -- wanted it to have, not what there is.
    let limit := match deadline with
      | none => a.limit
      | some d => min a.limit (Nat.max ((d - spent) / 100) 1).toUInt32
    let r ← Ffi.run built.names built.code limit a.strategy
    let reason ← Ffi.termination
    let ps ← Ffi.phases
    trace[vampire.timing] "prover took {(← IO.monoMsNow) - spent}ms at \
      {({ a with limit } : Attempt)} ({reason}): {ps}"
    trace[vampire.prover] "{← Ffi.proverOutput}"
    if !headline then st := { st with tried := st.tried + 1 }
    match r with
    | .failed what => throwError "vampire: {what}"
    | .badStrategy what =>
      -- Not a fact about the goal: this build of Vampire cannot run this line of the
      -- schedule. The rest of the schedule is unaffected.
      trace[vampire] "skipping the strategy {a.strategy}: {what}"
    | .notExported what =>
      -- A refutation this side cannot read back. Like a replay failure: a fact about
      -- the proof that was found, so the thing to do is look for a different one.
      if st.unreplayable.isNone then st := { st with unreplayable := some m!"{what}" }
      trace[vampire.replay] "the refutation found at {a} could not be exported, \
        escalating: {what}"
    | .notRefuted =>
      -- The account the user gets is the *default* strategy's, at the whole budget: a
      -- portfolio slice ran for a tenth of a second by design, and "the search ran out
      -- of budget after 0s" says nothing about the goal. A slice that finishes the space
      -- is the exception, because that is a statement about the problem and it ends the
      -- schedule.
      if headline || !reason.mightYieldToMore then
        st := { st with why := whyNoRefutation limit reason ps (← Ffi.message) }
      unless reason.mightYieldToMore do
        st := { st with settled := true }
        break
    | .refuted =>
      let last := k + 1 == as.size || deadline.any (· <= (← IO.monoMsNow))
      if last && !moreAfter then
        return ({ st with winner := some a }, some (← use built))
      let saved ← saveState
      try
        return ({ st with winner := some a }, some (← use built))
      catch e =>
        saved.restore
        if st.unreplayable.isNone then
          st := { st with unreplayable := some e.toMessageData }
        trace[vampire.replay] "the refutation found at {a} was not usable, \
          escalating:{indentD e.toMessageData}"
  return (st, none)

/-- What to tell the user about a schedule that ran out. -/
private def scheduleVerdict (st : Progress) : MessageData :=
  let portfolio :=
    if st.tried == 0 then m!""
    else m!"\n  Vampire's own schedule was tried behind it, as far as \
      {st.tried} strategies; none refuted it either."
  let replay :=
    match st.unreplayable with
    | none => m!""
    | some first =>
      m!"\n  A refutation *was* found, under another strategy or a tighter limit, and \
        could not be replayed:{indentD first}"
  m!"{st.why}{portfolio}{replay}"

/--
Translate the goal, then search for a refutation and make something of it.

Two phases. First `searchSchedule`: Vampire's default strategy, under a tight limit and
then under the whole budget. Then, if `vampire.portfolio` is on and the problem is still
open, the schedule Vampire's own portfolio would have used for it, strategy by strategy
under a second budget of the same size — see `portfolioSchedule` for why that is the
thing that closes the gap, and `docs/portfolio.md` for the measurement.

The portfolio goes *behind* the default and not in front of it, so a goal the default
refutes never pays for it; the cost of having it is paid only by a goal that was going
to fail anyway, and what it buys there is the difference between failing and not.

Only the search is repeated. The translation happens once, and each `Ffi.run` rebuilds
the problem from the same instruction stream, so a retry costs a rebuild and a search
and nothing on this side.
-/
def searchWith {α : Type} (cfg : Config) (mv : MVarId) (hs : Array Expr) (all : Bool)
    (deciseconds : UInt32) (use : Built → TermElabM α) :
    TermElabM (Built × Option Attempt × Except MessageData α) := do
  let t0 ← IO.monoMsNow
  let built ← buildProblem cfg mv hs all
  trace[vampire.timing] "translated in {(← IO.monoMsNow) - t0}ms"
  let opts ← getOptions
  let escalate := opts.getBool `vampire.escalate true
  let portfolio := opts.getBool `vampire.portfolio true
  -- A pinned strategy goes in front of everything: the point of naming one is to skip
  -- the search that found it. Everything else still follows behind, so a pin that no
  -- longer works costs a run and does not lose the proof.
  let mut st : Progress := {}
  unless cfg.strategy.isEmpty do
    let pinned := #[({ limit := deciseconds, strategy := cfg.strategy } : Attempt)]
    let (st', r') ← runAttempts built pinned none true use st
    st := st'
    if let some a := r' then return (built, st.winner, .ok a)
  -- Not if the pin already settled it: a strategy that finished the search space has
  -- said something about the problem, and running another is asking the same question.
  unless st.settled do
    let byDefault := (searchSchedule deciseconds escalate).map ({ limit := · })
    let (st₀, r) ← runAttempts built byDefault none portfolio use st
    st := st₀
    if let some a := r then return (built, st.winner, .ok a)
  -- The portfolio, if the default's whole budget did not settle the question.
  if portfolio && !st.settled then
    match ← Ffi.schedule built.names built.code with
    | .error e => trace[vampire] "no portfolio schedule for this problem: {e}"
    | .ok slices =>
      let cap := (opts.get `vampire.portfolioSlice (20 : Nat)).toUInt32
      let attempts := portfolioSchedule slices deciseconds cap
      let deadline := (← IO.monoMsNow) + 100 * deciseconds.toNat
      let (st', r') ← runAttempts built attempts (some deadline) false use st
        (headline := false)
      st := st'
      trace[vampire.timing] "portfolio: {st.tried} of {attempts.size} strategies run"
      if let some a := r' then return (built, st.winner, .ok a)
  return (built, none, .error (scheduleVerdict st))

/-- Translate the goal, then search for a refutation, asking nothing of it. -/
def run (cfg : Config) (mv : MVarId) (hs : Array Expr) (all : Bool) (deciseconds : UInt32) :
    TermElabM (Outcome × Built × Option Attempt) := do
  -- Nothing is asked of the refutation, so the first attempt that finds one ends the
  -- schedule: what `vampire?` reports is what the prover would have handed the replay.
  let (built, winner, r) ← searchWith cfg mv hs all deciseconds (fun _ => pure ())
  return (if r matches .ok _ then .refuted else .notRefuted, built, winner)

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

/--
Offer the winning strategy back, when it took the portfolio to find it.

A goal the portfolio refutes has just spent the whole default budget failing and then
some number of strategies getting there, and it will spend it again on every elaboration
— for an answer that is now known. Naming the strategy in the call skips all of it.

Only for a portfolio win: the default strategy needs no pinning, and repeating a pin the
user already wrote back at them is noise.
-/
private def suggestStrategy (winner : Option Attempt) (cfg : Config)
    (hints : Syntax) : TacticM Unit := do
  let some a := winner | return
  if a.strategy.isEmpty || a.strategy == cfg.strategy then return
  -- `reprint` gives the hints back as the user wrote them, whitespace and all, which is
  -- what makes the suggestion something to copy rather than to read.
  let hs := (hints.reprint.getD "").trimRight
  logInfo m!"vampire: refuted by a portfolio strategy, after the default failed. \
    To go straight to it next time:\n  \
    vampire (strategy := {repr a.strategy}){hs}"

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
      let (built, winner, r) ←
        searchWith cfg g hs all (← timeoutDeciseconds) replayRefutation
      match r with
      -- The message is the wide search's own: either Vampire's account of why it found
      -- nothing — which names the strategy, not the limit, so the termination reason
      -- goes with it — or the replay's account of the step it could not do.
      | .error why => throwError "vampire: {why}"
      | .ok proof =>
        built.goal.assign proof
        g.assign (.mvar built.root)
        suggestStrategy winner cfg hints

  | `(tactic| vampire? $cfg:optConfig $hints:hintList) => do
    let cfg ← elabConfig cfg
    let (hs, all) ← elabHints hints
    let g ← getMainGoal
    g.withContext do
      unless (← Ffi.init) == .ok do
        throwError "vampire: the embedded prover is not available"
      let (outcome, _, winner) ← run cfg g hs all (← timeoutDeciseconds)
      -- Which strategy refuted it, when it was not the default: the portfolio is the
      -- half of the schedule a user cannot otherwise see, and "refuted" alone would not
      -- say that the default failed and something else did not.
      let by_ : MessageData := match winner with
        | some a => if a.strategy.isEmpty then m!"" else m!" by {a.strategy}"
        | none => m!""
      let verdict := if outcome == .refuted then m!"refuted{by_}"
        else m!"no refutation found"
      suggestStrategy winner cfg hints
      let outlineText ← if outcome == .refuted then Ffi.proofOutline else pure ""
      let outline : MessageData :=
        if outlineText.isEmpty then m!"" else m!"\nrefutation:{indentD outlineText}"
      logInfo m!"vampire: the problem, as Vampire received it:\
        {indentD (← problemAsVampireSeesIt)}\n{verdict}{outline}"

end Vampire
