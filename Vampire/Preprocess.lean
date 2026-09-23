import Auto.Tactic
import Mathlib.Algebra.Group.Defs
import VampireReplay.Translate

namespace Vampire.Preprocess

open Lean Meta Elab

/--
What a lemma says of this very term, if it says anything of it.

Unifying the lemma's left side with the term is what settles everything the
lemma is stated over -- the type, its `Monoid`, the base and the exponent --
and it settles them from the term rather than by looking for them. That
matters after monomorphization, which replaces the instance a term was
written with by one of its own: `Monoid R` can no longer be found for the `R`
a monomorphized goal speaks of, but it is still written in the term, which is
where this reads it.

`Nat` literals unify with `?n + 1`, so `pow_succ` applies to `x ^ 3` as it
stands.
-/
private def saying (name : Name) (term : Expr) : MetaM (Option (Expr × Expr)) := do
  let lemma_ ← mkConstWithFreshMVarLevels name
  let (mvars, _, stated) ← forallMetaTelescope (← inferType lemma_)
  let some (_, lhs, rhs) := stated.eq? | return none
  unless ← isDefEq lhs term do return none
  let says ← instantiateMVars (mkAppN lemma_ mvars)
  if says.hasExprMVar then return none
  return some (← instantiateMVars rhs, says)

/--
The largest literal exponent that is written out as multiplications.

The product has as many factors as the exponent and its proof as many steps,
built by recursion that is not tail-recursive, so a large exponent would cost
time and stack out of proportion to the goal. A power above this is left as
it is, like one with a variable exponent.
-/
private def maxExpandedExponent : Nat := 32

/--
`x ^ n` at a literal natural exponent, written out as the multiplications it
stands for, with a proof that it is the same term.

Vampire has no exponentiation, and `x ^ 3` is not the same term as `x * x * x`
to Lean either -- what it unfolds to is `x * (x * (x * 1))` -- so the two have
to be related by a proof rather than by definition. That is done here, before
the goal is translated, so that what the prover is asked about and what the
replay states are the one thing.

