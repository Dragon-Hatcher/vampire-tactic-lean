-- NRA_keymaera_intersection_example_simple_proof_node65382, from SMT-LIB (NRA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NRA_keymaera_intersection_example_simple_proof_node65382.smt2`, beside this file. An SMT problem is a
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

theorem T_intersection_x2dexample_x2dsimple_x2eproof_x2dnode65382 (v1 : ℝ) (A : ℝ) (B : ℝ) (v2 : ℝ) (v2uscore1dollarskuscore289 : ℝ) (I1 : ℝ) (I2 : ℝ) (x2 : ℝ) (ts297uscore0 : ℝ) (I1uscore1dollarskuscore289 : ℝ) (x1 : ℝ) (xI1 : ℝ) (V : ℝ) (xI2 : ℝ) (x2uscore1dollarskuscore211 : ℝ) (I2uscore1dollarskuscore289 : ℝ) (ep : ℝ) (v1uscore1dollarskuscore289 : ℝ) (t297uscore0 : ℝ) (x1uscore1dollarskuscore202 : ℝ) (a1 : (¬(∃ (ts297uscore0 : ℝ), ((((((((((((((((((xI2 = x2uscore1dollarskuscore211) ∧ (xI1 = x1uscore1dollarskuscore202)) ∧ (I2uscore1dollarskuscore289 = 1)) ∧ (xI2 > ((x2uscore1dollarskuscore211 + ((v2uscore1dollarskuscore289 * v2uscore1dollarskuscore289) / (2 * B))) + (((A / B) + 1) * (((A / 2) * (ep * ep)) + (ep * v2uscore1dollarskuscore289)))))) ∧ ((I1uscore1dollarskuscore289 = 2))) ∧ (I1 = 2)) ∧ (xI1 < x1)) ∧ (I2 = 2)) ∧ (xI2 < x2)) ∧ (B > 0)) ∧ (v1 ≥ 0)) ∧ (v1 ≤ V)) ∧ (v2 ≥ 0)) ∧ (v2 ≤ V)) ∧ (A ≥ 0)) ∧ (V > 0)) ∧ (ep > 0)) → ((t297uscore0 ≥ 0) → ((((0 ≤ ts297uscore0) ∧ (ts297uscore0 ≤ t297uscore0)) → (((((((((A * ts297uscore0)) + v1uscore1dollarskuscore289)) ≥ 0) ∧ (((((A * ts297uscore0)) + v1uscore1dollarskuscore289)) ≤ V)) ∧ (((((A * ts297uscore0)) + v2uscore1dollarskuscore289)) ≥ 0)) ∧ (((((A * ts297uscore0)) + v2uscore1dollarskuscore289)) ≤ V)) ∧ ((ts297uscore0 + 0) ≤ ep))) → (((I1uscore1dollarskuscore289 = 2)) ∨ ((2 : ℤ) = 2)))))))) :
    False := by
  vampire [*]
