-- NRA_keymaera_intersection_example_simple_proof_node259905, from SMT-LIB (NRA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NRA_keymaera_intersection_example_simple_proof_node259905.smt2`, beside this file. An SMT problem is a
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

theorem T_intersection_x2dexample_x2dsimple_x2eproof_x2dnode259905 (v1 : ℝ) (t1207uscore0 : ℝ) (v2uscore3dollarskuscore271 : ℝ) (x2uscore3dollarskuscore195 : ℝ) (v1uscore3dollarskuscore271 : ℝ) (A : ℝ) (B : ℝ) (v2 : ℝ) (I1 : ℝ) (I2 : ℝ) (x2 : ℝ) (I2uscore3dollarskuscore271 : ℝ) (x1 : ℝ) (I1uscore3dollarskuscore271 : ℝ) (xI1 : ℝ) (V : ℝ) (xI2 : ℝ) (ep : ℝ) (ts1207uscore0 : ℝ) (a1 : (¬(∃ (ts1207uscore0 : ℝ), (((((((((((((((((((v2uscore3dollarskuscore271 = V) ∧ (xI2 = x2uscore3dollarskuscore195)) ∧ (I1uscore3dollarskuscore271 = 0)) ∧ (I2uscore3dollarskuscore271 = 1)) ∧ (xI2 > ((x2uscore3dollarskuscore195 + ((v2uscore3dollarskuscore271 * v2uscore3dollarskuscore271) / ((2 * B)))) + (((A / B) + 1) * (((A / 2) * (ep * ep)) + (ep * v2uscore3dollarskuscore271)))))) ∧ ((I1uscore3dollarskuscore271 = 2))) ∧ (I1 = 2)) ∧ (xI1 < x1)) ∧ (I2 = 2)) ∧ (xI2 > (x2 + ((v2 * v2) / ((2 * B)))))) ∧ (B > 0)) ∧ (v1 ≥ 0)) ∧ (v1 ≤ V)) ∧ (v2 ≥ 0)) ∧ (v2 ≤ V)) ∧ (A ≥ 0)) ∧ (V > 0)) ∧ (ep > 0)) → ((t1207uscore0 ≥ 0) → ((((0 ≤ ts1207uscore0) ∧ (ts1207uscore0 ≤ t1207uscore0)) → ((((((((A * ts1207uscore0) + v1uscore3dollarskuscore271)) ≥ 0) ∧ ((((A * ts1207uscore0) + v1uscore3dollarskuscore271)) ≤ V)) ∧ (v2uscore3dollarskuscore271 ≥ 0)) ∧ (v2uscore3dollarskuscore271 ≤ V)) ∧ ((ts1207uscore0 + 0) ≤ ep))) → (((I1uscore3dollarskuscore271 = 2)) ∨ ((2 : ℤ) = 2)))))))) :
    False := by
  vampire [*]
