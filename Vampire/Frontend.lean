import Lean
import Auto.Tactic
import Vampire.Preprocess
import Vampire.Reconstruct
import Vampire.Worker

namespace Vampire

open Lean Meta Elab Tactic

/-- Counts the distinct subterms of a proof, by the constant each applies. -/
private partial def tally (e : Expr) :
    StateM (Std.HashSet Expr × Std.HashMap Name Nat) PUnit := do
  if (← get).1.contains e then return
  modify fun (seen, hist) => (seen.insert e, hist)
  match e with
  | .app .. =>
    if let .const n _ := e.getAppFn then
      modify fun (seen, hist) => (seen, hist.insert n (hist.getD n 0 + 1))
    for a in e.getAppArgs do tally a
  | .lam _ d b _ | .forallE _ d b _ => tally d; tally b
  | .letE _ t v b _ => tally t; tally v; tally b
  | .mdata _ b => tally b
  | .proj _ _ b => tally b
  | _ => return

/-- Configuration for the `vampire` tactic. -/
structure TacticConfig extends Config where
  /-- Whether to monomorphize the goal with `lean-auto` before translating it. -/
  mono : Bool := false
  /-- Show the TPTP problem instead of running vampire. Useful for debugging. -/
  showQuery : Bool := false
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

def run (cfg : TacticConfig) (mv : MVarId) (hs : Array Expr) (searchFrom : System.FilePath) :
    MetaM Query := mv.withContext do
  -- Preprocessing assigns the goal it is given, so work on a copy and leave the
  -- caller's goal for it to discharge.
  let copy := (← mkFreshExprMVar (← mv.getType)).mvarId!
  let preprocessed ← if cfg.mono then Preprocess.mono copy hs else Preprocess.intros copy hs
  let (problem, symbols) ← preprocessed.goal.withContext (problemOf preprocessed.hypotheses)
  trace[vampire] "problem:\n{problem}"
  let searched ← IO.monoMsNow
  match ← prove problem cfg.toConfig searchFrom with
  | .error e => throwError "vampire failed: {e}"
  | .ok (proof, diagnostics) =>
    if let some path ← IO.getEnv "VAMPIRE_COST" then
      let h ← IO.FS.Handle.mk path .append
      h.putStrLn s!"vampire {(← IO.monoMsNow) - searched}"
      h.flush
    trace[vampire] "proof:\n{proof.proofText}"
    trace[vampire] "vampire said:\n{diagnostics}"
    return { preprocessed, copy, problem, symbols, proof, diagnostics }

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
-/
syntax (name := vampireStx) "vampire" optConfig vampireHints : tactic

declare_config_elab elabConfig TacticConfig

def elabHintElem : TSyntax ``vampireHintElem → TacticM (Array Expr)
  | `(vampireHintElem| *) => do
    return (← Preprocess.propHypotheses (← getMainGoal)).filter Expr.isFVar
  | `(vampireHintElem| $h:term) => do
    let lemma ← Auto.Prep.elabLemma h (.leaf s!"❰{h}❱")
    return #[lemma.proof]
  | _ => throwUnsupportedSyntax

def elabHints : TSyntax ``vampireHints → TacticM (Array Expr)
  | `(vampireHints| [ $[$hs],* ]) => withMainContext do
    hs.foldlM (init := #[]) fun acc h => return acc ++ (← elabHintElem h)
  | `(vampireHints| ) => return #[]
  | _ => throwUnsupportedSyntax

@[tactic vampireStx]
def evalVampire : Tactic := fun stx => withMainContext do
  match stx with
  | `(tactic| vampire $cfg:optConfig $hs:vampireHints) => do
    let cfg ← elabConfig cfg
    let hs ← elabHints hs
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
      throwError "vampire did not refute the goal \
        ({repr query.proof.terminationReason}). Try passing more hypotheses, \
        raising the timeout, or `+mono`.{hint}"
    -- Replay the refutation. Anything vampire introduced itself -- a skolem
    -- function, an AVATAR predicate, a subformula it named while clausifying --
    -- has no counterpart in the goal, so the step cannot even be stated.
    let replayed ← IO.monoMsNow
    let outcome ←
      try
        query.preprocessed.goal.withContext
          (Reconstruct.run query.proof query.symbols)
      catch e =>
        throwError "vampire refuted the goal but the proof could not be \
          replayed: {e.toMessageData}"
    if let some path ← IO.getEnv "VAMPIRE_COST" then
      let h ← IO.FS.Handle.mk path .append
      h.putStrLn s!"replay {(← IO.monoMsNow) - replayed}"
      h.flush
    let some outcome := outcome
      | throwError "vampire reported a refutation but produced no proof"
    if let some path ← IO.getEnv "VAMPIRE_COST" then
      let (_, (seen, hist)) := (tally (← instantiateMVars outcome.proof)).run ({}, {})
      let top := hist.toArray.qsort (fun a b => a.2 > b.2)
      let h ← IO.FS.Handle.mk path .append
      h.putStrLn s!"nodes {seen.size}"
      for (n, c) in top.take 14 do
        h.putStrLn s!"node {n} {c}"
      h.flush
    unless outcome.unimplemented.isEmpty do
      -- The proof term holds a `sorry` for each of these, so say so rather
      -- than leaving the goal looking closed.
      logWarning m!"vampire's proof was replayed except for         {outcome.unimplemented}, which are admitted"
      trace[vampire] "admitted rules: {outcome.unimplemented}"
    query.preprocessed.goal.assign outcome.proof
    mv.assign (.mvar query.copy)
    replaceMainGoal []
  | _ => throwUnsupportedSyntax

end Tactic

initialize registerTraceClass `vampire

end Vampire
