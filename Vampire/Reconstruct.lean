import Lean
import Vampire.Proof

/-!
# Turning a refutation into a Lean proof term

Each step of Vampire's refutation becomes an `Expr`. Nothing is printed or parsed: the
step data comes across the FFI as numbers, and the terms are built directly.

The construction is the standard one for propositional resolution. To resolve

    hA : a₁ ∨ … ∨ p ∨ … ∨ aₙ      with      hB : b₁ ∨ … ∨ ¬p ∨ … ∨ bₘ

eliminate `hA`; in the branch that produced `p`, eliminate `hB` and close the `¬p`
branch with `absurd`; every other branch injects its literal into the resolvent. The
empty clause is `False`.
-/

set_option autoImplicit false

namespace Vampire

open Lean Meta

/-- Interpretation of the problem: what Lean `Prop` each Vampire atom denotes, and what
proof term each input clause is available as. -/
structure Interp where
  /-- The `Prop` an atom stands for. -/
  atom : UInt32 → Option Expr
  /-- The proof of an input clause, by Vampire unit number. -/
  input : UInt32 → Option Expr

/-- The `Prop` a literal denotes. -/
def Lit.toExpr (l : Lit) (i : Interp) : MetaM Expr := do
  let some a := i.atom l.atom | throwError "vampire: atom {l.atom} has no Lean meaning"
  if l.positive then return a else return (← mkAppM ``Not #[a])

/-- The `Prop` a clause denotes: a right-nested disjunction, or `False` when empty. -/
def clauseToExpr (i : Interp) (lits : Array Lit) : MetaM Expr := do
  if lits.size = 0 then return (.const ``False [])
  else
    let mut e ← (lits[lits.size - 1]!).toExpr i
    for j in [1:lits.size] do
      let k := lits.size - 1 - j
      e ← mkAppM ``Or #[← (lits[k]!).toExpr i, e]
    return e

/-- Inject a proof of the `idx`th literal into a proof of the whole clause. -/
private def inject (i : Interp) (lits : Array Lit) (idx : Nat) (h : Expr) : MetaM Expr := do
  if lits.size ≤ 1 then return h
  let mut e := h
  -- innermost first: the last literal needs no `Or.inl`
  if idx != lits.size - 1 then
    let rest ← clauseToExpr i (lits.extract (idx + 1) lits.size)
    e ← mkAppOptM ``Or.inl #[← (lits[idx]!).toExpr i, rest, e]
  for j in [0:idx] do
    let k := idx - 1 - j
    let left ← (lits[k]!).toExpr i
    let rightLits := lits.extract (k + 1) lits.size
    let right ← clauseToExpr i rightLits
    e ← mkAppOptM ``Or.inr #[left, right, e]
  return e

/-- Case-split a proof of a clause, calling `k` with each literal's index and proof. -/
private partial def elimClause (i : Interp) (lits : Array Lit) (h : Expr) (target : Expr)
    (k : Nat → Expr → MetaM Expr) : MetaM Expr := do
  go 0 lits h
where
  go (off : Nat) (rest : Array Lit) (h : Expr) : MetaM Expr := do
    if rest.size ≤ 1 then return ← k off h
    let headTy ← (rest[0]!).toExpr i
    let tailTy ← clauseToExpr i (rest.extract 1 rest.size)
    let left ← withLocalDeclD `hl headTy fun x => do
      mkLambdaFVars #[x] (← k off x)
    let right ← withLocalDeclD `hr tailTy fun x => do
      mkLambdaFVars #[x] (← go (off + 1) (rest.extract 1 rest.size) x)
    mkAppOptM ``Or.elim #[headTy, tailTy, target, h, left, right]

/--
Build a proof of the resolvent of `a` and `b` on `pivot`.

`pivot` is the atom resolved on; it occurs positively in `a` and negatively in `b`.
-/
def resolve (i : Interp) (aLits : Array Lit) (aPrf : Expr) (bLits : Array Lit) (bPrf : Expr)
    (pivot : UInt32) (resLits : Array Lit) : MetaM Expr := do
  let target ← clauseToExpr i resLits
  let idxIn (ls : Array Lit) (l : Lit) : Option Nat := ls.findIdx? (· == l)
  elimClause i aLits aPrf target fun ia ha => do
    if (aLits[ia]!).atom == pivot && (aLits[ia]!).positive then
      -- `ha : pivot`; case on b, closing its `¬pivot` branch by contradiction
      elimClause i bLits bPrf target fun ib hb => do
        if (bLits[ib]!).atom == pivot && !(bLits[ib]!).positive then
          mkAppOptM ``absurd #[← (aLits[ia]!).toExpr i, target, ha, hb]
        else
          let some k := idxIn resLits (bLits[ib]!)
            | throwError "vampire: literal missing from resolvent"
          inject i resLits k hb
    else
      let some k := idxIn resLits (aLits[ia]!)
        | throwError "vampire: literal missing from resolvent"
      inject i resLits k ha

/-- The atom two clauses resolve on: positive in `a`, negative in `b`. -/
def findPivot (aLits bLits : Array Lit) : Option UInt32 :=
  aLits.findSome? fun la =>
    if la.positive && bLits.any (fun lb => lb.atom == la.atom && !lb.positive)
    then some la.atom else none

/--
Replay a refutation as a Lean proof of `False`.

Steps arrive in post-order, so each one's premises are already built when it is reached.
-/
def reconstruct (i : Interp) (proof : Proof) : MetaM Expr := do
  let mut prf : Std.HashMap UInt32 Expr := {}
  let mut lits : Std.HashMap UInt32 (Array Lit) := {}
  let mut last : Option Expr := none
  for s in proof do
    lits := lits.insert s.number s.literals
    if s.premises.isEmpty then
      let some h := i.input s.number
        | throwError "vampire: no Lean hypothesis for input clause {s.number}"
      prf := prf.insert s.number h
      last := some h
    else if s.premises.size == 2 then
      let a := s.premises[0]!; let b := s.premises[1]!
      let some aL := lits[a]? | throwError "vampire: premise {a} not seen"
      let some bL := lits[b]? | throwError "vampire: premise {b} not seen"
      let some aP := prf[a]? | throwError "vampire: premise {a} unproved"
      let some bP := prf[b]? | throwError "vampire: premise {b} unproved"
      -- orient so the pivot is positive in the first operand
      let (aL, aP, bL, bP, pivot) ←
        match findPivot aL bL with
        | some p => pure (aL, aP, bL, bP, p)
        | none =>
          match findPivot bL aL with
          | some p => pure (bL, bP, aL, aP, p)
          | none => throwError "vampire: no pivot between steps {a} and {b}"
      let e ← resolve i aL aP bL bP pivot s.literals
      prf := prf.insert s.number e
      last := some e
    else
      throwError "vampire: rule {s.rule} with {s.premises.size} premises is not supported yet"
  let some e := last | throwError "vampire: empty proof"
  return e

end Vampire
