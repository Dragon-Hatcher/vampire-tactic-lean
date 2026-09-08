import Lean
import Vampire.Bridge.Poly

/-!
# Bridging two renderings of the same formula

An input step has to prove Vampire's own recorded formula for a unit from the Lean
hypothesis that unit was translated from. The two say the same thing, but not in the
same shape, and the difference is one *we* introduce on the way out:
`Exporter::writeFormula` reverses every `AND`/`OR` argument list, mirroring
`LeanPrinter::printFormula`'s `FormulaList::reverse`. Vampire holds a junction as a
binary tree, so reversing recursively mirrors the whole tree — a right-nested
`a ∧ (b ∧ c)` comes back as `(c ∧ b) ∧ a`. Equations can also come back reoriented,
since `Literal::createEquality` orients by the term ordering.

The reversal is not something to undo globally: derived steps need it, because
VampLean's `nnf_transformation` and friends were written to produce exactly the order
the generated file states. The bridge is the one place that holds both orders at once,
so it is where they get reconciled.

This does that reconciliation *structurally*, by recursion on the pair of types, rather
than by handing it to a search procedure. That matters: asked to find a 50-element
permutation and a full re-association by search, `ac_nf0` exhausts `simp`'s step budget
and `grind` exhausts its case-split and E-matching budgets — which is how all three
known bridge failures actually fail, none of them because the goal is false.

`VampLean.symmUnify` is the same idea and gets most of the way: it proves `T₁ = T₂` by
congruence, handling `Eq.comm` at the leaves, and `rectify` uses it through `symm_match`.
It cannot be used here because at an application node it recurses *positionally*, so it
takes `A ∧ B` against `B ∧ A` down `A` against `B`. The junction cases below are what it
is missing; everything else here is a re-derivation of what it already does, in term
rather than equation form.
-/

set_option autoImplicit false

namespace Vampire.Bridge

open Lean Meta

/-- `Or.elim`, as a function of the hypothesis rather than of a proof of it.

`elimOr` used to build `fun x => …` per disjunct and abstract it with `mkLambdaFVars`,
and the right-hand branch of a clause carries the whole rest of the chain: abstracting
`k` binders over an accumulating term walks it once per binder and is quadratic in the
width of the clause. Stated this way each branch is an *argument*, so the chain is
applications and the only abstraction left is one per leaf, over that leaf's own proof.
This is the lesson `Vampire/Sat.lean` records, in the one place here that was still
paying for it. -/
theorem orCases {a b c : Prop} (f : a → c) (g : b → c) : a ∨ b → c := fun h => h.elim f g

/-- How far the recursion may go before giving up. A formula this deep is not something
the reordering was ever going to explain, and the bound keeps a pathological pairing
search from running away. -/
private def maxDepth : Nat := 400

/-- The leaves of a nested junction, left to right. Both associations flatten to the
same list, which is what lets a re-association be bridged at all. -/
private partial def juncts (c : Name) (e : Expr) : Array Expr :=
  go e #[]
where
  go (e : Expr) (acc : Array Expr) : Array Expr :=
    let e := e.consumeMData
    if e.isAppOfArity c 2 then go e.appArg! (go e.appFn!.appArg! acc)
    else acc.push e

/-- The leaves of a nested conjunction with, for each, the projection that pulls it out
of `h`.

The type is threaded rather than asked for, and the projections are built with their
implicit arguments already filled in. `mkAppM ``And.left #[h]` would leave `{a b : Prop}`
to unification, and *assigning* a metavariable is not free: `checkAssignment` walks the
whole value looking for variables out of scope, which here is a conjunct of a formula
with several hundred atoms in it. Two assignments per projection and one projection per
leaf makes that quadratic in the width of the conjunction — which, on `BIO006+1`, is
where the whole of the bridge's time was going. Nothing is lost by filling them in: the
type says what they are, and the kernel checks the assembled proof either way. -/
private partial def conjLeaves (h : Expr) (ty : Expr) : MetaM (Array (Expr × Expr)) := do
  let ty ← whnfR ty
  if ty.isAppOfArity ``And 2 then
    let a := ty.appFn!.appArg!
    let b := ty.appArg!
    return (← conjLeaves (mkApp3 (.const ``And.left []) a b h) a) ++
           (← conjLeaves (mkApp3 (.const ``And.right []) a b h) b)
  else
    return #[(ty, h)]

/-- The candidate order for the `i`th of `n` want-leaves against `n` hypothesis leaves.

The mirror first: the export reversed the junction, so want-leaf `i` is hypothesis leaf
`n-1-i`, and on a formula that differs *only* by the reversal every leaf is settled by
its first candidate. The rest follow, so a junction Vampire reordered some other way
still bridges — just by search rather than by construction. -/
private def candidates (n i : Nat) : Array Nat := Id.run do
  if n == 0 then return #[]
  let mirror := n - 1 - min i (n - 1)
  let mut out := #[mirror]
  for k in [0:n] do
    if k != mirror then out := out.push k
  return out

/--
A hash of a formula that ignores exactly what the bridge is here to reconcile: the order
of a junction's arguments, and which way round an equation is stated.

Nothing is *decided* by this. It orders the candidates `pick` and `inject` consider, so
that the one that is going to work is tried first. Two reconcilable formulas can still
have different signatures — a weakening drops conjuncts, prenexing moves a binder across
a junction, `flattening` drops a double negation — which is why the candidates that do
not match stay in the order behind the ones that do rather than being dropped.

