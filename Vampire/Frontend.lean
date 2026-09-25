import Lean
import Auto.Tactic
import Vampire.Arith
import Vampire.LiteralRewrite
import Vampire.Preprocess
import VampireReplay.Reconstruct
import Vampire.Worker

namespace Vampire

open Lean Meta Elab Tactic

/--
Collects the distinct subterms of a proof and, for each constant, how many of
those subterms apply it.

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
  /--
  Close the goal even when the proof uses a rule this tactic does not replay
  yet. Those steps are admitted as `sorry` and a warning is logged. When off,
  such a proof is an error.
  -/
  admit : Bool := false
deriving Inhabited

/-- A goal written out as the TPTP problem vampire is to refute. -/
structure Posed where
  /-- The goal preprocessing left, whose type is `False`. -/
  preprocessed : Preprocess.Result
  /-- The copy of the caller's goal that preprocessing consumed. -/
  copy : MVarId
  /-- The TPTP problem sent to vampire. -/
  problem : String
  symbols : Symbols
  /-- What reducing the goal to a set of hypotheses took, in milliseconds. -/
  preprocessing : Nat
  /-- What writing those out as a TPTP problem took. -/
  translation : Nat

/-- What running vampire on a goal produced. -/
structure Query extends Posed where
  proof : Proof
  /-- What vampire said for itself, for when it did not find a proof. -/
  diagnostics : String
  /-- What vampire's own search took. -/
  search : Nat

/-- Preprocesses the goal and translates it, without running vampire. -/
def pose (cfg : TacticConfig) (mv : MVarId) (hs : Array Auto.Lemma) :
    MetaM Posed := mv.withContext do
  -- Preprocessing assigns the goal it is given, so work on a copy and leave the
  -- caller's goal for it to discharge.
  let copy := (← mkFreshExprMVar (← mv.getType)).mvarId!
  let started ← IO.monoMsNow
  let preprocessed ←
    if cfg.mono then Preprocess.mono copy hs
    else Preprocess.intros copy (hs.map (·.proof))
  -- Vampire has no exponentiation, so a literal power is written out as the
  -- multiplications it stands for -- in Lean, with a proof, so that what is
  -- asked and what is replayed say the same thing. Under `+mono` the lemmas
  -- are also written out before monomorphization, by
  -- `Preprocess.lemmaWithoutPowers`; this pass runs on both paths all the same.
  let hypotheses ← preprocessed.goal.withContext <|
    preprocessed.hypotheses.mapM fun (h, role) => do
      return (← Preprocess.withoutPowers h, role)
  -- Vampire reads no `if-then-else` over terms, so each is lifted out into a
  -- function defined by its two cases.
  let (goal, hypotheses) ← Preprocess.liftIte preprocessed.goal hypotheses
  -- Nor quantifies over a proposition.
  let hypotheses ← goal.withContext (Preprocess.instantiateProps hypotheses)
  let preprocessed := { preprocessed with goal, hypotheses }
  let preprocessing := (← IO.monoMsNow) - started
  let (problem, symbols) ← preprocessed.goal.withContext (problemOf hypotheses)
  let translation := (← IO.monoMsNow) - started - preprocessing
  trace[vampire] "problem:\n{problem}"
  return { preprocessed, copy, problem, symbols, preprocessing, translation }

/-- Runs vampire on a posed problem. -/
def run (cfg : TacticConfig) (posed : Posed) (searchFrom : System.FilePath) :
    MetaM Query := do
  let before ← IO.monoMsNow
  match ← prove posed.problem cfg.toConfig searchFrom with
  | .error e => throwError "vampire failed: {e}"
  | .ok (proof, diagnostics) =>
    let search := (← IO.monoMsNow) - before
    trace[vampire.timing] "vampire searched for {search}ms"
    if let some strategy := proof.strategy? then
      trace[vampire] "found by {strategy}"
    trace[vampire] "proof:\n{proof.proofText}"
    trace[vampire] "vampire said:\n{diagnostics}"
    return { posed with proof := proof, diagnostics := diagnostics, search := search }

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

