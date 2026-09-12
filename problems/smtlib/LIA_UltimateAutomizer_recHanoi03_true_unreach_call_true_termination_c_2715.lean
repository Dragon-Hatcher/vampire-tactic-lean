-- LIA_UltimateAutomizer_recHanoi03_true_unreach_call_true_termination_c_2715, from SMT-LIB (LIA, status unsat).
-- The vampire binary refutes it in 0.11s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LIA_UltimateAutomizer_recHanoi03_true_unreach_call_true_termination_c_2715.smt2`, beside this file. An SMT problem is a
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

theorem T_recHanoi03_true_x2dunreach_x2dcall_true_x2dtermination_x2ec_2715 (c_hanoi__x23in_x7en : ℤ) (c_hanoi__x23t_x7eret0 : ℤ) (c_hanoi__x7en : ℤ) (a1 : (∃ (v_nnf_229 : ℤ) (v_nnf_228 : ℤ), ((c_hanoi__x7en ≤ 4) ∧ (((2 * v_nnf_229) + 1) ≤ c_hanoi__x23t_x7eret0) ∧ (c_hanoi__x23in_x7en ≤ c_hanoi__x7en) ∧ (1 ≤ v_nnf_228) ∧ (((2 * v_nnf_228) + 1) ≤ v_nnf_229)))) (a2 : (¬(∃ (v_nnf_231 : ℤ) (v_nnf_230 : ℤ), ((c_hanoi__x23in_x7en ≤ 4) ∧ (((2 * v_nnf_231) + 1) ≤ v_nnf_230) ∧ (((2 * v_nnf_230) + 1) ≤ c_hanoi__x23t_x7eret0) ∧ (1 ≤ v_nnf_231))))) :
    False := by
  vampire [*]
