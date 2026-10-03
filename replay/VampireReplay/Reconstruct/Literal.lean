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
Whether a term is arithmetic, which two terms equal as numbers may differ in: a
sum, a product, a difference, a negation, a numeral or its multiple, or a cast.
-/
private def arithmetic (e : Expr) : Bool :=
  match e.getAppFn with
  | .const c _ =>
    c == ``HAdd.hAdd || c == ``HSub.hSub || c == ``HMul.hMul || c == ``HDiv.hDiv
      || c == ``Neg.neg || c == ``OfNat.ofNat || c == ``OfScientific.ofScientific
      || c == ``linMul || c == ``Nat.cast || c == ``Int.cast || c == `Rat.cast
  | _ => false

/--
Whether ALASCA's unifier reads a term as arithmetic, which is narrower: a sum,
a numeral's multiple (`linMul`) or the numeral one (`UnificationWithAbstraction.cpp`,
`alasca`, its `interpreted`). Every other symbol, a product of two terms or a
cast among them, it unifies argument by argument, as it does an uninterpreted
one.
-/
private def unifierArithmetic (e : Expr) : Bool :=
  e.isAppOf ``HAdd.hAdd || e.isAppOf ``linMul || e.nat? == some 1

/--
`a = b` where the two are one up to the identities of a commutative ring, at
any depth; `none` where they are not. Nothing is decided about numbers: a
certificate that relates its terms to a step's by ring arithmetic alone asks
this, and a term that is not the one it looks for is not an error.
-/
def ringEqual (a b : Expr) : ReconstructM (Option Expr) := do
  if a == b then return some (← mkEqRefl a)
  let normal ← (← read).ringNormalForms #[a, b]
  unless ← sameUpToInstances normal[0]!.1 normal[1]!.1 do
    return none
  let same ← mkEqTrans normal[0]!.2 (← mkEqSymm normal[1]!.2)
  return some (← mkExpectedTypeHint same (← mkEq a b))

/--
The pair of `equal`, an abstracting unifier's deferred pairs with what says
each is equal, that `difference` is: `x`, `y`, `x = y` and `difference = x - y`,
or `none`. ALASCA's unifier defers two terms it cannot unify as `P ≠ N`, where
`P - N` is their difference split into its positive and negative monomials
(`UnificationWithAbstraction.cpp`, `alasca`): the pair is the one whose
difference, either way round as vampire shares the constraint, has the same
normal form.
-/
private def deferredPair (equal : Array (Expr × Expr × Expr)) (difference : Expr) :
    ReconstructM (Option (Expr × Expr × Expr × Expr)) := do
  let candidates := equal.flatMap fun (x, y, p) => #[(x, y, p, false), (y, x, p, true)]
  let differences ← candidates.mapM fun (x, y, _, _) => mkAppM ``HSub.hSub #[x, y]
  let normals ← (← read).ringNormalForms (#[difference] ++ differences)
  let some i := (normals.extract 1 normals.size).findIdx? (·.1 == normals[0]!.1)
    | return none
  let (x, y, p, flipped) := candidates[i]!
  let he ← mkEqTrans normals[0]!.2 (← mkEqSymm normals[i + 1]!.2)
  return some (x, y, ← if flipped then mkEqSymm p else pure p, he)

/--
The summands of `e` as ALASCA's unifier reads a sum (`iterAtoms`): each term
it does not read as arithmetic, with the numeral it is multiplied by, times
`k`, onto `out`; a numeral as its value times `one`.
-/
private partial def summandsOf (one e : Expr) (k : Rat) (out : Array (Expr × Rat)) :
    Array (Expr × Rat) :=
  if e.isAppOfArity ``HAdd.hAdd 6 then
    summandsOf one e.appArg! k (summandsOf one e.appFn!.appArg! k out)
  else if let some c := numeralValue? e then out.push (one, k * c)
  else if e.isAppOfArity ``linMul 4 then
    match numeralValue? e.appFn!.appArg! with
    | some c => summandsOf one e.appArg! (k * c) out
    | none => out.push (e, k)
  else out.push (e, k)

/--
`a = b` for two sums ALASCA's unifier unified with no variable left among
their summands (`alasca`, its last case). Their difference, summand by summand,
falls into groups by head symbol, each summing to zero: a group it deferred as
a pair (`deferredPair`), or else one with a single summand of one sign, which
it unified with each of the other sign, `unify` saying when two are one. `none`
where a group is neither. Summands identical by now are one: the unifier read
them before it bound what made them so.
-/
private def bySummands (equal : Array (Expr × Expr × Expr))
    (unify : Expr → Expr → ReconstructM (Option Expr)) (a b : Expr) :
    ReconstructM (Option Expr) := do
  let τ ← inferType a
  let one ← wholeNumeral τ 1
  let mut difference : Array (Expr × Rat) := #[]
  for (t, k) in summandsOf one b (-1) (summandsOf one a 1 #[]) do
    match difference.findIdx? (·.1 == t) with
    | some i => difference := difference.modify i fun (t, c) => (t, c + k)
    | none => difference := difference.push (t, k)
  difference := difference.filter (·.2 != 0)
  let linear (summands : Array (Expr × Rat)) : ReconstructM Expr := do
    let terms ← summands.mapM fun (t, c) => do mkAppM ``HMul.hMul #[← ratNumeral τ c, t]
    terms.foldlM (fun sum t => mkAppM ``HAdd.hAdd #[sum, t]) (← wholeNumeral τ 0)
  -- Each `c (u - v)` with `u = v`, which the difference is the sum of.
  let mut pieces : Array (Rat × Expr × Expr × Expr) := #[]
  let mut heads : Array Expr := #[]
  for (t, _) in difference do
    unless heads.contains t.getAppFn do heads := heads.push t.getAppFn
  for head in heads do
    let group := difference.filter (·.1.getAppFn == head)
    unless group.foldl (· + ·.2) (0 : Rat) == 0 do return none
    if let some (x, y, h, _) ← deferredPair equal (← linear group) then
      pieces := pieces.push (1, x, y, h)
      continue
    let negative := group.filter (·.2 < 0)
    let positive := group.filter (·.2 > 0)
    let some (single, others) :=
        if negative.size == 1 then some (negative[0]!.1, positive)
        else if positive.size == 1 then some (positive[0]!.1, negative)
        else none
      | return none
    for (t, c) in others do
      let some h ← unify single t | return none
      pieces := pieces.push (c, t, single, ← mkEqSymm h)
  if pieces.isEmpty then return none
  -- `x = y`, for `x` the sum of each `c u` and `y` of each `c v`.
  let add ← mkAppOptM ``HAdd.hAdd #[τ, τ, τ, none]
  let mul ← mkAppOptM ``HMul.hMul #[τ, τ, τ, none]
  let mut sum : Option (Expr × Expr × Expr) := none
  for (c, u, v, h) in pieces do
    let k ← ratNumeral τ c
    let hk ← mkCongrArg (mkApp mul k) h
    sum := some <| ← match sum with
      | none => pure (mkApp2 mul k u, mkApp2 mul k v, hk)
      | some (x, y, hs) => do
        pure (mkApp2 add x (mkApp2 mul k u), mkApp2 add y (mkApp2 mul k v),
          ← mkCongr (← mkCongrArg add hs) hk)
  let some (x, y, h) := sum | return none
  let normals ← (← read).ringNormalForms
    #[← mkAppM ``HSub.hSub #[a, b], ← mkAppM ``HSub.hSub #[x, y]]
  unless normals[0]!.1 == normals[1]!.1 do return none
  let he ← mkEqTrans normals[0]!.2 (← mkEqSymm normals[1]!.2)
  return some (← mkAppM `Vampire.Lemmas.eq_of_sub_eq #[h, he])

