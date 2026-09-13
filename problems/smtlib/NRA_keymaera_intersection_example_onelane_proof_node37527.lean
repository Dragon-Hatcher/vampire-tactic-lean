-- NRA_keymaera_intersection_example_onelane_proof_node37527, from SMT-LIB (NRA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `NRA_keymaera_intersection_example_onelane_proof_node37527.smt2`, beside this file. An SMT problem is a
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

theorem T_intersection_x2dexample_x2donelane_x2eproof_x2dnode37527 (xI : ℝ) (ts83uscore2 : ℝ) (A : ℝ) (B : ℝ) (I1 : ℝ) (I1uscore4dollarskuscore27 : ℝ) (v : ℝ) (V : ℝ) (xuscore4dollarskuscore22 : ℝ) (ep : ℝ) (vuscore4dollarskuscore27 : ℝ) (t151uscore0dollarskuscore2 : ℝ) (x : ℝ) (a1 : (¬(∃ (ts83uscore2 : ℝ), ((((((((((((((((((0 ≤ ts83uscore2) ∧ (ts83uscore2 ≤ t151uscore0dollarskuscore2)) → ((((((A * ts83uscore2) + vuscore4dollarskuscore27)) ≥ 0) ∧ ((((A * ts83uscore2) + vuscore4dollarskuscore27)) ≤ V)) ∧ (ts83uscore2 ≤ ep))) ∧ (t151uscore0dollarskuscore2 ≥ 0)) ∧ (xI = xuscore4dollarskuscore22)) ∧ (I1uscore4dollarskuscore27 = 1)) ∧ (vuscore4dollarskuscore27 ≥ 0)) ∧ (vuscore4dollarskuscore27 ≤ V)) ∧ (xI < xuscore4dollarskuscore22)) ∧ (I1 = 2)) ∧ (xI > (x + ((v * v) / ((2 * B)))))) ∧ (B > 0)) ∧ (v ≥ 0)) ∧ (v ≤ V)) ∧ (A ≥ 0)) ∧ (V > 0)) ∧ (ep > 0)) → ((xI < ((((1 : ℤ) / 2) * (((A * (t151uscore0dollarskuscore2 * t151uscore0dollarskuscore2)) + ((2 * t151uscore0dollarskuscore2) * vuscore4dollarskuscore27)) + (2 * xuscore4dollarskuscore22))))) ∨ (xI > (((((1 : ℤ) / 2) * (((A * (t151uscore0dollarskuscore2 * t151uscore0dollarskuscore2)) + ((2 * t151uscore0dollarskuscore2) * vuscore4dollarskuscore27)) + (2 * xuscore4dollarskuscore22)))) + (((((A * t151uscore0dollarskuscore2) + vuscore4dollarskuscore27)) * (((A * t151uscore0dollarskuscore2) + vuscore4dollarskuscore27))) / ((2 * B)))))))))) :
    False := by
  vampire [*]
