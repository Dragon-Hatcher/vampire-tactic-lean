-- NRA_keymaera_intersection_example_simple_proof_node105659, from SMT-LIB (NRA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NRA_keymaera_intersection_example_simple_proof_node105659.smt2`, beside this file. An SMT problem is a
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

theorem T_intersection_x2dexample_x2dsimple_x2eproof_x2dnode105659 (x1uscore2dollarskuscore18 : ℝ) (v1 : ℝ) (I2uscore2dollarskuscore18 : ℝ) (v1uscore2dollarskuscore18 : ℝ) (v2uscore2dollarskuscore18 : ℝ) (A : ℝ) (x2uscore2dollarskuscore15 : ℝ) (B : ℝ) (v2 : ℝ) (I1 : ℝ) (I2 : ℝ) (x2 : ℝ) (x1 : ℝ) (xI1 : ℝ) (xI2 : ℝ) (V : ℝ) (ts490uscore0 : ℝ) (t490uscore0 : ℝ) (ep : ℝ) (I1uscore2dollarskuscore18 : ℝ) (a1 : (¬(∃ (ts490uscore0 : ℝ), ((((((((((((((((((((xI2 = x2uscore2dollarskuscore15) ∧ (v1uscore2dollarskuscore18 = V)) ∧ (xI1 = x1uscore2dollarskuscore18)) ∧ (I2uscore2dollarskuscore18 = 1)) ∧ (xI2 < x2uscore2dollarskuscore15)) ∧ (I1uscore2dollarskuscore18 = 0)) ∧ (I1uscore2dollarskuscore18 = 2)) ∧ (I1 = 2)) ∧ (xI1 > (x1 + ((v1 * v1) / (2 * B))))) ∧ (I2 = 2)) ∧ (xI2 < x2)) ∧ (B > 0)) ∧ (v1 ≥ 0)) ∧ (v1 ≤ V)) ∧ (v2 ≥ 0)) ∧ (v2 ≤ V)) ∧ (A ≥ 0)) ∧ (V > 0)) ∧ (ep > 0)) → ((t490uscore0 ≥ 0) → ((((0 ≤ ts490uscore0) ∧ (ts490uscore0 ≤ t490uscore0)) → (((((v1uscore2dollarskuscore18 ≥ 0) ∧ (v1uscore2dollarskuscore18 ≤ V)) ∧ ((((A * ts490uscore0) + v2uscore2dollarskuscore18)) ≥ 0)) ∧ ((((A * ts490uscore0) + v2uscore2dollarskuscore18)) ≤ V)) ∧ ((ts490uscore0 + 0) ≤ ep))) → (((1 : ℤ) = 2) ∨ ((2 : ℤ) = 2)))))))) :
    False := by
  vampire [*]