It is what the search was missing. Trying candidates blind, `ALG160+1`'s 528 bridges
made 35862 `transport` calls of which 20733 ended in "cannot reconcile", because a
conjunction's leaf was matched by attempting it against every leaf of the hypothesis and
a conjunction inside a conjunction multiplied that out.
-/
partial def sig (e0 : Expr) : UInt64 :=
  let e := e0.consumeMData
  if e.isAppOfArity ``And 2 then mixHash 3 (junction ``And e)
  else if e.isAppOfArity ``Or 2 then mixHash 5 (junction ``Or e)
  else if e.isAppOfArity ``Not 1 then mixHash 7 (sig e.appArg!)
  else if e.isAppOfArity ``Iff 2 then
    mixHash 11 (sig e.appFn!.appArg! + sig e.appArg!)
  else if e.isAppOfArity ``Exists 2 then mixHash 13 (sig e.appArg!)
  else if e.isLambda then mixHash 17 (sig e.bindingBody!)
  else if e.isForall then
    mixHash 19 (mixHash (sig e.bindingDomain!) (sig e.bindingBody!))
  else match e.eq? with
    -- `Literal::createEquality` orients by the term ordering, so which side is which
    -- carries no information.
    | some (_, l, r) => mixHash 23 (sig l + sig r)
    -- An atom, whose `Expr` hash is already cached.
    | none => e.hash
where
  /-- Commutative and associative over the leaves, which is the whole point. -/
  junction (c : Name) (e : Expr) : UInt64 :=
    (juncts c e).foldl (fun a x => a + sig x) 0

/-- `want`'s disjuncts, indexed for `inject`: by the disjunct itself, and by signature. -/
private structure OrIdx where
  /-- The disjuncts, left to right. -/
  leaves : Array Expr
  /-- `sig` of each, computed once rather than once per injection. -/
  sigs : Array UInt64
  /-- Where a disjunct stated verbatim sits. -/
  exact : Std.HashMap Expr Nat

private def orIndex (want : Expr) : OrIdx := Id.run do
  let leaves := juncts ``Or want
  let mut exact : Std.HashMap Expr Nat := {}
  for i in [0:leaves.size] do
    unless exact.contains leaves[i]! do exact := exact.insert leaves[i]! i
  return { leaves, sigs := leaves.map sig, exact }

/-- How many leaves a nested disjunction has. -/
private partial def orLeafCount (e : Expr) : Nat :=
  if e.isAppOfArity ``Or 2 then
    orLeafCount e.appFn!.appArg! + orLeafCount e.appArg!
  else 1

/-- `pf` proves `want`'s `idx`th disjunct: place it with the `Or.inl`/`Or.inr` chain that
reaches that leaf. -/
private partial def injectAt (want : Expr) (idx : Nat) (pf : Expr) : Option Expr :=
  if want.isAppOfArity ``Or 2 then
    let a := want.appFn!.appArg!
    let b := want.appArg!
    let m := orLeafCount a
    if idx < m then (injectAt a idx pf).map (mkApp3 (.const ``Or.inl []) a b)
    else (injectAt b (idx - m) pf).map (mkApp3 (.const ``Or.inr []) a b)
  else if idx == 0 then some pf
  else none

/-- `order`, with the candidates whose signature matches `s` brought to the front. -/
private def bySig (s : UInt64) (sigs : Array UInt64) (order : Array Nat) : Array Nat :=
  Id.run do
    let mut good : Array Nat := #[]
    let mut rest : Array Nat := #[]
    for k in order do
      if (sigs[k]?).getD 0 == s then good := good.push k else rest := rest.push k
    return good ++ rest

/-- How many `∃`s a formula opens with.

The `∃` rule below works on the whole prefix rather than one binder at a time, and this
is the length it needs. Counting walks under the predicate's lambda, where the body has
a loose bound variable — harmless, because nothing here inspects it. -/
private partial def existsPrefixLen (e : Expr) : Nat :=
  if e.isAppOfArity ``Exists 2 then
    match e.appArg! with
    | .lam _ _ b _ => 1 + existsPrefixLen b
    | _ => 1
  else 0