/--
`a = b`, for two terms ALASCA's unifier unified, where `equal` are the pairs it
deferred with what says each is equal; `none` where they are not.

Its unifier works up to arithmetic: `f(X + 1)` and `f(a)` unify by `X ↦ a - 1`,
which makes them equal as numbers rather than one term. So the two are
descended as the unifier descends them, and an arithmetic pair is first asked
whether it is equal as numbers, in ring normal form. If not, the unifier's own
reading decides: a sum or a multiple, which it reads as arithmetic, is a pair
it deferred or one it matched summand by summand (`bySummands`), and anything
else -- an uninterpreted symbol, but also a product of two terms or a cast --
it unified argument by argument. Only arithmetic is
normalised: normalising a whole literal would let the normaliser rewrite the
proposition itself, `t = t` to `True` where a predicate unfolds to an equation.
-/
partial def equalModuloRing (equal : Array (Expr × Expr × Expr)) (a b : Expr) :
    ReconstructM (Option Expr) := do
  let rec go (a b : Expr) : ReconstructM (Option Expr) := do
    if a == b then return some (← mkEqRefl a)
    for (x, y, p) in equal do
      if x == a && y == b then return some p
      if x == b && y == a then return some (← mkEqSymm p)
    if arithmetic a || arithmetic b then
      if let some h ← ringEqual a b then return some h
    if unifierArithmetic a || unifierArithmetic b then
      if equal.isEmpty then return none
      if let some (_, _, h, he) ← deferredPair equal (← mkAppM ``HSub.hSub #[a, b]) then
        return some (← mkAppM `Vampire.Lemmas.eq_of_sub_eq #[h, he])
      return ← bySummands equal go a b
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
  let some same ← go a b | return none
  return some (← mkExpectedTypeHint same (← mkEq a b))

/--
`h`, a literal, stated the way round `part` states its equation. Vampire shares
an equation with its sides in an order of its own, so which way round `part`
has them is read off the two: turned where `h`'s left side is `part`'s right
side and not its left, `same` saying when two sides are one.
-/
def orientedAs (h part : Expr) (same : Expr → Expr → ReconstructM Bool) :
    ReconstructM Expr := do
  let said ← instantiateMVars (← inferType h)
  let (some (_, a, _, _), some (_, c, d, _)) := (equalityLiteral? said, equalityLiteral? part)
    | return h
  if ← same a c then return h
  unless ← same a d do return h
  return (← flipEquality h).getD h

/--
`target` from two complementary literals: `negative`, which the step's
literal says is the negative one, and `positive`, its complement at the same
substitution. The two are one atom, as terms or -- where ALASCA's unifier
solved an equation, which makes them equal as numbers -- as numbers, a ring's
normal forms deciding at each arithmetic subterm. An equation can be stated
the other way round, which its sides say (`orientedAs`).
-/
def closeComplementary (target negative positive : Expr) : ReconstructM Expr := do
  let deny ← instantiateMVars (← inferType negative)
  let some refuted := asNegation deny
    | throwError "the literal{indentExpr deny}\nthe step resolved as negative is no negation"
  let positive ← orientedAs positive refuted fun a b => pure (a == b)
  let stated ← instantiateMVars (← inferType positive)
  let some same ← equalModuloRing #[] stated refuted
    | throwError "the literals{indentExpr stated}\nand{indentExpr deny}\nare not complementary"
  mkAppOptM ``absurd #[some refuted, some target, some (← mkEqMP same positive), some negative]

/--
`s = t` from `h`, an equation as ALASCA states it -- `e = 0`, or `0 = e`, for an
`e` that is `k (s - t)` up to the ring, `k` a numeral other than zero -- which
is the rewrite it makes of it (`Vampire.Lemmas.eq_of_scaled`). `zero` is the
zero the equation is stated with; `none` where `h` is no such equation.
-/
def scaledEquation (h k s t zero : Expr) : ReconstructM (Option Expr) := do
  let stated ← instantiateMVars (← inferType h)
  let some (_, a, b) := stated.eq? | return none
  let (e, h) ← if a == zero then pure (b, ← mkEqSymm h) else pure (a, h)
  let some he ← ringEqual e (← mkAppM ``HMul.hMul #[k, ← mkAppM ``HSub.hSub #[s, t]])
    | return none
  let hk ← (← read).numerically (← mkAppM ``Ne #[k, zero])
  return some (← mkAppM `Vampire.Lemmas.eq_of_scaled #[hk, h, he])

/--
`target` from `h`, a literal the step's clause states with the polarity
`positive` says, and `other`, its complement: `closeComplementary`, the negative
one first.
-/
def closeByPolarity (target h other : Expr) (positive : Bool) : ReconstructM Expr :=
  if positive then closeComplementary target other h else closeComplementary target h other

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
