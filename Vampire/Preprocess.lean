import Auto.Tactic
import Mathlib.Algebra.Group.Defs
import VampireReplay.Translate

namespace Vampire.Preprocess

open Lean Meta Elab

/--
`x ^ n` at a literal natural exponent, written out as the multiplications it
stands for, with a proof that it is the same term.

Vampire has no exponentiation, and `x ^ 3` is not the same term as `x * x * x`
to Lean either -- what it unfolds to is `x * (x * (x * 1))` -- so the two have
to be related by a proof rather than by definition. That is done here, before
the goal is translated, so that what the prover is asked about and what the
replay states are the one thing.

A variable exponent is left alone, and so is `^` over anything but the natural
numbers: `zpow` and `rpow` are not iterated multiplication.
-/
private partial def powProduct (x : Expr) (n : Nat) : MetaM (Expr × Expr) := do
  -- What the power comes to is read off the lemma that says so, rather than
  -- built again here: which `1` a monoid's is, is the lemma's business.
  let stated (says : Expr) : MetaM (Expr × Expr) := do
    let some (_, _, rhs) := (← instantiateMVars (← inferType says)).eq?
      | throwError "{says} does not say what a power comes to"
    return (rhs, says)
  if n == 0 then
    return ← stated (← mkAppM ``pow_zero #[x])
  if n == 1 then
    return ← stated (← mkAppM ``pow_one #[x])
  let (inner, says) ← powProduct x (n - 1)
  -- `x ^ n = x ^ (n - 1) * x`, which is `pow_succ` read at a literal: the
  -- exponent it states is `(n - 1) + 1`, and the two are the same number.
  let step ← mkAppM ``pow_succ #[x, mkRawNatLit (n - 1)]
  let product ← mkAppM ``HMul.hMul #[inner, x]
  let congruence ← withLocalDeclD `t (← inferType x) fun t => do
    mkCongrArg (← mkLambdaFVars #[t] (← mkAppM ``HMul.hMul #[t, x])) says
  return (product, ← mkEqTrans step congruence)

/-- The literal powers of a proposition, written out. -/
private def expandPowers : Simp.Simproc := fun e => do
  let_expr HPow.hPow α β _ _ x n := e | return .continue
  unless (← whnf β).isConstOf ``Nat do return .continue
  -- The exponent as it is written, which for a literal is `OfNat.ofNat`
  -- around the number rather than the number itself.
  let some exponent := n.nat? <|> (← withDefault (whnf n)).rawNatLit?
    | return .continue
  -- What `^` means here has to be the monoid's, which is what says that
  -- writing it out is multiplication at all.
  let expanded ←
    try
      let (product, says) ← powProduct x exponent
      if ← isDefEq (← inferType product) α then pure (some (product, says))
      else pure none
    catch _ => pure none
  let some (product, says) := expanded | return .continue
  return .visit { expr := product, proof? := some says }

/--
A hypothesis with the literal powers of what it says written out, or itself
where it has none.
-/
def withoutPowers (h : Expr) : MetaM Expr := do
  let stated ← instantiateMVars (← inferType h)
  let context ← Simp.mkContext {} (simpTheorems := #[])
    (congrTheorems := ← getSimpCongrTheorems)
  let (result, _) ← Simp.main stated context (methods := { post := expandPowers })
  match result.proof? with
  | none => return h
  | some says => mkEqMP says h

/-- The hypotheses to refute, with their roles, and the goal they came from. -/
structure Result where
  hypotheses : Array (Expr × Role)
  goal : MVarId

/--
The name given to the negated goal, so that it can be told apart from the
axioms after `lean-auto` has monomorphized the context. `collectLctxLemmas`
records a hypothesis as `DTr.leaf s!"lctxLem {name}"`.
-/
private def goalMarker : Name := `_vampireNegatedGoal

private partial def dtrContains (self other : Auto.DTr) : Bool :=
  if self == other then true
  else match self with
    | .leaf _ => false
    | .node _ dtrs => dtrs.any (dtrContains · other)

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
  let (fv, mv) ← mv.intro goalMarker
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
  let axioms := (extra ++ introduced).toList.eraseDups.toArray
  let axioms := axioms.filter (!negated.contains ·)
  return {
    hypotheses := axioms.map (·, .axiom) ++ negated.map (·, .negatedConjecture)
    goal := mv
  }

/--
Monomorphizes with `lean-auto`, reducing Lean's dependent type theory to
something first-order. `lean-auto` negates the goal itself, so this also leaves
a `False` goal over `Prop` hypotheses. It collects the whole local context.
-/
def mono (mv : MVarId) (extra : Array Auto.Lemma) : MetaM Result := do
  let (goalBinders, mv) ← mv.intros
  let [nngoal] ← mv.apply (.const ``Classical.byContradiction [])
    | throwError "could not negate the goal"
  let (ngoal, absurd) ← nngoal.intro goalMarker
  absurd.withContext do
    let lctxLemmas ← Auto.collectLctxLemmas true (goalBinders.push ngoal)
    -- The terms named in brackets come as `lean-auto` elaborated them, whole:
    -- what a lemma is stated of is settled by monomorphization, and it can
    -- only settle it where the lemma still says which universes and which
    -- instances it is waiting for.
    let lemmas ← (lctxLemmas ++ extra).mapM
      (Auto.unfoldConstAndPreprocessLemma #[])
    let inhFacts ← Auto.Inhabitation.getInhFactsFromLCtx
    let (proof, mv, _, dtrs) ← Auto.runMono none lemmas inhFacts
    absurd.assign proof
    let goalDtr := Auto.DTr.leaf s!"lctxLem {goalMarker}"
    let fromGoal := dtrs.filterMap fun (fv, dtr) =>
      if dtrContains dtr goalDtr then some (Expr.fvar fv) else none
    let hypotheses ← propHypotheses mv
    return {
      hypotheses := hypotheses.map fun h =>
        (h, if fromGoal.contains h then .negatedConjecture else .axiom)
      goal := mv
    }

end Vampire.Preprocess
