import Lean
import Auto.Tactic
import Vampire.Preprocess
import Vampire.Reconstruct
import Vampire.Worker

namespace Vampire

open Lean Meta Elab Tactic

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

def run (cfg : TacticConfig) (mv : MVarId) (hs : Array Expr) (searchFrom : System.FilePath) :
    MetaM Query := mv.withContext do
  -- Preprocessing assigns the goal it is given, so work on a copy and leave the
  -- caller's goal for it to discharge.
  let copy := (← mkFreshExprMVar (← mv.getType)).mvarId!
  let preprocessed ← if cfg.mono then Preprocess.mono copy hs else Preprocess.intros copy hs
  let (problem, symbols) ← preprocessed.goal.withContext (problemOf preprocessed.hypotheses)
  trace[vampire] "problem:\n{problem}"
  match ← prove problem cfg.toConfig searchFrom with
  | .error e => throwError "vampire failed: {e}"
  | .ok proof =>
    trace[vampire] "proof:\n{proof.proofText}"
    return { preprocessed, copy, problem, symbols, proof }

namespace Tactic

syntax vampireStar := "*"

syntax vampireHintElem := vampireStar <|> term

syntax vampireHints := (" [" withoutPosition(vampireHintElem,*,?) "]")?

/--
`vampire` translates the current goal into a TPTP refutation problem and hands
it to the vampire prover.

By default only the goal and the local hypotheses reachable from it are sent.
Extra facts are passed in brackets, and `*` means every hypothesis in the local
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
      throwError "vampire did not refute the goal \
        ({repr query.proof.terminationReason}). Try passing more hypotheses, \
        raising the timeout, or `+mono`."
    -- Replay the refutation. Anything vampire introduced itself -- a skolem
    -- function, an AVATAR predicate -- has no counterpart in the goal, so
    -- replay gives up and the goal is admitted whole.
    let replayed ←
      try
        query.preprocessed.goal.withContext
          (Reconstruct.run query.proof query.symbols)
      catch e =>
        logInfo m!"vampire refuted the goal but the proof could not be \
          replayed, so it is admitted: {e.toMessageData}"
        pure none
    match replayed with
    | none =>
      mv.admit (synthetic := false)
      replaceMainGoal []
    | some outcome =>
      unless outcome.unimplemented.isEmpty do
        trace[vampire] "admitted rules: {outcome.unimplemented}"
      query.preprocessed.goal.assign outcome.proof
      mv.assign (.mvar query.copy)
      replaceMainGoal []
  | _ => throwUnsupportedSyntax

end Tactic

initialize registerTraceClass `vampire

end Vampire
