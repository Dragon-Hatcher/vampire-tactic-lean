import Vampire.Clause

/-!
# AVATAR's own steps, as terms

Three of the scripts `LeanChecker` writes for AVATAR spend their time on tactics that
are doing work the two formulas already determine. Measured over `bench-tptp/`, on the
three `ALG` problems where AVATAR does most of the work:

    try rw [hk]                                      1.68s over 2894 invocations
    try simp only [imp_iff_not_or] at h0             0.83s over 1308
    try simp only [imp_false, imp_iff_not_or, ...]   0.89s over 1011

and each of the three is a *different* reason for the same conclusion.

**A split name is its component, definitionally.** `LeanChecker` writes a file in which
`sA9` is a section variable and `h9 : sA9 ↔ C` the only thing relating the two, so
`rw [h9]` is how the goal comes to mention `C`. Here `replayFrom` binds the split with
`withLetDecl`, so `sA9` *is* `C` — `zeta` away and the two are the same term. The
substitution is therefore type-preserving on its own, and needs no motive, no congruence
proof and no equation: `Expr.replace`, and the goal that comes out is definitionally the
goal that went in. `substAll` checks that with one `isDefEq` on the pair being
substituted, which is a `let` unfolding, rather than on the formula it appears in.

**An implication chain is a clause, by one application per arrow.** A clause that holds
under splits is stated `sA₁ → … → sAₙ → C`, and `imp_iff_not_or` is how the reference
turns that into the disjunction the next line wants. Rewriting it is a simp traversal of
the whole formula; the shape is known in advance, so `unimply` walks the arrows and
composes `impOrMap`, giving `¬sA₁ ∨ … ∨ ¬sAₙ ∨ C` in as many applications as there are
arrows. `¬A` *is* `A → False`, which is what makes the last arrow a literal already and
`not_not` a `ofNotNot` on it rather than a rewrite.

**And then a contradiction clause is a resolution.** With the chain read as a clause,
`avatar contradiction clause` is its parent and its conclusion over the same literals in
another order, which is what `Vampire/Clause.lean` was written for.

Every construction here is applications of named lemmas, for the reason
`Vampire/Sat.lean` records: abstracting a binder walks the term under it, so a chain of
them is quadratic in the clause, and the flat term is smaller as well as cheaper — which
counts twice, because `mkLetFVars` and the kernel both walk it afterwards.

`Vampire/Reconstruct.lean` keeps the reference's script behind each of these, so a step
of a shape none of them reaches is slow rather than broken.
-/

set_option autoImplicit false

namespace Vampire.Avatar

open Lean Meta

/-! ## The lemmas that stand in for lambdas -/

theorem impOr {a b : Prop} (h : a → b) : ¬a ∨ b :=
  (Classical.em a).elim (fun ha => .inr (h ha)) .inl

theorem impOrNot {a b : Prop} (h : ¬a → b) : a ∨ b :=
  (Classical.em a).elim .inl (fun na => .inr (h na))

/-- `impOr`, with the tail of the chain converted on the way past. Partially applied to
`f` this is a function from the chain to the clause, which is what makes the walk a
composition of applications rather than a nest of lambdas. -/
theorem impOrMap {a b c : Prop} (f : b → c) (h : a → b) : ¬a ∨ c :=
  (impOr h).imp_right f

theorem impOrMapNot {a b c : Prop} (f : b → c) (h : ¬a → b) : a ∨ c :=
  (impOrNot h).imp_right f

/-! ## A split name is its component -/

/-- One defining equation substituted into `goal`. See `substAll`. -/
private def substOne (goal : Expr) (ty : Expr) (forwards : Bool) : MetaM (Option Expr) := do
  let some (lhs, rhs) :=
      ty.iff? <|> ty.eq?.map (fun (_, l, r) => (l, r))
    | return none
  let (from_, to) := if forwards then (lhs, rhs) else (rhs, lhs)
  if from_ == to then return some goal
  unless ← isDefEq lhs rhs do return none
  return some (goal.replace fun e => if e == from_ then some to else none)

