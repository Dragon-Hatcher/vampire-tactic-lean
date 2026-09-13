-- LRA_2010_Monniaux_QE_mjollnir2_formula_218, from SMT-LIB (LRA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LRA_2010_Monniaux_QE_mjollnir2_formula_218.smt2`, beside this file. An SMT problem is a
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

theorem T_formula_218 (a1 : (∀ (v11_x3a0 : ℚ), (∃ (v10_x3a1 : ℚ), (∀ (v9_x3a2 : ℚ), (∃ (v8_x3a3 : ℚ), (∀ (v7_x3a4 : ℚ), (∃ (v6_x3a5 : ℚ), (∀ (v5_x3a6 : ℚ), (∃ (v4_x3a7 : ℚ), (∀ (v3_x3a8 : ℚ), (∃ (v2_x3a9 : ℚ), (∀ (v1_x3a10 : ℚ), (∃ (v0_x3a11 : ℚ), ((((((15 * v5_x3a6) + (16 * v1_x3a10)) + ((-20) * v2_x3a9))) + (17 * v4_x3a7)) ≤ (-19))))))))))))))) :
    False := by
  vampire [*]
