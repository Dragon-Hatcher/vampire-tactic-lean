import VampireReplay.Reconstruct.Choice
import VampireReplay.Reconstruct.Junction

namespace Vampire.Reconstruct

open Lean Meta

/--
An equality literal taken apart: the sort it is at, its two sides, and whether
it is denied. `none` for any other literal.
-/
def equalityLiteral? (e : Expr) : Option (Expr × Expr × Expr × Bool) :=
  let (inner, negated) := match e.not? with
    | some inner => (inner, true)
    | none => (e, false)
  if inner.isAppOfArity ``Eq 3 then
    match inner.getAppArgs with
    | #[τ, lhs, rhs] => some (τ, lhs, rhs, negated)
    | _ => none
  else none

/--
A proof of an equality literal the other way round, from `h`, a proof of it as
`equalityLiteral?` took it apart: `Eq.symm` of an equation, `Ne.symm` of a
denied one.

Written out rather than found: this is asked of every literal of every clause
an inference carries, and what it is asked of says it already.
-/
def symmLiteral (τ lhs rhs : Expr) (negated : Bool) (h : Expr) : ReconstructM Expr := do
  let level ← getLevel τ
  unless negated do return mkApp4 (mkConst ``Eq.symm [level]) τ lhs rhs h
  -- Stated `¬rhs = lhs`, as a clause states a denied equation, not `rhs ≠ lhs`.
  let turned := mkNot (mkApp3 (mkConst ``Eq [level]) τ rhs lhs)
  return mkExpectedTypeHint' (mkApp4 (mkConst ``Ne.symm [level]) τ lhs rhs h) turned
where
  mkExpectedTypeHint' (e type : Expr) : Expr :=
    mkApp2 (mkConst ``id [Level.zero]) type e

/--
A proof of the same literal with an equality's arguments the other way round,
if it is an equality at all.

Vampire's equality literals are unordered: matching one against another tries
both orientations, so a literal carried into a conclusion or resolved against
can come back the other way round.
-/
def flipEquality (h : Expr) : ReconstructM (Option Expr) := do
  let some (τ, lhs, rhs, negated) := equalityLiteral? (← instantiateMVars (← inferType h))
    | return none
  return some (← symmLiteral τ lhs rhs negated h)

