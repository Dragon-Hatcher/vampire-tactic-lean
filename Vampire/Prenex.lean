import Lean

/-!
# Hoisting a goal's quantifiers out of its disjunctions, as a term

`prenexify` is a rewrite: `repeat (first | simp only [or_forall_prenex_left, …] | simp
only [and_forall_prenex, …])`. Rewriting is the wrong shape for the job when what is
being rewritten is a clause and the goal is the whole formula, because simp has to build
a congruence proof from the root down to each rewrite site — and after the first binder
has been hoisted, every later site is *under* it, so each of those proofs is
`∀`-congruence through the prefix built so far, carrying the formula at every level. On
`PRD001+1`'s AVATAR split of the negated conjecture that is a 97-binder prefix over an
85-way disjunction, and it measured 31s of a 38s replay, in one step, at several
gigabytes of resident proof term.

## Why this is not a chain of hoisting lemmas either

The obvious replacement is to apply `(∀ v, B v) ∨ A ↔ ∀ v, B v ∨ A` and its mirror
directly, under as many lambdas as are already hoisted. That was tried and it is still
quadratic in the wrong place: one application moves one binder past *one* `∨` node, so a
binder belonging to the `i`th disjunct needs `i` of them, and the whole prefix needs
`O(k²)` — each of which abstracts the proof accumulated so far, and that proof carries a
formula-sized argument per application. Measured on the same step: 19s, against 31s for
the rewrite. Better and still not right.

## What this does instead

The hoisting is one equivalence, so prove it once, classically, and flatly. To get

    (∀ x⃗₁, B₁) ∨ … ∨ (∀ x⃗ₘ, Bₘ)     from     ∀ x⃗₁ … x⃗ₘ, (B₁ ∨ … ∨ Bₘ)

suppose the conclusion fails. Then every disjunct fails, so for each `i` there are
witnesses `w⃗ᵢ` with `¬Bᵢ(w⃗ᵢ)` — that is what `forallWitness` extracts, one binder at a
time. The premise at `w⃗₁ … w⃗ₘ` is `B₁(w⃗₁) ∨ … ∨ Bₘ(w⃗ₘ)`, and every disjunct of it is
refuted. So the proof is one `byContradiction`, one witness per binder, and one `Or.elim`
per disjunct: linear in the prefix rather than quadratic, and nothing in it is
formula-sized except the arguments the eliminators need.

Measured on that step: **1.5s**, and the replay it is part of went from 74s to 7s.

## What it reaches and what it does not

Only `∨` and `∀`, and only a `∀` whose domain is a closed non-`Prop` — which is what
`prenexify`'s rules, stated over `Type u`, also reach. Inside a `¬` or an `∧` this stops.

So this is weaker than `prenexify`, and the binder order it produces — every disjunct's
own binders, disjuncts left to right — need not be the order `prenexify` arrives at,
whose alternation of the left and right rules can interleave them. Both are why the
caller keeps `prenexify` behind it: the script that follows uses the prefix by name, and
if the shape or the order is not what it expects it fails and the reference's script runs
instead.
-/

set_option autoImplicit false

namespace Vampire.Prenex

open Lean Meta

universe u

/-- A universally quantified statement that fails, fails somewhere. -/
theorem not_forall_exists {α : Sort u} {Q : α → Prop} (h : ¬ ∀ x, Q x) : ∃ x, ¬ Q x :=
  (Classical.em (∃ x, ¬ Q x)).elim id fun hne =>
    absurd (fun x => (Classical.em (Q x)).elim id fun hnq =>
      absurd (Exists.intro x hnq) hne) h

/-- Where it fails. One of these per binder is the whole content of the hoisting. -/
noncomputable def forallWitness {α : Sort u} {Q : α → Prop} (h : ¬ ∀ x, Q x) : α :=
  Classical.choose (not_forall_exists h)

/-- And that it fails there. -/
theorem forallWitness_spec {α : Sort u} {Q : α → Prop} (h : ¬ ∀ x, Q x) :
    ¬ Q (forallWitness h) :=
  Classical.choose_spec (not_forall_exists h)