/--
Substitute the two sides of each defining equation `hᵢ : lhs ↔ rhs` in `goal`, `lhs` for
`rhs` where `forwards` and the other way where not — the `rw [hᵢ]` and `rw [← hᵢ]` lines
`LeanChecker::avatarSplitClause` writes.

`none` where a side is not definitionally the other, which is the guard that makes the
substitution sound: an AVATAR split is a `let`-bound name for its component, so the two
are the same term after `zeta` and replacing one by the other cannot change what the
formula means. The check is on the pair, not on the formula — unfolding one `let` rather
than deciding two formulas equal.

Nothing is captured: a split's component is variable-disjoint from the rest of the
clause by construction, so it is closed, and so is the name.
-/
def substAll (goal : Expr) (defs : Array (Expr × Bool)) : MetaM (Option Expr) := do
  let mut out := goal
  for (ty, forwards) in defs do
    let some next ← substOne out ty forwards | return none
    out := next
  return some out

/-! ## An implication chain is a clause -/

private def falseE : Expr := .const ``False []

/-- `¬a`, as `Not a` and not as `a → False`: the literal a clause holds is the one
`Clause.polarity` reads, and it reads `Not`. -/
private def notE (a : Expr) : Expr := mkApp (.const ``Not []) a

/--
`ty` read as a clause: the type of the disjunction `unimply` produces from it, and a
function from `ty` to that disjunction. `none` where `ty` is not an implication chain
over `Prop`s, in which case there is nothing to do and the caller leaves it alone.

The walk stops at `A → False`, because that *is* `¬A` and so is a literal already —
which is also where `not_not` comes in: `¬¬X` is a literal spelled the way no clause
spells it, and `Sat.ofNotNot` is the application that fixes it.
-/
partial def clauseOf (ty : Expr) : MetaM (Option (Expr × Expr)) := do
  let some (a, b) := arrow? ty | return none
  -- `A → False` is `¬A`. A literal, and the end of the chain.
  if b.consumeMData.isConstOf ``False then
    return some (← lastLit a)
  match ← clauseOf b with
  | none =>
    -- One arrow, over a tail that is not itself a chain: `¬A ∨ b`.
    let (lit, wrap) ← headLit a b b (← identity b)
    return some (lit, wrap)
  | some (tailTy, tailFn) =>
    let (lit, wrap) ← headLit a b tailTy tailFn
    return some (lit, wrap)
