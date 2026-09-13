-- LIA_UltimateAutomizer_Primes_true_unreach_call_c_670, from SMT-LIB (LIA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LIA_UltimateAutomizer_Primes_true_unreach_call_c_670.smt2`, beside this file. An SMT problem is a
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

theorem T_Primes_true_x2dunreach_x2dcall_x2ec_670 (c_main__x23t_x7eret12 : ℤ) (c_main__x7en_x7e22 : ℤ) (c_main__x7ef1_x7e22 : ℤ) (a1 : ((∃ (v_nnf_35 : ℤ) (v_nnf_34 : ℤ), (((c_main__x7ef1_x7e22 + (2 * v_nnf_35) + (2 * v_nnf_34) + 1) ≤ c_main__x23t_x7eret12) ∧ (c_main__x7ef1_x7e22 ≤ v_nnf_35) ∧ (v_nnf_35 ≤ v_nnf_34) ∧ (c_main__x7en_x7e22 ≤ 2))) ∧ (c_main__x7en_x7e22 ≤ 2))) (a2 : (¬(∃ (v_nnf_35 : ℤ) (v_nnf_34 : ℤ), (((c_main__x7ef1_x7e22 + (2 * v_nnf_35) + (2 * v_nnf_34) + 1) ≤ c_main__x23t_x7eret12) ∧ (c_main__x7ef1_x7e22 ≤ v_nnf_35) ∧ (v_nnf_35 ≤ v_nnf_34) ∧ (c_main__x7en_x7e22 ≤ 2))))) :
    False := by
  vampire [*]
