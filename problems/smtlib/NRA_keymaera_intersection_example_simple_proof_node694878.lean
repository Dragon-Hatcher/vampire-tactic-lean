-- NRA_keymaera_intersection_example_simple_proof_node694878, from SMT-LIB (NRA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NRA_keymaera_intersection_example_simple_proof_node694878.smt2`, beside this file. An SMT problem is a
-- conjunction of assertions asked for satisfiability, so an `unsat` one becomes: take
-- the assertions as hypotheses, derive `False`. One hypothesis per `assert`, in order;
-- `let` is inlined, because neither this tactic nor a first-order prover has one.
--
-- Arithmetic is over ℝ.  This is *nonlinear* real arithmetic, the one fragment
-- that needs ℝ rather than ℚ: `x * x = 2` is satisfiable over the reals and
-- not over the rationals.
import Mathlib
import Vampire
set_option maxHeartbeats 0
set_option maxRecDepth 1000000
set_option linter.all false

theorem T_intersection_x2dexample_x2dsimple_x2eproof_x2dnode694878 (v1 : ℝ) (ts3336uscore0 : ℝ) (A : ℝ) (x1uscore2dollarskuscore568 : ℝ) (B : ℝ) (v2 : ℝ) (I1 : ℝ) (I2 : ℝ) (x2 : ℝ) (x1 : ℝ) (I1uscore2dollarskuscore828 : ℝ) (xI1 : ℝ) (xI2 : ℝ) (V : ℝ) (v1uscore2dollarskuscore828 : ℝ) (ep : ℝ) (I2uscore2dollarskuscore828 : ℝ) (v2uscore2dollarskuscore828 : ℝ) (t3336uscore0 : ℝ) (a1 : (¬(∃ (ts3336uscore0 : ℝ), (((((((((((((((((I2uscore2dollarskuscore828 = 0) ∧ (v1uscore2dollarskuscore828 = 0)) ∧ (I1uscore2dollarskuscore828 = 0)) ∧ ((I2uscore2dollarskuscore828 = 2))) ∧ (I1 = 2)) ∧ (xI1 > (x1 + ((v1 * v1) / (2 * B))))) ∧ (I2 = 2)) ∧ (xI2 < x2)) ∧ (B > 0)) ∧ (v1 ≥ 0)) ∧ (v1 ≤ V)) ∧ (v2 ≥ 0)) ∧ (v2 ≤ V)) ∧ (A ≥ 0)) ∧ (V > 0)) ∧ (ep > 0)) → ((xI1 = x1uscore2dollarskuscore568) ∨ ((t3336uscore0 ≥ 0) → ((((0 ≤ ts3336uscore0) ∧ (ts3336uscore0 ≤ t3336uscore0)) → (((((v1uscore2dollarskuscore828 ≥ 0) ∧ (v1uscore2dollarskuscore828 ≤ V)) ∧ ((((A * ts3336uscore0) + v2uscore2dollarskuscore828)) ≥ 0)) ∧ ((((A * ts3336uscore0) + v2uscore2dollarskuscore828)) ≤ V)) ∧ ((ts3336uscore0 + 0) ≤ ep))) → (((1 : ℤ) = 2) ∨ ((I2uscore2dollarskuscore828 = 2)))))))))) :
    False := by
  vampire [*]