/-- The option the arithmetic leaf rule reads. Not registered: it is set for the duration
of one `vampire_bridge_arith` and never comes from the user, so a `register_option` would
only put a name in `set_option` completion that means nothing on its own. -/
private def arithLeavesOpt : Name := `vampire.internal.bridgeArithLeaves

/-- A pair of comparisons that differ only by a negation -- `0 ≤ A` against `¬ A < 0` --
proved by the order lemma that says so, with no goal handed back and no tactic run.

This is what a `theory normalization` step's leaves overwhelmingly are: over a linear
order `¬ a < b` *is* `b ≤ a`, and restating one as the other is the rule's favourite move.
`Poly` already decided the two atoms are the same comparison, so all that is left is to
name the lemma, and `Iff.mp`/`Iff.mpr` on `not_lt`/`not_le` covers every direction.

**Choosing the lemma here rather than trying them in the caller's cascade is the whole
point.** Offering `exact not_lt.mpr hb` and three siblings ahead of `linarith` in
`Vampire.Arith.normTactics` is *slower overall*, measured over the whole benchmark: it wins
on a step whose leaves are all flips (154ms to 45ms) and loses on every leaf that is a
reassociation, which then pays four failed elaborations -- instance synthesis included --
before reaching the tactic that works. 52 of 73 problems got slower and the cactus figure
at 60 problems went from 25.5s to 47.3s. Deciding in `MetaM`, where a wrong guess costs an
`isDefEq` rather than a tactic block, has no such cost.

`none` when the lemmas are absent, so a project without Mathlib falls back to the side
goal exactly as before. -/
private def flipProof (want hty h : Expr) : MetaM (Option Expr) := do
  -- One side negated and the other not. Without this the rule is attempted at *every*
  -- comparison leaf, and a reassociation leaf -- which is negated on both sides or on
  -- neither -- pays four constructions that cannot succeed before falling through to the
  -- side goal. That is the same mistake as offering the lemmas in the caller's cascade,
  -- just cheaper per attempt, and it showed up the same way: broadly slower.
  unless want.consumeMData.isAppOfArity ``Not 1 != hty.consumeMData.isAppOfArity ``Not 1 do
    return none
  let env ← getEnv
  -- Name literals, not `` ``not_lt ``: this module imports only `Lean`, so the resolving
  -- form would not compile. Looked up in the environment the *replay* runs in, which is
  -- the same device `Vampire/Arith.lean` uses for the tactics it names.
  -- Name literals, not `` ``not_lt ``: this module imports only `Lean`, so the resolving
  -- form would not compile. Looked up in the environment the *replay* runs in, which is
  -- the same device `Vampire/Arith.lean` uses for the tactics it names.
  for nm in [`not_lt, `not_le] do
    unless env.contains nm do continue
    -- Built by hand rather than with `mkAppM`/`mkAppOptM`: those refuse to return a term
    -- that still holds metavariables, and every implicit of `not_lt` -- the type, its
    -- order instance, and both sides -- is exactly what unification against `h` and `want`
    -- is supposed to determine.
    let st ← saveState
    let r ← try
      let c ← mkConstWithFreshMVarLevels nm
      let (args, _, _) ← forallMetaTelescope (← inferType c)
      let iff := mkAppN c args
      match (← whnf (← inferType iff)).app2? ``Iff with
      | some (lhs, rhs) =>
        let hty' ← inferType h
        -- `Iff.mpr : (a ↔ b) → b → a`, so it turns a proof of the right side into the
        -- left; `Iff.mp` goes the other way. One of the two matches.
        if (← isDefEq hty' rhs) && (← isDefEq lhs want) then
          pure (some (mkApp4 (mkConst ``Iff.mpr) lhs rhs iff h))
        else if (← isDefEq hty' lhs) && (← isDefEq rhs want) then
          pure (some (mkApp4 (mkConst ``Iff.mp) lhs rhs iff h))
        else pure none
      | none => pure none
    catch _ => pure none
    match r with
    | some t =>
      let t ← instantiateMVars t
      unless t.hasExprMVar do return t
      st.restore
    | none => st.restore
  return none

/-- Whether `transport` may discharge a pair of comparisons through `Poly`.

Off unless `vampire_bridge_arith` turned it on. Plain `vampire_bridge` therefore keeps its
old meaning exactly -- a complete proof or nothing -- which is what `bridgeInput` and the
`clausify` scripts rely on. -/
private def arithLeaves : MetaM Bool := do
  return (← getOptions).getBool arithLeavesOpt false

/-- The universe levels of a term's head constant. `@Eq α a b` and `@Exists α p` carry
the level `α` lives at, so `Eq.symm` and the `Exists` eliminators can be built without
asking `getLevel` to work it out again. -/
private def headLevels (e : Expr) : List Level :=
  match e.getAppFn with
  | .const _ us => us
  | _ => []

mutual

/--
A proof of `want`, from `h`, whose type is `hty`.

The type is a parameter rather than something to infer. The proofs this builds are
projections and eliminator applications over each other, so `inferType` at every node
re-derives what the node above already knew, and every node here holds a formula the
size of a whole clause. Where a case recurses, the sub-type is read off the pair of
types being walked.

For the same reason every application is built with its implicit arguments supplied.
`mkAppM` would leave them to unification, and each assignment then has
`checkAssignment` walk the assigned formula to see whether it mentions anything out of
scope — once per implicit argument per node, over terms this size. Nothing is checked
less: the types come from the two formulas being reconciled, and the kernel checks the
finished proof.

Fails, with the two subformulas it could not reconcile, rather than returning something
unchecked: the caller still has a `grind` to fall back on and a precise message is worth
more than a silent miss.
-/
private partial def transport (want : Expr) (h : Expr) (hty : Expr) (depth : Nat) :
    MetaM Expr := do
  if depth > maxDepth then
    throwError "bridge: gave up at depth {maxDepth}"
  -- `consumeMData`, and not only for tidiness. Every test below is structural, and a
  -- goal the elaborator made carries an `mdata noImplicitLambda` wrapper around its
  -- type — which is invisible when the formula is printed and makes `isAppOfArity`
  -- say no to a disjunction that plainly is one. The bridge then treated a whole
  -- clause as a single opaque disjunct and failed on 307 of `ALG160+1`'s 446 AVATAR
  -- split clauses, every one of them for that reason and none because the two
  -- formulas disagreed.
  let want := (← instantiateMVars want).consumeMData
  let hty := (← instantiateMVars hty).consumeMData
  if ← isDefEq hty want then return h

  -- `a = b` against `b = a`. `Literal::createEquality` orients an equation by the term
  -- ordering, and the export only undoes that where `flipForPrinting` records it.
  if let some (_, wl, wr) := want.eq? then
    if let some (α, hl, hr) := hty.eq? then
      if (← isDefEq wl hr) && (← isDefEq wr hl) then
        return mkApp4 (.const ``Eq.symm (headLevels hty)) α hl hr h

  -- `¬P`. Not an arrow syntactically, and contravariant.
  if want.isAppOfArity ``Not 1 then
    if hty.isAppOfArity ``Not 1 then
      return ← withLocalDeclD `bx want.appArg! fun x => do
        mkLambdaFVars #[x]
          (mkApp h (← transport hty.appArg! x want.appArg! (depth + 1)))

  -- `¬¬A` against `A`. `flattening` drops double negations with `Classical.not_not`, so
  -- the conclusion it records has fewer of them than its parent. `¬p → False` *is* `¬¬p`,
  -- which is why `byContradiction` applies to `h` directly.
  if hty.isAppOfArity ``Not 1 then
    let inner := hty.appArg!
    if inner.isAppOfArity ``Not 1 then
      let a := inner.appArg!
      return ← transport want (mkApp2 (.const ``Classical.byContradiction []) a h) a
        (depth + 1)

  if want.isAppOfArity ``Iff 2 then
    if hty.isAppOfArity ``Iff 2 then
      let (wa, wb) := (want.appFn!.appArg!, want.appArg!)
      let (ha, hb) := (hty.appFn!.appArg!, hty.appArg!)
      let fwd ← withLocalDeclD `ba wa fun x => do
        let hx ← transport ha x wa (depth + 1)
        mkLambdaFVars #[x]
          (← transport wb (mkApp4 (.const ``Iff.mp []) ha hb h hx) hb (depth + 1))
      let bwd ← withLocalDeclD `bb wb fun x => do
        let hx ← transport hb x wb (depth + 1)
        mkLambdaFVars #[x]
          (← transport wa (mkApp4 (.const ``Iff.mpr []) ha hb h hx) ha (depth + 1))
      return mkApp4 (.const ``Iff.intro []) wa wb fwd bwd

  -- An implication: contravariant on the left, covariant on the right.
  if want.isArrow && hty.isArrow then
    return ← withLocalDeclD `bx want.bindingDomain! fun x => do
      let hx ← transport hty.bindingDomain! x want.bindingDomain! (depth + 1)
      mkLambdaFVars #[x]
        (← transport want.bindingBody! (mkApp h hx) hty.bindingBody! (depth + 1))

  if want.isForall && hty.isForall then
    unless ← isDefEq want.bindingDomain! hty.bindingDomain! do
      throwError "bridge: quantifier domains differ:{indentD want.bindingDomain!}\n\
        against{indentD hty.bindingDomain!}"
    -- Positionally first: the two prefixes usually bind the same variables in the same
    -- order, and then applying `h` to the variable just introduced is the whole step.
    let st ← saveState
    try
      return ← withLocalDeclD want.bindingName! want.bindingDomain! fun x => do
        mkLambdaFVars #[x]
          (← transport (want.bindingBody!.instantiate1 x) (mkApp h x)
              (hty.bindingBody!.instantiate1 x) (depth + 1))
    catch e =>
      st.restore
      -- They need not line up. Prenexing hoists binders in an order set by the shape of
      -- the formula, and `rectify` permutes them outright, so the prefixes can bind the
      -- same variables in different positions. Fall through to the rule below, which
      -- introduces the conclusion's binder and leaves the premise's prefix to be
      -- instantiated by unification — position no longer decides anything.
      try
        return ← introForall want h hty depth
      catch _ =>
        st.restore
        throw e

  -- `want` quantifies and `h` does not. This is the other half of prenexing: `∀ v, A ∨ B
  -- v` from `A ∨ ∀ v, B v`. Introducing the binder is always sound — a proof of the body
  -- for an arbitrary `v` is a proof of the `∀` — and `h` says nothing about `v`, so it
  -- crosses unchanged.
  if want.isForall then
    return ← introForall want h hty depth

  if want.isAppOfArity ``Exists 2 then
    if hty.isAppOfArity ``Exists 2 then
      -- Positionally first: the premise's `i`th witness is the conclusion's `i`th, which
      -- is what a prenexing or a reassociation leaves and so is nearly all of them. It
      -- costs one `transport` of the body and pins nothing down, so it is cheap to try.
      let saved ← saveState
      let positional ← try
        let hp := hty.appArg!
        let wp := want.appArg!
        let hdom := hty.appFn!.appArg!
        let wdom := want.appFn!.appArg!
        let k ← withLocalDeclD `bx hdom fun x => do
          let hxty := hp.beta #[x]
          withLocalDeclD `bh hxty fun hx => do
            let inner ← transport (wp.beta #[x]) hx hxty (depth + 1)
            mkLambdaFVars #[x, hx]
              (mkApp4 (.const ``Exists.intro (headLevels want)) wdom wp x inner)
        pure (some (mkAppN (.const ``Exists.elim (headLevels hty)) #[hdom, hp, want, h, k]))
      catch _ =>
        -- The attempt may have assigned metavariables before it failed — the `∀`
        -- instantiation rule makes them — so the state goes back, not just the result.
        saved.restore
        pure none
      if let some e := positional then return e
      -- Otherwise the prefix is *permuted*, and one binder at a time cannot see it.
      --
      -- `rectify` renames a clause's variables and the renaming need not preserve the
      -- order the witnesses are used in: on `LRA_formula_058` step 22 the premise is
      -- `∀ v1, ∃ v6 v7, …7 * v7 + -5 * v6…` and the conclusion `∀ v0, ∃ v1 v2, …7 * v1 +
      -- -5 * v2…`, the same formula with the two swapped. Peeling one `∃` off each side
      -- and reusing the premise's witness for the conclusion's — which is what the
      -- positional rule above does — commits to `v1 := v6` before `v7` exists, and the
      -- body then does not match.
      --
      -- So take the premise's whole prefix down to fvars *first*, and only then build the
      -- conclusion's, with a metavariable for each witness. Every premise witness is in
      -- scope by the time any conclusion witness is created, so the `isDefEq` at the leaf
      -- can assign them in any order — the same device the `hty.isForall` rule below uses,
      -- and it needs no search over permutations. `tryTransport` refuses a proof with an
      -- unassigned metavariable left in it, so a prefix nothing determines is a failure
      -- rather than a hole.
      return ← elimExistsBlock want hty h (existsPrefixLen hty) #[] fun _ hx hxty =>
        introExistsBlock want (existsPrefixLen want) hx hxty depth

  -- A conjunction: take `h` apart into its leaves, then put `want` together from them.
  -- No case-splitting, and no search for a leaf that occurs on both sides unchanged —
  -- which, whether the junction was mirrored or merely weakened, is most of them.
  if want.isAppOfArity ``And 2 then
    let hs ← conjLeaves h hty
    let mut exact : Std.HashMap Expr Expr := {}
    for (ty, pf) in hs do
      unless exact.contains ty do exact := exact.insert ty pf
    let ws := juncts ``And want
    -- Once per conjunction, not once per leaf against every candidate.
    let sigs := hs.map (fun (ty, _) => sig ty)
    let mut proofs : Array Expr := #[]
    for i in [0:ws.size] do
      match exact[ws[i]!]? with
      | some pf => proofs := proofs.push pf
      | none => proofs := proofs.push (← pick ws[i]! hs sigs (candidates hs.size i) depth)
    let (e, _) ← assemble ws.size want proofs 0
    return e

  -- A disjunction: eliminate `h`'s disjuncts and inject each into `want`. Contravariant,
  -- so it is `h`'s tree that is taken apart and `want`'s that is built into.
  if want.isAppOfArity ``Or 2 then
    return ← elimOr want (orIndex want) h hty depth

  -- `want` is not a junction but `h` is. This is a weakening: a rule that drops part of
  -- a formula and leaves the rest — `pure predicate removal` is the one that reaches
  -- here — so one of `h`'s conjuncts is what `want` wants.
  if hty.isAppOfArity ``And 2 then
    let hs ← conjLeaves h hty
    return ← pick want hs (hs.map (fun (ty, _) => sig ty)) (candidates hs.size 0) depth

  -- The dual: `h` offers a choice and `want` does not, so `want` must follow from every
  -- disjunct.
  if hty.isAppOfArity ``Or 2 then
    return ← elimOr want (orIndex want) h hty depth

  -- `h` quantifies and `want` does not: prenexing hoisted the binder out of a junction
  -- and the clause wants the premise at one particular term. Which term is what
  -- unification says, so the instance is a metavariable and the `isDefEq` at the leaf
  -- below settles it. This is the one place the bridge makes a metavariable, and what it
  -- assigns is a variable rather than a formula, so `checkAssignment` has nothing to
  -- walk. `tryTransport` refuses a proof that still has one unassigned.
  if hty.isForall then
    let m ← mkFreshExprMVar hty.bindingDomain!
    return ← transport want (mkApp h m) (hty.bindingBody!.instantiate1 m) (depth + 1)

  -- Two comparisons that `isDefEq` rejects and that no structural rule explains. Under
  -- `vampire_bridge_arith`, ask `Poly` whether they are the same comparison; if they are,
  -- the obligation becomes a goal of two atoms for the caller's arithmetic to close.
  --
  -- This is the rule `theory normalization` and the ALASCA normalisations need. They
  -- restate a unit over the same numbers, so premise and conclusion agree
  -- formula-for-formula and differ inside every atom: the walk above gets the shape and
  -- then misses here, and `Vampire/Arith.lean` falls through to lines that ask `ring_nf
  -- at *` and `grind` to take the formula whole. On `LRA_formula_040` step 2 that formula
  -- is a 200-atom `∃∀∃`-quantified tree and nothing closes it.
  --
  -- **`Poly` decides rather than defers, and that is what makes this safe.** Handing every
  -- irreconcilable comparison to the caller unconditionally was tried first and is wrong,
  -- because the rules above use transport *failure* to choose between candidates: `pick`
  -- and `conjLeaves` match a conclusion leaf to a premise leaf by trying a transport and
  -- keeping the first that succeeds, and the `∃`/`∀` rules leave a witness as a
  -- metavariable for a leaf `isDefEq` to pin down. A leaf that always succeeds makes the
  -- first arbitrary -- it paired `2 * x + 3 * y ≤ 1` with `x - y ≤ 5` -- and starves the
  -- second. Comparing normal forms fails on a wrong pairing, so both keep working.
  -- `Test/Poly.lean` holds that pair as a regression test.
  --
  -- Neither side may hold an unassigned metavariable. `atomNF` would read one as an
  -- opaque factor, so two atoms could compare equal without the metavariable being
  -- *determined* -- which hands back a goal still carrying it and, worse, tells the `∃`
  -- rule above that its witness was settled when nothing settled it. Refusing is right in
  -- any case: an atom with a hole in it has not been decided. It also marks the shape this
  -- rule does not reach, a normalisation that permutes a quantifier prefix *and* rewrites
  -- the atoms under it, which needs the polynomials matched and the witnesses solved for
  -- at the same time. That is theory unification and not what this file is.
  if (← arithLeaves) && !want.hasExprMVar && !hty.hasExprMVar then
    if let some a := atomNF want then
      if let some b := atomNF hty then
        if a.sameAs b then
          -- The negation-only case needs no goal and no tactic; see `flipProof`.
          if let some t ← flipProof want hty h then return t
          -- Which kind of leaf this is decides what can close it: a relation flip is one
          -- lemma application, a reassociation needs ring reasoning. Pure data only --
          -- an earlier version of this line built a term to compare and threw inside
          -- `transport`, which made the rule fail rather than measuring it.
          trace[vampire.bridge] "arith leaf: relFlip={a.rel != b.rel} polyEq={a.poly == b.poly}"
          let g ← mkFreshExprMVar (← mkArrow hty want) (kind := .syntheticOpaque)
            (userName := `bridgeArith)
          return mkApp g h

  throwError "bridge: cannot reconcile{indentD want}\nwith{indentD hty}"

