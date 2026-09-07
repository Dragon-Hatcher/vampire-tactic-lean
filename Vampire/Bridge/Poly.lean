import Lean

/-!
# The normal form of an arithmetic comparison

`theory normalization` and the ALASCA normalisations restate a unit over the same
numbers: `A ≥ 0` becomes `¬ A < 0`, `n * ep * vo` becomes `ep * vo * n`, and a sum comes
back reassociated and reordered. So the premise and the conclusion of such a step agree
formula-for-formula and differ *inside every atom*, which `Bridge.transport`'s structural
walk cannot see and `isDefEq` at its leaves says no to.

This decides whether two comparisons are the same comparison, by computing a normal form
for each: one relation out of four, and the polynomial `lhs - rhs` as a sorted map from
monomial to rational coefficient.

**It is a decision and not a search, and that is the whole point.** The obvious way to
close such a leaf is to hand it to `linarith`, and `Vampire/Arith.lean`'s cascade does
exactly that one level up, over the whole formula. What makes that both slow and wrong as
a *leaf* rule is that the rules around it use transport failure as their discriminator:
`Bridge.pick` and `conjLeaves` decide which premise leaf matches which conclusion leaf by
trying a transport and taking the first that succeeds. A leaf that always succeeds makes
that choice arbitrary — it will pair `2 * x + 3 * y ≤ 1` with `x - y ≤ 5` and hand the
arithmetic an obligation that is not true. Comparing normal forms *fails* on that pair,
which is what lets the walk stay a walk.

Nothing here proves anything: the caller still asks Lean for the proof, on a goal of two
atoms rather than of two hundred. This only answers "are these the same atom", which is
the question `isDefEq` was being asked and getting wrong.

No Mathlib. `Bridge.lean` deliberately imports only `Lean`, and everything below is
syntactic — `Rat` and `Expr.quickLt` are core.
-/

set_option autoImplicit false

namespace Vampire.Bridge

open Lean

/-- The four relations every comparison normalises to, each read as `p ⋈ 0` for the
polynomial the normal form carries.

`≥` and `>` are gone because they are `≤` and `<` with the sides swapped, and a negated
comparison is gone because over a linear order `¬ (a < b)` is `b ≤ a`. Collapsing them is
most of what this file is for: `theory normalization`'s favourite rewrite is exactly the
`A ≥ 0` to `¬ A < 0` step, and after normalisation the two are the same key. -/
inductive Rel where
  | eq | ne | le | lt
  deriving BEq, Repr, Inhabited

/-- A monomial: the factors that are not numerals, in a canonical order, with
multiplicity — so `x * y` and `y * x` are the same monomial and `x * x` is not `x`.

Kept as a sorted `Array` rather than a multiset over some key, because the ordering has
to be *some* total order and not a meaningful one; both sides are sorted the same way and
only equality is ever asked of the result. -/
abbrev Mono := Array Expr

/-- A polynomial: monomials with non-zero rational coefficients, sorted by monomial. The
constant term is the empty monomial. -/
abbrev Poly := Array (Mono × Rat)

/-- A total order on monomials: shorter first, then lexicographic under `Expr.quickLt`. -/
private def monoLt (a b : Mono) : Bool :=
  if a.size != b.size then a.size < b.size
  else
    let rec go (i : Nat) : Bool :=
      if h : i < a.size then
        let x := a[i]
        let y := b[i]!
        if x == y then go (i + 1) else x.quickLt y
      else false
    go 0

/-- Collect like monomials, drop the ones that cancel, and sort. The one place a `Poly`
becomes canonical; every operation below ends here. -/
private def norm (xs : Array (Mono × Rat)) : Poly := Id.run do
  let sorted := xs.qsort (fun p q => monoLt p.1 q.1)
  let mut out : Array (Mono × Rat) := #[]
  for (m, c) in sorted do
    match out.back? with
    | some (m', c') =>
      if m' == m then out := out.pop.push (m', c' + c) else out := out.push (m, c)
    | none => out := out.push (m, c)
  return out.filter (fun p => p.2 != 0)

/-- The zero polynomial. -/
def Poly.zero : Poly := #[]

