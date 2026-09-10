import Auto.Tactic
import Vampire.Translate

namespace Vampire.Preprocess

open Lean Meta Elab

/-- The hypotheses to refute, and the goal they were taken from. -/
structure Result where
  hypotheses : Array Expr
  goal : MVarId

/-- Whether `e` is an inhabitation fact, possibly under binders. -/
private def isInhabitation : Expr → Bool
  | .app (.const ``Nonempty _) _ => true
  | .app (.const ``Inhabited _) _ => true
  | .forallE _ _ body _ => isInhabitation body
  | _ => false

/--
Whether `fv` is a hypothesis worth sending. Inhabitation facts are dropped:
TPTP domains are non-empty, so they carry nothing, and monomorphization
introduces one per sort.
-/
def isHypothesis (fv : FVarId) : MetaM Bool := do
  let decl ← fv.getDecl
  if decl.isImplementationDetail then return false
  return !isInhabitation decl.type && (← isProp decl.type)

/-- The hypotheses of a goal's local context. -/
def propHypotheses (mv : MVarId) : MetaM (Array Expr) := mv.withContext do
  let mut hs := #[]
  for decl in ← getLCtx do
    if ← isHypothesis decl.fvarId then
      hs := hs.push (.fvar decl.fvarId)
  return hs

/--
Reduces the goal to `False`, so vampire is asked for a refutation, and returns
the negated goal as a hypothesis.
-/
private def negateGoal (mv : MVarId) : MetaM (Array Expr × MVarId) := mv.withContext do
  if (← whnf (← mv.getType)).isConstOf ``False then
    return (#[], mv)
  let [mv] ← mv.apply (.const ``Classical.byContradiction [])
    | throwError "could not negate the goal"
  let (fv, mv) ← mv.intro1
  return (#[.fvar fv], mv)

/--
Moves the goal's binders into the local context and negates it.

As in `lean-smt`, the query is the smallest one that states the goal: the
hypotheses are those introduced from the goal itself plus whatever the caller
passed in brackets. Hypotheses already in the local context are only included
if named, or via `*`.
-/
def intros (mv : MVarId) (extra : Array Expr) : MetaM Result := do
  let (fvs, mv) ← mv.intros
  let introduced := (← mv.withContext (fvs.filterM isHypothesis)).map Expr.fvar
  let (negated, mv) ← negateGoal mv
  let hypotheses := (extra ++ introduced ++ negated).toList.eraseDups.toArray
  return { hypotheses, goal := mv }

private def toLemma (e : Expr) : MetaM Auto.Lemma := do
  let e ← instantiateMVars e
  let abstracted ← Auto.abstractMVars e
  let e := abstracted.expr
  return ⟨⟨e, ← inferType e, .leaf s!"{e}"⟩, abstracted.paramNames⟩

/--
Monomorphizes with `lean-auto`, reducing Lean's dependent type theory to
something first-order. `lean-auto` negates the goal itself, so this also leaves
a `False` goal over `Prop` hypotheses. It collects the whole local context.
-/
def mono (mv : MVarId) (extra : Array Expr) : MetaM Result := do
  let (goalBinders, mv) ← mv.intros
  let [nngoal] ← mv.apply (.const ``Classical.byContradiction [])
    | throwError "could not negate the goal"
  let (ngoal, absurd) ← MVarId.intro1 nngoal
  absurd.withContext do
    let lctxLemmas ← Auto.collectLctxLemmas true (goalBinders.push ngoal)
    let lemmas ← (lctxLemmas ++ (← extra.mapM toLemma)).mapM
      (Auto.unfoldConstAndPreprocessLemma #[])
    let inhFacts ← Auto.Inhabitation.getInhFactsFromLCtx
    let (proof, mv, _, _) ← Auto.runMono none lemmas inhFacts
    absurd.assign proof
    return { hypotheses := ← propHypotheses mv, goal := mv }

end Vampire.Preprocess