/-- Take `n` leading `∃`s off `h : hty` down to fvars, then let `k` prove `want` from
the witnesses and the body.

Each level is an `Exists.elim` whose motive is `want`, which is fixed and mentions none
of the witnesses, so the nesting is sound at every depth. `k` receives the witnesses in
prefix order — it does not currently need them, since the metavariables
`introExistsBlock` makes are what actually selects among them, but the elimination has to
name them for the scope to exist at all. -/
private partial def elimExistsBlock (want : Expr) (hty h : Expr) (n : Nat)
    (acc : Array Expr) (k : Array Expr → Expr → Expr → MetaM Expr) : MetaM Expr := do
  if n == 0 || !hty.isAppOfArity ``Exists 2 then return ← k acc h hty
  let hp := hty.appArg!
  let hdom := hty.appFn!.appArg!
  let body ← withLocalDeclD `bx hdom fun x => do
    let hxty := hp.beta #[x]
    withLocalDeclD `bh hxty fun hx => do
      let inner ← elimExistsBlock want hxty hx (n - 1) (acc.push x) k
      mkLambdaFVars #[x, hx] (← instantiateMVars inner)
  return mkAppN (.const ``Exists.elim (headLevels hty)) #[hdom, hp, want, h, body]

/-- Build `want`'s `n` leading `∃`s with a metavariable for each witness, then transport
the body from `h : hty`.