/--
Whether ALASCA's unifier reads a term as arithmetic: a sum, a product, a
difference, a negation or a numeral, rather than an uninterpreted symbol
applied, which it unifies argument by argument.
-/
private def arithmetic (e : Expr) : Bool :=
  match e.getAppFn with
  | .const c _ =>
    c == ``HAdd.hAdd || c == ``HSub.hSub || c == ``HMul.hMul || c == ``HDiv.hDiv
      || c == ``Neg.neg || c == ``OfNat.ofNat || c == ``OfScientific.ofScientific
      || c == ``Nat.cast || c == ``Int.cast || c == `Rat.cast
  | _ => false

/--
`a = b`, for two terms ALASCA's unifier unified, where `equal` are the pairs it
deferred with what says each is equal; `none` where they are not.

Its unifier works up to arithmetic: `f(X + 1)` and `f(a)` unify by `X ↦ a - 1`,
which makes them equal as numbers rather than one term. So the two are compared
in ring normal form, with the deferred pairs, their atoms numbered alike -- a
unification it solved is then one term -- and descended as the unifier
descends them: two applications of one uninterpreted symbol argument by
argument, and anything it reads as arithmetic as a question about numbers,
which the deferred pairs are facts for.
-/
partial def equalModuloRing (equal : Array (Expr × Expr × Expr)) (a b : Expr) :
    ReconstructM (Option Expr) := do
  if a == b then return some (← mkEqRefl a)
  let normal ← (← read).ringNormalForms
    (#[a, b] ++ equal.flatMap fun (x, y, _) => #[x, y])
  -- What says each normal form is what it normalises.
  let normalEq (i : Nat) (h : Expr) : MetaM Expr := do
    mkEqTrans (← mkEqSymm normal[2 * i + 2]!.2) (← mkEqTrans h normal[2 * i + 3]!.2)
  let pairs ← equal.zipIdx.mapM fun ((_, _, h), i) => do
    return (normal[2 * i + 2]!.1, normal[2 * i + 3]!.1, ← normalEq i h)
  let rec go (a b : Expr) : ReconstructM (Option Expr) := do
    if a == b then return some (← mkEqRefl a)
    for (x, y, p) in pairs do
      if x == a && y == b then return some p
      if x == b && y == a then return some (← mkEqSymm p)
    if arithmetic a || arithmetic b then
      -- ALASCA's unifier defers two terms it cannot unify as `P ≠ N`, where
      -- `P - N` is their difference split into its positive and negative
      -- monomials (`UnificationWithAbstraction.cpp`, `alasca`): the pair for
      -- these two is the one with their difference, either way round as
      -- vampire shares the constraint, and `a = b` follows from it.
      if pairs.isEmpty then return none
      let difference ← mkAppM ``HSub.hSub #[a, b]
      let candidates := pairs.flatMap fun (x, y, p) => #[(x, y, p, false), (y, x, p, true)]
      let differences ← candidates.mapM fun (x, y, _, _) => mkAppM ``HSub.hSub #[x, y]
      let normals ← (← read).ringNormalForms (#[difference] ++ differences)
      for ((_, _, p, flipped), i) in candidates.zipIdx do
        unless normals[i + 1]!.1 == normals[0]!.1 do continue
        let he ← mkEqTrans normals[0]!.2 (← mkEqSymm normals[i + 1]!.2)
        let h ← if flipped then mkEqSymm p else pure p
        return some (← mkAppM `Vampire.Lemmas.eq_of_sub_eq #[h, he])
      return none
    unless a.isApp && b.isApp do return none
    let as := a.getAppArgs
    let bs := b.getAppArgs
    unless a.getAppFn == b.getAppFn && as.size == bs.size do return none
    let mut proof ← mkEqRefl a.getAppFn
    for (x, y) in as.zip bs do
      -- An argument one up to instances -- the instance itself, where a lemma
      -- states over a class what replay reads over the type's own -- is one.
      if x == y || (← sameUpToInstances x y) then
        proof ← mkCongrFun proof x
      else
        let some p ← go x y | return none
        proof ← mkCongr proof p
    return some proof
  let some same ← go normal[0]!.1 normal[1]!.1 | return none
  let same ← mkEqTrans normal[0]!.2 (← mkEqTrans same (← mkEqSymm normal[1]!.2))
  return some (← mkExpectedTypeHint same (← mkEq a b))
where
  sameUpToInstances (x y : Expr) : ReconstructM Bool :=
    withNewMCtxDepth <| withTransparency .instances <| isDefEq x y

/--
`a = b` where the two are one up to the identities of a commutative ring, at
any depth; `none` where they are not. Nothing is decided about numbers: a
certificate that relates its terms to a step's by ring arithmetic alone asks
this, and a term that is not the one it looks for is not an error.
-/
def ringEqual (a b : Expr) : ReconstructM (Option Expr) := do
  if a == b then return some (← mkEqRefl a)
  let normal ← (← read).ringNormalForms #[a, b]
  unless normal[0]!.1 == normal[1]!.1 ||
      (← withNewMCtxDepth <| withTransparency .instances <| isDefEq normal[0]!.1 normal[1]!.1) do
    return none
  let same ← mkEqTrans normal[0]!.2 (← mkEqSymm normal[1]!.2)
  return some (← mkExpectedTypeHint same (← mkEq a b))

