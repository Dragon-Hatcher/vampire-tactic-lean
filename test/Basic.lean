import Mathlib.Data.Real.Basic
import Vampire

-- Every example has to close its goal and say nothing but what `info` says:
-- a warning -- a step admitted as `sorry`, say -- fails the test. Hypotheses
-- are used through the tactic, which the unused-variable linter cannot see.
set_option linter.unusedVariables false

#guard_msgs (drop info) in
example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire [hp, hpq]

#guard_msgs (drop info) in
example (p q : Prop) (hp : p) (hpq : p → q) : q := by vampire [*]

#guard_msgs (drop info) in
example {ι : Type} (a b : ι) (h : a = b) : b = a := by vampire [h]

#guard_msgs (drop info) in
example {ι : Type} (p : ι → Prop) (a : ι) (h : ∀ x, p x) : p a := by vampire [h]

-- A goal over `ℝ` under `+mono`. It is translated without `+mono` too; this
-- checks that monomorphization leaves it provable.
#guard_msgs (drop info) in
example (x : ℝ) (h : 0 < x) : 0 < x := by vampire +mono [h]

-- Equality through a proxy predicate, whose congruence axiom says a predicate
-- holds of equal things alike; and the replacement reorders the clause.
#guard_msgs (drop info) in
example {ι : Type} (f g : ι → ι) (p : ι → Prop) (h : ∀ x, g x = f x)
    (hp : ∀ x, p (g x)) (a : ι) : p (f a) := by
  vampire (options := #[("equality_proxy", "RSTC")]) [h, hp]

-- `x ≠ a` is `¬(x = a)`, which vampire can state the other way round.
#guard_msgs (drop info) in
example {ι : Type} (f : ι → ι) (a b c : ι) (h : ∀ x, f x = a) (h2 : b = f c)
    (h3 : ∀ x, x ≠ a ∨ x ≠ b) : False := by
  vampire [h, h2, h3]

-- General splitting: a clause cut in two at a variable few literals share.
#guard_msgs (drop info) in
example {ι : Type} (p s : ι → Prop) (r q : ι → ι → Prop) (a : ι)
    (h : ∀ x y z, p x ∨ r x y ∨ q y z ∨ s z) (h1 : ∀ x, ¬ p x) (h2 : ∀ y z, ¬ q y z)
    (h3 : ∀ x y, ¬ r x y) (h4 : ∀ z, ¬ s z) : False := by
  vampire (options := #[("general_splitting", "on")]) [h, h1, h2, h3, h4]

-- Inner rewriting: a clause's own disequality rewrites its other literals.
#guard_msgs (drop info) in
example {ι : Type} (f g : ι → ι) (p : ι → Prop) (a b : ι)
    (h : f a ≠ b ∨ p (g (f a)) ∨ p (f a)) (h1 : ¬ p (g b)) (h2 : ¬ p b)
    (h3 : f a = b) : False := by
  vampire (options := #[("inner_rewriting", "on"), ("forward_demodulation", "off")])
    [h, h1, h2, h3]

-- And under a variable, where the rewritten term is every occurrence of `f X`
-- in the clause, not of whatever Lean expression it rebuilds to.
#guard_msgs (drop info) in
example {ι : Type} (f g : ι → ι) (c : ι) (p : ι → Prop)
    (h1 : ∀ x, f x ≠ c ∨ p (g (f x))) (h2 : ∀ x, ¬ p (g x)) (h3 : ∀ x, f x = c ∨ p x)
    (h4 : ∀ x, ¬ p x) : False := by
  vampire (options := #[("inner_rewriting", "on")]) [h1, h2, h3, h4]

-- Subsumption equality resolution: a disequality whose sides unify, dropped.
#guard_msgs (drop info) in
example {ι : Type} (f : ι → ι) (p : ι → ι → Prop) (a : ι)
    (h : ∀ x y z, f x ≠ f y ∨ p z x) (h1 : ∀ x, ¬ p x a) : False := by
  vampire (options := #[("subsumption_equality_resolution", "on")]) [h, h1]

-- Truth values absorbed out of a formula, by core's own absorption lemmas.
#guard_msgs (drop info) in
example (p q : Prop)
    (h : (p ∨ False) ∧ (True → q) ∧ (False → p) ∧ (q ↔ True) ∧ (p ↔ False ∨ p))
    (h2 : ¬ q ∨ (¬ p ∧ True)) : False := by
  vampire [h, h2]

-- The other clausifier, through negations stacked over quantifiers, junctions
-- and equivalences.
#guard_msgs (drop info) in
example {ι : Type} (p q : ι → Prop) (r : Prop) (a : ι)
    (h : ¬¬(∀ x, ¬¬p x ∨ ¬¬(q x ↔ ¬r))) (h2 : ¬ ∃ x, ¬¬ p x) (h3 : ¬¬ (∀ x, q x))
    (h4 : ¬¬ r) : False := by
  vampire (options := #[("newcnf", "on")]) [h, h2, h3, h4]

#guard_msgs (drop info) in
example (a b c : Prop) (h : ¬¬(a ↔ ¬(b ↔ ¬¬c))) (ha : a) (hb : b) (hc : c) : False := by
  vampire (options := #[("newcnf", "on")]) [h, ha, hb, hc]
