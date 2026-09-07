import Mathlib
import Vampire

/-!
# The bridge's arithmetic leaf

`vampire_bridge_arith` is `vampire_bridge` with one extra rule: a pair of comparisons
that `Vampire/Bridge/Poly.lean` decides are the same comparison becomes a *goal* for the
caller's arithmetic instead of a failure. It is what `theory normalization` and the ALASCA
normalisations need, since those restate a unit over the same numbers and so differ inside
every atom while agreeing on the shape.

Half of what is checked here is that it still refuses. Plain `vampire_bridge` must keep
its all-or-nothing meaning (6), a comparison that is genuinely a different comparison must
fail rather than become a false goal (7), and the shape this rule does not reach -- a
permuted quantifier prefix *and* rewritten atoms under it, which would need the
polynomials matched and the witnesses solved for at once -- must fail rather than mispair
(5).
-/

set_option maxHeartbeats 400000

-- 1. existential permutation, no arithmetic: plain bridge (unchanged behaviour)
example (h0 : ∀ v1 : ℝ, ∃ v6 v7 : ℝ, ∀ v9 : ℝ, ¬ (-9 : ℝ) < -2*v1 + 7*v7 + -5*v6 + 2*v9) :
    ∀ v0 : ℝ, ∃ v1 v2 : ℝ, ∀ v3 : ℝ, ¬ (-9 : ℝ) < -2*v0 + 7*v1 + -5*v2 + 2*v3 := by
  vampire_bridge h0

-- 2. ring-equal leaf under binders
example (h0 : ∀ v0 v1 : ℝ, (v0 + v1) + 1 ≤ 0) : ∀ v0 v1 : ℝ, 1 + (v1 + v0) ≤ 0 := by
  vampire_bridge_arith h0 <;> linarith

-- 3. `≥ 0` restated as `¬ < 0`
example (h0 : ∀ v0 : ℝ, v0 ≥ 0) : ∀ v0 : ℝ, ¬ v0 < 0 := by
  vampire_bridge_arith h0 <;> linarith

-- 4. the `theory normalization` shape: prefix kept, every atom rewritten, junction tree
example (h0 : ∀ a : ℝ, ∃ x y : ℝ, ∀ b : ℝ,
      ((3*y + 2*x ≤ 1 ∧ a + b ≥ 0) ∧ (x - y ≤ 5 ∨ b*2 ≤ 4))) :
    ∀ a : ℝ, ∃ x y : ℝ, ∀ b : ℝ,
      ((2*x + 3*y ≤ 1 ∧ ¬ (a + b < 0)) ∧ (x - y ≤ 5 ∨ 2*b ≤ 4)) := by
  vampire_bridge_arith h0 <;> linarith

-- 5. a permuted ∃ prefix AND rewritten atoms at once is NOT supported, and must fail
--    rather than mispair: matching the polynomials and solving for the witnesses at the
--    same time is theory unification.
example (h0 : ∀ a : ℝ, ∃ x y : ℝ, 3*y + 2*x ≤ 1 ∧ a ≥ 0) :
    ∀ a : ℝ, ∃ x y : ℝ, 2*y + 3*x ≤ 1 ∧ ¬ a < 0 := by
  first
  | (vampire_bridge_arith h0 <;> linarith; done)
  | exact fun a => ⟨0, 0, by norm_num, by sorry⟩

-- 6. plain `vampire_bridge` must still refuse a ring-equal leaf: no holes, no side goals
example (h0 : ∀ v0 v1 : ℝ, (v0 + v1) + 1 ≤ 0) : ∀ v0 v1 : ℝ, 1 + (v1 + v0) ≤ 0 := by
  first
  | (vampire_bridge h0; done)
  | (vampire_bridge_arith h0 <;> linarith)

-- 7. a genuinely different atom must still FAIL, not become a false goal
example (h0 : ∀ x y : ℝ, x - y ≤ 5) : ∀ x y : ℝ, 2*x + 3*y ≤ 1 := by
  first
  | (vampire_bridge_arith h0 <;> linarith)
  | exact fun _ _ => by sorry
