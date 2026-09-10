import Lean
import Vampire.Worker

namespace Vampire

open Lean Elab Tactic Meta

def run (goal : MVarId) (_cfg : Config) : MetaM _root_.Unit := do
  goal.admit (synthetic := false)

namespace Frontend

syntax (name := vampireStx) "vampire" (num)? : tactic

@[tactic vampireStx]
def elabVampire : Tactic := fun stx => do
  let cfg : Config := match stx[1].getOptional? with
    | some t => { timeout := t.toNat }
    | none => {}
  liftMetaFinishingTactic fun goal => run goal cfg

end Frontend

end Vampire
