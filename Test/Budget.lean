import Vampire

-- The unused-variable linter cannot see through `vampire [*]`, which takes the whole
-- local context: every hypothesis below *is* used, just not by name in a proof term.
set_option linter.unusedVariables false
set_option linter.unusedSectionVars false

/-!
# How the search budget divides into stages

`stageBudgets` is arithmetic on `UInt32` deciseconds, which is the kind of thing that
goes wrong quietly: a wrapping subtraction turns a zero fallback into a four-billion
decisecond one, and the tactic would then hand a single attempt a budget no wall clock
can reach. Each case below is written as its whole triple, so the two properties worth
having are visible rather than asserted — the three add up to the budget, and none of
them is absurd.
-/

open Vampire

/-- The defaults, at the default budget: the 2s probe, 3s of portfolio and 5s of
fallback that `bench-100/` measured at 60 of 100. -/
example : stageBudgets 100 20 30 = (20, 30, 50) := by rfl

/-- The shares are of the budget, so they scale with it and still sum to it. -/
example : stageBudgets 300 20 30 = (60, 90, 150) := by rfl
example : stageBudgets 7 20 30 = (1, 2, 4) := by rfl

/-- A share of 0 hands its time to the fallback rather than shortening the total:
`probeShare 0` is one attempt at everything, `portfolioShare 0` turns the portfolio
off, and neither shortens the search. -/
example : stageBudgets 100 0 30 = (0, 30, 70) := by rfl
example : stageBudgets 100 20 0 = (20, 0, 80) := by rfl
example : stageBudgets 100 0 0 = (0, 0, 100) := by rfl

/-- Over-allocated shares clamp the fallback to zero and do not wrap. This is the case
that matters: `100 - 130` on `UInt32` is not negative, it is enormous. -/
example : stageBudgets 100 80 50 = (80, 50, 0) := by rfl
example : stageBudgets 100 100 100 = (100, 100, 0) := by rfl
example : stageBudgets 20 100 100 = (20, 20, 0) := by rfl

/-- Truncation is toward zero, so a budget too small to divide gives its stages nothing
and spends it on the fallback, rather than rounding up into time it does not have. -/
example : stageBudgets 4 20 30 = (0, 1, 3) := by rfl
example : stageBudgets 1 20 30 = (0, 0, 1) := by rfl
