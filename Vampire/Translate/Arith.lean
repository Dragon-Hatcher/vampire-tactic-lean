/-
Ported from lean-smt (`Smt/Translate/Real.lean` and `Smt/Translate/Int.lean`),
Copyright (c) 2021-2023 by the authors listed in that project's AUTHORS file. Released
under Apache 2.0; see `NOTICE`.

Changes: the symbols are sort-qualified (`Real.+` rather than `+`), because Vampire has
one interpreted symbol per sort where SMT-LIB overloads; the three sorts share one
parameterised translator rather than having a file each; `^` at a natural exponent is
unfolded here, since Vampire has no power; and `Real` is named rather than imported, so
that this file does not put Mathlib in the package's dependencies.
-/
import Vampire.Recognizers
import Vampire.Translate
import Vampire.Translate.Build

/-!
# The arithmetic fragment

`Int`, `Rat` and `Real` become Vampire's `$int`, `$rat` and `$real`; the field
operations and the orderings become its interpreted symbols. `Translate/Build.lean`
turns the sort-qualified names this produces into `Theory::Interpretation`s.

## What is deliberately absent

**`Nat`.** Vampire has no natural sort, and neither has SMT-LIB. Encoding `ℕ` as `$int`
is sound only under a non-negativity side condition per variable, and getting that wrong
is unsound rather than incomplete -- `a - b` on `ℕ` truncates at zero and on `$int` does
not, so `a - b + b = a` is false in Lean and true in the encoding. lean-smt does the
encoding, with the side conditions, in `Smt/Translate/Nat.lean`; until that is ported a
`ℕ` goal is left untranslated, which reports rather than misleads.

**`%` and integer `/`.** They are mapped, but only for `Int`: SMT-LIB's `div`/`mod` and
TPTP's `$quotient_e`/`$remainder_e` agree with each other and with Lean's `Int.ediv`,
which is what `HDiv.hDiv` on `ℤ` means. Lean's `/` on `ℝ` is a field division and maps
to `$quotient`, whose behaviour at zero is unspecified in TPTP and total in Lean; a goal
whose truth turns on `x / 0 = 0` is therefore outside what this translates faithfully,
and `Reconstruct`'s arithmetic replay is what would catch it -- it proves each step in
Lean, so a step that is only true under TPTP's reading fails to replay.
-/

namespace Vampire.Translate.Arith

open Lean Expr
open Vampire.Translator Vampire.Term

/-- The three sorts, with the type that stands for each.

`Real` and `Rat` are named rather than referred to with `` `` ``: they are Mathlib's,
and naming them keeps Mathlib out of this package's dependencies. The cost is that a
typo is a silent failure to match rather than a compile error, which is what the round
trip in `Test/Numbers.lean` is for. -/
def sorts : Array (NumKind × Expr) := #[
  (.int,  .const ``Int []),
  (.rat,  .const (.str .anonymous "Rat") []),
  (.real, .const (.str .anonymous "Real") [])
]

/-- `Real.+`, `Int.<` and so on: the name `Translate/Build.lean` decodes. -/
private def sym (kind : NumKind) (op : String) : Term :=
  symbolT s!"{kind.sortName}.{op}"

/-- A numeral, as the sort-qualified head applied to its text. -/
private def numeral (kind : NumKind) (n : Nat) : Term :=
  appT (sym kind "num") (literalT (toString n))

/-- Each numeric type is its own sort. -/
@[vampire_translate] def translateType : Translator := fun e => do
  for (kind, ty) in sorts do
    if e.consumeMData == ty then
      return some (symbolT kind.sortName)
  return none

/-- `x ^ k` at a literal natural exponent, as `k` multiplications.

Vampire has no exponentiation, so the alternative to unfolding is not translating it.
`x ^ 0` is `1`; the bound keeps a large literal exponent from building a term the prover
then has to work through -- `x ^ 1000` is not a goal this helps with. -/
private def powUnfold (kind : NumKind) (base : Term) (k : Nat) : Option Term :=
  if k > 64 then none
  else if k == 0 then some (numeral kind 1)
  else some (go base (k - 1))
where
  go (acc : Term) : Nat → Term
    | 0 => acc
    | n + 1 => go (mkApp2 (sym kind "*") acc base) n

/-- The field operations, the orderings and the casts, at each of the three sorts. -/
@[vampire_translate] def translateArith : Translator := fun e => do
  for (kind, ty) in sorts do
    -- Numerals first: `OfNat.ofNat` is an application, so the generic traversal would
    -- otherwise take it apart and record its instance as a dependency.
    if let some n := e.vampireNatLitOf? ty then
      return some (numeral kind n)
    if let some x := e.vampireNegOf? ty then
      return some (appT (sym kind "neg") (← applyTranslators! x))
    if let some (x, y) := e.vampireHAddOf? ty ty then
      return some (mkApp2 (sym kind "+") (← applyTranslators! x) (← applyTranslators! y))
    if let some (x, y) := e.vampireHSubOf? ty ty then
      return some (mkApp2 (sym kind "-") (← applyTranslators! x) (← applyTranslators! y))
    if let some (x, y) := e.vampireHMulOf? ty ty then
      return some (mkApp2 (sym kind "*") (← applyTranslators! x) (← applyTranslators! y))
    if let some (x, y) := e.vampireHDivOf? ty ty then
      return some (mkApp2 (sym kind "/") (← applyTranslators! x) (← applyTranslators! y))
    if let some (x, k) := e.vampireHPowNatOf? ty then
      if let some t := powUnfold kind (← applyTranslators! x) k then
        return some t
    -- `%` only at `Int`; at a field it is not an operation Vampire has.
    if kind == .int then
      if let some (x, y) := e.vampireHModOf? ty ty then
        return some (mkApp2 (sym kind "%") (← applyTranslators! x) (← applyTranslators! y))
    -- A cast from `ℤ` is Vampire's `$to_real`/`$to_rat`, whose *kind* is the sort it
    -- converts from, which is why this is keyed on `Int` and not on the target.
    if kind != .int then
      if let some x := e.vampireIntCastOf? ty then
        let inner ← applyTranslators! x
        return some (appT (sym .int (if kind == .real then "toReal" else "toRat")) inner)
  return none

/-- The orderings. These land in `Bool`, so `Build.lean` makes them predicates. -/
@[vampire_translate] def translateOrder : Translator := fun e => do
  for (kind, ty) in sorts do
    if let some (x, y) := e.vampireLtOf? ty then
      return some (mkApp2 (sym kind "<") (← applyTranslators! x) (← applyTranslators! y))
    if let some (x, y) := e.vampireLeOf? ty then
      return some (mkApp2 (sym kind "<=") (← applyTranslators! x) (← applyTranslators! y))
    if let some (x, y) := e.vampireGtOf? ty then
      return some (mkApp2 (sym kind ">") (← applyTranslators! x) (← applyTranslators! y))
    if let some (x, y) := e.vampireGeOf? ty then
      return some (mkApp2 (sym kind ">=") (← applyTranslators! x) (← applyTranslators! y))
  return none

end Vampire.Translate.Arith
