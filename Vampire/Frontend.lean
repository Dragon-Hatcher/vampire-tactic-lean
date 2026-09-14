import Lean
import Auto.Tactic
import Vampire.Arith
import Vampire.Preprocess
import VampireReplay.Reconstruct
import Vampire.Worker

namespace Vampire

open Lean Meta Elab Tactic

/--
The distinct subterms of a proof, and how many apply each constant.

What Lean spends on a replayed proof after the tactic hands it back -- sharing
its subterms, checking it -- goes by its size, so this is what to look at when
that is what is slow.
-/
private partial def subterms (e : Expr) :
    StateM (Std.HashSet Expr × Std.HashMap Name Nat) PUnit := do
  if (← get).1.contains e then return
  modify fun (seen, applied) => (seen.insert e, applied)
  match e with
  | .app .. =>
    if let .const n _ := e.getAppFn then
      modify fun (seen, applied) => (seen, applied.insert n (applied.getD n 0 + 1))
    for a in e.getAppArgs do subterms a
  | .lam _ d b _ | .forallE _ d b _ => subterms d; subterms b
  | .letE _ t v b _ => subterms t; subterms v; subterms b
  | .mdata _ b => subterms b
  | .proj _ _ b => subterms b
  | _ => return

/-- Configuration for the `vampire` tactic. -/
structure TacticConfig extends Config where
  /-- Whether to monomorphize the goal with `lean-auto` before translating it. -/
  mono : Bool := false
  /-- Show the TPTP problem instead of running vampire. Useful for debugging. -/
  showQuery : Bool := false
  /--
  Check each step of the replay as it is built, so that a rule building an
  ill-typed term is reported with its name instead of reaching the kernel
  anonymously. Costs about a fifth of the replay; see
  `Vampire.Reconstruct.Context.checkSteps`.
  -/
  checkSteps : Bool := false
  /--
  Report what each phase of the call cost and how many steps the proof it
  replayed had. `set_option trace.vampire.timing true` says the same and more,
  step by step; this is the summary.
  -/
  stats : Bool := false
deriving Inhabited

/-- What running vampire on a goal produced. -/
structure Query where
  /-- The goal preprocessing left, whose type is `False`. -/
  preprocessed : Preprocess.Result
  /-- The copy of the caller's goal that preprocessing consumed. -/
  copy : MVarId
  /-- The TPTP problem sent to vampire. -/
  problem : String
  symbols : Symbols
  proof : Proof
  /-- What vampire said for itself, for when it did not find a proof. -/
  diagnostics : String
  /-- What reducing the goal to a set of hypotheses took, in milliseconds. -/
  preprocessing : Nat
  /-- What writing those out as a TPTP problem took. -/
  translation : Nat
  /-- What vampire's own search took. -/
  search : Nat

def run (cfg : TacticConfig) (mv : MVarId) (hs : Array Auto.Lemma)
    (searchFrom : System.FilePath) : MetaM Query := mv.withContext do
  -- Preprocessing assigns the goal it is given, so work on a copy and leave the
  -- caller's goal for it to discharge.
  let copy := (← mkFreshExprMVar (← mv.getType)).mvarId!
  let started ← IO.monoMsNow
  let preprocessed ←
    if cfg.mono then Preprocess.mono copy hs
    else Preprocess.intros copy (hs.map (·.proof))
  -- Vampire has no exponentiation, so a literal power is written out as the
  -- multiplications it stands for -- in Lean, with a proof, so that what is
  -- asked and what is replayed say the same thing. Monomorphization does its
  -- own, before it runs, since what it leaves has nothing to write out.
  let hypotheses ← preprocessed.goal.withContext <|
    preprocessed.hypotheses.mapM fun (h, role) => do
      return (← Preprocess.withoutPowers h, role)
  let preprocessing := (← IO.monoMsNow) - started
  let (problem, symbols) ← preprocessed.goal.withContext (problemOf hypotheses)
  let translation := (← IO.monoMsNow) - started - preprocessing
  trace[vampire] "problem:\n{problem}"
  let before ← IO.monoMsNow
  match ← prove problem cfg.toConfig searchFrom with
  | .error e => throwError "vampire failed: {e}"
  | .ok (proof, diagnostics) =>
    let search := (← IO.monoMsNow) - before
    trace[vampire.timing] "vampire searched for {search}ms"
    if let some strategy := proof.strategy? then
      trace[vampire] "found by {strategy}"
    trace[vampire] "proof:\n{proof.proofText}"
    trace[vampire] "vampire said:\n{diagnostics}"
    return { preprocessed, copy, problem, symbols, proof, diagnostics,
             preprocessing, translation, search }

