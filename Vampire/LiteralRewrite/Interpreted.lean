import Vampire.LiteralRewrite.Basic

/-!
Ports of the literal-wise simplifications that rewrite terms one operation at a
time: theory normalization (`Shell/InterpretedNormalizer.cpp`), interpreted
evaluation (`Kernel/InterpretedLiteralEvaluator.cpp`) and pushing unary minus
(`Inferences/PushUnaryMinus.cpp`).

Each port makes the rewrites its procedure makes, where it makes them and in
the order it does, and proves each by the lemma that says it: `a - b` becoming
`a + -b` by `sub_eq_add_neg`, `x * 1` becoming `x` by `mul_one`, and so on.
What it makes of a literal is then the literal vampire made, or the port is
wrong.
-/

namespace Vampire.LiteralRewrite

open Lean Meta

/-- What a procedure made of a literal `p`. -/
inductive Outcome
  /-- The literal `q`, with `p ↔ q`. -/
  | literal (q : Expr) (h : Expr)
  /-- A truth value, with `p ↔ True` or `p ↔ False`. -/
  | constant (value : Bool) (h : Expr)

/-- `p ↔ q` from what `bottomUp` made of `p`. -/
def resultIff (p : Expr) (r : Simp.Result) : MetaM Expr := do
  match r.proof? with
  | some h => iffOfEq h
  | none => iffRefl p

/-- `p ↔ True` or `p ↔ False`, from a proof of `p` or of `¬p`. -/
def decided (value : Bool) (proof : Expr) : MetaM Expr :=
  if value then mkAppM ``iff_true_intro #[proof] else mkAppM ``iff_false_intro #[proof]