A variable exponent is left alone, and so is `^` over anything but the
natural numbers: `zpow` and `rpow` are not iterated multiplication. So is an
exponent above `maxExpandedExponent`.
-/
private partial def powProduct (e : Expr) : MetaM (Option (Expr × Expr)) := do
  let_expr HPow.hPow _ β _ _ _ n := e | return none
  unless (← whnf β).isConstOf ``Nat do return none
  -- The exponent as it is written, which for a literal is `OfNat.ofNat`
  -- around the number rather than the number itself.
  let some exponent := n.nat? <|> (← withDefault (whnf n)).rawNatLit?
    | return none
  if exponent > maxExpandedExponent then return none
  if exponent == 0 then return ← saying ``pow_zero e
  if exponent == 1 then return ← saying ``pow_one e
  -- `x ^ k = x ^ (k - 1) * x`, and then the same again of the smaller power.
  let some (product, says) ← saying ``pow_succ e | return none
  let_expr HMul.hMul _ _ _ _ inner x := product | return none
  let some (expanded, innerSays) ← powProduct inner | return none
  let congruence ← withLocalDeclD `t (← inferType x) fun t => do
    mkCongrArg (← mkLambdaFVars #[t] (← mkAppM ``HMul.hMul #[t, x])) innerSays
  return some (← mkAppM ``HMul.hMul #[expanded, x], ← mkEqTrans says congruence)

/-- The literal powers of a proposition, written out. -/
private def expandPowers : Simp.Simproc := fun e => do
  match ← powProduct e with
  | some (product, says) => return .visit { expr := product, proof? := some says }
  | none => return .continue

/--
A hypothesis with the literal powers of what it says written out, or itself
where it has none.
-/
private def rewritten (stated : Expr) : MetaM (Option (Expr × Expr)) := do
  let context ← Simp.mkContext {} (simpTheorems := #[])
    (congrTheorems := ← getSimpCongrTheorems)
  let (result, _) ← Simp.main stated context (methods := { post := expandPowers })
  match result.proof? with
  | none => return none
  | some says => return some (result.expr, says)

/--
A proof of something with the literal powers of what it says written out, or
itself where it says none.
-/
def withoutPowers (h : Expr) : MetaM Expr := do
  let some (_, says) ← rewritten (← instantiateMVars (← inferType h)) | return h
  mkEqMP says h

/--
A lemma with the literal powers of what it says written out.

Every lemma monomorphization is given goes through this, before it is given
them: what monomorphization leaves of `x ^ 3` is an opaque function applied
to `x` and to the natural number `3`, with the instance that said what the
power meant replaced by one of its own. There is nothing left to write out
by then, and a natural number is not something the prover is told about.
-/
def lemmaWithoutPowers (fact : Auto.Lemma) : MetaM Auto.Lemma := do
  let some (stated, says) ← rewritten (← instantiateMVars fact.type) | return fact
  return { fact with
    proof := ← mkEqMP says fact.proof
    type := stated }

/-- A term-level `if-then-else` lifted out into a function of its own. -/
private structure Lifted where
  /-- Stands for the function until it is in the local context. -/
  placeholder : FVarId
  /-- The function's type: from the bound variables the `ite` mentions to its own. -/
  type : Expr
  /-- `fun xs => ite c a b`. -/
  value : Expr
  /-- `∀ xs, (c → f xs = a) ∧ (¬c → f xs = b)`, over the placeholder. -/
  says : Expr
  /-- Its proof, `if_pos` and `if_neg` under the binders. -/
  proof : Expr

/--
Each term-level `if-then-else` in `e` replaced by a function applied to the
bound variables it mentions, with what defines the function.

Vampire reads no `ite`, and a first-order problem has none. The function is
bound to the `ite` itself, so `e` with it replaced is `e` up to unfolding it,
and a proof of the one is a proof of the other; what vampire is told of the
function is the two cases of its definition, which is all of it.
-/
private def lifting (e : Expr) : StateRefT (Array Lifted) MetaM Expr := do
  let base ← getLCtx
  Meta.transform e (post := fun t => do
    unless t.isAppOfArity ``ite 5 do return .done t
    let #[α, c, inst, a, b] := t.getAppArgs | return .done t
    if ← isProp α then return .done t
    let placeholders := (← get).map (·.placeholder)
    let lctx ← getLCtx
    let xs := ((Lean.collectFVars {} t).fvarIds.filter fun id =>
        !base.contains id && !placeholders.contains id).qsort
      fun x y => (lctx.get! x).index < (lctx.get! y).index
    let xs := xs.map Expr.fvar
    let placeholder ← mkFreshFVarId
    let applied := mkAppN (.fvar placeholder) xs
    let u ← getLevel α
    let eq (rhs : Expr) := mkApp3 (mkConst ``Eq [u]) α applied rhs
    let notC := mkApp (mkConst ``Not) c
    let says := mkApp2 (mkConst ``And) (← mkArrow c (eq a)) (← mkArrow notC (eq b))
    let pos ← withLocalDeclD `h c fun h => do
      mkLambdaFVars #[h] (mkAppN (mkConst ``if_pos [u]) #[c, inst, h, α, a, b])
    let neg ← withLocalDeclD `h notC fun h => do
      mkLambdaFVars #[h] (mkAppN (mkConst ``if_neg [u]) #[c, inst, h, α, a, b])
    modify (·.push {
      placeholder
      type := ← mkForallFVars xs α
      value := ← mkLambdaFVars xs t
      says := ← mkForallFVars xs says
      proof := ← mkLambdaFVars xs
        (mkApp4 (mkConst ``And.intro) (← mkArrow c (eq a)) (← mkArrow notC (eq b)) pos neg) })
    return .done applied)

/--
The hypotheses with their term-level `if-then-else`s lifted out into functions,
the functions let-bound in the goal, and what defines each of them added as an
axiom.
-/
def liftIte (goal : MVarId) (hypotheses : Array (Expr × Role)) :
    MetaM (MVarId × Array (Expr × Role)) := goal.withContext do
  let mut stated := #[]
  let mut lifted := #[]
  for (h, role) in hypotheses do
    let type ← instantiateMVars (← inferType h)
    unless type.find? (·.isAppOfArity ``ite 5) |>.isSome do
      stated := stated.push (h, none, role)
      continue
    let (type', more) ← (lifting type).run lifted
    lifted := more
    stated := stated.push (h, if type' == type then none else some type', role)
  if lifted.isEmpty then return (goal, hypotheses)
  let mut goal := goal
  let mut placeholders := #[]
  let mut functions := #[]
  for (l, i) in lifted.zipIdx do
    let local_ (e : Expr) := e.replaceFVars placeholders functions
    goal ← goal.define (Name.mkSimple s!"ite{i}") (local_ l.type) (local_ l.value)
    let (fv, goal') ← goal.intro1P
    goal := goal'
    placeholders := placeholders.push (.fvar l.placeholder)
    functions := functions.push (.fvar fv)
  let local_ (e : Expr) := e.replaceFVars placeholders functions
  -- A proof stated with the function in place of what it is bound to: the two
  -- are the same once it is unfolded, which the kernel does.
  let hinted (proof type : Expr) := mkApp2 (mkConst ``id [levelZero]) type proof
  let mut out := #[]
  for (h, type', role) in stated do
    out := out.push (match type' with
      | some t => (hinted h (local_ t), role)
      | none => (h, role))
  for l in lifted do
    out := out.push (hinted (local_ l.proof) (local_ l.says), .axiom)
  return (goal, out)

/-- The hypotheses to refute, with their roles, and the goal they came from. -/
structure Result where
  hypotheses : Array (Expr × Role)
  goal : MVarId

/-- The name given to the negated goal in the local context. -/
private def goalMarker : Name := `_vampireNegatedGoal