namespace Tactic

syntax vampireStar := "*"

syntax vampireHintElem := vampireStar <|> term

syntax vampireHints := (" [" withoutPosition(vampireHintElem,*,?) "]")?

/--
`vampire` translates the current goal into a TPTP refutation problem, hands it
to the vampire prover, and replays the refutation as a Lean proof.

By default only the goal and the hypotheses introduced from it are sent. Extra
facts are passed in brackets, and `*` means every hypothesis in the local
context:
```lean
example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire [hp, hpq]
example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire [*]
```
`+mono` monomorphizes the goal with `lean-auto` first, reducing Lean's
dependent type theory to something first-order; `vampire +showQuery` prints the
TPTP problem instead of running the prover. Other fields of
`Vampire.TacticConfig` are available in the same way, e.g.
`vampire (timeout := 60)`.

Vampire works through a schedule of a few hundred strategies and only the one
that succeeds is any use, so a proof comes with the strategy that found it and
an offer to write that into the call, which skips the others next time.
-/
syntax (name := vampireStx) "vampire" optConfig vampireHints : tactic

declare_config_elab elabConfig TacticConfig

/--
A hint, as `lean-auto` states one: what proves it, what it says, and the
universes it is stated over.

Kept whole rather than reduced to the term, because a term named here can
still be waiting on what it is stated of -- `mul_assoc` says nothing until a
type and its `Semigroup` instance are chosen -- and it is monomorphization
that chooses. A lemma handed over as a term alone has had the universes it was
abstracted over forgotten, and then nothing can instantiate it.
-/
def elabHintElem : TSyntax ``vampireHintElem → TacticM (Array Auto.Lemma)
  | `(vampireHintElem| *) => do
    let hs := (← Preprocess.propHypotheses (← getMainGoal)).filter Expr.isFVar
    hs.mapM fun h => do
      return ⟨⟨h, ← inferType h, .leaf s!"{h}"⟩, #[]⟩
  | `(vampireHintElem| $h:term) => do
    -- Named `fact` rather than `lemma`, which `linarith`'s library makes a
    -- keyword and this file now reaches for.
    let fact ← Auto.Prep.elabLemma h (.leaf s!"❰{h}❱")
    return #[fact]
  | _ => throwUnsupportedSyntax

def elabHints : TSyntax ``vampireHints → TacticM (Array Auto.Lemma)
  | `(vampireHints| [ $[$hs],* ]) => withMainContext do
    hs.foldlM (init := #[]) fun acc h => return acc ++ (← elabHintElem h)
  | `(vampireHints| ) => return #[]
  | _ => throwUnsupportedSyntax

