import Mathlib
import Auto.Tactic

/-!
Exports Mathlib theorems as the higher-order TPTP problems lean-auto makes of
them, at several premise budgets, so that provers can be compared on exactly
the same problems.

For each sampled theorem the goal is its statement, set up as `auto` sets it up
(its binders introduced, then negated). Its premises are what Lean's premise
selectors rank highest among the theorems it could have used: those of the
modules its module imports, and those earlier in its own module. The theorems
its proof actually uses are a budget of their own (`gt`).

A budget of `k` is those of the top `k` that lean-auto can translate: each is
tried alone with the goal, and one it cannot translate is left out rather than
failing the whole problem, as a hammer would leave it out.

The query is lean-auto's own: its preprocessing, monomorphization and
reification as `runAuto` runs them, up to the `lam2TH0` it would hand a TPTP
prover, which is written out rather than sent. Spawning the prover from a
process holding Mathlib costs seconds a call on macOS, and here nothing needs
to be spawned. A budget whose translation throws has no problem, and why is
recorded.

Configured by environment variables:
* `HAMMER_OUT`: where problems and `export.jsonl` go
* `HAMMER_N`, `HAMMER_SEED`: how many theorems to sample, and how
* `HAMMER_START`, `HAMMER_COUNT`: which of the sample this run exports
* `HAMMER_KS`: the budgets, comma-separated
* `HAMMER_SELECTORS`: which of Lean's selectors rank the premises, of `sine`
  (`sineQuaNonSelector`) and `mepo` (`mepoSelector` with symbol rarity);
  a budget is labelled `<selector>:<k>`
-/

open Lean Meta Elab

namespace HammerExport

def envNat (name : String) (default : Nat) : IO Nat := do
  return ((← IO.getEnv name).bind String.toNat?).getD default

/-- Whether a declaration is a theorem someone wrote, as LeanHammer's
`isHumanTheorem` means it: from Mathlib's source, not generated. -/
def isHumanTheorem (env : Environment) (n : Name) (ci : ConstantInfo) : MetaM Bool := do
  unless ci matches .thmInfo _ do return false
  if ← isInstance n then return false
  if n.isInternalDetail || isAuxRecursor env n || isNoConfusion env n || isMatcherCore env n then
    return false
  let some idx := env.getModuleIdxFor? n | return false
  let mod := env.header.moduleNames[idx.toNat]!
  unless (`Mathlib).isPrefixOf mod do return false
  if (`Mathlib.Tactic).isPrefixOf mod || (`Mathlib.Testing).isPrefixOf mod
      || (`Mathlib.Util).isPrefixOf mod then
    return false
  if let .str _ s := n then
    if s.startsWith "_" || s.startsWith "eq_" || s.startsWith "proof_" then return false
  return (← findDeclarationRanges? n).isSome

/-- The modules `mod` imports, transitively. -/
partial def importClosure (env : Environment) (mod : Nat) : Std.HashSet Nat := Id.run do
  let mut seen : Std.HashSet Nat := {}
  let mut todo := #[mod]
  while h : todo.size > 0 do
    let m := todo.back
    todo := todo.pop
    for imp in env.header.moduleData[m]!.imports do
      if let some i := env.getModuleIdx? imp.module then
        unless seen.contains i.toNat do
          seen := seen.insert i.toNat
          todo := todo.push i.toNat
  return seen

/--
The constants the proof of `thm` uses. Mathlib is built with the module
system, whose public `.olean`s leave proofs out, so the proof is read from the
private part of `thm`'s own module; loading every module's would not fit in
memory. The module data is never freed: the names returned live in it.
-/
def proofConstants (mod thm : Name) : IO (Array Name) := do
  let olean ← findOLean mod
  -- A private part is read along with the parts it extends, as Lean reads it.
  let parts ← readModuleDataParts #[olean, OLeanLevel.server.adjustFileName olean,
    OLeanLevel.private.adjustFileName olean]
  let some (data, _) := parts.back? | throw <| IO.userError s!"no module data for {mod}"
  let some ci := data.constants.find? (·.name == thm)
    | throw <| IO.userError s!"{thm} is not in the private part of {mod}"
  let some value := ci.value? (allowOpaque := true) | throw <| IO.userError s!"{thm} has no proof in {mod}"
  return value.getUsedConstants

/-- The line a declaration starts on. -/
def lineOf (n : Name) : MetaM Nat := do
  return (← findDeclarationRanges? n).map (·.range.pos.line) |>.getD 0

