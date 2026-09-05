import Lean
import VampLean
-- `open VampLean`, and it is load-bearing. The replay scripts below are built inside
-- quotations, and quotation identifiers resolve in *this* file's scope, so the lemmas
-- they name -- `not_imp_not`, `not_and_or`, `imp_iff_not_or`, `not_not` and the rest --
-- have to be in scope here. VampLean used to declare them at the root, which is how
-- they resolved before it was namespaced; none of them is in Lean core, so without this
-- a script that names one dies at replay time with `Unknown identifier` and the tactic
-- reports the step as unreplayable. That is invisible at compile time, because a
-- quotation is only syntax until it runs.
open VampLean

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

Returns the goal and the names of the pieces that are left — the leaves of the split,
not the intermediate conjunctions that were themselves taken apart — so the caller can
normalise exactly those.

The hypotheses still to look at are carried as a worklist rather than found by
rescanning the context. A clausification splits as many ways as its parent has clauses,
and that number can be large: `SYN472+1`'s conjecture is a single conjunction over a
hundred clauses wide, and rescanning the whole context once per piece makes the split
quadratic in it.
-/
private partial def splitConjunctions (g : MVarId) : MetaM (MVarId × Array Name) := do
  let todo ← g.withContext do
    let mut todo : Array (FVarId × Option Name) := #[]
    for d in ← getLCtx do
      if d.isImplementationDetail then continue
      if (← instantiateMVars d.type).isAppOf ``And then todo := todo.push (d.fvarId, none)
    pure todo
  go g todo.toList 0 #[]
where
  go (g : MVarId) (todo : List (FVarId × Option Name)) (idx : Nat) (acc : Array Name) :
      MetaM (MVarId × Array Name) := do
    match todo with
    | [] => return (g, acc)
    | (fv, name?) :: rest =>
      let ty ← g.withContext do instantiateMVars (← fv.getType)
      unless ty.isAppOf ``And do
        return ← go g rest idx (match name? with | some n => acc.push n | none => acc)
      let n₁ := Name.mkSimple s!"vc{idx}"
      let n₂ := Name.mkSimple s!"vc{idx + 1}"
      let (l, r) ← g.withContext do
        pure (← mkAppM ``And.left #[.fvar fv], ← mkAppM ``And.right #[.fvar fv])
      let g ← g.assert n₁ ty.appFn!.appArg! l
      let (f₁, g) ← g.intro1P
      let g ← g.assert n₂ ty.appArg! r
      let (f₂, g) ← g.intro1P
      let g ← g.clear fv
      go g ((f₁, some n₁) :: (f₂, some n₂) :: rest) (idx + 2) acc

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
    let (g, names) ← splitConjunctions (← getMainGoal)
    replaceMainGoal [g]
    -- The clause this step wants is often one of the pieces exactly as the split left
    -- it, and the normalisation below is what the parent's *other* clauses need. Every
    -- one of those clauses is a step of its own that runs this same tactic, so
    -- normalising all the pieces every time is quadratic in the width of the split —
    -- and on `SYN472+1` that width is over a hundred. Ask first, normalise after.
    evalTactic (← `(tactic| try assumption))
    if (← getGoals).isEmpty then return
    evalTactic (← `(tactic| try simp only))
    evalTactic (← `(tactic| ac_nf0))
    evalTactic (← `(tactic| try assumption))
    if (← getGoals).isEmpty then return
    -- One piece at a time, stopping at the first that matches. The goal is already
    -- normalised, so normalising a piece can only make *that* piece close it, which is
    -- why `exact` on the piece just normalised does the work a full `assumption` scan
    -- would repeat for every piece before it.
    for n in names do
      let h := mkIdent n
      evalTactic (← `(tactic| try ac_nf0 at $h:ident))
      evalTactic (← `(tactic| try exact $h))
      if (← getGoals).isEmpty then return
    evalTactic (← `(tactic| assumption))

end Vampire
