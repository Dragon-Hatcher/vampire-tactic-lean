-- NRA_keymaera_intersection_example_simple_proof_node138307, from SMT-LIB (NRA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NRA_keymaera_intersection_example_simple_proof_node138307.smt2`, beside this file. An SMT problem is a
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

theorem T_intersection_x2dexample_x2dsimple_x2eproof_x2dnode138307 (v1 : ℝ) (v2uscore2dollarskuscore164 : ℝ) (A : ℝ) (B : ℝ) (v2 : ℝ) (x1uscore2dollarskuscore155 : ℝ) (I1 : ℝ) (I2 : ℝ) (x2 : ℝ) (x1 : ℝ) (I2uscore2dollarskuscore164 : ℝ) (xI1 : ℝ) (V : ℝ) (xI2 : ℝ) (I1uscore2dollarskuscore164 : ℝ) (ep : ℝ) (v1uscore2dollarskuscore164 : ℝ) (t639uscore0 : ℝ) (ts639uscore0 : ℝ) (a1 : (¬(∃ (ts639uscore0 : ℝ), ((((((((((((((((((I2uscore2dollarskuscore164 = 0) ∧ (v1uscore2dollarskuscore164 = 0)) ∧ (I1uscore2dollarskuscore164 = 1)) ∧ (xI1 > ((x1uscore2dollarskuscore155 + ((v1uscore2dollarskuscore164 * v1uscore2dollarskuscore164) / ((2 * B)))) + (((A / B) + 1) * (((A / 2) * (ep * ep)) + (ep * v1uscore2dollarskuscore164)))))) ∧ (I1uscore2dollarskuscore164 = 2)) ∧ (I1 = 2)) ∧ (xI1 > (x1 + ((v1 * v1) / ((2 * B)))))) ∧ (I2 = 2)) ∧ (xI2 < x2)) ∧ (B > 0)) ∧ (v1 ≥ 0)) ∧ (v1 ≤ V)) ∧ (v2 ≥ 0)) ∧ (v2 ≤ V)) ∧ (A ≥ 0)) ∧ (V > 0)) ∧ (ep > 0)) → ((xI1 = x1uscore2dollarskuscore155) ∨ ((t639uscore0 ≥ 0) → ((((0 ≤ ts639uscore0) ∧ (ts639uscore0 ≤ t639uscore0)) → (((((v1uscore2dollarskuscore164 ≥ 0) ∧ (v1uscore2dollarskuscore164 ≤ V)) ∧ ((((A * ts639uscore0) + v2uscore2dollarskuscore164)) ≥ 0)) ∧ ((((A * ts639uscore0) + v2uscore2dollarskuscore164)) ≤ V)) ∧ ((ts639uscore0 + 0) ≤ ep))) → (((2 : ℤ) = 2) ∨ (I2uscore2dollarskuscore164 = 2))))))))) :
    False := by
  vampire [*]