where
  /-- A non-dependent arrow between `Prop`s. A dependent one is a `∀` and not a clause;
  an arrow between anything else is not a literal. -/
  arrow? (e : Expr) : Option (Expr × Expr) := do
    let .forallE _ d b _ := e.consumeMData | none
    if b.hasLooseBVars then none else some (d, b)

  identity (t : Expr) : MetaM Expr := pure (mkApp (.const ``id [Level.zero]) t)

  /-- The last link, `A → False`, as the literal it already is. -/
  lastLit (a : Expr) : MetaM (Expr × Expr) := do
    -- `¬¬X` is `¬X → False`; the literal the clause wants is `X`.
    if let some inner := a.consumeMData.not? then
      return (inner, mkApp (.const ``Sat.ofNotNot []) inner)
    return (notE a, mkApp (.const ``id [Level.zero]) (notE a))

  /-- One link of the chain, over a tail already converted to `tailTy` by `tailFn`. -/
  headLit (a b tailTy tailFn : Expr) : MetaM (Expr × Expr) := do
    if let some inner := a.consumeMData.not? then
      return (mkApp2 (.const ``Or []) inner tailTy,
              mkAppN (.const ``impOrMapNot []) #[inner, b, tailTy, tailFn])
    return (mkApp2 (.const ``Or []) (notE a) tailTy,
            mkAppN (.const ``impOrMap []) #[a, b, tailTy, tailFn])

/-! ## A contradiction clause is a resolution -/

/--
A proof of `goal` from `h : ty`, where `ty` is the parent's implication chain and `goal`
the SAT clause AVATAR gave the conclusion. `none` where the chain does not read as a
clause or the propagation does not reach the conflict.
-/
def contradiction (ty h goal : Expr) : MetaM (Option Expr) := do
  let (clauseTy, fn) ←
    match ← clauseOf ty with
    | some (t, f) => pure (t, mkApp f h)
    | none => pure (ty, h)
  -- The conclusion is the same literals in the order Vampire's SAT solver holds them,
  -- so this is a one-premise resolution and not an `exact`.
  return Clause.resolve #[(clauseTy, fn)] goal

end Vampire.Avatar

/-! ## The tactics -/

namespace Vampire.Avatar

open Lean Elab Tactic Meta

/--
Substitute the AVATAR split definitions named, in the goal — `rw [hᵢ]` for the ones
listed first and `rw [← hᵢ]` for the ones listed second, in one pass and with no
rewriting. See `substAll` for why that is sound.
-/
syntax (name := vampireSplitDefs) "vampire_split_defs"
  " [" (ident),* "]" " [" (ident),* "]" : tactic

elab_rules : tactic
  | `(tactic| vampire_split_defs [$fwd,*] [$bwd,*]) => do
    let g ← getMainGoal
    g.withContext do
      let mut defs : Array (Expr × Bool) := #[]
      -- The reference emits the againsts first, and the two orders are not the same
      -- substitution when one component mentions another's name.
      for h in bwd.getElems do
        defs := defs.push (← instantiateMVars (← (← getFVarId h).getType), false)
      for h in fwd.getElems do
        defs := defs.push (← instantiateMVars (← (← getFVarId h).getType), true)
      let ty ← instantiateMVars (← g.getType)
      let some next ← substAll ty defs
        | throwError "vampire_split_defs: a split definition is not a defining equation"
      if next == ty then return
      let m ← mkFreshExprSyntheticOpaqueMVar next
      -- Ascribed rather than assigned bare: the two are definitionally equal and the
      -- kernel is what checks it, so the cast has to be in the term.
      g.assign (← mkExpectedTypeHint m ty)
      replaceMainGoal [m.mvarId!]

/--
Read `h`'s implication chain as a clause, in place. `imp_iff_not_or` and `not_not` over
the shape they always have here, as applications rather than as a simp set; a no-op
where `h` is not a chain, which is the common case and the whole point of not running
simp to discover it.
-/
syntax (name := vampireUnimply) "vampire_unimply" ident : tactic

elab_rules : tactic
  | `(tactic| vampire_unimply $h:ident) => do
    let g ← getMainGoal
    let (fv, ty) ← g.withContext do
      let fv ← getFVarId h
      pure (fv, ← instantiateMVars (← fv.getType))
    let some (clauseTy, fn) ← g.withContext (clauseOf ty) | return
    let r ← g.replace fv (mkApp fn (.fvar fv)) clauseTy
    replaceMainGoal [r.mvarId]

/-- Close an `avatar contradiction clause` from its parent. -/
syntax (name := vampireContradiction) "vampire_contradiction" ident : tactic

elab_rules : tactic
  | `(tactic| vampire_contradiction $h:ident) => do
    let g ← getMainGoal
    g.withContext do
      let fv ← getFVarId h
      let ty ← instantiateMVars (← fv.getType)
      let goal ← instantiateMVars (← g.getType)
      if ty.hasExprMVar || goal.hasExprMVar then
        throwError "vampire_contradiction: the step's statement is not yet determined"
      let some pf ← contradiction ty (.fvar fv) goal
        | throwError "vampire_contradiction: the parent does not propagate to the clause"
      try check pf
      catch e =>
        throwError "vampire_contradiction: built a proof that does not typecheck\
          {indentD (← e.toMessageData.toString)}"
      g.assign pf
      replaceMainGoal []

end Vampire.Avatar
