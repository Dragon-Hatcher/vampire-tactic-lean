import Mathlib
import Vampire
set_option maxHeartbeats 0
set_option linter.all false
-- four binders in one block, body naming them in order
example (a1 : ¬(∃ (w x y z : ℤ), w + 2 * x + 3 * y + 4 * z ≤ 0)) : False := by
  vampire [*]

-- A literal power is the multiplications it stands for. Vampire has no
-- exponentiation, and `x ^ 3` is not `x * x * x` to Lean either -- it unfolds
-- to `x * (x * (x * 1))` -- so the two are related by a proof before the goal
-- is translated.
example (x : ℝ) (h : x ^ 3 = 8) : x * x * x = 8 := by vampire [h]
example (x : ℤ) (h : x ^ 4 = 16) : x * x * x * x = 16 := by vampire [h]
example (x : ℤ) (h : x ^ 1 = 5) : x = 5 := by vampire [h]
example (x : ℝ) (h : x ^ 0 = 1) : (1 : ℝ) = 1 := by vampire [h]

-- Cancelling a multiplication is vampire's divisibility axiom, and no
-- procedure that reads its facts as linear constraints can see it: both
-- products are of two variables.
example (x : ℤ) (h : 2 * x = 6) : x = 3 := by vampire [h]
example (x : ℝ) (h : 2 * x = 6) : x = 3 := by vampire [h]
example (x : ℚ) (h : 3 * x = 12) : x = 4 := by vampire [h]
