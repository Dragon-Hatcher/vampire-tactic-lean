import Mathlib.Algebra.Group.Defs
import Mathlib.Tactic.NormNum.OfScientific
import Vampire.Arith
import VampireReplay.Monomorphize
import VampireReplay.Canonicalize

/-!
Preprocessing: the goal reduced to `False` and a set of facts to refute, each
step a transformation of those facts that keeps each one proved.

`start` introduces the goal's binders and negates it. The steps (`steps`) then
write out what TPTP cannot say as written -- literal powers and decimals --
monomorphize, lift term-level `if-then-else` into functions, and instantiate
quantified propositions. What is left is translated (`Vampire.problemOf`).
-/

namespace Vampire.Preprocess

open Lean Meta Elab

/--
What a lemma says of this very term, if it says anything of it.

Unifying the lemma's left side with the term is what settles everything the
lemma is stated over -- the type, its `Monoid`, the base and the exponent --
and it settles them from the term rather than by looking for them: the
instance is whatever the term was written with, under a binder of a
polymorphic fact as much as in the goal.

`Nat` literals unify with `?n + 1`, so `pow_succ` applies to `x ^ 3` as it
stands.
-/
private def saying (name : Name) (term : Expr) : MetaM (Option (Expr × Expr)) := do
  let lemma_ ← mkConstWithFreshMVarLevels name
  let (mvars, _, stated) ← forallMetaTelescope (← inferType lemma_)
  let some (_, lhs, rhs) := stated.eq? | return none
  unless ← isDefEq lhs term do return none
  let holds ← instantiateMVars (mkAppN lemma_ mvars)
  if holds.hasExprMVar then return none
  return some (← instantiateMVars rhs, holds)

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
  -- The exponent as it is written: a raw literal, or `OfNat.ofNat` around one.
  -- Anything else is left as a power.
  let some exponent := match n.rawNatLit? with
      | some k => some k
      | none => n.nat?
    | return none
  if exponent > maxExpandedExponent then return none
  if exponent == 0 then return ← saying ``pow_zero e
  if exponent == 1 then return ← saying ``pow_one e
  -- `x ^ k = x ^ (k - 1) * x`, and then the same again of the smaller power.
  let some (product, holds) ← saying ``pow_succ e | return none
  let_expr HMul.hMul _ _ _ _ inner x := product | return none
  let some (expanded, innerSays) ← powProduct inner | return none
  let congruence ← withLocalDeclD `t (← inferType x) fun t => do
    mkCongrArg (← mkLambdaFVars #[t] (← mkAppM ``HMul.hMul #[t, x])) innerSays
  return some (← mkAppM ``HMul.hMul #[expanded, x], ← mkEqTrans holds congruence)

/--
A decimal, `3.25` or `8e-2`, as the fraction it stands for, `13 / 4` or `2 / 25`
-- a whole number as itself -- with a proof that it is the same number.

TPTP writes a real as a decimal, but vampire reads one as the fraction it is,
and replay writes what it read back that way. So the fraction is what the
prover is asked about, written as replay writes one (`ratNumeral`), and the
decimal is related to it here, by evaluating the two (`Arith.numerically`).
-/
private def decimalFraction (e : Expr) : MetaM (Option (Expr × Expr)) := do
  unless e.isAppOfArity ``OfScientific.ofScientific 5 do return none
  let τ ← inferType e
  let .sort (.succ u) ← whnf (← inferType τ) | return none
  let some q := (← Mathlib.Meta.NormNum.derive (u := u) (α := τ) e).toRat | return none
  let whole (n : Nat) := mkAppOptM ``OfNat.ofNat #[some τ, some (mkRawNatLit n), none]
  let fraction ← if q.den == 1 then whole q.num.toNat
    else mkAppM ``HDiv.hDiv #[← whole q.num.toNat, ← whole q.den]
  return some (fraction, ← Arith.numerically (← mkEq e fraction))

/-- The literal powers and decimals of a proposition, written out. -/
private def writeOutSimproc : Simp.Simproc := fun e => do
  if let some (product, holds) ← powProduct e then
    return .visit { expr := product, proof? := some holds }
  if let some (fraction, holds) ← decimalFraction e then
    return .done { expr := fraction, proof? := some holds }
  return .continue

/--
A hypothesis with the literal powers and decimals of what it says written out,
or itself where it has none.
-/
private def rewritten (stated : Expr) : MetaM (Option (Expr × Expr)) := do
  let context ← Simp.mkContext {} (simpTheorems := #[])
    (congrTheorems := ← getSimpCongrTheorems)
  let (result, _) ← Simp.main stated context (methods := { post := writeOutSimproc })
  match result.proof? with
  | none => return none
  | some holds => return some (result.expr, holds)

/-- A step of preprocessing: the goal, whose type is `False`, and the facts to refute. -/
abbrev Step := MVarId → Array Fact → MetaM (MVarId × Array Fact)

/--
The literal powers and decimals of each fact written out (`powProduct`,
`decimalFraction`). Polymorphic facts are written out too, before they are
instantiated, so that their instances are already.
-/
def writeOut : Step := fun goal facts => goal.withContext do
  return (goal, ← facts.mapM (·.rewrite rewritten))

/-- A term-level `if-then-else` lifted out into a function of its own. -/
private structure Lifted where
  /-- Stands for the function until it is in the local context. -/
  placeholder : FVarId
  /-- The function's type: from the bound variables the `ite` mentions to its own. -/
  type : Expr
  /-- `fun xs => ite c a b`. -/
  value : Expr
  /-- `∀ xs, (c → f xs = a) ∧ (¬c → f xs = b)`, over the placeholder. -/
  holds : Expr
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
    let holds := mkApp2 (mkConst ``And) (← mkArrow c (eq a)) (← mkArrow notC (eq b))
    let pos ← withLocalDeclD `h c fun h => do
      mkLambdaFVars #[h] (mkAppN (mkConst ``if_pos [u]) #[c, inst, h, α, a, b])
    let neg ← withLocalDeclD `h notC fun h => do
      mkLambdaFVars #[h] (mkAppN (mkConst ``if_neg [u]) #[c, inst, h, α, a, b])
    modify (·.push {
      placeholder
      type := ← mkForallFVars xs α
      value := ← mkLambdaFVars xs t
      holds := ← mkForallFVars xs holds
      proof := ← mkLambdaFVars xs
        (mkApp4 (mkConst ``And.intro) (← mkArrow c (eq a)) (← mkArrow notC (eq b)) pos neg) })
    return .done applied)

/--
The facts with their term-level `if-then-else`s lifted out into functions, the
functions let-bound in the goal, and what defines each of them added as a fact.
-/
def liftIte : Step := fun goal facts => goal.withContext do
  let mut stated := #[]
  let mut lifted := #[]
  for f in facts do
    unless f.type.find? (·.isAppOfArity ``ite 5) |>.isSome do
      stated := stated.push (f, none)
      continue
    let (type', more) ← (lifting f.type).run lifted
    lifted := more
    stated := stated.push (f, if type' == f.type then none else some type')
  if lifted.isEmpty then return (goal, facts)
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
  let hinted (proof type : Expr) := mkApp2 (mkConst ``id [.zero]) type proof
  let mut out := #[]
  for (f, type') in stated do
    out := out.push (match type' with
      | some t => { f with proof := hinted f.proof (local_ t), type := local_ t }
      | none => f)
  for l in lifted do
    out := out.push { proof := hinted (local_ l.proof) (local_ l.holds), type := local_ l.holds
                      source := .binder, derived := true }
  return (goal, out)

/--
A proof of what `h` says with each universally quantified proposition among its
leading binders taken at `True` and at `False`, the two instances conjoined, or
`none` where it quantifies over no proposition.

TPTP's first-order individuals are not propositions, so a hypothesis
quantifying over one cannot be sent as it stands; the two instances follow
from it, and every proposition is one of the two, so nothing is lost.
-/
private partial def propInstances (h : Expr) : MetaM (Option Expr) := do
  let type ← whnfR (← instantiateMVars (← inferType h))
  let .forallE n d _ bi := type | return none
  if d.isProp then
    let atTrue := mkApp h (mkConst ``True)
    let atFalse := mkApp h (mkConst ``False)
    let t ← (← propInstances atTrue).getDM (pure atTrue)
    let f ← (← propInstances atFalse).getDM (pure atFalse)
    return some (← mkAppM ``And.intro #[t, f])
  -- A hypothesis it depends on, not a variable: nothing under it is a binder
  -- of the formula's own.
  if ← isProp d then return none
  withLocalDecl n bi d fun x => do
    let some inner ← propInstances (mkApp h x) | return none
    return some (← mkLambdaFVars #[x] inner)

/-- The facts with their universally quantified propositions instantiated. -/
def instantiateProps : Step := fun goal facts => goal.withContext do
  return (goal, ← facts.mapM fun f => do
    let some proof ← propInstances f.proof | return f
    return { f with proof, type := ← instantiateMVars (← inferType proof) })

/--
Each fact with every constant at its parameters written one way
(`Vampire.Canonicalize.canonicalize`), as a step.
-/
def canonicalize : Step := fun goal facts => goal.withContext do
  return (goal, ← Canonicalize.canonicalize facts)

/-- Monomorphization (`Vampire.Monomorphize.monomorphize`), as a step. -/
def monomorphize : Step := fun goal facts => goal.withContext do
  -- Facts quantifying over functions can be stated only where the problem itself
  -- makes function types sorts; lemmas do not get to.
  let functions := !(← functionSortsOf ((facts.filter (·.original)).map (·.type))).isEmpty
  return (goal, ← Monomorphize.monomorphize facts functions)

/-- The name given to the negated goal in the local context. -/
private def goalMarker : Name := `_vampireNegatedGoal