/--
What the negated goal's derivation is rooted at, so that it can be told apart
from the axioms after `lean-auto` has monomorphized the context: whatever
monomorphization derives from it has this leaf in its derivation tree.

The lemma is built here with this leaf rather than collected by
`collectLctxLemmas`, whose leaves are a format of `lean-auto`'s own.
-/
private def goalLeaf : Auto.DTr := .leaf "vampire negated goal"

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
  return {
    hypotheses := axioms.map (·, .axiom) ++ negated.map (·, .negatedConjecture)
    goal := mv
  }

/--
Monomorphizes with `lean-auto`, reducing Lean's dependent type theory to
something first-order. `lean-auto` negates the goal itself, so this also leaves
a `False` goal over `Prop` hypotheses.

What is sent is what `intros` sends: the hypotheses introduced from the goal,
the negated goal, and whatever the caller passed in brackets. The rest of the
local context goes only if named, or with `*`.
-/
def mono (mv : MVarId) (extra : Array Auto.Lemma) : MetaM Result := do
  let (goalBinders, mv) ← mv.intros
  let (negated, absurd) ← negateGoal mv
  absurd.withContext do
    -- `false` is what confines this to the binders and the negated goal:
    -- `true` would have `lean-auto` take the whole local context, whatever was
    -- named, and a hypothesis named in brackets would then be sent twice.
    let binderLemmas ← Auto.collectLctxLemmas false goalBinders
    let goalLemmas ← negated.mapM fun ngoal => do
      return (⟨⟨ngoal, ← instantiateMVars (← inferType ngoal), goalLeaf⟩, #[]⟩ :
        Auto.Lemma)
    let lctxLemmas := binderLemmas ++ goalLemmas
    -- The terms named in brackets come as `lean-auto` elaborated them, whole:
    -- what a lemma is stated of is settled by monomorphization, and it can
    -- only settle it where the lemma still says which universes and which
    -- instances it is waiting for.
    let lemmas ← (← (lctxLemmas ++ extra).mapM lemmaWithoutPowers).mapM
      (Auto.unfoldConstAndPreprocessLemma #[])
    let inhFacts ← Auto.Inhabitation.getInhFactsFromLCtx
    let (proof, mv, _, dtrs) ← Auto.runMono none lemmas inhFacts
    absurd.assign proof
    let fromGoal := dtrs.filterMap fun (fv, dtr) =>
      if dtrContains dtr goalLeaf then some (Expr.fvar fv) else none
    let hypotheses ← propHypotheses mv
    return {
      hypotheses := hypotheses.map fun h =>
        (h, if fromGoal.contains h then .negatedConjecture else .axiom)
      goal := mv
    }

end Vampire.Preprocess
