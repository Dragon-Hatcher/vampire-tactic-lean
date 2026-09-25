import Vampire.LiteralRewrite.Polynomial
import Vampire.LiteralRewrite.Viras

/-!
The literal-wise simplifications: theory normalization, the three evaluations,
ALASCA normalization, cancellation and arithmetic subterm generalization, and
VIRAS quantifier elimination.

Each rewrites a clause a literal at a time, and the worker records which
literal of the conclusion each literal of the premise became, and which
procedure rewrote it. Each procedure is ported (`LiteralRewrite.Interpreted`,
`LiteralRewrite.Polynomial`, `LiteralRewrite.Viras`): the port works out what
the procedure makes of the premise's literal, that is checked against what
vampire made, and the rewrite is proved step by step as the procedure made it.

Kept apart from the replay because the replay is precompiled and imports no
Mathlib; replay is handed `literalIff` and `literalFalse`.
-/

namespace Vampire.LiteralRewrite

open Lean Meta Vampire.Reconstruct

/-- The name a procedure goes by in what it fails with. -/
private def _root_.Vampire.Reconstruct.LiteralRewrite.name : LiteralRewrite → String
  | .theoryNormalization => "theory normalization"
  | .interpretedEvaluation _ => "interpreted evaluation"
  | .polynomialEvaluation => "polynomial evaluation"
  | .pushUnaryMinus => "pushing unary minus"
  | .alascaNormalization => "ALASCA normalization"
  | .cancellation => "cancellation"
  | .generalization => "arithmetic subterm generalization"

/--
What one of the procedures that rewrite a term an operation at a time makes of
a literal -- theory normalization, interpreted evaluation and pushing unary
minus -- and `none` for the others, which rewrite a literal as a whole.
-/
private def interpreted? (rule : LiteralRewrite) (p : Expr) : MetaM (Option Outcome) :=
  match rule with
  | .theoryNormalization => some <$> theoryNormalization p
  | .interpretedEvaluation normalizing => some <$> interpretedEvaluation normalizing p
  | .pushUnaryMinus => some <$> pushUnaryMinus p
  | .polynomialEvaluation | .alascaNormalization | .cancellation | .generalization =>
    pure none

/--
`arithmetic_subterm_generalization`: the premise, instantiated at the
substitution the step recorded (replay has done that), is the conclusion up to
the identities of a ring -- a variable standing for `x - y` is `x - y` again
once `x` is replaced by `x + y`.
-/
private def generalization (a b : Expr) : MetaM Expr := do
  let some same ← ringEq a b
    | throwError "arithmetic subterm generalization made{indentExpr b}\nof{indentExpr a}, \
        which are not one up to the identities of a ring"
  iffOfEq same

/--
`a ↔ b`, where the procedure `rule` rewrote the literal `a` into `b`, `factor`
being what the step recorded against it.
-/
def literalIff (rule : LiteralRewrite) (a b : Expr) (factor : Int × Nat) : MetaM Expr := do
  -- Not beta-reduced: a name applied to its arguments -- an equality proxy,
  -- a named formula -- is an uninterpreted predicate to vampire, and to the
  -- ports it has to be one too, whatever the formula it stands for says.
  let a' ← instantiateMVars a
  let b' ← instantiateMVars b
  let h ← match ← interpreted? rule a' with
    | some (.literal q h) => trans h (← sameLiteral! rule.name a' q b')
    | some (.constant value _) =>
      throwError "{rule.name} finds{indentExpr a'}\n{value}, but vampire made it{indentExpr b'}"
    | none => match rule with
      | .polynomialEvaluation => polynomialEvaluation a' b'
      | .alascaNormalization => alascaNormalization a' b' factor
      | .generalization => generalization a' b'
      | .cancellation => cancellation a' b'
      | .theoryNormalization | .interpretedEvaluation _ | .pushUnaryMinus =>
        throwError "{rule.name} rewrote{indentExpr a'}\nas a whole literal, which it never does"
  mkExpectedTypeHint h (← mkAppM ``Iff #[a, b])

/--
What the procedure `rule` makes of the literal `a`, and `a ↔` it: for a step
that rewrote a formula's atoms where they stand, which only theory
normalization does.
-/
def literalRewritten (rule : LiteralRewrite) (a : Expr) : MetaM (Expr × Expr) := do
  let a ← instantiateMVars a
  match ← interpreted? rule a with
  | some (.literal q h) => return (q, h)
  | some (.constant true h) => return (mkConst ``True, h)
  | some (.constant false h) => return (mkConst ``False, h)
  | none => throwError "{rule.name} does not rewrite formulas"

/-- `¬a`, where the procedure `rule` found the literal `a` false and dropped it. -/
def literalFalse (rule : LiteralRewrite) (a : Expr) (factor : Int × Nat) : MetaM Expr := do
  let a' ← instantiateMVars a
  let h ← match ← interpreted? rule a' with
    | some (.constant false h) => mkAppM ``Iff.mp #[h]
    | some _ => throwError "{rule.name} does not find{indentExpr a'}\nfalse"
    | none => match rule with
      | .polynomialEvaluation => polynomialFalse a'
      | .alascaNormalization => alascaFalse a' factor
      | .cancellation | .generalization | .theoryNormalization | .interpretedEvaluation _
      | .pushUnaryMinus =>
        throwError "{rule.name} never drops a literal, but dropped{indentExpr a'}"
  mkExpectedTypeHint h (mkNot a)

end Vampire.LiteralRewrite
