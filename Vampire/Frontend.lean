import Lean
import Auto.Tactic
import Vampire.Preprocess
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

/-- The outcome of running vampire on a goal. -/
inductive Result where
  /-- Vampire refuted the hypotheses; the goal follows. -/
  | refuted (proof : Proof)
  /-- Vampire stopped without a refutation. -/
  | unrefuted (reason : TerminationReason)

def run (cfg : TacticConfig) (mv : MVarId) (hs : Array Expr) (searchFrom : System.FilePath) :
    MetaM (Result × String) := mv.withContext do
  -- Preprocessing assigns the goal it is given, so work on a copy and leave the
  -- caller's goal for it to discharge.
  let mv' := (← mkFreshExprMVar (← mv.getType)).mvarId!
  let result ← if cfg.mono then Preprocess.mono mv' hs else Preprocess.intros mv' hs
  let problem ← result.goal.withContext (problemOf result.hypotheses)
  trace[vampire] "problem:\n{problem}"
  match ← prove problem cfg.toConfig searchFrom with
  | .error e => throwError "vampire failed: {e}"
  | .ok proof =>
    trace[vampire] "proof:\n{proof.proofText}"
    match proof.refutation? with
    | some _ => return (.refuted proof, problem)
    | none => return (.unrefuted proof.terminationReason, problem)

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
    let (result, problem) ← run cfg mv hs searchFrom
    if cfg.showQuery then
      logInfo m!"TPTP problem:\n{problem}"
      mv.admit (synthetic := false)
      replaceMainGoal []
      return
    match result with
    | .unrefuted reason =>
      throwError "vampire did not refute the goal ({repr reason}). \
        Try passing more hypotheses, raising the timeout, or `+mono`."
    | .refuted _ =>
      -- Reconstruction is not implemented yet, so the proof is admitted.
      mv.admit (synthetic := false)
      replaceMainGoal []
  | _ => throwUnsupportedSyntax

end Tactic

initialize registerTraceClass `vampire

end Vampire
