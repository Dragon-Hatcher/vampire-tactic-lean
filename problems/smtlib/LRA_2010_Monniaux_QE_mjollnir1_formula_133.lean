-- LRA_2010_Monniaux_QE_mjollnir1_formula_133, from SMT-LIB (LRA, status unsat).
-- The vampire binary refutes it in 0.02s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LRA_2010_Monniaux_QE_mjollnir1_formula_133.smt2`, beside this file. An SMT problem is a
-- conjunction of assertions asked for satisfiability, so an `unsat` one becomes: take
-- the assertions as hypotheses, derive `False`. One hypothesis per `assert`, in order;
-- `let` is inlined, because neither this tactic nor a first-order prover has one.
--
-- Arithmetic is over ℚ.  The source is linear real arithmetic, and ℚ and ℝ are
-- elementarily equivalent for it -- both are dense ordered divisible abelian
-- groups and that theory is complete -- so `unsat` transfers from the `Real`
-- the problem is written over to the ℚ it is stated over here.
import Mathlib
import Vampire
set_option maxHeartbeats 0
set_option maxRecDepth 1000000
set_option linter.all false

theorem T_formula_133 (a1 : (∀ (v9_x3a0 : ℚ), (∃ (v8_x3a1 : ℚ), (∀ (v7_x3a2 : ℚ), (∃ (v6_x3a3 : ℚ), (∀ (v5_x3a4 : ℚ), (∃ (v4_x3a5 : ℚ), (∀ (v3_x3a6 : ℚ), (∃ (v2_x3a7 : ℚ), (∀ (v1_x3a8 : ℚ), (∃ (v0_x3a9 : ℚ), (((((((13) * v7_x3a2) + ((-10) * v7_x3a2)) + (2 * v5_x3a4))) ≤ (13)) ∧ (((((((((((-20) * v6_x3a3) + (19 * v2_x3a7)) + (14 * v7_x3a2))) ≤ 14) ∧ (((((5 * v0_x3a9) + (11 * v8_x3a1)) + ((-16) * v8_x3a1))) ≤ (-13))) ∨ (((((((8) * v3_x3a6) + ((8) * v9_x3a0)) + (((-9)) * v3_x3a6)) ≤ (-15))) ∨ ((((((-19) * v1_x3a8) + (18 * v1_x3a8)) + (((-3)) * v0_x3a9))) ≤ (-5))))) ∧ (((((((((-6) * v6_x3a3) + ((-7) * v2_x3a7)) + v0_x3a9) ≤ 9)) ∧ (((((3 * v0_x3a9) + (6 * v2_x3a7)) + (0 * v1_x3a8))) ≤ ((-3)))) ∧ (((((((-20) * v4_x3a5) + (((-2)) * v6_x3a3)) + ((-17) * v4_x3a5))) ≤ ((-3))) ∧ (((((((-9)) * v8_x3a1) + ((-14) * v7_x3a2)) + (19 * v3_x3a6))) ≤ (-10)))))) ∧ ((((((((((20 * v4_x3a5) + (((-9)) * v4_x3a5)) + (0 * v6_x3a3))) ≤ 6) ∨ ((((((17) * v6_x3a3) + (3 * v1_x3a8)) + ((-16) * v9_x3a0))) ≤ ((-9)))) ∧ (((((((-9) * v1_x3a8) + ((-3) * v5_x3a4)) + (2 * v4_x3a5))) ≤ ((-2))) ∧ (((((5 * v6_x3a3) + (18 * v2_x3a7)) + ((-2) * v3_x3a6))) ≤ 1)))) ∨ (((((((-6) * v0_x3a9) + ((17) * v3_x3a6)) + (13 * v1_x3a8))) ≤ 12) ∨ (((((((-14) * v1_x3a8) + (18 * v4_x3a5)) + (12 * v7_x3a2))) ≤ (8)) ∨ (((((11 * v1_x3a8) + ((-13) * v9_x3a0)) + ((-14) * v8_x3a1))) ≤ (17))))))))))))))))))) :
    False := by
  vampire [*]
