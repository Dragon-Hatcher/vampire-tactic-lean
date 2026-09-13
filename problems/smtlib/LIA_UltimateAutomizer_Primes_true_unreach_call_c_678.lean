-- LIA_UltimateAutomizer_Primes_true_unreach_call_c_678, from SMT-LIB (LIA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LIA_UltimateAutomizer_Primes_true_unreach_call_c_678.smt2`, beside this file. An SMT problem is a
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

theorem T_Primes_true_x2dunreach_x2dcall_x2ec_678 (main__x23t_x7eret12_0 : ℤ) (main__x7ef1_x7e22_0 : ℤ) (main__x7en_x7e22_0 : ℤ) (main__x23t_x7eshort13_1 : Prop) (a1 : (((∃ (v_nnf_35 : ℤ) (v_nnf_34 : ℤ), ((((main__x7ef1_x7e22_0) + (2 * v_nnf_35) + (2 * v_nnf_34) + 1) ≤ (main__x23t_x7eret12_0)) ∧ ((main__x7ef1_x7e22_0) ≤ v_nnf_35) ∧ (v_nnf_35 ≤ v_nnf_34) ∧ ((main__x7en_x7e22_0) ≤ 2))) ∧ ((main__x7en_x7e22_0) ≤ 2)) ∧ ((main__x23t_x7eshort13_1) = ((main__x23t_x7eret12_0) = (main__x7en_x7e22_0))) ∧ (¬(∃ (v_nnf_35 : ℤ) (v_nnf_34 : ℤ), ((((main__x7ef1_x7e22_0) + (2 * v_nnf_35) + (2 * v_nnf_34) + 1) ≤ (main__x23t_x7eret12_0)) ∧ ((main__x7ef1_x7e22_0) ≤ v_nnf_35) ∧ (v_nnf_35 ≤ v_nnf_34) ∧ ((main__x7en_x7e22_0) ≤ 2)))))) :
    False := by
  vampire [*]
