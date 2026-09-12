-- NRA_keymaera_intersection_example_onelane_proof_node1479, from SMT-LIB (NRA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NRA_keymaera_intersection_example_onelane_proof_node1479.smt2`, beside this file. An SMT problem is a
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

theorem T_intersection_x2dexample_x2donelane_x2eproof_x2dnode1479 (xI : ℝ) (ts0uscore1 : ℝ) (xuscore2dollarskuscore1 : ℝ) (t1uscore0dollarskuscore1 : ℝ) (A : ℝ) (vuscore2dollarskuscore1 : ℝ) (B : ℝ) (I1 : ℝ) (v : ℝ) (V : ℝ) (ep : ℝ) (I1uscore2dollarskuscore1 : ℝ) (x : ℝ) (a1 : (¬(∃ (ts0uscore1 : ℝ), (((((((((((((((((0 ≤ ts0uscore1) ∧ (ts0uscore1 ≤ t1uscore0dollarskuscore1)) → ((((((A * ts0uscore1) + vuscore2dollarskuscore1)) ≥ 0) ∧ ((((A * ts0uscore1) + vuscore2dollarskuscore1)) ≤ V)) ∧ (ts0uscore1 ≤ ep))) ∧ (t1uscore0dollarskuscore1 ≥ 0)) ∧ (xI = xuscore2dollarskuscore1)) ∧ (I1uscore2dollarskuscore1 = 0)) ∧ (vuscore2dollarskuscore1 ≥ 0)) ∧ (vuscore2dollarskuscore1 ≤ V)) ∧ (I1 = 2)) ∧ (xI < x)) ∧ (B > 0)) ∧ (v ≥ 0)) ∧ (v ≤ V)) ∧ (A ≥ 0)) ∧ (V > 0)) ∧ (ep > 0)) → ((I1uscore2dollarskuscore1 = 2) ∨ (((A * t1uscore0dollarskuscore1) + vuscore2dollarskuscore1) ≤ V)))))) :
    False := by
  vampire [*]
