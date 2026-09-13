-- NRA_keymaera_intersection_example_simple_proof_node683513, from SMT-LIB (NRA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NRA_keymaera_intersection_example_simple_proof_node683513.smt2`, beside this file. An SMT problem is a
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

theorem T_intersection_x2dexample_x2dsimple_x2eproof_x2dnode683513 (v1 : ℝ) (x1uscore1dollarskuscore581 : ℝ) (I2uscore1dollarskuscore847 : ℝ) (A : ℝ) (B : ℝ) (v2 : ℝ) (I1 : ℝ) (I2 : ℝ) (x2 : ℝ) (x1 : ℝ) (I1uscore1dollarskuscore847 : ℝ) (xI1 : ℝ) (xI2 : ℝ) (V : ℝ) (t3269uscore0 : ℝ) (v1uscore1dollarskuscore847 : ℝ) (ep : ℝ) (v2uscore1dollarskuscore847 : ℝ) (ts3269uscore0 : ℝ) (a1 : (¬(∃ (ts3269uscore0 : ℝ), ((((((((((((((((((v1uscore1dollarskuscore847 = 0) ∧ (I2uscore1dollarskuscore847 = 0)) ∧ (I1uscore1dollarskuscore847 = 1)) ∧ (xI1 < x1uscore1dollarskuscore581)) ∧ (I2uscore1dollarskuscore847 = 2)) ∧ (I1 = 2)) ∧ (xI1 < x1)) ∧ (I2 = 2)) ∧ (xI2 < x2)) ∧ (B > 0)) ∧ (v1 ≥ 0)) ∧ (v1 ≤ V)) ∧ (v2 ≥ 0)) ∧ (v2 ≤ V)) ∧ (A ≥ 0)) ∧ (V > 0)) ∧ (ep > 0)) → ((xI1 = x1uscore1dollarskuscore581) ∨ ((t3269uscore0 ≥ 0) → ((((0 ≤ ts3269uscore0) ∧ (ts3269uscore0 ≤ t3269uscore0)) → (((((v1uscore1dollarskuscore847 ≥ 0) ∧ (v1uscore1dollarskuscore847 ≤ V)) ∧ ((((((-1) * B) * ts3269uscore0) + v2uscore1dollarskuscore847)) ≥ 0)) ∧ ((((((-1) * B) * ts3269uscore0) + v2uscore1dollarskuscore847)) ≤ V)) ∧ ((ts3269uscore0 + 0) ≤ ep))) → (((2 : ℤ) = 2) ∨ ((1 : ℤ) = 2))))))))) :
    False := by
  vampire [*]
