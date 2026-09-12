-- LRA_2010_Monniaux_QE_mjollnir5_formula_215, from SMT-LIB (LRA, status unsat).
-- The vampire binary refutes it in 0.63s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LRA_2010_Monniaux_QE_mjollnir5_formula_215.smt2`, beside this file. An SMT problem is a
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

theorem T_formula_215 (a1 : (∀ (v17_x3a0 : ℚ), (∀ (v16_x3a1 : ℚ), (∀ (v15_x3a2 : ℚ), (∀ (v14_x3a3 : ℚ), (∀ (v13_x3a4 : ℚ), (∀ (v12_x3a5 : ℚ), (∃ (v11_x3a6 : ℚ), (∃ (v10_x3a7 : ℚ), (∃ (v9_x3a8 : ℚ), (∃ (v8_x3a9 : ℚ), (∃ (v7_x3a10 : ℚ), (∃ (v6_x3a11 : ℚ), (∀ (v5_x3a12 : ℚ), (∀ (v4_x3a13 : ℚ), (∀ (v3_x3a14 : ℚ), (∀ (v2_x3a15 : ℚ), (∀ (v1_x3a16 : ℚ), (∀ (v0_x3a17 : ℚ), ((((((((((12 * v11_x3a6) + ((-16) * v11_x3a6)) + (17 * v16_x3a1))) + ((-2) * v14_x3a3)) ≤ (5)) ∧ (((((((((((-12) * v3_x3a14) + ((4) * v13_x3a4)) + (13 * v11_x3a6))) + (8 * v3_x3a14)) ≤ (3)) ∨ (((((((-8) * v11_x3a6) + ((-17) * v13_x3a4)) + (13 * v14_x3a3))) + ((-2) * v12_x3a5)) ≤ (-18)))) ∧ ((((((((3 * v2_x3a15) + (5 * v2_x3a15)) + ((0) * v5_x3a12))) + (19 * v6_x3a11)) ≤ (4)) ∨ (((((((-17) * v9_x3a8) + (3 * v0_x3a17)) + ((-7) * v2_x3a15))) + v17_x3a0) ≤ 8)))) ∧ (((((((((20 * v14_x3a3) + ((-16) * v3_x3a14)) + (20 * v2_x3a15))) + ((-15) * v12_x3a5)) ≤ (0)) ∧ (((((((-19) * v5_x3a12) + (0 * v9_x3a8)) + ((-13) * v4_x3a13))) + (15 * v16_x3a1)) ≤ 12))) ∨ ((((((((3 * v8_x3a9) + ((-18) * v7_x3a10)) + (5 * v4_x3a13))) + (15 * v3_x3a14)) ≤ 19) ∨ (((((v0_x3a17 + ((-1) * v10_x3a7)) + ((-2) * v15_x3a2)) + ((-3) * v1_x3a16))) ≤ 16))))))) ∨ (((((((-2) * v2_x3a15) + ((4) * v6_x3a11)) + (10 * v15_x3a2))) + ((-16) * v0_x3a17)) ≤ 18)) ∨ ((((((14 * v10_x3a7) + ((-1) * v10_x3a7)) + ((-2) * v0_x3a17))) + (9 * v5_x3a12)) ≤ (4)))))))))))))))))))))) :
    False := by
  vampire [*]