@[tactic vampireStx]
def evalVampire : Tactic := fun stx => withMainContext do
  match stx with
  | `(tactic| vampire $cfgStx:optConfig $hsStx:vampireHints) => do
    let cfg ← elabConfig cfgStx
    let hs ← elabHints hsStx
    let mv ← getMainGoal
    let searchFrom := (← getFileName : System.FilePath).parent.getD "."
    let query ← run cfg mv hs searchFrom
    if cfg.showQuery then
      logInfo m!"TPTP problem:\n{query.problem}"
      mv.admit (synthetic := false)
      replaceMainGoal []
      return
    unless query.proof.refutation?.isSome do
      -- `unknown` also covers vampire being stopped before it could report,
      -- which only its own output explains.
      let hint :=
        if query.proof.terminationReason == .unknown then
          m!"\n{query.diagnostics}"
        else m!""
      -- A named strategy is the only one that runs, so it is the first thing
      -- to doubt: the goal it was found for may not be this one any more.
      let pinned :=
        if cfg.strategy.isEmpty then m!""
        else m!" This call names a strategy, and that is the only one vampire \
          tried; removing it puts the whole schedule back."
      throwError "vampire did not refute the goal \
        ({repr query.proof.terminationReason}). Try passing more hypotheses, \
        raising the timeout, or `+mono`.{pinned}{hint}"
    -- Replay the refutation. Anything vampire introduced itself -- a skolem
    -- function, an AVATAR predicate, a subformula it named while clausifying --
    -- has no counterpart in the goal, so the step cannot even be stated.
    let before ← IO.monoMsNow
    let outcome ←
      try
        query.preprocessed.goal.withContext
          (Reconstruct.run query.proof query.symbols Arith.contradiction
            Arith.rearranged Arith.cancelling cfg.checkSteps)
      catch e =>
        throwError "vampire refuted the goal but the proof could not be \
          replayed: {e.toMessageData}"
    let replay := (← IO.monoMsNow) - before
    trace[vampire.timing] "replay took {replay}ms"
    if ← isTracingEnabledFor `vampire then
      if let some outcome := outcome then
        let (_, (seen, applied)) :=
          (subterms (← instantiateMVars outcome.proof)).run ({}, {})
        let most := applied.toArray.qsort (fun a b => a.2 > b.2)
        trace[vampire] "the proof has {seen.size} subterms, \
          most of them {most.take 8}"
    let some outcome := outcome
      | throwError "vampire reported a refutation but produced no proof"
    unless outcome.unimplemented.isEmpty do
      -- The proof term holds a `sorry` for each of these, so say so rather
      -- than leaving the goal looking closed.
      logWarning m!"vampire's proof was replayed except for \
        {outcome.unimplemented}, which this tactic does not implement yet; \
        those steps are admitted, so the proof holds a `sorry`"
      trace[vampire] "admitted rules: {outcome.unimplemented}"
    if cfg.stats then
      -- What Lean does with the term afterwards -- sharing its subterms and
      -- checking it -- is not counted here, because it happens once the
      -- tactic has returned. `set_option profiler true` reports that.
      let ms (name : String) (took : Nat) : MessageData :=
        m!"\n  {name}{"".pushn ' ' (14 - name.length)}{took}ms"
      -- Where the search went: starting the worker and handing it the
      -- problem, then the strategies that did not find it, then the one
      -- that did.
      let winner := query.proof.strategyTime?.getD 0
      let setup := query.proof.setupTime?.getD 0
      let foundAt := query.proof.foundAtTime?.getD 0
      let part (name : String) (took : Nat) : MessageData :=
        m!"\n    {name}{"".pushn ' ' (24 - name.length)}{took}ms"
      let within :=
        if foundAt == 0 || setup + winner > foundAt || foundAt > query.search then
          m!""
        else part "starting the worker" (query.search - foundAt)
          ++ part "reading the problem in" setup
          ++ part "strategies that failed" (foundAt - setup - winner)
          ++ part "the one that found it" winner
      logInfo m!"vampire took {query.preprocessing + query.translation +
          query.search + replay}ms, not counting what Lean then does with the \
        proof term:{ms "preprocessing" query.preprocessing}\
        {ms "translation" query.translation}{ms "search" query.search}{within}\
        {ms "replay" replay}\n\
        the proof vampire found had {outcome.steps} steps"
    query.preprocessed.goal.assign outcome.proof
    mv.assign (.mvar query.copy)
    replaceMainGoal []
    -- The strategy is worth reporting only if the call does not already name
    -- one, and only once it is known that its proof can be replayed -- which
    -- a proof holding a `sorry` cannot be said to be.
    if cfg.strategy.isEmpty && outcome.unimplemented.isEmpty then
      if let some strategy := query.proof.strategy? then
        let rest := #[cfgStx.raw, hsStx.raw].filterMap fun s =>
          match s.reprint with
          | some text =>
            let text := text.trimAscii.toString
            if text.isEmpty then none else some text
          | none => none
        let call := " ".intercalate
          (["vampire", s!"(strategy := {String.quote strategy})"] ++ rest.toList)
        -- What the schedule spent before reaching the strategy that won,
        -- which is what naming it saves. The search is measured here and the
        -- strategy's own time comes back with the proof, so the difference
        -- also covers reading the problem in, which a named run still pays;
        -- hence "about".
        -- What the schedule spent on the strategies this one won against:
        -- everything between the schedule starting and the proof being
        -- found, less the winner's own run. Starting the worker and handing
        -- it the problem are outside that, and a named run pays them too.
        let saved := query.proof.foundAtTime?.getD 0
          - min (query.proof.foundAtTime?.getD 0)
              (query.proof.setupTime?.getD 0 + query.proof.strategyTime?.getD 0)
        let skipping :=
          if saved < 50 then "naming it skips the others next time"
          else s!"the others took about {saved}ms of the {query.search}ms search, \
and naming it skips them next time"
        Meta.Tactic.TryThis.addSuggestion stx { suggestion := call }
          (header := s!"vampire found the proof with one strategy of its schedule; \
{skipping}:")
  | _ => throwUnsupportedSyntax

end Tactic

initialize registerTraceClass `vampire
/-- What each phase cost, without what each phase was working on. -/
initialize registerTraceClass `vampire.timing

end Vampire
