import Vampire

-- The unused-variable linter cannot see through `vampire [*]`, which takes the whole
-- local context: every hypothesis below *is* used, just not by name in a proof term.
set_option linter.unusedVariables false
set_option linter.unusedSectionVars false

/-!
Unit tests for `Vampire/Clause.lean`: a derived inference proved by unit propagation
over its instantiated premises.

Exercised directly, and for the same reason `Test/Prenex.lean` gives: `vampire_resolve`
sits behind `grind only [cases Or]` in the step script, so a bug in it shows up as a
*slow* replay and not as a failing one — the reference's `grind` runs instead and the
problem still passes. What that costs is the whole point of the file: over the
benchmark, `forward subsumption resolution` is 11.3s of `grind` against 0.8s here.

The shapes are the ones the replay actually puts to it, which is why the premises are
named `i0`, `i1` — that is what the script's `have` lines bind — and why every goal is a
bare clause: the step's own `intro`s have already run by the time this is reached.
-/

namespace Test.Clause

variable (p q r s : Prop)

/-! ## Propositional -/

/-- Resolution: the resolved literal is complementary in the two premises. -/
example (i0 : p ∨ q) (i1 : ¬q ∨ r) : p ∨ r := by vampire_resolve i0 i1

/-- Subsumption resolution: one premise's literals are all in the conclusion but for
the one the other premise refutes. -/
example (i0 : p ∨ q ∨ r) (i1 : ¬r) : p ∨ q := by vampire_resolve i0 i1

/-- Factoring, and duplicate literal removal: the same literal twice over. -/
example (i0 : p ∨ p ∨ q) : p ∨ q := by vampire_resolve i0

/-- Literal reordering, which is a whole permutation and not just a swap. -/
example (i0 : p ∨ q ∨ r) : r ∨ p ∨ q := by vampire_resolve i0

/-- A weakening: the conclusion has disjuncts the premise does not. Falsifying it
decides those too, so the premise is still the conflict. -/
example (i0 : p ∨ q) : p ∨ q ∨ r := by vampire_resolve i0

/-- The empty clause. -/
example (i0 : p) (i1 : ¬p) : False := by vampire_resolve i0 i1

/-- Propagation through more than one premise: no single premise is the conflict. -/
example (i0 : p) (i1 : ¬p ∨ q) (i2 : ¬q ∨ r) (i3 : ¬r) : False := by
  vampire_resolve i0 i1 i2 i3

/-- A conclusion that holds one atom at both polarities needs no premise at all:
falsifying it decides that atom twice. -/
example : p ∨ ¬p := by vampire_resolve

/-! ## Equality -/

/-- An equation reoriented. `Literal::createEquality` orients by the term ordering, so
the two premises of one inference need not have chosen the same way. -/
example (α : Type) (a b : α) (i0 : a = b ∨ p) (i1 : ¬(b = a)) : p := by
  vampire_resolve i0 i1

/-- Trivial inequality removal, and equality resolution: `¬(t = t)` is false on its
own, so the literal goes and `rfl` is the whole of why. -/
example (α : Type) (a : α) (i0 : ¬(a = a) ∨ p) : p := by vampire_resolve i0

/-- The dual: a conclusion with `t = t` in it holds outright. -/
example (α : Type) (a : α) : p ∨ a = a := by vampire_resolve

/-- Forward demodulation: the premise holds the term the conclusion rewrote away. -/
example (α : Type) (f : α → Prop) (a b : α) (i0 : a = b) (i1 : f a) : f b := by
  vampire_resolve i0 i1

/-- Demodulation under a negative literal, at more than one position. Abstracting *all*
occurrences of `a` would be wrong where the inference rewrote some of them; walking the
two literals together abstracts exactly the ones that differ. -/
example (α : Type) (g : α → α → α) (P : α → Prop) (a b : α)
    (i0 : a = b) (i1 : ¬P (g a a)) : ¬P (g b b) := by
  vampire_resolve i0 i1

/-- Demodulation that rewrote one of two occurrences and left the other. -/
example (α : Type) (g : α → α → α) (P : α → Prop) (a b : α)
    (i0 : a = b) (i1 : ¬P (g a a)) : ¬P (g a b) := by
  vampire_resolve i0 i1

/-- Two premises equal to a common term. The conclusion is an equation between their
left-hand sides, which needs the *symmetry* of one of them as well as the rewrite — the
shape most of `ALG190+1`'s demodulations have. -/
example (α : Type) (g : α → α → α) (e0 e3 c : α) (i0 : e0 = g c c) (i1 : e3 = g c c) :
    e0 = e3 := by
  vampire_resolve i0 i1

/-- Superposition: the equation is a literal of a clause rather than a unit, so it has
to be propagated before the rewrite can use it. -/
example (α : Type) (P : α → Prop) (a b : α) (i0 : a = b ∨ q) (i1 : P a ∨ r) :
    P b ∨ q ∨ r := by
  vampire_resolve i0 i1

/-! ## What it declines

Propagation is not a decision procedure, and where it stalls the step script runs
`grind` instead. These record where the line falls. -/

/-- A premise that is a conjunction. Propagation reads a clause as a disjunction of
literals, so `p ∧ q` is one literal it knows nothing about — taking it apart is what
`Vampire/Bridge.lean` is for, and no derived rule states a premise this way. -/
example (i0 : p ∧ q) : p := by
  fail_if_success vampire_resolve i0
  grind

/-- A rewrite the premises do not license: there is no equation to propagate, so the
literal stays undecided however the two are compared. -/
example (α : Type) (P : α → Prop) (a b : α) (i0 : P a) (h : P a → P b) : P b := by
  fail_if_success vampire_resolve i0
  exact h i0

end Test.Clause
