-- NRA_keymaera_intersection_example_simple_proof_node691038, from SMT-LIB (NRA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NRA_keymaera_intersection_example_simple_proof_node691038.smt2`, beside this file. An SMT problem is a
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

theorem T_intersection_x2dexample_x2dsimple_x2eproof_x2dnode691038 (v1 : ℝ) (v1uscore2dollarskuscore808 : ℝ) (A : ℝ) (v2uscore2dollarskuscore808 : ℝ) (B : ℝ) (x1uscore2dollarskuscore551 : ℝ) (v2 : ℝ) (ts2263uscore0 : ℝ) (I1 : ℝ) (I2 : ℝ) (t2263uscore0 : ℝ) (x2 : ℝ) (x1 : ℝ) (xI1 : ℝ) (xI2 : ℝ) (V : ℝ) (I2uscore2dollarskuscore808 : ℝ) (ep : ℝ) (x2uscore2dollarskuscore566 : ℝ) (I1uscore2dollarskuscore808 : ℝ) (a1 : (¬(∃ (ts2263uscore0 : ℝ), (((((((((((((((((v2uscore2dollarskuscore808 = 0) ∧ (v1uscore2dollarskuscore808 = 0)) ∧ (I2uscore2dollarskuscore808 = 0)) ∧ ((I1uscore2dollarskuscore808 = 2))) ∧ (I1 = 2)) ∧ (xI1 > (x1 + ((v1 * v1) / (2 * B))))) ∧ (I2 = 2)) ∧ (xI2 < x2)) ∧ (B > 0)) ∧ (v1 ≥ 0)) ∧ (v1 ≤ V)) ∧ (v2 ≥ 0)) ∧ (v2 ≤ V)) ∧ (A ≥ 0)) ∧ (V > 0)) ∧ (ep > 0)) → (((xI2 = x2uscore2dollarskuscore566) ∨ (xI1 = x1uscore2dollarskuscore551)) ∨ ((t2263uscore0 ≥ 0) → ((((0 ≤ ts2263uscore0) ∧ (ts2263uscore0 ≤ t2263uscore0)) → (((((v1uscore2dollarskuscore808 ≥ 0) ∧ (v1uscore2dollarskuscore808 ≤ V)) ∧ (v2uscore2dollarskuscore808 ≥ 0)) ∧ (v2uscore2dollarskuscore808 ≤ V)) ∧ ((ts2263uscore0 + 0) ≤ ep))) → (((I1uscore2dollarskuscore808 = 2)) ∨ ((1 : ℤ) = 2))))))))) :
    False := by
  vampire [*]
