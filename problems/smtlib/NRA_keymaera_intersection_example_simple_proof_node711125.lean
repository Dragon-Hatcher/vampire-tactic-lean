-- NRA_keymaera_intersection_example_simple_proof_node711125, from SMT-LIB (NRA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NRA_keymaera_intersection_example_simple_proof_node711125.smt2`, beside this file. An SMT problem is a
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

theorem T_intersection_x2dexample_x2dsimple_x2eproof_x2dnode711125 (v1 : ℝ) (t3437uscore0 : ℝ) (A : ℝ) (B : ℝ) (v2 : ℝ) (ts3437uscore0 : ℝ) (I1 : ℝ) (I2 : ℝ) (x2 : ℝ) (v2uscore3dollarskuscore839 : ℝ) (x2uscore3dollarskuscore593 : ℝ) (x1 : ℝ) (xI1 : ℝ) (I2uscore3dollarskuscore839 : ℝ) (V : ℝ) (xI2 : ℝ) (I1uscore3dollarskuscore839 : ℝ) (ep : ℝ) (x1uscore3dollarskuscore581 : ℝ) (v1uscore3dollarskuscore839 : ℝ) (a1 : (¬(∃ (ts3437uscore0 : ℝ), (((((((((((((((((((((v2uscore3dollarskuscore839 = V) ∧ (xI2 = x2uscore3dollarskuscore593)) ∧ (xI1 = x1uscore3dollarskuscore581)) ∧ (I2uscore3dollarskuscore839 = 1)) ∧ (xI2 > ((x2uscore3dollarskuscore593 + ((v2uscore3dollarskuscore839 * v2uscore3dollarskuscore839) / ((2 * B)))) + (((A / B) + 1) * (((A / 2) * (ep * ep)) + (ep * v2uscore3dollarskuscore839)))))) ∧ (I1uscore3dollarskuscore839 = 1)) ∧ (xI1 < x1uscore3dollarskuscore581)) ∧ (I2uscore3dollarskuscore839 = 2)) ∧ (I1 = 2)) ∧ (xI1 < x1)) ∧ (I2 = 2)) ∧ (xI2 > (x2 + ((v2 * v2) / ((2 * B)))))) ∧ (B > 0)) ∧ (v1 ≥ 0)) ∧ (v1 ≤ V)) ∧ (v2 ≥ 0)) ∧ (v2 ≤ V)) ∧ (A ≥ 0)) ∧ (V > 0)) ∧ (ep > 0)) → ((t3437uscore0 ≥ 0) → ((((0 ≤ ts3437uscore0) ∧ (ts3437uscore0 ≤ t3437uscore0)) → ((((((((A * ts3437uscore0) + v1uscore3dollarskuscore839)) ≥ 0) ∧ ((((A * ts3437uscore0) + v1uscore3dollarskuscore839)) ≤ V)) ∧ (v2uscore3dollarskuscore839 ≥ 0)) ∧ (v2uscore3dollarskuscore839 ≤ V)) ∧ ((ts3437uscore0 + 0) ≤ ep))) → ((((2 : ℤ) = 2)) ∨ (((2 : ℤ) = 2))))))))) :
    False := by
  vampire [*]
