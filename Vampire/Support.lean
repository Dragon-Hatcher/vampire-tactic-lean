import Lean
import VampLean

/-!
# Tactics the replay needs that the generated file does not

`LeanChecker` writes a Lean file, so it can size a destructuring pattern to the number
of clauses Vampire's own CNF produced. Replaying inside the elaborator, the shape is
only known once the transformation has actually run, so the corresponding step is a
tactic that looks.
-/

namespace Vampire

open Lean Elab Tactic Meta

/--
Split every conjunctive hypothesis, repeatedly, naming the pieces `vc0`, `vc1`, ….

Returns the goal and the names introduced, so the caller can normalise exactly those.
-/
private partial def splitConjunctions (g : MVarId) (idx : Nat) (acc : Array Name) :
    MetaM (MVarId × Array Name) := do
  let found? ← g.withContext do
    for d in ← getLCtx do
      if d.isImplementationDetail then continue
      let ty ← instantiateMVars d.type
      if ty.isAppOf ``And then return some (d.fvarId, ty)
    return none
  match found? with
  | none => return (g, acc)
  | some (fv, ty) =>
    let n₁ := Name.mkSimple s!"vc{idx}"
    let n₂ := Name.mkSimple s!"vc{idx + 1}"
    let (l, r) ← g.withContext do
      pure (← mkAppM ``And.left #[.fvar fv], ← mkAppM ``And.right #[.fvar fv])
    let g ← g.assert n₁ ty.appFn!.appArg! l
    let (_, g) ← g.intro1P
    let g ← g.assert n₂ ty.appArg! r
    let (_, g) ← g.intro1P
    let g ← g.clear fv
    splitConjunctions g (idx + 2) (acc.push n₁ |>.push n₂)

/--
Finish a clausification whose parent produced more than one clause.

`LeanChecker::clausify` destructures the parent with a `let ⟨s0, …, sₙ⟩ :=` whose width
is the number of clauses *Vampire's* CNF produced, then normalises those hypotheses and
closes each conclusion by `assumption`. VampLean's `cnfify` need not split the
conjunction the same number of ways, so the width cannot be fixed in advance: this
splits until nothing is left to split, then does the same normalisation.
-/
syntax (name := vampireFinishClausify) "vampire_finish_clausify" : tactic

elab_rules : tactic
  | `(tactic| vampire_finish_clausify) => do
    let (g, names) ← splitConjunctions (← getMainGoal) 0 #[]
    replaceMainGoal [g]
    for n in names do
      let h := mkIdent n
      evalTactic (← `(tactic| try ac_nf0 at $h:ident))
    evalTactic (← `(tactic| try simp only))
    evalTactic (← `(tactic| ac_nf0))
    evalTactic (← `(tactic| assumption))

end Vampire
