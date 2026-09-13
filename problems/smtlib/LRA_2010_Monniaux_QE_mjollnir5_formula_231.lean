-- LRA_2010_Monniaux_QE_mjollnir5_formula_231, from SMT-LIB (LRA, status unsat).
-- The vampire binary refutes it in 0.69s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LRA_2010_Monniaux_QE_mjollnir5_formula_231.smt2`, beside this file. An SMT problem is a
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

theorem T_formula_231 (a1 : (∀ (v17_x3a0 : ℚ), (∀ (v16_x3a1 : ℚ), (∀ (v15_x3a2 : ℚ), (∀ (v14_x3a3 : ℚ), (∀ (v13_x3a4 : ℚ), (∀ (v12_x3a5 : ℚ), (∃ (v11_x3a6 : ℚ), (∃ (v10_x3a7 : ℚ), (∃ (v9_x3a8 : ℚ), (∃ (v8_x3a9 : ℚ), (∃ (v7_x3a10 : ℚ), (∃ (v6_x3a11 : ℚ), (∀ (v5_x3a12 : ℚ), (∀ (v4_x3a13 : ℚ), (∀ (v3_x3a14 : ℚ), (∀ (v2_x3a15 : ℚ), (∀ (v1_x3a16 : ℚ), (∀ (v0_x3a17 : ℚ), ((((((((-20) * v0_x3a17) + (((-16)) * v7_x3a10)) + (((-12)) * v8_x3a9)) + ((-11) * v5_x3a12))) ≤ (6)) ∨ (((((((((((((18 * v6_x3a11) + (9 * v12_x3a5)) + (14 * v1_x3a16))) + ((11) * v13_x3a4)) ≤ 1) ∨ (((((((-19) * v17_x3a0) + ((13) * v1_x3a16)) + ((-19) * v15_x3a2))) + (((-14)) * v15_x3a2)) ≤ (7)))) ∧ ((((((((13) * v14_x3a3) + (((-1)) * v17_x3a0)) + ((16) * v14_x3a3)) + ((-2) * v3_x3a14))) ≤ (15)) ∧ (((((((-20) * v2_x3a15) + ((-11) * v8_x3a9)) + (7 * v0_x3a17))) + ((7) * v2_x3a15)) ≤ (13)))) ∨ (((((((((12 * v9_x3a8) + ((6) * v6_x3a11)) + ((11) * v5_x3a12)) + ((5) * v9_x3a8))) ≤ (-2)) ∧ (((((((((-1)) * v4_x3a13)) + (((-14)) * v1_x3a16)) + (((-16)) * v11_x3a6)) + (8 * v9_x3a8))) ≤ (11))) ∨ ((((((((-6) * v3_x3a14) + ((16) * v14_x3a3)) + (19 * v7_x3a10))) + v1_x3a16) ≤ ((-16))) ∧ (((((v13_x3a4 + ((-4) * v10_x3a7)) + ((-9) * v2_x3a15)) + ((10) * v12_x3a5))) ≤ (10))))))) ∧ (((((((((((18 * v14_x3a3) + (((-3)) * v11_x3a6)) + ((((-12)) * v9_x3a8))) + ((-6) * v10_x3a7))) ≤ ((-10))) ∧ (((((((15) * v15_x3a2) + (9 * v2_x3a15)) + (((-8)) * v11_x3a6)) + ((-19) * v10_x3a7))) ≤ 1)) ∨ (((((((14 * v8_x3a9) + ((-20) * v12_x3a5)) + ((-5) * v2_x3a15))) + ((2 * v6_x3a11))) ≤ ((-3))) ∧ (((((((-19) * v16_x3a1) + ((-10) * v9_x3a8)) + ((-6) * v0_x3a17))) + (((-16)) * v2_x3a15)) ≤ (6))))) ∧ (((((((((5) * v7_x3a10) + (4 * v2_x3a15)) + ((15) * v3_x3a14)) + ((-3) * v5_x3a12))) ≤ ((-7))) ∧ (((((((-13) * v2_x3a15) + ((15) * v9_x3a8)) + ((-10) * v8_x3a9))) + ((5) * v16_x3a1)) ≤ (10))) ∨ ((((((((17 * v4_x3a13) + ((16) * v2_x3a15)) + (7 * v6_x3a11))) + ((-6) * v7_x3a10)) ≤ ((-16))) ∨ (((((((-16) * v4_x3a13) + (((-12)) * v0_x3a17)) + (8 * v15_x3a2))) + ((-13) * v7_x3a10)) ≤ (20)))))))) ∧ ((((((((((((20 * v7_x3a10) + (0 * v3_x3a14)) + ((5) * v0_x3a17))) + (((-14)) * v3_x3a14)) ≤ (16)) ∨ ((((((((-17)) * v15_x3a2) + (((-12)) * v6_x3a11)) + ((-3) * v8_x3a9)) + ((-13) * v16_x3a1))) ≤ (13))) ∨ ((((((v0_x3a17 + (((-14)) * v1_x3a16)) + ((-18) * v15_x3a2)) + ((((-12)) * v9_x3a8))) ≤ 19)) ∨ ((((((10 * v0_x3a17) + (9 * v2_x3a15)) + ((-13) * v13_x3a4))) + (((-8)) * v15_x3a2)) ≤ ((-17)))))) ∧ (((((((-10) * v6_x3a11) + ((-12) * v7_x3a10)) + ((3) * v11_x3a6))) + (((-17)) * v16_x3a1)) ≤ 2)) ∧ ((((((((((6 * v5_x3a12) + (16 * v4_x3a13)) + ((-7) * v2_x3a15))) + (18 * v10_x3a7)) ≤ (5)) ∧ (((((((-20) * v4_x3a13) + (0 * v4_x3a13)) + (11 * v0_x3a17))) + (17 * v12_x3a5)) ≤ ((-8))))) ∧ ((((((((((-1)) * v6_x3a11) + ((-18) * v15_x3a2)) + ((-8) * v9_x3a8))) + (20 * v5_x3a12)) ≤ ((-14))) ∨ (((((((-11) * v0_x3a17) + ((-7) * v8_x3a9)) + ((3) * v4_x3a13))) + (((-1)) * v16_x3a1)) ≤ (-9))))) ∧ (((((((((9 * v4_x3a13) + ((-15) * v6_x3a11)) + ((15) * v11_x3a6))) + (6 * v17_x3a0)) ≤ (5)) ∨ ((((((2 * v6_x3a11) + (10 * v8_x3a9)) + ((((-1)) * v4_x3a13))) + ((-7) * v6_x3a11))) ≤ (3))) ∨ (((((((((-14) * v1_x3a16) + (4 * v10_x3a7)) + (6 * v8_x3a9))) + ((-10) * v2_x3a15)) ≤ (15)) ∨ ((((((6 * v10_x3a7) + (10 * v13_x3a4)) + ((-11) * v7_x3a10))) + (7 * v5_x3a12)) ≤ (-5)))))))))))))))))))))))))))))) :
    False := by
  vampire [*]