/-- Whether `p` was there to be used when `thm` was proved. -/
def allowed (env : Environment) (thm : Name) (thmMod thmLine : Nat)
    (imports : Std.HashSet Nat) (p : Name) : MetaM Bool := do
  if p == thm then return false
  let some idx := env.getModuleIdxFor? p | return false
  if idx.toNat == thmMod then return (← lineOf p) < thmLine
  return imports.contains idx.toNat

/-- `runAuto` up to its TPTP query: the TH0 problem lean-auto makes of
`lemmas`. -/
def queryOf (lemmas inhFacts : Array Auto.Lemma) : MetaM String :=
  -- lean-auto as LeanHammer runs it (`Hammer/Options.lean`, `withSolverOptions`):
  -- a monomorphized instance, or a fact, that it cannot express is left out
  -- rather than failing the whole problem.
  withOptions (fun o =>
      let o := auto.mono.ignoreNonQuasiHigherOrder.set o true
      auto.lamReif.ignoreUnusable.set o true) <|
  Meta.withDefault do
    let lemmas ← Auto.rewriteIteCondDecide lemmas
    let (query, _) ← Auto.Monomorphization.monomorphize lemmas inhFacts
      (@id (Auto.Reif.ReifM String) do
        let s ← get
        let u ← Auto.computeMaxLevel s.facts
        (action s.facts s.inhTys s.inds).run' {u := u})
    return query
where
  action (uvalids uinhs : Array Auto.UMonoFact) (minds : Array (Array Auto.SimpleIndVal)) :
      Auto.LamReif.ReifM String := do
    let facts ← Auto.LamReif.reifFacts uvalids
    let facts := facts.map (Auto.Embedding.Lam.REntry.valid [])
    let _ ← Auto.LamReif.reifInhabitations uinhs
    let inds ← Auto.LamReif.reifMutInds minds
    let (facts, _) ← Auto.LamReif.preprocess facts inds
    let lamVarTy := (← Auto.LamReif.getVarVal).map Prod.snd
    let lamEVarTy ← Auto.LamReif.getLamEVarTy
    let terms ← facts.mapM fun re => match re with
      | .valid [] t => pure t
      | _ => throwError "unexpected entry among the facts"
    Auto.lam2TH0 lamVarTy lamEVarTy terms

/-- Mirrors `auto`'s own setup: binders introduced, the goal negated, the local
context's propositions and inhabitation facts collected and preprocessed. Then
the query of those and `premises`. -/
def queryFor (ty : Expr) (premises : Array Name) : MetaM String := do
  let g ← mkFreshExprMVar ty
  let (goalBinders, newGoal) ← g.mvarId!.intros
  let [nngoal] ← newGoal.apply (.const ``Classical.byContradiction [])
    | throwError "unexpected result of Classical.byContradiction"
  let (ngoal, absurd) ← MVarId.intro1 nngoal
  absurd.withContext do
    let lctx ← Auto.collectLctxLemmas true (goalBinders.push ngoal)
    let lctx ← lctx.mapM (Auto.unfoldConstAndPreprocessLemma #[])
    let user ← premises.mapM fun p => do
      Auto.unfoldConstAndPreprocessLemma #[] (← Auto.Lemma.ofConst p (.leaf s!"premise {p}"))
    let inh ← Auto.Inhabitation.getInhFactsFromLCtx
    let inh ← inh.mapM (Auto.unfoldConstAndPreprocessLemma #[])
    queryOf (lctx ++ user) inh

def jsonStr (s : String) : String := (Json.str s).compress

def main : MetaM Unit := do
  let out : System.FilePath := (← IO.getEnv "HAMMER_OUT").getD "/tmp/hammer"
  IO.FS.createDirAll (out / "problems")
  let n ← envNat "HAMMER_N" 100
  let seed ← envNat "HAMMER_SEED" 0
  let start ← envNat "HAMMER_START" 0
  let count ← envNat "HAMMER_COUNT" n
  let ks := ((← IO.getEnv "HAMMER_KS").getD "0,16,32,64,128,256").splitOn ","
    |>.filterMap String.toNat? |>.toArray
  let kmax := ks.foldl max 0
  let selectors := ((← IO.getEnv "HAMMER_SELECTORS").getD "sine").splitOn "," |>.toArray
  let env ← getEnv
  -- The sample: every human-written theorem, ordered by a hash of its name.
  let mut candidates := #[]
  for (name, ci) in env.constants.map₁.toList do
    if ← isHumanTheorem env name ci then
      candidates := candidates.push (mixHash (hash name) (hash seed), name)
  let sample := (candidates.qsort (fun a b => a.1 < b.1 || (a.1 == b.1 && a.2.lt b.2))).map (·.2)
  let sample := sample[:n].toArray
  IO.println s!"{candidates.size} candidates, exporting {start}..{start + count} of {sample.size}"
  let log ← IO.FS.Handle.mk (out / "export.jsonl") .append
  let screen ← IO.FS.Handle.mk (out / "screen.jsonl") .append
  for i in [start : min (start + count) sample.size] do
    let thm := sample[i]!
    let ci ← getConstInfo thm
    let thmMod := (env.getModuleIdxFor? thm).get!.toNat
    let thmLine ← lineOf thm
    let imports := importClosure env thmMod
    let ok := allowed env thm thmMod thmLine imports
    -- Each selector over-fetched, since neither takes the config's filter, then
    -- kept to what was there.
    let g ← mkFreshExprMVar ci.type
    let (_, g') ← g.mvarId!.intros
    let mut rankings : Array (String × Array Name) := #[]
    for sel in selectors do
      let selector : LibrarySuggestions.Selector := match sel with
        | "mepo" => LibrarySuggestions.mepoSelector (useRarity := true)
        | _ => LibrarySuggestions.sineQuaNonSelector (depthFactor := 1.5)
      let ranked ← selector g' { maxSuggestions := 4 * kmax + 64 }
      let ranked ← ranked.filterM fun s => ok s.name
      rankings := rankings.push (sel, (ranked.map (·.name))[:kmax].toArray)
    -- What the proof used, of the theorems it could have.
    let used ← ((← proofConstants env.header.moduleNames[thmMod]! thm).filterM fun p => do
      return (← getConstInfo p) matches .thmInfo _ && (← ok p))
    -- Which premises translate, each alone with the goal.
    -- Why each one that does not was left out goes to `screen.jsonl`.
    let mut translates : Std.HashSet Name := {}
    let mut screened : Std.HashSet Name := {}
    for p in rankings.flatMap (·.2) ++ used do
      if screened.contains p then continue
      screened := screened.insert p
      let saved ← saveState
      let err ← tryCatchRuntimeEx
        (do
          discard <| withTheReader Core.Context (fun c => { c with maxHeartbeats := 50000 * 1000 }) do
            Core.withCurrHeartbeats (queryFor ci.type #[p])
          pure none)
        (fun e => return some (← e.toMessageData.toString))
      saved.restore
      match err with
      | none => translates := translates.insert p
      | some e =>
        screen.putStrLn s!"\{\"i\": {i}, \"thm\": {jsonStr thm.toString}, \"premise\": \
          {jsonStr p.toString}, \"error\": {jsonStr (e.take 400).toString}}"
        screen.flush
    let keep (ps : Array Name) := ps.filter translates.contains
    let budgets : Array (String × Array Name × Nat) :=
      rankings.flatMap (fun (sel, ranked) => ks.map fun k =>
          (s!"{sel}:{k}", keep ranked[:k].toArray, (ranked[:k].toArray).size))
        |>.push ("gt", keep used, used.size)
    for (label, premises, selected) in budgets do
      let file := out / "problems" / s!"{i}_{label.replace ":" "-"}.p"
      let started ← IO.monoMsNow
      let saved ← saveState
      -- A translation that runs out of heartbeats is one that failed, and a
      -- timeout is a runtime exception, which `try` alone lets through.
      let err ← tryCatchRuntimeEx
        (do
          let query ← withTheReader Core.Context (fun c => { c with maxHeartbeats := 200000 * 1000 }) do
            Core.withCurrHeartbeats (queryFor ci.type premises)
          IO.FS.writeFile file query
          pure none)
        (fun e => return some (← e.toMessageData.toString))
      saved.restore
      let exported ← file.pathExists
      let status := if exported then "exported" else "untranslated"
      let error := if exported then "" else ((err.getD "").take 300).toString
      log.putStrLn s!"\{\"i\": {i}, \"thm\": {jsonStr thm.toString}, \"module\": \
        {jsonStr env.header.moduleNames[thmMod]!.toString}, \"budget\": {jsonStr label}, \
        \"selected\": {selected}, \"premises\": {premises.size}, \"status\": {jsonStr status}, \
        \"ms\": {(← IO.monoMsNow) - started}, \"error\": {jsonStr error}}"
      log.flush
    IO.println s!"{i} {thm}"

end HammerExport

set_option maxHeartbeats 0 in
run_meta HammerExport.main