The metavariables are created here rather than passed in because they must belong to the
local context `elimExistsBlock` has already opened — that is the whole point of splitting
the two, and what lets a witness be assigned to any of the premise's, not just the one at
the same position. -/
private partial def introExistsBlock (want : Expr) (n : Nat) (h hty : Expr)
    (depth : Nat) : MetaM Expr := do
  if n == 0 || !want.isAppOfArity ``Exists 2 then
    return ← transport want h hty (depth + 1)
  let wdom := want.appFn!.appArg!
  let wp := want.appArg!
  let m ← mkFreshExprMVar wdom
  let inner ← introExistsBlock (wp.beta #[m]) (n - 1) h hty depth
  return mkApp4 (.const ``Exists.intro (headLevels want)) wdom wp m inner

/-- Introduce `want`'s leading binder and carry `h` under it unchanged. -/
private partial def introForall (want : Expr) (h : Expr) (hty : Expr) (depth : Nat) :
    MetaM Expr := do
  withLocalDeclD want.bindingName! want.bindingDomain! fun x => do
    mkLambdaFVars #[x] (← transport (want.bindingBody!.instantiate1 x) h hty (depth + 1))

/-- The first candidate leaf of `hs` that transports to `w`. -/
private partial def pick (w : Expr) (hs : Array (Expr × Expr)) (sigs : Array UInt64)
    (order : Array Nat) (depth : Nat) : MetaM Expr := do
  -- Defeq across every candidate first. It is far cheaper than a transport attempt, and
  -- on a weakening — where the leaf is carried over untouched — it is the whole answer.
  for k in order do
    let some (hty, hp) := hs[k]? | continue
    if ← isDefEq hty w then return hp
  -- Then by transport, the candidates that say the same things first. A wrong candidate
  -- is only cheap when it fails at the head, and inside a nested conjunction the wrong
  -- ones multiply.
  let order := bySig (sig w) sigs order
  let mut err : Option MessageData := none
  for k in order do
    let some (hty, hp) := hs[k]? | continue
    let st ← saveState
    try
      return ← transport w hp hty (depth + 1)
    catch e =>
      st.restore
      if err.isNone then err := some (← e.toMessageData.toString)
  throwError "bridge: no conjunct of the hypothesis gives{indentD w}\
    {match err with | some m => m!"\nthe closest attempt said:{indentD m}" | none => m!""}"

/-- Rebuild `want`'s own conjunction tree from the leaf proofs, in order. -/
private partial def assemble (fuel : Nat) (want : Expr) (proofs : Array Expr) (i : Nat) :
    MetaM (Expr × Nat) := do
  if fuel == 0 then throwError "bridge: conjunction deeper than its own leaf count"
  if want.isAppOfArity ``And 2 then
    let a := want.appFn!.appArg!
    let b := want.appArg!
    let (l, i) ← assemble (fuel - 1) a proofs i
    let (r, i) ← assemble (fuel - 1) b proofs i
    return (mkApp4 (.const ``And.intro []) a b l r, i)
  else
    let some p := proofs[i]? | throwError "bridge: ran out of conjunct proofs"
    return (p, i + 1)

/-- Case on every disjunct of `h`, injecting each into `want`. -/
private partial def elimOr (want : Expr) (idx : OrIdx) (h : Expr) (hty : Expr)
    (depth : Nat) : MetaM Expr := do
  return mkApp (← elimOrFn want idx hty depth) h

/--
A function from `hty` to `want`, casing on `hty`'s disjuncts.

The chain is `orCases` applications rather than nested `fun`s; see `orCases` for why that
matters. What abstracts is a leaf, over its own injection, and the quantifier rule below.
-/
private partial def elimOrFn (want : Expr) (idx : OrIdx) (hty0 : Expr) (depth : Nat) :
    MetaM Expr := do
  if depth > maxDepth then throwError "bridge: gave up at depth {maxDepth}"
  let hty := hty0.consumeMData
  if hty.isAppOfArity ``Or 2 then
    let a := hty.appFn!.appArg!
    let b := hty.appArg!
    return mkAppN (.const ``orCases [])
      #[a, b, want, ← elimOrFn want idx a (depth + 1), ← elimOrFn want idx b (depth + 1)]
  -- A disjunction *under* a binder the conclusion has hoisted out. `transport`'s own
  -- `hty.isForall` rule instantiates a quantified premise, but it is at the leaf: it is
  -- reached from `inject`, which is asking for the whole `∀` to go into one disjunct of
  -- the conclusion, and here the `∀`'s body spans several of them. This is a clause that
  -- came out of clausification, where hoisting a binder out of a disjunction and
  -- distributing over it is one step. `Q_HAL004p1` has one such clause, and closing it
  -- here rather than in the `ac_nf0` and `assumption` the reference falls back to is
  -- 1.75s of its 1.8s replay.
  --
  -- The term is a metavariable, as in `transport`'s rule, and the disjuncts settle it:
  -- every one of them mentions the variable, so the first `isDefEq` at a leaf assigns it
  -- and the rest have to agree. Where none of them does, `tryTransport` refuses a proof
  -- with a hole rather than handing one back.
  --
  -- Only where the conclusion has no disjunct that *is* this `∀`. `flattening` and the
  -- other reassociating rules carry a quantified disjunct across unchanged, and for
  -- those `inject` settles it by lookup; distributing first cost them 1.34s over the
  -- benchmark to discover that. The signature is what the disjuncts are already indexed
  -- by, so this is a scan of hashes and not a second search.
  if hty.isForall && hty.bindingBody!.consumeMData.isAppOfArity ``Or 2 &&
      !idx.sigs.contains (sig hty) then
    let st ← saveState
    try
      return ← withLocalDeclD `bq hty fun hq => do
        let m ← mkFreshExprMVar hty.bindingDomain!
        let inner ← elimOrFn want idx (hty.bindingBody!.instantiate1 m) (depth + 1)
        mkLambdaFVars #[hq] (mkApp inner (mkApp hq m))
    catch _ =>
      st.restore
  withLocalDeclD `bl hty fun x => do
    mkLambdaFVars #[x] (← inject want idx x hty depth)

/--
Put `h` into whichever disjunct of `want` accepts it.

The disjunct is nearly always *there* — the export reversed the junction and changed
nothing else — so it is looked up rather than searched for. Failing that, the disjuncts
that say the same things are tried before the ones that do not: a wrong disjunct is only
cheap when it fails at the head symbol, and `elimOr` asks this once per disjunct of the
hypothesis, so trying them in tree order made reconciling two orderings of one clause
quadratic in its width.
-/
private partial def inject (want : Expr) (idx : OrIdx) (h : Expr) (hty : Expr)
    (depth : Nat) : MetaM Expr := do
  if depth > maxDepth then throwError "bridge: gave up at depth {maxDepth}"
  if let some k := idx.exact[hty]? then
    if let some e := injectAt want k h then return e
  let order := bySig (sig hty) idx.sigs (Array.range idx.leaves.size)
  let mut err : Option MessageData := none
  for k in order do
    let some w := idx.leaves[k]? | continue
    let st ← saveState
    try
      let pf ← transport w h hty (depth + 1)
      let some e := injectAt want k pf
        | throwError "bridge: disjunct {k} is not a leaf of the conclusion"
      return e
    catch e =>
      st.restore
      if err.isNone then err := some (← e.toMessageData.toString)
  throwError "bridge: no disjunct of the conclusion takes{indentD hty}\
    {match err with | some m => m!"\nthe closest attempt said:{indentD m}" | none => m!""}"

end

/-- A proof of `want` from `h`, or the reason it could not be built. -/
def tryTransport (want : Expr) (h : Expr) : MetaM (Expr ⊕ MessageData) := do
  let st ← saveState
  try
    let e ← instantiateMVars (← transport want h (← inferType h) 0)
    -- The `∀`-instantiation rule leaves it to unification to say which term a premise
    -- was used at, and unification need not say: a body that does not mention the
    -- variable pins nothing down. A proof with a hole in it is not a proof, and the
    -- caller has a fallback, so this is a failure rather than something to hand back.
    if e.hasExprMVar then
      throwError "bridge: nothing determined the term a universally quantified premise \
        was instantiated at"
    return .inl e
  catch e =>
    st.restore
    return .inr (← e.toMessageData.toString)

/-- `tryTransport`, but the comparisons `Poly` decided are the same come back as goals.

The two kinds of leftover metavariable are told apart by their *type*, which needs no
bookkeeping: an undetermined `∀` or `∃` instantiation is a metavariable at the domain of
the quantifier — a term — and an arithmetic leaf is one at `hty → want`, a `Prop`. So a
non-`Prop` hole still means "nothing determined the term this premise was used at" and is
still a failure. -/
def tryTransportArith (want : Expr) (h : Expr) :
    MetaM ((Expr × Array MVarId) ⊕ MessageData) := do
  let st ← saveState
  try
    let e ← withOptions (·.setBool arithLeavesOpt true) do
      instantiateMVars (← transport want h (← inferType h) 0)
    let mut goals : Array MVarId := #[]
    for mv in (← getMVars e) do
      if ← isProp (← mv.getType) then
        unless goals.contains mv do
          -- `intros` and not one `intro`. The goal is made as `hty → want`, so one would
          -- be enough if that were the type that came back — but the leaf sits under
          -- whatever binders `transport` opened to reach it, and `mkLambdaFVars`
          -- abstracting those over a term still holding the metavariable turns it into a
          -- *delayed* assignment: the metavariable left in the proof is the outer one, at
          -- `∀ v1, hty → want`. `linarith` on that reports "failed to find a
          -- contradiction" about a binder it cannot see past, which reads as the
          -- arithmetic being beyond it.
          goals := goals.push (← mv.intros).2
      else
        throwError "bridge: nothing determined the term a universally quantified premise \
          was instantiated at"
    return .inl (e, goals)
  catch e =>
    st.restore
    return .inr (← e.toMessageData.toString)

/-- Close the goal by bridging it from hypothesis `h` — the same reconciliation
`bridgeInput` does, as a tactic, so a step script can reach it. -/
syntax (name := vampireBridge) "vampire_bridge" ident : tactic

open Lean.Elab.Tactic in
elab_rules : tactic
  | `(tactic| vampire_bridge $h:ident) => do
    let g ← getMainGoal
    g.withContext do
      let fv ← getFVarId h
      match ← tryTransport (← instantiateMVars (← g.getType)) (.fvar fv) with
      | .inl e => g.assign e; replaceMainGoal []
      | .inr why =>
        -- Every caller has the reference's script behind this, so a failure here is
        -- swallowed by a `first` and shows up only as the slow path being taken. The
        -- trace is the one way to see which step missed and why.
        trace[vampire.bridge] "missed{indentD (← instantiateMVars (← g.getType))}\nfrom          {indentD (← inferType (.fvar fv))}\nbecause{indentD why}"
        throwError "vampire_bridge: {why}"

/-- `vampire_bridge`, leaving the comparisons it reconciled through `Poly` as goals.

For the normalisation rules, where the two formulas have the same shape and differ inside
their atoms. The caller puts an arithmetic tactic behind it — see
`Vampire.Arith.normTactics` — and gets one goal per atom that actually differs, of two
comparisons over the same numbers, rather than one goal the size of the formula. -/
syntax (name := vampireBridgeArith) "vampire_bridge_arith" ident : tactic

open Lean.Elab.Tactic in
elab_rules : tactic
  | `(tactic| vampire_bridge_arith $h:ident) => do
    let g ← getMainGoal
    g.withContext do
      let fv ← getFVarId h
      let t0 ← IO.monoMsNow
      match ← tryTransportArith (← instantiateMVars (← g.getType)) (.fvar fv) with
      | .inl (e, goals) =>
        -- How much of a normalisation step is the walk and how much is the arithmetic the
        -- caller then runs on each leaf. The two are very different things to optimise and
        -- the step timing alone cannot separate them.
        -- Leaf counts, and the distinct count with them, because the gap between the
        -- two is a standing temptation. A normalisation step restates a formula atom by
        -- atom and the same atom recurs, so the walk hands back the same `hty → want`
        -- more than once -- 26 goals over 18 distinct types on
        -- `NRA_intersection-example-simple_proof-node1766` step 2, and each duplicate
        -- costs its own `linarith` at the ~5ms per-goal floor.
        --
        -- Sharing them by assigning a duplicate from the first goal of its type was tried
        -- and shares *nothing*: the duplicates sit under different binders, so `?dup :=
        -- ?first` is ill scoped every time and a scope check rejects all of them. Doing it
        -- properly means generalising the obligation over its free variables, proving that
        -- once, and instantiating it per site. Worth about 40ms of a 420ms problem, so it
        -- is a real optimisation and not a large one.
        -- Behind the trace check, not just reported behind it: counting distinct types is
        -- quadratic in the number of leaves and it is diagnostics, not work the proof needs.
        if ← isTracingEnabledFor `vampire.bridge then
          let mut tys : Array Expr := #[]
          for mv in goals do
            let ty ← instantiateMVars (← mv.getType)
            unless tys.any (· == ty) do tys := tys.push ty
          trace[vampire.bridge] "arith: walked in {(← IO.monoMsNow) - t0}ms, \
            {goals.size} leaf goal(s) for the caller, {tys.size} distinct"
          for ty in tys.toList.take 4 do
            trace[vampire.bridge] "LEAF {ty}"
        g.assign e
        replaceMainGoal goals.toList
      | .inr why =>
        trace[vampire.bridge] "missed (arith){indentD (← instantiateMVars (← g.getType))}\nfrom{indentD (← inferType (.fvar fv))}\nbecause{indentD why}"
        throwError "vampire_bridge_arith: {why}"

end Vampire.Bridge
