import Mathlib
import Vampire

-- Every example has to close its goal and say nothing but what `info` says:
-- a warning -- a step admitted as `sorry`, say -- fails the test. Hypotheses
-- are used through the tactic, which the unused-variable linter cannot see.
set_option linter.unusedVariables false
set_option maxHeartbeats 0
set_option linter.all false
-- four binders in one block, body naming them in order
#guard_msgs (drop info) in
example (a1 : ¬(∃ (w x y z : ℤ), w + 2 * x + 3 * y + 4 * z ≤ 0)) : False := by
  vampire [*]

-- A literal power is the multiplications it stands for. Vampire has no
-- exponentiation, and `x ^ 3` is not `x * x * x` to Lean either -- it unfolds
-- to `x * (x * (x * 1))` -- so the two are related by a proof before the goal
-- is translated.
#guard_msgs (drop info) in
example (x : ℝ) (h : x ^ 3 = 8) : x * x * x = 8 := by vampire [h]
#guard_msgs (drop info) in
example (x : ℤ) (h : x ^ 4 = 16) : x * x * x * x = 16 := by vampire [h]
#guard_msgs (drop info) in
example (x : ℤ) (h : x ^ 1 = 5) : x = 5 := by vampire [h]
#guard_msgs (drop info) in
example (x : ℝ) (h : x ^ 0 = 1) : (1 : ℝ) = 1 := by vampire [h]

-- Cancelling a multiplication is vampire's divisibility axiom, and no
-- procedure that reads its facts as linear constraints can see it: both
-- products are of two variables.
#guard_msgs (drop info) in
example (x : ℤ) (h : 2 * x = 6) : x = 3 := by vampire [h]
#guard_msgs (drop info) in
example (x : ℝ) (h : 2 * x = 6) : x = 3 := by vampire [h]
#guard_msgs (drop info) in
example (x : ℚ) (h : 3 * x = 12) : x = 4 := by vampire [h]

-- A congruence-closure conflict through `+`, which TPTP interprets itself and
-- so has no symbol of the goal's to apply.
#guard_msgs (drop info) in
example (x y : ℤ) (f : ℤ → ℤ) (p : ℤ → Prop) (h1 : x = y ∨ p x) (h3 : ¬ p x)
    (h5 : f (x + x) ≠ f (y + y) ∨ p y) (h4 : ¬ p y) : False := by
  vampire (options := #[("avatar_congruence_closure", "on"),
    ("forward_demodulation", "off"), ("backward_demodulation", "off"),
    ("superposition", "off")]) [h1, h3, h4, h5]

-- Floors and ceilings: vampire's axioms and ALASCA's bounds for them are
-- replayed from Mathlib's bounds, which are what makes a floor one.
#guard_msgs (drop info) in
example (x : ℝ) : (⌊x⌋ : ℝ) ≤ x := by vampire
#guard_msgs (drop info) in
example (x : ℝ) : x < ⌊x⌋ + 1 := by vampire
#guard_msgs (drop info) in
example (x : ℝ) : x ≤ ⌈x⌉ := by vampire