/-- `a < b ↔ 0 < b + -a`, and that atom. -/
private def againstZero (α a b : Expr) : MetaM (Expr × Expr) := do
  let zero ← wholeOf α 0
  let diff ← mkAppM ``HAdd.hAdd #[b, ← mkAppM ``Neg.neg #[a]]
  let atom ← mkAppM ``LT.lt #[zero, diff]
  -- `0 < b - a ↔ a < b`, and `b - a = b + -a`.
  let sub ← mkAppOptM ``sub_pos #[some α, none, none, none, some b, some a]
  let motive ← withLocalDeclD `x α fun x => do mkLambdaFVars #[x] (← mkAppM ``LT.lt #[zero, x])
  let rewrite ← iffOfEq (← mkCongrArg motive (← mkAppM ``sub_eq_add_neg #[b, a]))
  return (atom, ← trans (← mkAppM ``Iff.symm #[sub]) rewrite)

/-! ### Theory normalization -/

/-- `a - b` becomes `a + -b`; `InterpretedNormalizer`'s `BinaryMinusTranslator`. -/
private def normalizationStep (e : Expr) : MetaM (Option (Expr × Expr)) := do
  let some _ ← sortOf? e | return none
  let (``HSub.hSub, #[_, _, _, _, a, b]) := e.getAppFnArgs | return none
  return some (← mkAppM ``HAdd.hAdd #[a, ← mkAppM ``Neg.neg #[b]],
    ← mkAppM ``sub_eq_add_neg #[a, b])

/--
`theory_normalization`: every subterm `a - b` becomes `a + -b`, bottom-up, and
then `a ≤ b` becomes `¬(b < a)` and `¬(a ≤ b)` becomes `b < a` (`$greater` and
`$greatereq` are `$less` and `$lesseq` swapped, which is how replay states them
already). The rest of what it translates -- a truncating or flooring quotient
into the rounding of a quotient, a cast into the sort a term is at -- replay
states as what it becomes to begin with.
-/
def theoryNormalization (p : Expr) : MetaM Outcome := do
  let r ← bottomUp normalizationStep p
  let p₁ := r.expr
  let h₁ ← resultIff p r
  let some c := comparison? p₁ | return .literal p₁ h₁
  unless c.rel == .le do return .literal p₁ h₁
  if c.positive then
    -- `a ≤ b ↔ ¬(b < a)`.
    let q := mkNot (← mkAppM ``LT.lt #[c.rhs, c.lhs])
    let h ← mkAppM ``Iff.symm #[← mkAppOptM ``not_lt #[some c.sort, none, some c.rhs, some c.lhs]]
    return .literal q (← trans h₁ h)
  -- `¬(a ≤ b) ↔ b < a`.
  let q ← mkAppM ``LT.lt #[c.rhs, c.lhs]
  let h ← mkAppOptM ``not_le #[some c.sort, none, some c.lhs, some c.rhs]
  return .literal q (← trans h₁ h)

/-! ### Interpreted evaluation -/

/-- How an integer division rounds its quotient. -/
inductive Rounding
  | euclidean | truncating | flooring
  deriving BEq

/-- A binary operation interpreted evaluation evaluates. -/
inductive Binary
  | add | sub | mul
  /-- Division at the rationals or the reals. -/
  | div
  | quot (r : Rounding)
  | rem (r : Rounding)
  deriving BEq

/-- `e` read as a binary operation of vampire's, as replay states it. -/
def binary? (e : Expr) : Option (Binary × Expr × Expr) :=
  match e.getAppFnArgs with
  | (``HAdd.hAdd, #[_, _, _, _, a, b]) => some (.add, a, b)
  | (``HSub.hSub, #[_, _, _, _, a, b]) => some (.sub, a, b)
  | (``HMul.hMul, #[_, _, _, _, a, b]) => some (.mul, a, b)
  | (``HDiv.hDiv, #[α, _, _, _, a, b]) =>
    some (if integral α then .quot .euclidean else .div, a, b)
  | (``HMod.hMod, #[α, _, _, _, a, b]) =>
    if integral α then some (.rem .euclidean, a, b) else none
  | (``Int.tdiv, #[a, b]) => some (.quot .truncating, a, b)
  | (``Int.fdiv, #[a, b]) => some (.quot .flooring, a, b)
  | (``Int.tmod, #[a, b]) => some (.rem .truncating, a, b)
  | (``Int.fmod, #[a, b]) => some (.rem .flooring, a, b)
  | _ => none

/-- The quotient of two whole numbers, rounded as `r` says. -/
def quotient (r : Rounding) (x y : Int) : Int :=
  match r with
  | .euclidean => x.ediv y
  | .truncating => x.tdiv y
  | .flooring => x.fdiv y

/-- The remainder of two whole numbers, their quotient rounded as `r` says. -/
def remainder (r : Rounding) (x y : Int) : Int :=
  match r with
  | .euclidean => x.emod y
  | .truncating => x.tmod y
  | .flooring => x.fmod y

/-- What `op` makes of two numbers, `none` where it is undefined: dividing by zero. -/
def Binary.eval (op : Binary) (x y : ℚ) : Option ℚ :=
  match op with
  | .add => some (x + y)
  | .sub => some (x - y)
  | .mul => some (x * y)
  | .div => if y == 0 then none else some (x / y)
  | .quot r => if y == 0 then none else some (quotient r x.num y.num)
  | .rem r => if y == 0 then none else some (remainder r x.num y.num)

/-- Whether `op` divides, which `TypedEvaluator::isDivision` asks. -/
def Binary.isDivision : Binary → Bool
  | .div | .quot _ => true
  | _ => false

/-- `e = out`, for a term of numerals and what it evaluates to. -/
def evaluatesTo (e out : Expr) : MetaM Expr := do
  let α ← inferType e
  let statement ← mkEq e out
  -- The integers' divisions `norm_num` does not know; everything whole is
  -- decided by evaluating it, and the rest by `norm_num`.
  if integral α && !e.isAppOf ``Int.floor && !e.isAppOf ``Int.ceil then
    byEvaluating statement
  else
    byNumerals statement

/-- `e` rewritten to `out` by the lemma `proof`, stated as such. -/
private def rewrote (e out proof : Expr) : MetaM (Option (Expr × Expr)) := do
  return some (out, ← mkExpectedTypeHint proof (← mkEq e out))

/--
What `TypedEvaluator::tryEvaluateFunc` and `ConversionEvaluator` make of a
term whose arguments are evaluated already, and the lemma saying so.

`AbelianGroup` evaluators are registered too, but after the typed ones, and
`getEvaluator` takes the first evaluator that can evaluate a function: they
are never asked.
-/
private def evaluationStep (e : Expr) : MetaM (Option (Expr × Expr)) := do
  let some α ← sortOf? e | return none
  if (numeral? e).isSome then return none
  let evaluated (q : ℚ) : MetaM (Option (Expr × Expr)) := do
    let out ← numeralOf α q
    return some (out, ← evaluatesTo e out)
  -- Unary: a numeral's evaluation, and `-(-t)` becoming `t`.
  if let (``Neg.neg, #[_, _, a]) := e.getAppFnArgs then
    if let some c := numeral? a then return ← evaluated (-c)
    if let (``Neg.neg, #[_, _, b]) := a.getAppFnArgs then
      return ← rewrote e b (← mkAppM ``neg_neg #[b])
    return none
  -- `$to_int`, and the integer inside how replay states `$floor` and
  -- `$ceiling` at the rationals and the reals, of a numeral.
  if e.isAppOf ``Int.floor || e.isAppOf ``Int.ceil then
    let some c := numeral? e.appArg! | return none
    return ← evaluated (if e.isAppOf ``Int.floor then (c.floor : ℚ) else (c.ceil : ℚ))
  -- `$to_rat` and `$to_real` of a numeral.
  if e.isAppOf ``Int.cast || e.isAppOf `Rat.cast then
    let some c := numeral? e.appArg! | return none
    return ← evaluated c
  let some (op, a, b) := binary? e | return none
  let (ca, cb) := (numeral? a, numeral? b)
  let special (c : Option ℚ) := c == some 0 || c == some 1 || c == some (-1)
  -- One argument zero, one or minus one, the other not a numeral.
  let one :=
    if special ca && cb.isNone then some (ca.get!, true)
    else if special cb && ca.isNone then some (cb.get!, false)
    else none
  if let some (c, left) := one then
    let other := if left then b else a
    if cb == some 1 && op.isDivision then
      let lemma_ := match op with
        | .quot .euclidean => ``Int.ediv_one
        | .quot .truncating => ``Int.tdiv_one
        | .quot .flooring => ``Int.fdiv_one
        | _ => ``div_one
      return ← rewrote e a (← mkAppM lemma_ #[a])
    if c == 0 && op == .add then
      return ← rewrote e other
        (← if left then mkAppM ``zero_add #[b] else mkAppM ``add_zero #[a])
    if c == 1 && op == .mul then
      return ← rewrote e other
        (← if left then mkAppM ``one_mul #[b] else mkAppM ``mul_one #[a])
    if c == -1 && op == .mul then
      return ← rewrote e (← mkAppM ``Neg.neg #[other])
        (← if left then mkAppM ``neg_one_mul #[b] else mkAppM ``mul_neg_one #[a])
    if c == 0 && op == .mul then
      return ← rewrote e (← wholeOf α 0)
        (← if left then mkAppM ``zero_mul #[b] else mkAppM ``mul_zero #[a])
  let (some x, some y) := (ca, cb) | return none
  let some q := op.eval x y | return none
  evaluated q

/--
`InequalityNormalizer`: `a < b` becomes `0 < b + -a`, keeping its sign, unless
`a` is zero; over the integers `¬(a < b)` becomes `0 < a + 1 + -b` even then.
-/
private def normalizeInequality (p : Expr) : MetaM (Expr × Expr) := do
  let some c := comparison? p | return (p, ← iffRefl p)
  unless c.rel == .lt do return (p, ← iffRefl p)
  let isZero := natLit? c.lhs == some 0
  if integral c.sort && !c.positive then
    -- `¬(a < b) ↔ b ≤ a ↔ b < a + 1 ↔ 0 < a + 1 + -b`.
    let a1 ← mkAppM ``HAdd.hAdd #[c.lhs, ← wholeOf c.sort 1]
    let notLt ← mkAppOptM ``not_lt #[some c.sort, none, some c.lhs, some c.rhs]
    let addOne ← mkAppM ``Iff.symm #[← mkAppOptM ``Int.lt_add_one_iff #[some c.rhs, some c.lhs]]
    let (atom, diff) ← againstZero c.sort c.rhs a1
    return (atom, ← trans notLt (← trans addOne diff))
  if isZero then return (p, ← iffRefl p)
  let (atom, h) ← againstZero c.sort c.lhs c.rhs
  if c.positive then return (atom, h)
  return (mkNot atom, ← negated h)

/--
What `InterpretedLiteralEvaluator::evaluate` finds a literal's predicate to
be, once its terms are evaluated: a comparison of two numerals is decided, and
an equation is true where its sides are one term and false where they are two
different numerals.
-/
private def evaluatePredicate (p : Expr) : MetaM (Option (Bool × Expr)) := do
  let (positive, atom) := atomOf p
  if let some (α, a, b) := atom.eq? then
    if a == b then
      let proof ← mkEqRefl a
      return some (positive, ← if positive then decided true proof
        else decided false (← mkAppM ``not_not_intro #[proof]))
    if numeric α && (numeral? a).isSome && (numeral? b).isSome then
      let value := !positive
      return some (value, ← decided value (← byNumerals (signed value p)))
    return none
  let some c := comparison? p | return none
  let (some x, some y) := (numeral? c.lhs, numeral? c.rhs) | return none
  let holds := if c.rel == .lt then decide (x < y) else decide (x ≤ y)
  let value := holds == positive
  return some (value, ← decided value (← byNumerals (signed value p)))

/--
`evaluation` by `InterpretedEvaluation`: with inequality normalization on, a
strict comparison is first stated against zero; then every subterm is
evaluated, bottom-up; then the predicate.
-/
def interpretedEvaluation (normalizing : Bool) (p : Expr) : MetaM Outcome := do
  let (p₀, h₀) ← if normalizing then normalizeInequality p else pure (p, ← iffRefl p)
  let r ← bottomUp evaluationStep p₀
  let p₁ := r.expr
  let h₁ ← trans h₀ (← resultIff p₀ r)
  match ← evaluatePredicate p₁ with
  | some (value, h) => return .constant value (← trans h₁ h)
  | none => return .literal p₁ h₁

/-! ### Pushing unary minus -/

/--
`pushUMinus`: `t` with its unary minuses pushed down through sums, or `-t`'s
where `negate` is set; with a proof that `t`, or `-t`, is it, `none` where the
two are one term.

A numeral is a term of no arguments to vampire, however replay states it, so
`-3` is not a minus to push but a numeral to negate.
-/
partial def pushMinus (negate : Bool) (t : Expr) : MetaM (Expr × Option Expr) := do
  let wrap (e : Expr) : MetaM Expr := if negate then mkAppM ``Neg.neg #[e] else pure e
  -- A type is left as it is; a proposition -- the literal itself -- is not.
  let τ ← inferType t
  if τ.isSort && !τ.isProp then return (t, none)
  if !t.isApp || (numeral? t).isSome then return (← wrap t, none)
  if let (``Neg.neg, #[_, _, a]) := t.getAppFnArgs then
    if negate then return (a, some (← mkAppM ``neg_neg #[a]))
    return ← pushMinus true a
  if negate then
    if let (``HAdd.hAdd, #[_, _, _, _, a, b]) := t.getAppFnArgs then
      let (ra, ha) ← pushMinus true a
      let (rb, hb) ← pushMinus true b
      let neg (e : Expr) : MetaM Expr := mkAppM ``Neg.neg #[e]
      let ha ← match ha with | some h => pure h | none => mkEqRefl (← neg a)
      let hb ← match hb with | some h => pure h | none => mkEqRefl (← neg b)
      -- `-(a + b) = -a + -b = ra + rb`.
      let add := t.appFn!.appFn!
      let parts ← mkCongr (← mkCongrArg add ha) hb
      return (mkApp2 add ra rb, some (← mkEqTrans (← mkAppM ``neg_add #[a, b]) parts))
  -- Anything else: its arguments, and the minus kept outside it.
  let args := t.getAppArgs
  let rewritten ← args.mapM fun arg => do
    let (r, h?) ← pushMinus false arg
    return ({ expr := r, proof? := h? } : Simp.Result)
  let (rebuilt, proof?) ← congrArgs t.getAppFn args rewritten
  if negate then
    let neg ← mkAppM ``Neg.neg #[t]
    let negated? ← proof?.mapM fun h => mkCongrArg neg.appFn! h
    return (← wrap rebuilt, negated?)
  return (rebuilt, proof?)

/-- `evaluation` by `PushUnaryMinus`: each of the literal's arguments with its
unary minuses pushed down. -/
def pushUnaryMinus (p : Expr) : MetaM Outcome := do
  let (q, h?) ← pushMinus false p
  return .literal q (← match h? with | some h => iffOfEq h | none => iffRefl p)

end Vampire.LiteralRewrite