Vampire tries a schedule of a few hundred strategies. When naming the strategy
that found the proof would save more than 100ms of search, the tactic suggests
the call with `(strategy := ...)` added.
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
    let hs ← Preprocess.propHypotheses (← getMainGoal)
    hs.mapM fun h => do
      let name ← h.fvarId!.getUserName
      return ⟨⟨h, ← inferType h, .leaf s!"❰{name}❱"⟩, #[]⟩
  | `(vampireHintElem| $h:term) => do
    -- Named `fact` rather than `lemma`, which is a keyword once Mathlib's
    -- tactics are imported, as they are here through `Vampire.Arith`.
    let fact ← Auto.Prep.elabLemma h (.leaf s!"❰{h}❱")
    return #[fact]
  | _ => throwUnsupportedSyntax

def elabHints : TSyntax ``vampireHints → TacticM (Array Auto.Lemma)
  | `(vampireHints| [ $[$hs],* ]) => withMainContext do
    hs.foldlM (init := #[]) fun acc h => return acc ++ (← elabHintElem h)
  | `(vampireHints| ) => return #[]
  | _ => throwUnsupportedSyntax

/--
How much a named strategy has to save before the tactic suggests naming it,
in milliseconds.

Below this the schedule found the right strategy quickly, and writing one
into the call buys a few milliseconds at the cost of a line that goes stale
when the goal changes.
-/
private def suggestStrategyThreshold : Nat := 100

/--
What the schedule spent on the strategies the winning one won against:
everything between the schedule starting and the proof being found, less the
winner's own run. Starting the worker and parsing the problem are outside
that, and a run naming the strategy pays them too, so this is what naming it
saves. `none` when there is no proof to have found.
-/
private def failedStrategiesTime (proof : Proof) : Option Nat := do
  let foundAt ← proof.foundAtTime?
  let spent := (← proof.setupTime?) + (← proof.strategyTime?)
  return foundAt - spent

/--
`proof`, which proves `goal`, put in a lemma of its own and applied to the
locals it speaks of.

A replayed refutation can be hundreds of thousands of terms, and what the
elaborator does with a theorem's value once the tactic has returned -- sharing
its subterms, walking it for the constants it uses, instantiating what is
left -- takes as long again as checking it. A lemma is checked when it is
added, and the theorem is left a constant applied to a few locals.

The closure is taken here rather than by `mkAuxTheorem`, whose general one
rebuilds the whole term to account for metavariables and let-bound locals a
replayed proof does not have: the locals the proof and its statement mention,
with those their types mention, in the order the context has them.
-/
private def asLemma (goal : MVarId) (proof : Expr) : MetaM Expr := goal.withContext do
  let type ← instantiateMVars (← goal.getType)
  let proof ← instantiateMVars proof
  if type.hasMVar || proof.hasMVar then
    trace[vampire] "the proof or its statement has metavariables, so it is \
      returned as it is rather than as a lemma"
    return proof
  let lctx ← getLCtx
  let mut used := Lean.collectFVars (Lean.collectFVars {} type) proof
  let mut pending := used.fvarIds
  while !pending.isEmpty do
    let before := used.fvarSet
    for id in pending do
      if let some decl := lctx.find? id then
        used := Lean.collectFVars used decl.type
        if let some v := decl.value? then used := Lean.collectFVars used v
    pending := used.fvarIds.filter (!before.contains ·)
  let locals := lctx.foldl (init := #[]) fun acc decl =>
    if used.fvarSet.contains decl.fvarId then acc.push decl.toExpr else acc
  let type ← mkForallFVars locals type
  -- Shared first, so that what is abstracted is the smaller term and a
  -- formula the proof uses in many places is one subterm; then each such is
  -- let-bound once, since abstracting the locals makes each use a different
  -- term, by how many of the proof's lets it is under. `IO.lazyPure` makes
  -- the pure sharing pass run here, rather than be deferred or floated
  -- elsewhere by the compiler.
  let t0 ← IO.monoMsNow
  let proof ← IO.lazyPure fun _ => ShareCommon.shareCommon' proof
  let t1 ← IO.monoMsNow
  let proof ← Vampire.Reconstruct.hoistClosed proof
  let t2 ← IO.monoMsNow
  let value ← mkLambdaFVars locals proof
  let levels := (collectLevelParams (collectLevelParams {} type) value).params.toList
  let t3 ← IO.monoMsNow
  let name ← mkAuxLemma levels type value
  let t4 ← IO.monoMsNow
  trace[vampire.timing] "the lemma: sharing {t1 - t0}ms, hoisting {t2 - t1}ms, \
    closing it {t3 - t2}ms, adding it {t4 - t3}ms"
  -- A let-bound local is a `let` in the lemma, not an argument of it.
  let args ← locals.filterM fun x => return !(← x.fvarId!.getDecl).isLet
  return mkAppN (mkConst name (levels.map mkLevelParam)) args

/-- Why the search came back empty, as the error the tactic reports. -/
private def throwNoRefutation (cfg : TacticConfig) (query : Query) : TacticM α := do
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
    else m!" Only the named strategy was tried; remove `strategy` to run the \
      whole schedule."
  let mono := if cfg.mono then m!"" else m!", or `+mono`"
  let timeout := if cfg.mono then m!" or raising the timeout" else m!", raising the timeout"
  throwError "vampire did not refute the goal: \
    {query.proof.terminationReason.describe}. Try passing more hypotheses\
    {timeout}{mono}.{pinned}{hint}"

/--
Replays the refutation, and what that took in milliseconds.

Anything vampire introduced itself -- a skolem function, an AVATAR predicate, a
subformula it named while clausifying -- has no counterpart in the goal, so a
step speaking of one cannot even be stated until it is bound.
-/
private def replayQuery (cfg : TacticConfig) (query : Query) :
    TacticM (Reconstruct.Outcome × Nat) := do
  let before ← IO.monoMsNow
  let outcome ←
    try
      query.preprocessed.goal.withContext
        (Reconstruct.run query.proof query.symbols Arith.contradiction
          LiteralRewrite.literalIff LiteralRewrite.literalFalse
          LiteralRewrite.literalRewritten LiteralRewrite.Viras.refute Arith.cancelling
          LiteralRewrite.ringNormalForms cfg.checkSteps)
    catch e =>
      throwError "vampire refuted the goal but the proof could not be \
        replayed: {e.toMessageData}"
  let replay := (← IO.monoMsNow) - before
  trace[vampire.timing] "replay took {replay}ms"
  let some outcome := outcome
    | throwError "vampire reported a refutation but produced no proof"
  if ← isTracingEnabledFor `vampire then
    let (_, (seen, applied)) :=
      (subterms (← instantiateMVars outcome.proof)).run ({}, {})
    let most := applied.toArray.qsort (fun a b => a.2 > b.2)
    trace[vampire] "the proof has {seen.size} distinct subterms; the most \
      applied constants, with how many of them each heads: {most.take 8}"
  unless outcome.unimplemented.isEmpty do
    trace[vampire] "rules with no replay: {outcome.unimplemented}"
    -- The proof term holds a `sorry` for each of these, so it closes the
    -- goal only when asked to, and says so when it does.
    unless cfg.admit do
      throwError "vampire's proof uses {outcome.unimplemented}, which this \
        tactic does not replay yet. `+admit` closes the goal anyway, with \
        those steps admitted as `sorry`."
    logWarning m!"vampire's proof uses {outcome.unimplemented}, which this \
      tactic does not replay yet; those steps are admitted as `sorry`."
  return (outcome, replay)

/--
What each phase of the call cost, for `+stats`.

What Lean does with the term afterwards -- sharing its subterms and checking
it -- is not counted, because it happens once the tactic has returned.
`set_option profiler true` reports that.
-/
private def reportStats (query : Query) (outcome : Reconstruct.Outcome)
    (replay : Nat) : TacticM PUnit := do
  let ms (name : String) (took : Nat) : MessageData :=
    m!"\n  {name}{"".pushn ' ' (14 - name.length)}{took}ms"
  let part (name : String) (took : Nat) : MessageData :=
    m!"\n    {name}{"".pushn ' ' (24 - name.length)}{took}ms"
  -- Where the search went: everything outside the schedule (starting the
  -- worker, writing and reading files, exiting), parsing the problem, then
  -- the strategies that did not find the proof, then the one that did.
  let within := Id.run do
    let (some foundAt, some setup, some winner, some failed) :=
      (query.proof.foundAtTime?, query.proof.setupTime?,
        query.proof.strategyTime?, failedStrategiesTime query.proof)
      | return m!""
    if foundAt == 0 || setup + winner > foundAt || foundAt > query.search then
      return m!""
    return part "worker overhead" (query.search - foundAt)
      ++ part "parsing the problem" setup
      ++ part "failed strategies" failed
      ++ part "successful strategy" winner
  let found := match query.proof.strategy? with
    | some strategy => m!"; the strategy that found it is \"{strategy}\""
    | none => m!""
  logInfo m!"vampire took {query.preprocessing + query.translation +
      query.search + replay}ms, not counting what Lean then does with the \
    proof term:{ms "preprocessing" query.preprocessing}\
    {ms "translation" query.translation}{ms "search" query.search}{within}\
    {ms "replay" replay}\n\
    the proof vampire found had {outcome.steps} steps{found}"