/-- `fun h => h`, at type `ty`. -/
private def identity (ty : Expr) : MetaM Expr :=
  withLocalDeclD `hp ty fun h => mkLambdaFVars #[h] h

/-- The number of `∨`-leaves. -/
private partial def leafCount (e : Expr) : Nat :=
  if e.isAppOfArity ``Or 2 then leafCount e.appFn!.appArg! + leafCount e.appArg!
  else 1

/--
How many of `e`'s leading `∀`s come out of a disjunction.

A `Prop` domain is an implication, which `prenexify`'s rules — stated over `Type u` —
do not reach either, and a domain mentioning an earlier binder of the same prefix would
not survive being reordered against another disjunct's. Stopping at the first of those
keeps every hoisted binder's domain closed, which is what lets the prefixes be
concatenated without renumbering them.
-/
private partial def hoistArity (e : Expr) : MetaM Nat := do
  match e with
  | .forallE _ α body _ =>
    if α.hasLooseBVars then return 0
    if ← isProp α then return 0
    return 1 + (← hoistArity body)
  | _ => return 0

/-- What one `∨`-leaf contributes. -/
private structure Leaf where
  /-- the leaf as the goal states it -/
  original : Expr
  /-- its own prenexed form, `∀ x⃗, B` -/
  prenexed : Expr
  /-- a proof of `prenexed → original` -/
  proof : Expr
  /-- how many of `prenexed`'s leading `∀`s join the shared prefix -/
  arity : Nat

/-- Rebuild the `∨` tree of `sub` with `parts` at its leaves, in order. -/
private partial def rebuild (sub : Expr) (parts : Array Expr) (i : Nat) : Expr × Nat :=
  if sub.isAppOfArity ``Or 2 then
    let (l, i) := rebuild sub.appFn!.appArg! parts i
    let (r, i) := rebuild sub.appArg! parts i
    (mkApp2 (.const ``Or []) l r, i)
  else
    (parts[i]!, i + 1)

/-- `¬ℓ` for every leaf `ℓ`, from `¬sub`: a disjunct that held would make the whole
disjunction hold. -/
private partial def collectNot (sub : Expr) (notSub : Expr) (out : Array Expr) :
    MetaM (Array Expr) := do
  if sub.isAppOfArity ``Or 2 then
    let a := sub.appFn!.appArg!
    let b := sub.appArg!
    let notA ← withLocalDeclD `hx a fun x => do
      mkLambdaFVars #[x] (mkApp notSub (mkApp3 (.const ``Or.inl []) a b x))
    let notB ← withLocalDeclD `hx b fun x => do
      mkLambdaFVars #[x] (mkApp notSub (mkApp3 (.const ``Or.inr []) a b x))
    collectNot b notB (← collectNot a notA out)
  else
    return out.push notSub

/-- `False`, by casing the instantiated disjunction against the refutation of each of its
disjuncts. -/
private partial def elimTree (sub : Expr) (negs insts : Array Expr) (h : Expr) (i : Nat) :
    MetaM Expr := do
  if sub.isAppOfArity ``Or 2 then
    let a := sub.appFn!.appArg!
    let b := sub.appArg!
    let j := i + leafCount a
    let (ia, _) := rebuild a insts i
    let (ib, _) := rebuild b insts j
    let l ← withLocalDeclD `hl ia fun x => do
      mkLambdaFVars #[x] (← elimTree a negs insts x i)
    let r ← withLocalDeclD `hr ib fun y => do
      mkLambdaFVars #[y] (← elimTree b negs insts y j)
    return mkAppN (.const ``Or.elim []) #[ia, ib, .const ``False [], h, l, r]
  else
    return mkApp negs[i]! h

mutual

/-- Every `∨`-leaf of `sub`, prenexed in its own right. -/
private partial def prenexLeaves (sub : Expr) (out : Array Leaf) : MetaM (Array Leaf) := do
  if sub.isAppOfArity ``Or 2 then
    prenexLeaves sub.appArg! (← prenexLeaves sub.appFn!.appArg! out)
  else
    let (p, f) ← prenex sub
    return out.push
      { original := sub, prenexed := p, proof := f, arity := ← hoistArity p }

/--
The `∨`-prenexed form of `goal`, with a proof that it implies `goal`.

`prenex e` returning `(p, f)` means `f : p → e`, so a tactic can replace the goal `e` by
`p` and apply `f`.
-/
partial def prenex (goal : Expr) : MetaM (Expr × Expr) := do
  if goal.isAppOfArity ``Or 2 then
    let leaves ← prenexLeaves goal #[]
    let total := leaves.foldl (fun n l => n + l.arity) 0
    if total == 0 && leaves.all (fun l => l.prenexed == l.original) then
      return (goal, ← identity goal)
    -- The shared prefix, in leaf order, and each leaf's body renumbered into it. Every
    -- hoisted binder's domain is closed, so the binder types cross unchanged and only
    -- the bodies move: a leaf whose own prefix ends at position `seen + arity` has
    -- `total - seen - arity` binders after it.
    let mut binders : Array (Name × Expr × BinderInfo) := #[]
    let mut bodies : Array Expr := #[]
    let mut seen := 0
    for l in leaves do
      let mut e := l.prenexed
      for _ in [0:l.arity] do
        let .forallE n α body bi := e
          | throwError "prenex: leaf reported {l.arity} hoistable binders and has fewer"
        binders := binders.push (n, α, bi)
        e := body
      bodies := bodies.push (e.liftLooseBVars 0 (total - seen - l.arity))
      seen := seen + l.arity
    let (bodyTree, _) := rebuild goal bodies 0
    let p := binders.foldr (fun (n, α, bi) b => .forallE n α b bi) bodyTree
    let proof ← withLocalDeclD `hp p fun hp =>
      withLocalDeclD `hn (mkApp (.const ``Not []) goal) fun hn => do
        let notLeaves ← collectNot goal hn #[]
        let mut ws : Array Expr := #[]
        let mut negs : Array Expr := #[]
        let mut insts : Array Expr := #[]
        for h : i in [0:leaves.size] do
          let l := leaves[i]
          -- `¬ℓ` becomes `¬` of the leaf's own prenexed form through the leaf's proof.
          let mut cur ← withLocalDeclD `hy l.prenexed fun y => do
            mkLambdaFVars #[y] (mkApp notLeaves[i]! (mkApp l.proof y))
          let mut curTy := l.prenexed
          for _ in [0:l.arity] do
            let .forallE n α bd bi := curTy
              | throwError "prenex: a hoisted binder went missing"
            let lvl ← getLevel α
            let q := Expr.lam n α bd bi
            ws := ws.push (mkApp3 (.const ``forallWitness [lvl]) α q cur)
            cur := mkApp3 (.const ``forallWitness_spec [lvl]) α q cur
            curTy := bd.instantiate1 ws.back!
          negs := negs.push cur
          insts := insts.push curTy
        let contra ← elimTree goal negs insts (mkAppN hp ws) 0
        mkLambdaFVars #[hp]
          (mkApp2 (.const ``Classical.byContradiction []) goal
            (← mkLambdaFVars #[hn] contra))
    return (p, proof)
  match goal with
  | .forallE n α body bi =>
    if α.hasLooseBVars || (← isProp α) then return (goal, ← identity goal)
    let (p, f) ← withLocalDeclD n α fun x => do
      let (pc, fc) ← prenex (body.instantiate1 x)
      return (← mkForallFVars #[x] pc, ← mkLambdaFVars #[x] fc)
    let proof ← withLocalDeclD `hp p fun hp => do
      let inner ← withLocalDeclD n α fun x => do
        mkLambdaFVars #[x] (mkApp2 f x (mkApp hp x)).headBeta
      mkLambdaFVars #[hp] inner
    return (p, proof)
  | _ => return (goal, ← identity goal)

end

/-- Replace the goal by its `∨`-prenexed form. `prenexify` without the rewrite; see the
module doc for what it reaches and what the caller has to keep behind it. -/
syntax (name := vampireOrPrenex) "vampire_or_prenex" : tactic

open Lean.Elab.Tactic in
elab_rules : tactic
  | `(tactic| vampire_or_prenex) => do
    let g ← getMainGoal
    g.withContext do
      let ty ← instantiateMVars (← g.getType)
      let (p, f) ← prenex ty
      if p == ty then return
      let next ← mkFreshExprSyntheticOpaqueMVar p
      g.assign (mkApp f next)
      replaceMainGoal [next.mvarId!]

end Vampire.Prenex
