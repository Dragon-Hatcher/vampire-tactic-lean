-- NRA_keymaera_intersection_example_onelane_proof_node50551, from SMT-LIB (NRA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NRA_keymaera_intersection_example_onelane_proof_node50551.smt2`, beside this file. An SMT problem is a
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

theorem T_intersection_x2dexample_x2donelane_x2eproof_x2dnode50551 (v : ℝ) (xI : ℝ) (V : ℝ) (A : ℝ) (vuscore4dollarskuscore80 : ℝ) (B : ℝ) (ep : ℝ) (I1 : ℝ) (xuscore4dollarskuscore75 : ℝ) (ts114uscore1 : ℝ) (t213uscore0dollarskuscore1 : ℝ) (x : ℝ) (a1 : (¬(∃ (ts114uscore1 : ℝ), ((((((((((((((((0 ≤ ts114uscore1) ∧ (ts114uscore1 ≤ t213uscore0dollarskuscore1)) → ((((((((-B)) * ts114uscore1) + vuscore4dollarskuscore80)) ≥ 0) ∧ ((((((-B)) * ts114uscore1) + vuscore4dollarskuscore80)) ≤ V)) ∧ (ts114uscore1 ≤ ep))) ∧ (t213uscore0dollarskuscore1 ≥ 0)) ∧ (vuscore4dollarskuscore80 ≥ 0)) ∧ (vuscore4dollarskuscore80 ≤ V)) ∧ (xI > (xuscore4dollarskuscore75 + ((vuscore4dollarskuscore80 * vuscore4dollarskuscore80) / ((2 * B)))))) ∧ (I1 = 2)) ∧ (xI > (x + ((v * v) / ((2 * B)))))) ∧ (B > 0)) ∧ (v ≥ 0)) ∧ (v ≤ V)) ∧ (A ≥ 0)) ∧ (V > 0)) ∧ (ep > 0)) → (((((-B)) * t213uscore0dollarskuscore1) + vuscore4dollarskuscore80) ≤ V))))) :
    False := by
  vampire [*]