/-- Whether `e` is an inhabitation fact, possibly under binders. -/
private def isInhabitation : Expr → Bool
  | .app (.const ``Nonempty _) _ => true
  | .app (.const ``Inhabited _) _ => true
  | .forallE _ _ body _ => isInhabitation body
  | _ => false

/--
Whether `fv` is a hypothesis worth sending. Inhabitation facts are dropped:
TPTP domains are non-empty, so they carry nothing.
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
Moves the goal's binders into the local context and negates it, and returns
the facts to refute: the hypotheses the goal introduced, the negated goal, and
the caller's.

As in `lean-smt`, the query is the smallest one that states the goal: the
hypotheses are those introduced from the goal itself plus whatever the caller
passed in brackets. Hypotheses already in the local context are only included
if named, or via `*`.
-/
def start (mv : MVarId) (hints : Array Fact) : MetaM (MVarId × Array Fact) := do
  let (fvs, mv) ← mv.intros
  let introduced ← mv.withContext do
    (← fvs.filterM isHypothesis).mapM (Fact.ofLocal · .binder)
  let (negated, mv) ← negateGoal mv
  let negated ← mv.withContext do negated.mapM fun h => Fact.ofLocal h.fvarId! .goal
  -- A hypothesis named in brackets that the goal introduced too is sent once.
  let hints := hints.filter fun h => !introduced.any (·.proof == h.proof)
  return (mv, hints ++ introduced ++ negated)

/-- The steps, in order, each with what it is called in a trace. -/
def steps : List (String × Step) :=
  [("writing out", writeOut), ("monomorphization", monomorphize),
   ("canonicalization", canonicalize), ("lifting if-then-else", liftIte),
   ("instantiating propositions", instantiateProps)]

/-- The goal reduced to `False`, and the facts to refute, every step taken. -/
def preprocess (mv : MVarId) (hints : Array Fact) : MetaM (MVarId × Array Fact) := do
  let (goal, facts) ← start mv hints
  steps.foldlM (init := (goal, facts)) fun (goal, facts) (name, step) => do
    let started ← IO.monoMsNow
    let out ← step goal facts
    trace[vampire.timing] "{name} took {(← IO.monoMsNow) - started}ms"
    return out

end Vampire.Preprocess
