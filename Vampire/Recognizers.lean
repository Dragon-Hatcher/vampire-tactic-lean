/-
The recognizers used by the ported translators, from lean-smt (`Smt/Recognizers.lean`),
Copyright (c) 2021-2025 by the authors listed in that project's AUTHORS file. Released
under Apache 2.0; see `NOTICE`. Only the ones the propositional fragment needs are kept.
-/
import Lean

namespace Lean.Expr

/-- `p ∨ q`. -/
def vampireOr? (p : Expr) : Option (Expr × Expr) :=
  p.app2? ``Or

/-- `p → q` where both sides are propositions, i.e. implication rather than a function
sort or a dependent product. -/
def vampireImp? (p : Expr) : MetaM (Option (Expr × Expr)) := do
  let .forallE _ p q _ := p | return none
  if ← (isAProp p) <&&> (isAProp q) then
    return (p, q)
  else
    return none
where
  isAProp (e : Expr) : MetaM Bool := do
    return (← Meta.inferType e).isProp

/-- `a == b`. -/
def vampireBEq? (b : Expr) : Option (Expr × Expr × Expr) :=
  let_expr BEq.beq α _ a b := b | none
  return (α, a, b)

/-- `a != b`. -/
def vampireBNe? (b : Expr) : Option (Expr × Expr × Expr) :=
  let_expr bne α _ a b := b | none
  return (α, a, b)

/-! ## Arithmetic

These are lean-smt's, under `vampire`-prefixed names.

The prefix is not decoration. `Smt/Recognizers.lean` defines `ltOf?`, `hAddOf?` and the
rest in `Lean.Expr` too, and a file that imports both packages -- which every problem in
`bench-smtlib/` does, since the comparison puts `smt` and `vampire` in one import
closure -- fails to elaborate at all: "environment already contains
'Lean.Expr.ltOf?'". The two propositional recognizers above were already prefixed for
this reason. Each takes the type it is looking for, so
one translator per numeric sort can share them -- which is what makes the sort-qualified
symbols in `Translate/Build.lean` cheap to produce: the translator already knows which
sort it matched at.

`consumeMData` on the type, as in lean-smt: an elaborated numeral carries metadata that
would otherwise make the comparison fail. -/

def vampireLtOf? (e : Expr) (α : Expr) : Option (Expr × Expr) :=
  let_expr LT.lt β _ x y := e | none
  if β.consumeMData == α then return (x, y) else none

def vampireLeOf? (e : Expr) (α : Expr) : Option (Expr × Expr) :=
  let_expr LE.le β _ x y := e | none
  if β.consumeMData == α then return (x, y) else none

def vampireGeOf? (e : Expr) (α : Expr) : Option (Expr × Expr) :=
  let_expr GE.ge β _ x y := e | none
  if β.consumeMData == α then return (x, y) else none

def vampireGtOf? (e : Expr) (α : Expr) : Option (Expr × Expr) :=
  let_expr GT.gt β _ x y := e | none
  if β.consumeMData == α then return (x, y) else none

/-- A numeral of type `α`, as the raw natural it was written with. -/
def vampireNatLitOf? (e : Expr) (α : Expr) : Option Nat :=
  let_expr OfNat.ofNat β n _ := e | none
  if β.consumeMData == α then n.rawNatLit? else none

/-- `((x : ℤ) : α)`. -/
def vampireIntCastOf? (e : Expr) (α : Expr) : Option Expr :=
  let_expr IntCast.intCast β _ x := e | none
  if β.consumeMData == α then return x else none

/-- `((x : ℕ) : α)`. -/
def vampireNatCastOf? (e : Expr) (α : Expr) : Option Expr :=
  let_expr NatCast.natCast β _ x := e | none
  if β.consumeMData == α then return x else none

def vampireNegOf? (e : Expr) (α : Expr) : Option Expr :=
  let_expr Neg.neg β _ x := e | none
  if β.consumeMData == α then return x else none

def vampireHAddOf? (e : Expr) (α β : Expr) : Option (Expr × Expr) :=
  let_expr HAdd.hAdd γ δ _ _ x y := e | none
  if γ.consumeMData == α && δ.consumeMData == β then return (x, y) else none

def vampireHSubOf? (e : Expr) (α β : Expr) : Option (Expr × Expr) :=
  let_expr HSub.hSub γ δ _ _ x y := e | none
  if γ.consumeMData == α && δ.consumeMData == β then return (x, y) else none

def vampireHMulOf? (e : Expr) (α β : Expr) : Option (Expr × Expr) :=
  let_expr HMul.hMul γ δ _ _ x y := e | none
  if γ.consumeMData == α && δ.consumeMData == β then return (x, y) else none

def vampireHDivOf? (e : Expr) (α β : Expr) : Option (Expr × Expr) :=
  let_expr HDiv.hDiv γ δ _ _ x y := e | none
  if γ.consumeMData == α && δ.consumeMData == β then return (x, y) else none

def vampireHModOf? (e : Expr) (α β : Expr) : Option (Expr × Expr) :=
  let_expr HMod.hMod γ δ _ _ x y := e | none
  if γ.consumeMData == α && δ.consumeMData == β then return (x, y) else none

/-- `x ^ n` at a natural exponent, which is the only power Vampire can take: it has no
`^`, so this is unfolded into repeated multiplication by the translator. -/
def vampireHPowNatOf? (e : Expr) (α : Expr) : Option (Expr × Nat) := do
  let_expr HPow.hPow γ δ _ _ x n := e | none
  guard (γ.consumeMData == α)
  guard (δ.consumeMData == .const ``Nat [])
  let some k := (vampireNatLitOf? n (.const ``Nat [])) <|> n.rawNatLit? | none
  return (x, k)

end Lean.Expr
