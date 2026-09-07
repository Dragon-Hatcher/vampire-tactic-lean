import Mathlib
import Vampire

set_option vampire.timeout 30
set_option maxHeartbeats 1000000

namespace SmtcompSample

theorem p08_UFLRA {S1 S2 : Type}
    (f1 f2 : S1) (f3 : S2 → ℝ → ℝ) (f4 : S2) (f5 f6 : ℝ)
    (a1 : ¬ (f1 = f2))
    (a2 : ¬ (f3 f4 (f5 - f6) = -(f3 f4 f5)))
    (a3 : ∀ v0 : ℝ, f3 f4 (f6 + v0) = -(f3 f4 v0)) :
    False := by
  vampire [*]

theorem p09_UFLRA {S1 S2 : Type}
    (f1 f2 : S1) (f3 : S2 → ℝ → ℝ) (f4 : S2) (f5 f6 : ℝ)
    (a1 : ¬ (f1 = f2))
    (a2 : ∀ v0 : ℝ, f3 f4 (f5 + v0) = -(f3 f4 v0))
    (a3 : ¬ (f3 f4 (f6 - f5) = -(f3 f4 f6))) :
    False := by
  vampire [*]

theorem p15_NRA (z1 b Mv0 A p ep n v1 vo : ℝ)
    (a1 : ¬ ∃ M : ℝ,
      (n > 0 ∧
       z1 + n * ep * vo ≥ p ∧
       v1 = vo ∧
       vo > 0 ∧
       ep > 0 ∧
       b > 0 ∧
       A ≥ 0) →
      (M - z1 ≥ v1 * v1 / (2 * b) + (A / b + 1) * (A / 2 * (ep * ep) + ep * v1) ∨
       (1 / 2) * (2 * z1) + (n - 1) * ep * vo ≥ p)) :
    False := by
  vampire [*]

theorem p15_NRA' (z1 b A p ep n v1 vo : ℝ) :
    ∃ M : ℝ,
      (n > 0 ∧
       z1 + n * ep * vo ≥ p ∧
       v1 = vo ∧
       vo > 0 ∧
       ep > 0 ∧
       b > 0 ∧
       A ≥ 0) →
      (M - z1 ≥ v1 * v1 / (2 * b) + (A / b + 1) * (A / 2 * (ep * ep) + ep * v1) ∨
       (1 / 2) * (2 * z1) + (n - 1) * ep * vo ≥ p) := by
  vampire [*]

end SmtcompSample

-- Nothing here rests on an axiom the rest of Mathlib does not, and nothing was admitted.
#print axioms SmtcompSample.p08_UFLRA
#print axioms SmtcompSample.p09_UFLRA
#print axioms SmtcompSample.p15_NRA
#print axioms SmtcompSample.p15_NRA'