/--
`target` from two complementary literals: `negative`, which the step's
literal says is the negative one, and `positive`, its complement at the same
substitution. The two are one atom, but that vampire's equality literals are
unordered, so the positive one can state its equation the other way round,
which the two themselves say.
-/
def closeComplementary (target negative positive : Expr) : ReconstructM Expr := do
  let deny ← instantiateMVars (← inferType negative)
  let some refuted := asNegation deny
    | throwError "the literal{indentExpr deny}\nthe step resolved as negative is no negation"
  let stated ← instantiateMVars (← inferType positive)
  -- One atom, as terms or -- where ALASCA's unifier solved an equation, which
  -- makes them equal as numbers -- as numbers, a ring's normal forms deciding
  -- at each arithmetic subterm; an equation's sides either way round, which
  -- the normal forms say.
  if let some same ← equalModuloRing #[] stated refuted then
    return ← mkAppOptM ``absurd #[some refuted, some target, some (← mkEqMP same positive),
      some negative]
  if let some flipped ← flipEquality positive then
    if let some same ← equalModuloRing #[] (← instantiateMVars (← inferType flipped)) refuted then
      return ← mkAppOptM ``absurd #[some refuted, some target, some (← mkEqMP same flipped),
        some negative]
  throwError "the literals{indentExpr stated}\nand{indentExpr deny}\nare not complementary"

/--
`target` from two literals complementary up to the pairs an abstracting
unifier deferred, `equal`, with what says each is equal: a step that resolved
two literals it did not make one.
-/
def closeComplementaryModulo (target negative positive : Expr)
    (equal : Array (Expr × Expr × Expr)) : ReconstructM Expr := do
  let deny ← instantiateMVars (← inferType negative)
  let some refuted := asNegation deny
    | throwError "the literal{indentExpr deny}\nthe step resolved as negative is no negation"
  let stated ← instantiateMVars (← inferType positive)
  let some same ← equalModuloRing equal stated refuted
    | throwError "the literals{indentExpr stated}\nand{indentExpr deny}\nare not complementary \
        up to what the unifier deferred:{MessageData.joinSep (equal.toList.map fun (x, y, _) =>
          m!"{indentExpr x}\n  ={indentExpr y}") ""}"
  mkAppOptM ``absurd #[some refuted, some target, some (← mkEqMP same positive), some negative]

/--
`target` from `h`, a literal a step dropped because nothing makes it hold:
`t ≠ t`, which removing trivial inequalities leaves, and `⊥` or `¬⊤`, which
simplifying away a truth value leaves. `none` for any other literal.
-/
def refuteDropped? (target h : Expr) : ReconstructM (Option Expr) := do
  let stated ← instantiateMVars (← inferType h)
  if stated.isConstOf ``False then
    return some (← mkAppOptM ``False.elim #[some target, some h])
  let some inner := asNegation stated | return none
  if inner.isConstOf ``True then
    return some (← mkAppOptM ``absurd
      #[some inner, some target, some (mkConst ``True.intro), some h])
  if let some (_, a, b) := inner.eq? then
    if ← sameFormula a b then
      return some (← mkAppOptM ``absurd #[some inner, some target, some (← mkEqRefl a), some h])
  return none

/--
`a` from `¬¬a`, with both written out.

`mkAppM` would find them again from the proof it is given, which for a proof
the size of a clausification's is the whole of it.
-/
def ofNotNot (a : Expr) (h : Expr) : Expr :=
  let negated := mkApp (mkConst ``Not) a
  mkApp4 (mkConst ``Iff.mp) (mkApp (mkConst ``Not) negated) a
    (mkApp (mkConst ``Classical.not_not) a) h

/--
What a fact says, with any double negation taken off it.

A clause's literal can be a negative one, so what says it fails says a double
negation, where the lemma a fact is handed to states the literal itself.
-/
partial def plainly (h : Expr) : ReconstructM Expr := do
  let stated ← instantiateMVars (← inferType h)
  if let some inner := stated.not? then
    if let some innermost := inner.not? then
      return ← plainly (ofNotNot innermost h)
  -- `a → False` is `¬a` too, and is what a refutation built here states; a
  -- lemma states `¬a`, so it is said again that way.
  if let some inner := asNegation stated then
    if let some innermost := inner.not? then
      return ← plainly (ofNotNot innermost h)
    unless stated.not?.isSome do
      return ← mkExpectedTypeHint h (mkApp (mkConst ``Not) inner)
  return h

end Vampire.Reconstruct