/--
Offers the call with the winning strategy named, where naming it saves enough
to be worth a line of the file: a schedule that reached the right strategy
quickly saves nothing worth having. `+stats` says where the time went whether
or not this does.
-/
private def suggestStrategy (stx : Syntax) (rest : Array Syntax) (query : Query) :
    TacticM PUnit := do
  let some strategy := query.proof.strategy? | return
  let some saved := failedStrategiesTime query.proof | return
  unless saved ≥ suggestStrategyThreshold do return
  let rest := rest.filterMap fun s =>
    match s.reprint with
    | some text =>
      let text := text.trimAscii.toString
      if text.isEmpty then none else some text
    | none => none
  let call := " ".intercalate
    (["vampire", s!"(strategy := {String.quote strategy})"] ++ rest.toList)
  Meta.Tactic.TryThis.addSuggestion stx { suggestion := call }
    (header := s!"Naming the strategy that found the proof saves about \
      {saved}ms of the {query.search}ms search:")

@[tactic vampireStx]
def evalVampire : Tactic := fun stx => withMainContext do
  match stx with
  | `(tactic| vampire $cfgStx:optConfig $hsStx:vampireHints) => do
    let cfg ← elabConfig cfgStx
    let hs ← elabHints hsStx
    let mv ← getMainGoal
    let searchFrom := (← getFileName : System.FilePath).parent.getD "."
    let posed ← pose cfg mv hs
    if cfg.showQuery then
      logInfo m!"TPTP problem:\n{posed.problem}"
      mv.admit (synthetic := false)
      replaceMainGoal []
      return
    let query ← run cfg posed searchFrom
    unless query.proof.refutation?.isSome do
      throwNoRefutation cfg query
    let (outcome, replay) ← replayQuery cfg query
    if cfg.stats then
      reportStats query outcome replay
    query.preprocessed.goal.assign (← asLemma query.preprocessed.goal outcome.proof)
    mv.assign (.mvar query.copy)
    replaceMainGoal []
    -- The strategy is worth reporting only if the call does not already name
    -- one, and only once it is known that its proof can be replayed -- which
    -- a proof holding a `sorry` cannot be said to be.
    if cfg.strategy.isEmpty && outcome.unimplemented.isEmpty then
      suggestStrategy stx #[cfgStx.raw, hsStx.raw] query
  | _ => throwUnsupportedSyntax

end Tactic

initialize registerTraceClass `vampire
/-- What each phase cost, without what each phase was working on. -/
initialize registerTraceClass `vampire.timing

end Vampire
