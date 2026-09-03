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
of `h`. -/
private partial def conjLeaves (h : Expr) : MetaM (Array (Expr × Expr)) := do
  let ty ← whnfR (← inferType h)
  if ty.isAppOfArity ``And 2 then
    return (← conjLeaves (← mkAppM ``And.left #[h])) ++
           (← conjLeaves (← mkAppM ``And.right #[h]))
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

mutual

/--
A proof of `want`, from `h`.

Fails, with the two subformulas it could not reconcile, rather than returning something
unchecked: the caller still has a `grind` to fall back on and a precise message is worth
more than a silent miss.
-/
private partial def transport (want : Expr) (h : Expr) (depth : Nat) : MetaM Expr := do
  if depth > maxDepth then
    throwError "bridge: gave up at depth {maxDepth}"
  let want ← instantiateMVars want
  let hty ← instantiateMVars (← inferType h)
  if ← isDefEq hty want then return h

  -- `a = b` against `b = a`. `Literal::createEquality` orients an equation by the term
  -- ordering, and the export only undoes that where `flipForPrinting` records it.
  if let some (_, wl, wr) := want.eq? then
    if let some (_, hl, hr) := hty.eq? then
      if (← isDefEq wl hr) && (← isDefEq wr hl) then
        return ← mkAppM ``Eq.symm #[h]

  -- `¬P`. Not an arrow syntactically, and contravariant.
  if want.isAppOfArity ``Not 1 then
    if hty.isAppOfArity ``Not 1 then
      return ← withLocalDeclD `bx want.appArg! fun x => do
        mkLambdaFVars #[x] (mkApp h (← transport hty.appArg! x (depth + 1)))

  if want.isAppOfArity ``Iff 2 then
    if hty.isAppOfArity ``Iff 2 then
      let (wa, wb) := (want.appFn!.appArg!, want.appArg!)
      let (ha, hb) := (hty.appFn!.appArg!, hty.appArg!)
      let fwd ← withLocalDeclD `ba wa fun x => do
        let hx ← transport ha x (depth + 1)
        mkLambdaFVars #[x] (← transport wb (← mkAppM ``Iff.mp #[h, hx]) (depth + 1))
      let bwd ← withLocalDeclD `bb wb fun x => do
        let hx ← transport hb x (depth + 1)
        mkLambdaFVars #[x] (← transport wa (← mkAppM ``Iff.mpr #[h, hx]) (depth + 1))
      return ← mkAppM ``Iff.intro #[fwd, bwd]

  -- An implication: contravariant on the left, covariant on the right.
  if want.isArrow && hty.isArrow then
    return ← withLocalDeclD `bx want.bindingDomain! fun x => do
      let hx ← transport hty.bindingDomain! x (depth + 1)
      mkLambdaFVars #[x] (← transport want.bindingBody! (mkApp h hx) (depth + 1))

  if want.isForall && hty.isForall then
    unless ← isDefEq want.bindingDomain! hty.bindingDomain! do
      throwError "bridge: quantifier domains differ:{indentD want.bindingDomain!}\n\
        against{indentD hty.bindingDomain!}"
    return ← withLocalDeclD want.bindingName! want.bindingDomain! fun x => do
      mkLambdaFVars #[x]
        (← transport (want.bindingBody!.instantiate1 x) (mkApp h x) (depth + 1))

  if want.isAppOfArity ``Exists 2 then
    if hty.isAppOfArity ``Exists 2 then
      let hp := hty.appArg!
      let wp := want.appArg!
      let hdom := hty.appFn!.appArg!
      let k ← withLocalDeclD `bx hdom fun x => do
        withLocalDeclD `bh (hp.beta #[x]) fun hx => do
          let inner ← transport (wp.beta #[x]) hx (depth + 1)
          mkLambdaFVars #[x, hx] (← mkAppOptM ``Exists.intro #[none, wp, x, inner])
      return ← mkAppM ``Exists.elim #[h, k]

  -- A conjunction: take `h` apart into its leaves, then put `want` together from them.
  -- No case-splitting, and no search for a leaf that occurs on both sides unchanged —
  -- which, whether the junction was mirrored or merely weakened, is most of them.
  if want.isAppOfArity ``And 2 then
    let hs ← conjLeaves h
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
    return ← elimOr want h depth

  -- `want` is not a junction but `h` is. This is a weakening: a rule that drops part of
  -- a formula and leaves the rest — `pure predicate removal` is the one that reaches
  -- here — so one of `h`'s conjuncts is what `want` wants.
  if hty.isAppOfArity ``And 2 then
    let hs ← conjLeaves h
    return ← pick want hs (candidates hs.size 0) depth

  -- The dual: `h` offers a choice and `want` does not, so `want` must follow from every
  -- disjunct.
  if hty.isAppOfArity ``Or 2 then
    return ← elimOr want h depth

  throwError "bridge: cannot reconcile{indentD want}\nwith{indentD hty}"

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
    let some (_, hp) := hs[k]? | continue
    let st ← saveState
    try
      return ← transport w hp (depth + 1)
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
    let (l, i) ← assemble (fuel - 1) want.appFn!.appArg! proofs i
    let (r, i) ← assemble (fuel - 1) want.appArg! proofs i
    return (← mkAppM ``And.intro #[l, r], i)
  else
    let some p := proofs[i]? | throwError "bridge: ran out of conjunct proofs"
    return (p, i + 1)

/-- Case on every disjunct of `h`, injecting each into `want`. -/
private partial def elimOr (want : Expr) (h : Expr) (depth : Nat) : MetaM Expr := do
  if depth > maxDepth then throwError "bridge: gave up at depth {maxDepth}"
  let hty ← instantiateMVars (← inferType h)
  if hty.isAppOfArity ``Or 2 then
    let l ← withLocalDeclD `bl hty.appFn!.appArg! fun x => do
      mkLambdaFVars #[x] (← elimOr want x (depth + 1))
    let r ← withLocalDeclD `br hty.appArg! fun x => do
      mkLambdaFVars #[x] (← elimOr want x (depth + 1))
    mkAppM ``Or.elim #[h, l, r]
  else
    inject want h depth

/-- Put `h` into whichever disjunct of `want` accepts it. -/
private partial def inject (want : Expr) (h : Expr) (depth : Nat) : MetaM Expr := do
  if depth > maxDepth then throwError "bridge: gave up at depth {maxDepth}"
  if want.isAppOfArity ``Or 2 then
    let (a, b) := (want.appFn!.appArg!, want.appArg!)
    -- The export reversed this junction too, so the match is more often on the right;
    -- either way a wrong branch fails on the head symbol and costs almost nothing.
    let st ← saveState
    try
      return ← mkAppOptM ``Or.inr #[a, b, ← inject b h (depth + 1)]
    catch _ =>
      st.restore
      return ← mkAppOptM ``Or.inl #[a, b, ← inject a h (depth + 1)]
  else
    transport want h (depth + 1)

end

/-- A proof of `want` from `h`, or the reason it could not be built. -/
def tryTransport (want : Expr) (h : Expr) : MetaM (Expr ⊕ MessageData) := do
  let st ← saveState
  try
    return .inl (← transport want h 0)
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
