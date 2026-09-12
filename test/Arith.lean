import Mathlib
import Vampire
set_option maxHeartbeats 0
set_option linter.all false
-- four binders in one block, body naming them in order
example (a1 : ¬(∃ (w x y z : ℤ), w + 2 * x + 3 * y + 4 * z ≤ 0)) : False := by
  vampire [*]
