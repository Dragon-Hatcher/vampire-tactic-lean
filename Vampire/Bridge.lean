import Lean

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
  let want ← instantiateMVars want
  let hty ← instantiateMVars hty
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
      return mkAppN (.const ``Exists.elim (headLevels hty)) #[hdom, hp, want, h, k]

  -- A conjunction: take `h` apart into its leaves, then put `want` together from them.
  -- No case-splitting, and no search for a leaf that occurs on both sides unchanged —
  -- which, whether the junction was mirrored or merely weakened, is most of them.
  if want.isAppOfArity ``And 2 then
    let hs ← conjLeaves h hty
    let mut exact : Std.HashMap Expr Expr := {}
    for (ty, pf) in hs do
      unless exact.contains ty do exact := exact.insert ty pf
    let ws := juncts ``And want
    let mut proofs : Array Expr := #[]
    for i in [0:ws.size] do
      match exact[ws[i]!]? with
      | some pf => proofs := proofs.push pf
      | none => proofs := proofs.push (← pick ws[i]! hs (candidates hs.size i) depth)
    let (e, _) ← assemble ws.size want proofs 0
    return e

  -- A disjunction: eliminate `h`'s disjuncts and inject each into `want`. Contravariant,
  -- so it is `h`'s tree that is taken apart and `want`'s that is built into.
  if want.isAppOfArity ``Or 2 then
    return ← elimOr want h hty depth

  -- `want` is not a junction but `h` is. This is a weakening: a rule that drops part of
  -- a formula and leaves the rest — `pure predicate removal` is the one that reaches
  -- here — so one of `h`'s conjuncts is what `want` wants.
  if hty.isAppOfArity ``And 2 then
    let hs ← conjLeaves h hty
    return ← pick want hs (candidates hs.size 0) depth

  -- The dual: `h` offers a choice and `want` does not, so `want` must follow from every
  -- disjunct.
  if hty.isAppOfArity ``Or 2 then
    return ← elimOr want h hty depth

  -- `h` quantifies and `want` does not: prenexing hoisted the binder out of a junction
  -- and the clause wants the premise at one particular term. Which term is what
  -- unification says, so the instance is a metavariable and the `isDefEq` at the leaf
  -- below settles it. This is the one place the bridge makes a metavariable, and what it
  -- assigns is a variable rather than a formula, so `checkAssignment` has nothing to
  -- walk. `tryTransport` refuses a proof that still has one unassigned.
  if hty.isForall then
    let m ← mkFreshExprMVar hty.bindingDomain!
    return ← transport want (mkApp h m) (hty.bindingBody!.instantiate1 m) (depth + 1)

  throwError "bridge: cannot reconcile{indentD want}\nwith{indentD hty}"

/-- Introduce `want`'s leading binder and carry `h` under it unchanged. -/
private partial def introForall (want : Expr) (h : Expr) (hty : Expr) (depth : Nat) :
    MetaM Expr := do
  withLocalDeclD want.bindingName! want.bindingDomain! fun x => do
    mkLambdaFVars #[x] (← transport (want.bindingBody!.instantiate1 x) h hty (depth + 1))

/-- The first candidate leaf of `hs` that transports to `w`. -/
private partial def pick (w : Expr) (hs : Array (Expr × Expr)) (order : Array Nat)
    (depth : Nat) : MetaM Expr := do
  -- Defeq across every candidate first. It is far cheaper than a transport attempt, and
  -- on a weakening — where the leaf is carried over untouched — it is the whole answer.
  for k in order do
    let some (hty, hp) := hs[k]? | continue
    if ← isDefEq hty w then return hp
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
private partial def elimOr (want : Expr) (h : Expr) (hty : Expr) (depth : Nat) :
    MetaM Expr := do
  if depth > maxDepth then throwError "bridge: gave up at depth {maxDepth}"
  if hty.isAppOfArity ``Or 2 then
    let a := hty.appFn!.appArg!
    let b := hty.appArg!
    let l ← withLocalDeclD `bl a fun x => do
      mkLambdaFVars #[x] (← elimOr want x a (depth + 1))
    let r ← withLocalDeclD `br b fun x => do
      mkLambdaFVars #[x] (← elimOr want x b (depth + 1))
    return mkAppN (.const ``Or.elim []) #[a, b, want, h, l, r]
  else
    inject want h hty depth

/-- Put `h` into whichever disjunct of `want` accepts it. -/
private partial def inject (want : Expr) (h : Expr) (hty : Expr) (depth : Nat) :
    MetaM Expr := do
  if depth > maxDepth then throwError "bridge: gave up at depth {maxDepth}"
  if want.isAppOfArity ``Or 2 then
    let (a, b) := (want.appFn!.appArg!, want.appArg!)
    -- The export reversed this junction too, so the match is more often on the right;
    -- either way a wrong branch fails on the head symbol and costs almost nothing.
    let st ← saveState
    try
      return mkApp3 (.const ``Or.inr []) a b (← inject b h hty (depth + 1))
    catch _ =>
      st.restore
      return mkApp3 (.const ``Or.inl []) a b (← inject a h hty (depth + 1))
  else
    transport want h hty (depth + 1)

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
      | .inr why => throwError "vampire_bridge: {why}"

end Vampire.Bridge