/-- A rational constant. -/
def Poly.const (c : Rat) : Poly := if c == 0 then #[] else #[(#[], c)]

/-- A single opaque factor, with coefficient one. -/
def Poly.atom (e : Expr) : Poly := #[(#[e], 1)]

def Poly.add (p q : Poly) : Poly := norm (p ++ q)

def Poly.scale (c : Rat) (p : Poly) : Poly :=
  if c == 0 then #[] else p.map (fun (m, d) => (m, c * d))

def Poly.neg (p : Poly) : Poly := p.scale (-1)

def Poly.sub (p q : Poly) : Poly := p.add q.neg

/-- Multiplication. Monomials concatenate and are re-sorted, which is what makes
`n * ep * vo` and `ep * vo * n` the same key. -/
def Poly.mul (p q : Poly) : Poly :=
  norm <| p.flatMap fun (m, c) =>
    q.map fun (m', c') => ((m ++ m').qsort (fun x y => x.quickLt y), c * c')

/-- The coefficient of the first monomial, which is the one the sign and the scale are
normalised against. -/
private def Poly.leading (p : Poly) : Rat := (p[0]?).map (·.2) |>.getD 0

/-- Divide through by the size of the leading coefficient, so that two comparisons that
differ by a positive factor come out equal.

Sound as an identification for every relation here: `p ≤ 0` and `c * p ≤ 0` say the same
thing for `c > 0`, and for `=` and `≠` any non-zero `c` will do. The sign is *not*
normalised for `≤` and `<`, because scaling those by a negative number reverses them --
that is why only `|leading|` is divided out and `eq`/`ne` get the extra step below. -/
private def Poly.scaleDown (p : Poly) : Poly :=
  let l := p.leading
  if l == 0 then p else p.scale (1 / (if l < 0 then -l else l))

/-- Extract a natural literal, through `OfNat` as well as raw.

An exponent written `x ^ 2` at `ℝ` has a `ℕ` exponent, and that `2` is
`@OfNat.ofNat ℕ 2 _` rather than a raw literal -- so asking `rawNatLit?` alone leaves
every power an opaque factor and `x ^ 2 + x` fails to match `x * x + x`. -/
private def natOf (e : Expr) : Option Nat :=
  let e := e.consumeMData
  match e.rawNatLit? with
  | some k => some k
  | none =>
    match e.getAppFnArgs with
    | (``OfNat.ofNat, #[_, n, _]) => n.rawNatLit?
    | _ => none

/-- Extract a rational numeral. Covers what the translation can put back: a natural
literal through `OfNat`, either sign, and a quotient of two of them.

`OfScientific` is deliberately absent. The translation writes a `Real` numeral as a
decimal only through `RealConstantType::parse`, which the Lean side renders as a
quotient, so a scientific literal here would be a shape nothing produces -- and guessing
at one would be the one place a coefficient could quietly change. `none` costs a fallback,
never a wrong answer. -/
private partial def ratOf (e : Expr) : Option Rat :=
  let e := e.consumeMData
  match e.getAppFnArgs with
  | (``OfNat.ofNat, #[_, n, _]) => n.rawNatLit?.map (fun k => (k : Rat))
  | (``Nat.cast, #[_, _, n]) => (natOf n).map (fun k => (k : Rat))
  | (``Int.cast, #[_, _, n]) => (ratOf n)
  | (``Neg.neg, #[_, _, a]) => (ratOf a).map (fun r => -r)
  | (``HDiv.hDiv, #[_, _, _, _, a, b]) => do
    let x ← ratOf a
    let y ← ratOf b
    if y == 0 then none else some (x / y)
  | _ => e.rawNatLit?.map (fun k => (k : Rat))

/-- Read an expression as a polynomial. Anything outside the ring operations becomes an
opaque factor, which is what makes this total: an uninterpreted term, or a function
application the prover treats as a black box, is simply a monomial of its own.

Purely syntactic, and no `whnf`. What arrives here is the translation's own output on one
side and Vampire's rendering of the same unit on the other, so both are built from the
recognizers in `Vampire/Translate/Arith.lean` and neither hides a numeral behind a
reducible definition. Unfolding would cost a great deal on a two-hundred-atom formula to
find nothing. -/
partial def polyOf (e0 : Expr) : Poly :=
  let e := e0.consumeMData
  if let some c := ratOf e then Poly.const c else
  match e.getAppFnArgs with
  | (``HAdd.hAdd, #[_, _, _, _, a, b]) => (polyOf a).add (polyOf b)
  | (``HSub.hSub, #[_, _, _, _, a, b]) => (polyOf a).sub (polyOf b)
  | (``Neg.neg, #[_, _, a]) => (polyOf a).neg
  | (``HMul.hMul, #[_, _, _, _, a, b]) => (polyOf a).mul (polyOf b)
  | (``HDiv.hDiv, #[_, _, _, _, a, b]) =>
    -- Division only by a numeral. `x / y` with `y` a variable is not a polynomial, and
    -- ALASCA does not produce one: it multiplies out first.
    match ratOf b with
    | some c => if c == 0 then Poly.atom e else (polyOf a).scale (1 / c)
    | none => Poly.atom e
  | (``HPow.hPow, #[_, _, _, _, a, n]) =>
    match natOf n with
    | some k =>
      -- `Translate/Arith.lean` unfolds `^` at a literal exponent into multiplications on
      -- the way out, so the two sides can disagree on whether the power is still folded.
      let base := polyOf a
      Nat.rec (Poly.const 1) (fun _ acc => acc.mul base) k
    | none => Poly.atom e
  | _ => Poly.atom e

/-- The normal form of a comparison: its relation, the type it is at, and `lhs - rhs`.

The type is carried because two comparisons at different sorts are different atoms
however alike their polynomials look, and the polynomial's monomials need not mention it
-- `0 ≤ 0` at `ℤ` and at `ℝ` have the same empty polynomial. -/
structure AtomNF where
  rel : Rel
  type : Expr
  poly : Poly
  deriving Inhabited

/-- Whether two comparisons are the same comparison. -/
def AtomNF.sameAs (a b : AtomNF) : Bool :=
  a.rel == b.rel && a.type == b.type && a.poly == b.poly

/-- `e` as a normalised comparison, or `none` if it is not one.

The negated cases are the reason this exists at all, so they are spelled out rather than
folded into a polarity flag: over a linear order `¬ (a < b)` is `b ≤ a` and `¬ (a ≤ b)` is
`b < a`, and that swap is what makes `A ≥ 0` and `¬ A < 0` the same key. -/
partial def atomNF (e0 : Expr) : Option AtomNF :=
  let e := e0.consumeMData
  if e.isAppOfArity ``Not 1 then
    (atomNF e.appArg!).map fun a =>
      match a.rel with
      | .eq => { a with rel := .ne }
      | .ne => { a with rel := .eq }
      -- `¬ (p ≤ 0)` is `0 < p`, which is `-p < 0`.
      | .le => { a with rel := .lt, poly := a.poly.neg }
      | .lt => { a with rel := .le, poly := a.poly.neg }
  else
    let mk (rel : Rel) (α l r : Expr) : Option AtomNF :=
      let p := (polyOf l).sub (polyOf r)
      let p := match rel with
        -- An equality has no orientation, so its sign is normalised too; an inequality's
        -- is its direction and must not be.
        | .eq | .ne => if p.leading < 0 then p.neg else p
        | _ => p
      some { rel, type := α, poly := p.scaleDown }
    match e.getAppFnArgs with
    | (``Eq, #[α, l, r]) => if α.isProp then none else mk .eq α l r
    | (``Ne, #[α, l, r]) => if α.isProp then none else mk .ne α l r
    | (``LE.le, #[α, _, l, r]) => mk .le α l r
    | (``LT.lt, #[α, _, l, r]) => mk .lt α l r
    -- `a ≥ b` is `b ≤ a`. Vampire has no `≥`; the translation's recognizers do, and the
    -- two sides of a normalisation step disagree about which one to use.
    | (``GE.ge, #[α, _, l, r]) => mk .le α r l
    | (``GT.gt, #[α, _, l, r]) => mk .lt α r l
    | _ => none

end Vampire.Bridge
