import Vampire.LiteralRewrite.Polynomial

/-!
The literal-wise simplifications: theory normalization, the three evaluations,
ALASCA normalization and cancellation.

Each rewrites a clause a literal at a time, and the worker records which
literal of the conclusion each literal of the premise became, and which
procedure rewrote it. Each procedure is ported (`LiteralRewrite.Interpreted`,
`LiteralRewrite.Polynomial`): the port works out what the procedure makes of
the premise's literal, that is checked against what vampire made, and the
rewrite is proved step by step as the procedure made it.

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

/-- What one of the procedures that rewrite a term an operation at a time makes
of a literal. -/
private def interpreted? (rule : LiteralRewrite) (p : Expr) : MetaM (Option Outcome) :=
  match rule with
  | .theoryNormalization => some <$> theoryNormalization p
  | .interpretedEvaluation normalizing => some <$> interpretedEvaluation normalizing p
  | .pushUnaryMinus => some <$> pushUnaryMinus p
  | _ => pure none

/--
`b`, or the denied comparison it was put the same way round from, and the
equivalence of the two.

Theory normalization also rewrites formulas, whose atoms replay relates after
putting both formulas the same way round, a denied comparison turned into the
comparison the other way (`sameWayRound`): what it writes `¬(y < x)` arrives as
`x ≤ y`. It never writes `≤` itself, so an atom `x ≤ y` of what it made is one
of those.
-/
private def deniedIfTurned (rule : LiteralRewrite) (b : Expr) : MetaM (Expr × Expr) := do
  let some c := comparison? b | return (b, ← iffRefl b)
  unless rule == .theoryNormalization && c.positive && c.rel == .le do
    return (b, ← iffRefl b)
  let denied := mkNot (← mkAppM ``LT.lt #[c.rhs, c.lhs])
  return (denied, ← mkAppOptM ``not_lt #[some c.sort, none, some c.rhs, some c.lhs])

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
    | some (.literal q h) =>
      let (b'', back) ← deniedIfTurned rule b'
      trans h (← trans (← sameLiteral! rule.name a' q b'') back)
    | some (.constant value _) =>
      throwError "{rule.name} finds{indentExpr a'}\n{value}, but vampire made it{indentExpr b'}"
    | none => match rule with
      | .polynomialEvaluation => polynomialEvaluation a' b'
      | .alascaNormalization => alascaNormalization a' b' factor
      | _ => cancellation a' b'
  mkExpectedTypeHint h (← mkAppM ``Iff #[a, b])

/-- `¬a`, where the procedure `rule` found the literal `a` false and dropped it. -/
def literalFalse (rule : LiteralRewrite) (a : Expr) (factor : Int × Nat) : MetaM Expr := do
  let a' ← instantiateMVars a
  let h ← match ← interpreted? rule a' with
    | some (.constant false h) => mkAppM ``Iff.mp #[h]
    | some _ => throwError "{rule.name} does not find{indentExpr a'}\nfalse"
    | none => match rule with
      | .polynomialEvaluation => polynomialFalse a'
      | .alascaNormalization => alascaFalse a' factor
      | _ => throwError "{rule.name} never drops a literal, but dropped{indentExpr a'}"
  mkExpectedTypeHint h (mkNot a)

end Vampire.LiteralRewrite
