import Vampire

/-!
Unit tests for the two pieces of the replay that reconcile formulas by construction
rather than by rewriting: `Vampire/Prenex.lean`'s `vampire_or_prenex` and the rules
`Vampire/Bridge.lean` grew for it.

Neither is reached through the `vampire` tactic here on purpose. Both sit behind a
`first`, so a bug in them shows up as a *slow* replay rather than a failing one — the
reference's script runs instead and the problem still passes. What that costs is real:
`PRD001+1`'s AVATAR split is 1.5s down the fast path and 31s down the fallback. So they
are exercised directly, at the shapes the replay puts to them.
-/

namespace Test.Prenex

section OrPrenex

/-- A disjunction of quantified components — the shape an AVATAR split clause has once
its split names have been rewritten into the components they stand for — against the
parent clause it came from, which is the only thing the replay does with the result.

The `exact h` is the assertion: it closes the goal only if the prefix `vampire_or_prenex`
produced is the parent's, binder for binder and in order. That is what the rest of the
split-clause script relies on, since it names those binders and applies the parent at
them. -/
example (ι : Type) (P Q R : ι → ι → Prop)
    (h : ∀ v0 v1 v2 v3 v4 v5 : ι, ¬P v0 v1 ∨ ¬Q v2 v3 ∨ ¬R v4 v5) :
    (∀ v0 v1 : ι, ¬P v0 v1) ∨ (∀ v2 v3 : ι, ¬Q v2 v3) ∨ (∀ v4 v5 : ι, ¬R v4 v5) := by
  vampire_or_prenex
  exact h

example (ι : Type) (P Q : ι → ι → Prop)
    (h : ∀ v0 v1 v2 v3 : ι, ¬P v0 v1 ∨ ¬Q v2 v3) :
    (∀ v0 v1 : ι, ¬P v0 v1) ∨ (∀ v2 v3 : ι, ¬Q v2 v3) := by
  vampire_or_prenex
  exact h

/-- Under a prefix the goal already has. -/
example (ι : Type) (A : ι → Prop) (B : ι → ι → Prop) (h : ∀ x y, A x ∨ B x y) :
    ∀ x, A x ∨ ∀ y, B x y := by
  vampire_or_prenex
  exact h

/-- Nothing to hoist: the goal is left exactly as it was, rather than failing. -/
example (p q : Prop) (h : p) : p ∨ q := by
  vampire_or_prenex
  exact Or.inl h

/-- An implication is a `∀` over a `Prop`, and neither this nor `prenexify` hoists out of
one — the rules are stated over `Type u`. Left alone. -/
example (p q r : Prop) (h : q) : p ∨ (r → q) := by
  vampire_or_prenex
  exact Or.inr fun _ => h

end OrPrenex

section Bridge

/-- Reassociation, which is what `flattening` does by rewriting. -/
example (a b c d : Prop) (h : ((a ∧ b) ∧ c) ∧ d) : a ∧ (b ∧ (c ∧ d)) := by
  vampire_bridge h

/-- The junction reversal the exporter introduces, at both connectives. -/
example (a b c : Prop) (h : a ∧ (b ∧ c)) : (c ∧ b) ∧ a := by
  vampire_bridge h

example (a b c : Prop) (h : a ∨ (b ∨ c)) : (c ∨ b) ∨ a := by
  vampire_bridge h

/-- A weakening: `pure predicate removal` drops conjuncts and keeps the rest. -/
example (a b c : Prop) (h : (a ∧ b) ∧ c) : c ∧ a := by
  vampire_bridge h

/-- `Classical.not_not`, which `flattening` also does. -/
example (a : Prop) (h : ¬¬a) : a := by
  vampire_bridge h

/-- Hoisting a `∀` out of a disjunction, which is what a one-clause clausification needs
once its parent has been prenexed. Both halves: the conclusion's binder is introduced and
the premise says nothing about it, and a premise still quantified where the conclusion is
not is instantiated by unification rather than at a guess.

Note what is *not* here: `A ∨ B a` from `∀ v, A ∨ B v`. The bridge commits to a disjunct
of the conclusion before it instantiates the premise, so it gets that one wrong way round
and the reference's script takes it. Nothing in `bench-tptp/` needs it. -/
example (ι : Type) (A : Prop) (B : ι → Prop) (h : A ∨ ∀ v, B v) : ∀ v, A ∨ B v := by
  vampire_bridge h

example (ι : Type) (P : ι → ι → Prop) (h : ∀ v w, P v w) (a : ι) : ∀ w, P a w := by
  vampire_bridge h

/-- An equation reoriented by the term ordering, which is the difference an input step
has to carry across. -/
example (ι : Type) (f : ι → ι) (a : ι) (h : a = f a) : f a = a := by
  vampire_bridge h

/-- Reordered binders: position is the wrong correspondence and unification is the right
one, so the premise's prefix is left to be instantiated. -/
example (ι : Type) (P : ι → ι → ι → Prop) (h : ∀ x y z, P x y z) : ∀ x z y, P x y z := by
  vampire_bridge h

end Bridge

end Test.Prenex
