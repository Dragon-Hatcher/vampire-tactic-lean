-- LRA_2010_Monniaux_QE_mjollnir2_formula_150, from SMT-LIB (LRA, status unsat).
-- The vampire binary refutes it in 0.17s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LRA_2010_Monniaux_QE_mjollnir2_formula_150.smt2`, beside this file. An SMT problem is a
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

theorem T_formula_150 (a1 : (∀ (v11_x3a0 : ℚ), (∃ (v10_x3a1 : ℚ), (∀ (v9_x3a2 : ℚ), (∃ (v8_x3a3 : ℚ), (∀ (v7_x3a4 : ℚ), (∃ (v6_x3a5 : ℚ), (∀ (v5_x3a6 : ℚ), (∃ (v4_x3a7 : ℚ), (∀ (v3_x3a8 : ℚ), (∃ (v2_x3a9 : ℚ), (∀ (v1_x3a10 : ℚ), (∃ (v0_x3a11 : ℚ), ((((((((((((((((-19) * v3_x3a8)) + ((3) * v0_x3a11)) + ((13) * v7_x3a4)) + ((3) * v4_x3a7)) ≤ 0)) ∨ ((((((12 * v5_x3a6) + ((16) * v10_x3a1)) + ((-11) * v2_x3a9))) + ((((-3)) * v8_x3a3))) ≤ 18)) ∨ ((((((((17) * v0_x3a11) + (((-3)) * v9_x3a2)) + (((-3)) * v10_x3a1)) + ((-1) * v11_x3a0))) ≤ ((-17))) ∨ ((((((4 * v11_x3a0) + (20 * v4_x3a7)) + ((-13) * v11_x3a0))) + (((-19) * v3_x3a8))) ≤ ((-16)))))) ∨ ((((((((((-2) * v3_x3a8) + (((9) * v9_x3a2))) + ((-10) * v10_x3a1)) + ((-6) * v9_x3a2))) ≤ ((-4))) ∨ (((((((3) * v8_x3a3) + ((5) * v0_x3a11)) + ((2) * v1_x3a10)) + ((-5) * v5_x3a6))) ≤ ((-16)))) ∧ ((((((((13) * v7_x3a4) + ((-1) * v4_x3a7)) + (6 * v7_x3a4))) + ((9) * v1_x3a10)) ≤ (9)) ∧ ((((((20 * v5_x3a6) + (14 * v2_x3a9)) + (14 * v3_x3a8))) + v6_x3a5) ≤ ((-4))))))) ∨ (((((((((((-1) * v9_x3a2) + ((-14) * v6_x3a5)) + (((-16)) * v1_x3a10))) + (12 * v10_x3a1)) ≤ (2)) ∧ ((((((14 * v7_x3a4) + (20 * v10_x3a1)) + ((-7) * v3_x3a8))) + (((-3)) * v1_x3a10)) ≤ (-13)))) ∧ (((((((((13) * v9_x3a2) + (((17) * v7_x3a4))) + ((3) * v11_x3a0)) + ((-9) * v6_x3a5))) ≤ (10)) ∧ ((((((((-8)) * v10_x3a1) + (15 * v2_x3a9)) + ((-14) * v4_x3a7))) + ((-7) * v2_x3a9)) ≤ 1)))) ∧ ((((((((((-20) * v6_x3a5) + ((-12) * v8_x3a3)) + ((-6) * v6_x3a5))) + ((-17) * v10_x3a1)) ≤ ((-8))) ∨ (((((((-9) * v8_x3a3) + (19 * v1_x3a10)) + ((-1) * v0_x3a11))) + ((-20) * v4_x3a7)) ≤ (5)))) ∨ (((((((((-17) * v0_x3a11) + ((-14) * v9_x3a2)) + ((-6) * v2_x3a9))) + (((17) * v5_x3a6))) ≤ (16)) ∨ (((((((9) * v8_x3a3) + ((-9) * v3_x3a8)) + ((-8) * v9_x3a2))) + ((-9) * v4_x3a7)) ≤ 15)))))) ∨ ((((((((2) * v10_x3a1) + ((-8) * v10_x3a1)) + ((17) * v5_x3a6)) + ((-19) * v1_x3a10))) ≤ (13)) ∧ (((((((((10) * v9_x3a2) + ((9) * v4_x3a7)) + (4 * v2_x3a9)) + ((9) * v10_x3a1))) ≤ (2)) ∨ ((((((((20 * v9_x3a2) + ((-18) * v6_x3a5)) + (((3) * v7_x3a4))) + (((17) * v7_x3a4)))) ≤ (-11)) ∧ ((((((4 * v5_x3a6) + ((-18) * v5_x3a6)) + (6 * v10_x3a1))) + (5 * v3_x3a8)) ≤ (10))))) ∨ (((((((((((-1) * v2_x3a9) + (20 * v3_x3a8)) + ((-4) * v7_x3a4))) + (8 * v9_x3a2)) ≤ (-12)) ∧ (((((((-14) * v11_x3a0) + ((-15) * v7_x3a4)) + ((((-3)) * v8_x3a3))) + (((9) * v9_x3a2)))) ≤ (3)))) ∧ (((((((12 * v6_x3a5) + ((-18) * v7_x3a4)) + (((3) * v7_x3a4))) + ((-2) * v4_x3a7))) ≤ (10)) ∨ (((((((-18) * v3_x3a8) + ((-3) * v8_x3a3)) + (11 * v0_x3a11))) + (12 * v4_x3a7)) ≤ ((-16)))))))))) ∧ (((((((-3) * v3_x3a8) + (3 * v7_x3a4)) + (5 * v7_x3a4))) + ((16) * v5_x3a6)) ≤ ((-16))))))))))))))))) :
    False := by
  vampire [*]
