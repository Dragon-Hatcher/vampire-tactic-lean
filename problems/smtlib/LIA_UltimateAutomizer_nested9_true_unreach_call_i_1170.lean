-- LIA_UltimateAutomizer_nested9_true_unreach_call_i_1170, from SMT-LIB (LIA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LIA_UltimateAutomizer_nested9_true_unreach_call_i_1170.smt2`, beside this file. An SMT problem is a
-- conjunction of assertions asked for satisfiability, so an `unsat` one becomes: take
-- the assertions as hypotheses, derive `False`. One hypothesis per `assert`, in order;
-- `let` is inlined, because neither this tactic nor a first-order prover has one.
--
-- Arithmetic is over ℤ.
import Mathlib
import Vampire
set_option maxHeartbeats 0
set_option maxRecDepth 1000000
set_option linter.all false

theorem T_nested9_true_x2dunreach_x2dcall_x2ei_1170 (c_main__x7ei_x7e6 : ℤ) (c_main__x7ej_x7e6 : ℤ) (c_main__x7ek_x7e6 : ℤ) (a1 : ((c_main__x7ej_x7e6 ≤ ((2 * c_main__x7ei_x7e6) + 1)) ∧ (c_main__x7ei_x7e6 ≤ 4) ∧ (c_main__x7ei_x7e6 ≤ 2) ∧ (c_main__x7ej_x7e6 ≤ (2 * c_main__x7ei_x7e6)) ∧ (c_main__x7ei_x7e6 ≤ 3) ∧ (∃ (main__x7ei_x7e6 : ℤ), ((c_main__x7ej_x7e6 ≤ ((2 * main__x7ei_x7e6) + 1)) ∧ (main__x7ei_x7e6 ≤ 4) ∧ (main__x7ei_x7e6 ≤ c_main__x7ek_x7e6))))) (a2 : (¬((c_main__x7ej_x7e6 ≤ ((2 * c_main__x7ei_x7e6) + 1)) ∧ (c_main__x7ei_x7e6 ≤ 4) ∧ (c_main__x7ej_x7e6 ≤ (2 * c_main__x7ei_x7e6)) ∧ (c_main__x7ei_x7e6 ≤ 3) ∧ (∃ (main__x7ei_x7e6 : ℤ), ((c_main__x7ej_x7e6 ≤ ((2 * main__x7ei_x7e6) + 1)) ∧ (main__x7ei_x7e6 ≤ 4) ∧ (main__x7ei_x7e6 ≤ c_main__x7ek_x7e6)))))) :
    False := by
  vampire [*]
