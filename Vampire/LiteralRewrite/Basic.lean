import Mathlib.Tactic.Ring.RingNF
import Mathlib.Tactic.NormNum
import Mathlib.Data.Rat.Floor
import Mathlib.Algebra.Order.Floor.Ring
import VampireReplay.Reconstruct.Monad

/-!
What the ports of vampire's literal-wise simplifications share: reading the
terms replay states back as the numerals and operations vampire wrote, and the
few ways a rewrite is proved.

Every term here was stated by replay from one of vampire's own, so a numeral
is written the one way `wholeNumeral` writes it -- `OfNat.ofNat`, negated
with `Neg.neg` and divided with `HDiv.hDiv` -- and an operation the one way
`interpreted` writes it.
-/

namespace Vampire.LiteralRewrite

open Lean Meta Mathlib.Tactic

/-- Whether `α` is one of the sorts of numbers vampire's rules act on. -/
def numeric (α : Expr) : Bool :=
  α.isConstOf ``Int || α.isConstOf ``Rat || α.isConstOf `Real

/-- Whether `α` is the integers. -/
def integral (α : Expr) : Bool := α.isConstOf ``Int

/-- The sort of numbers `e` is a term of, if it is one. -/
def sortOf? (e : Expr) : MetaM (Option Expr) := do
  let α ← instantiateMVars (← inferType e)
  return if numeric α then some α else none

/-- `n` for the numeral `OfNat.ofNat α n _`. -/
def natLit? (e : Expr) : Option Nat :=
  match e.getAppFnArgs with
  | (``OfNat.ofNat, #[_, .lit (.natVal n), _]) => some n
  | _ => none

/-- A whole numeral: `n`, or `-n` for a positive `n`, as vampire writes one. -/
def wholeNumeral? (e : Expr) : Option Int :=
  match natLit? e with
  | some n => some n
  | none => match e.getAppFnArgs with
    | (``Neg.neg, #[_, _, a]) => match natLit? a with
      | some n => if n == 0 then none else some (-(n : Int))
      | none => none
    | _ => none

/--
The number `e` is, if it is one of vampire's numerals: a whole number, or at
the rationals and the reals a fraction in lowest terms. A division that is not
one -- `2 / 4`, `3 / 1` -- is a division, which evaluation evaluates.
-/
def numeral? (e : Expr) : Option ℚ :=
  match wholeNumeral? e with
  | some n => some n
  | none => match e.getAppFnArgs with
    | (``HDiv.hDiv, #[α, _, _, _, a, b]) =>
      if integral α then none else do
        let n ← wholeNumeral? a
        let d ← natLit? b
        if d > 1 && n.natAbs.gcd d == 1 then some (mkRat n d) else none
    | _ => none

/-- The whole number `n` at `α`, written as replay writes it. -/
def wholeOf (α : Expr) (n : Int) : MetaM Expr := do
  let nat ← mkAppOptM ``OfNat.ofNat #[some α, some (mkRawNatLit n.natAbs), none]
  if n < 0 then mkAppM ``Neg.neg #[nat] else pure nat

/-- The number `q` at `α`, written as replay writes it. -/
def numeralOf (α : Expr) (q : ℚ) : MetaM Expr := do
  if q.den == 1 then return ← wholeOf α q.num
  mkAppM ``HDiv.hDiv #[← wholeOf α q.num, ← wholeOf α q.den]

/-- `p ↔ q` from `p ↔ m` and `m ↔ q`. -/
def trans (pm mq : Expr) : MetaM Expr := mkAppM ``Iff.trans #[pm, mq]

/-- `¬p ↔ ¬q` from `p ↔ q`. -/
def negated (pq : Expr) : MetaM Expr := mkAppM ``not_congr #[pq]

/-- `p ↔ p`. -/
def iffRefl (p : Expr) : MetaM Expr := mkAppM ``Iff.refl #[p]

/-- `p ↔ q` from `p = q`. -/
def iffOfEq (h : Expr) : MetaM Expr := mkAppM ``Iff.of_eq #[h]

/--
A proof of `p` for a statement about numerals that `norm_num` decides: its
evaluations, and no lemma but what takes a negation off `True` or `False`.
-/
def byNumerals (p : Expr) : MetaM Expr := do
  let thms ← [``not_true_eq_false, ``not_false_eq_true].foldlM
    (·.addConst ·) ({} : SimpTheorems)
  let ctx ← Simp.mkContext {} (simpTheorems := #[thms])
  let r ← Mathlib.Meta.NormNum.deriveSimp ctx (useSimp := true) p
  unless r.expr.isConstOf ``True do
    throwError "the numerals do not settle{indentExpr p}"
  mkAppM ``of_eq_true #[← r.getProof]

/--
A proof of `p` for a statement about whole numbers that evaluating it decides:
the integer divisions and remainders, which `norm_num` does not know.
-/
def byEvaluating (p : Expr) : MetaM Expr := do
  let decision ← mkDecide p
  unless ← withAtLeastTransparency .default <| isDefEq decision (mkConst ``true) do
    throwError "evaluating does not settle{indentExpr p}"
  mkDecideProof p

/--
The lemma `name` instantiated to state `expected`: its arguments found by
unifying what it states with `expected`, and any instance that leaves open
synthesized.
-/
def lemmaAt (name : Name) (expected : Expr) : MetaM Expr := do
  let c ← mkConstWithFreshMVarLevels name
  let (args, infos, type) ← forallMetaTelescopeReducing (← inferType c)
  unless ← isDefEq type expected do
    throwError "`{name}` does not state{indentExpr expected}"
  for arg in args, info in infos do
    if info.isInstImplicit && !(← arg.mvarId!.isAssigned) then
      arg.mvarId!.assign (← synthInstance (← inferType arg))
  instantiateMVars (mkAppN c args)

/-- A literal's atom and whether it is positive. -/
def atomOf (e : Expr) : Bool × Expr :=
  match e.not? with
  | some inner => (false, inner)
  | none => (true, e)

/-- `atom`, or its negation. -/
def signed (positive : Bool) (atom : Expr) : Expr :=
  if positive then atom else mkNot atom

/-- The relation a comparison of numbers states, with `>` and `≥` read as `<` and `≤`. -/
inductive Rel
  | lt | le | eq
  deriving BEq, Inhabited

/-- A literal comparing two numbers. -/
structure Comparison where
  positive : Bool
  rel : Rel
  sort : Expr
  lhs : Expr
  rhs : Expr
  deriving Inhabited

/--
`e` read as a comparison of numbers: `a > b` and `a ≥ b` as `b < a` and
`b ≤ a`, which they are by definition, and which is how replay states
`$greater` and `$greatereq` in the first place.
-/
def comparison? (e : Expr) : Option Comparison :=
  let (positive, atom) := atomOf e
  let read (rel : Rel) (α a b : Expr) : Option Comparison :=
    if numeric α then some { positive, rel, sort := α, lhs := a, rhs := b } else none
  match atom.getAppFnArgs with
  | (``LT.lt, #[α, _, a, b]) => read .lt α a b
  | (``LE.le, #[α, _, a, b]) => read .le α a b
  | (``GT.gt, #[α, _, a, b]) => read .lt α b a
  | (``GE.ge, #[α, _, a, b]) => read .le α b a
  | (``Eq, #[α, a, b]) => read .eq α a b
  | _ => none

/-- The atom a comparison states, `>` and `≥` written as `<` and `≤`. -/
def Comparison.atom (c : Comparison) : MetaM Expr :=
  match c.rel with
  | .lt => mkAppM ``LT.lt #[c.lhs, c.rhs]
  | .le => mkAppM ``LE.le #[c.lhs, c.rhs]
  | .eq => mkEq c.lhs c.rhs

/-- What a comparison states. -/
def Comparison.statement (c : Comparison) : MetaM Expr := do
  return signed c.positive (← c.atom)

/-- `e` in ring normal form throughout -- every ring subterm, inside uninterpreted
symbols too -- with the atoms numbered by `state`. -/
def ringNormal (state : IO.Ref AtomM.State) (e : Expr) : MetaM Simp.Result :=
  AtomM.recurse state {} true RingNF.evalExpr (RingNF.cleanup {}) e

/-- `a = b` by putting both into ring normal form, the atoms numbered alike. -/
private def ringEqNormal (a b : Expr) : MetaM (Option Expr) := do
  let state ← IO.mkRef {}
  let ra ← ringNormal state a
  let rb ← ringNormal state b
  -- Up to instances: a numeral in the normal form is built from whichever
  -- instance path its side came with.
  unless ra.expr == rb.expr || (← withReducibleAndInstances (isDefEq ra.expr rb.expr)) do
    return none
  return some (← mkEqTrans (← ra.getProof) (← mkEqSymm (← rb.getProof)))

/--
`a = b` for two terms, or two statements, that are one up to the identities
of a commutative ring: both are put into ring normal form, the atoms numbered
alike, and have to come out as one term. What certifies a rewrite a port of
vampire's has already decided on, never what decides it. ALASCA's `$lin_mul`
is read as the product it is.
-/
def ringEq (a b : Expr) : MetaM (Option Expr) := do
  if a == b then return some (← mkEqRefl a)
  let a' ← Vampire.Reconstruct.unfoldDefinitions a (only := (· == ``Vampire.Reconstruct.linMul))
  let b' ← Vampire.Reconstruct.unfoldDefinitions b (only := (· == ``Vampire.Reconstruct.linMul))
  let some h ← ringEqNormal a' b' | return none
  -- `a' = b'` is `a = b`: `linMul` unfolds to the product.
  return some (← mkExpectedTypeHint h (← mkEq a b))

/-- `ringEq`, failing where the two are not one. -/
def ringEq! (a b : Expr) : MetaM Expr := do
  let some h ← ringEq a b
    | throwError "{indentExpr a}\nis not{indentExpr b}\nup to the identities of a ring"
  return h

/-- The cast lemmas that move an integer out of `Int.cast`, as simp lemmas. -/
def castLemmas : MetaM SimpTheorems :=
  List.foldlM (·.addConst ·) ({} : SimpTheorems)
    [``Int.cast_add, ``Int.cast_sub, ``Int.cast_neg, ``Int.cast_mul, ``Int.cast_pow,
     ``Int.cast_ofNat, ``Int.cast_one, ``Int.cast_zero]

/-- `↑z = e`, for an integer `z` whose casts `castLemmas` move out -- a numeral's
cast evaluated, as `norm_num` evaluates it -- to leave `e` up to the identities
of a ring. -/
def castEq (zCast e : Expr) : MetaM Expr := do
  let ctx ← Simp.mkContext {} (simpTheorems := #[← castLemmas])
  let pushed ← Mathlib.Meta.NormNum.deriveSimp ctx (useSimp := true) zCast
  mkEqTrans (← pushed.getProof) (← ringEq! pushed.expr e)

/-- `f a₁ … aₙ = f b₁ … bₙ`, from what each argument was rewritten into, `none`
where none of them was. -/
def congrArgs (fn : Expr) (args : Array Expr) (rewritten : Array Simp.Result) :
    MetaM (Expr × Option Expr) := do
  let mut current := fn
  let mut rebuilt := fn
  let mut proof? : Option Expr := none
  for (arg, r) in args.zip rewritten do
    proof? ← match proof?, r.proof? with
      | none, none => pure none
      | some hf, none => some <$> mkCongrFun hf arg
      | none, some ha => some <$> mkCongrArg current ha
      | some hf, some ha => some <$> mkCongr hf ha
    current := mkApp current arg
    rebuilt := mkApp rebuilt r.expr
  return (rebuilt, proof?)

/-- `bottomUp`'s walk, each subterm's result kept in `seen`. -/
private partial def visit (step : Expr → MetaM (Option (Expr × Expr)))
    (seen : IO.Ref (Std.HashMap Expr Simp.Result)) (t : Expr) : MetaM Simp.Result := do
  if let some r := (← seen.get)[t]? then return r
  -- The subterms first: a term's arguments, never its head.
  let inner : Simp.Result ← match t with
    | .app .. => do
      let args := t.getAppArgs
      let rewritten ← args.mapM (visit step seen)
      let (rebuilt, proof?) ← congrArgs t.getAppFn args rewritten
      pure { expr := rebuilt, proof? }
    | .mdata d e => do
      let r ← visit step seen e
      pure { r with expr := .mdata d r.expr }
    | _ => pure { expr := t }
  let r ← match ← step inner.expr with
    | some (t', h) => pure { expr := t', proof? := some (← match inner.proof? with
        | some p => mkEqTrans p h
        | none => pure h) }
    | none => pure inner
  seen.modify (·.insert t r)
  return r

/--
`e` rewritten bottom-up by `step`, which is asked about each subterm once the
subterms under it have been rewritten, and never about what it rewrote a
subterm into -- which is how vampire's `BottomUpTermTransformer` visits a term.
Nothing else is rewritten, and nothing under a binder: a literal has none.

A term is rewritten in its arguments and never in its head: a symbol vampire
introduced is a definition applied to its arguments, and a symbol to vampire.
-/
def bottomUp (step : Expr → MetaM (Option (Expr × Expr))) (e : Expr) :
    MetaM Simp.Result := do
  visit step (← IO.mkRef {}) e

/--
`p ↔ q` where `p` is what a port made of a literal and `q` the literal vampire
made: the same statement, an equation perhaps turned round, which vampire
shares either way.
-/
def sameLiteral (p q : Expr) : MetaM (Option Expr) := do
  if ← withReducible (isDefEq p q) then
    return some (← mkExpectedTypeHint (← iffRefl p) (← mkAppM ``Iff #[p, q]))
  let (positive, atom) := atomOf p
  let some (_, a, b) := atom.eq? | return none
  let turned ← mkEq b a
  unless ← withReducible (isDefEq (signed positive turned) q) do return none
  let h ← mkAppOptM ``eq_comm #[none, some a, some b]
  let h ← if positive then pure h else negated h
  return some (← mkExpectedTypeHint h (← mkAppM ``Iff #[p, q]))

/-- `sameLiteral`, failing where vampire made something else. -/
def sameLiteral! (procedure : String) (premise p q : Expr) : MetaM Expr := do
  let some h ← sameLiteral p q
    | throwError "{procedure} makes{indentExpr p}\nof{indentExpr premise}\nbut \
        vampire made{indentExpr q}"
  return h

end Vampire.LiteralRewrite
