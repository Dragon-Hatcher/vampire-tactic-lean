-- NRA_keymaera_intersection_example_simple_proof_node126205, from SMT-LIB (NRA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NRA_keymaera_intersection_example_simple_proof_node126205.smt2`, beside this file. An SMT problem is a
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

theorem T_intersection_x2dexample_x2dsimple_x2eproof_x2dnode126205 (v1 : ℝ) (A : ℝ) (B : ℝ) (t586uscore0 : ℝ) (v2 : ℝ) (I1 : ℝ) (I2 : ℝ) (x2 : ℝ) (v1uscore2dollarskuscore113 : ℝ) (x2uscore2dollarskuscore79 : ℝ) (x1 : ℝ) (ts586uscore0 : ℝ) (xI1 : ℝ) (xI2 : ℝ) (V : ℝ) (v2uscore2dollarskuscore113 : ℝ) (ep : ℝ) (I2uscore2dollarskuscore113 : ℝ) (x1uscore2dollarskuscore104 : ℝ) (I1uscore2dollarskuscore113 : ℝ) (a1 : (¬(∃ (ts586uscore0 : ℝ), (((((((((((((((((v2uscore2dollarskuscore113 = 0) ∧ (I1uscore2dollarskuscore113 = 1)) ∧ (xI1 < x1uscore2dollarskuscore104)) ∧ (I1uscore2dollarskuscore113 = 2)) ∧ (I1 = 2)) ∧ (xI1 > (x1 + ((v1 * v1) / (2 * B))))) ∧ (I2 = 2)) ∧ (xI2 < x2)) ∧ (B > 0)) ∧ (v1 ≥ 0)) ∧ (v1 ≤ V)) ∧ (v2 ≥ 0)) ∧ (v2 ≤ V)) ∧ (A ≥ 0)) ∧ (V > 0)) ∧ (ep > 0)) → ((xI2 = x2uscore2dollarskuscore79) ∨ ((t586uscore0 ≥ 0) → ((((0 ≤ ts586uscore0) ∧ (ts586uscore0 ≤ t586uscore0)) → ((((((((((-1) * B) * ts586uscore0) + v1uscore2dollarskuscore113)) ≥ 0) ∧ ((((((-1) * B) * ts586uscore0) + v1uscore2dollarskuscore113)) ≤ V)) ∧ (v2uscore2dollarskuscore113 ≥ 0)) ∧ (v2uscore2dollarskuscore113 ≤ V)) ∧ ((ts586uscore0 + 0) ≤ ep))) → (((2 : ℤ) = 2) ∨ (I2uscore2dollarskuscore113 = 2))))))))) :
    False := by
  vampire [*]
