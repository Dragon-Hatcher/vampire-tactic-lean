-- LIA_20190429_UltimateAutomizerSvcomp2019_jain_7_true_unreach_call_true_no_overflow_false_termination_i_8, from SMT-LIB (LIA, status unsat).
-- The vampire binary refutes it in 0.02s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LIA_20190429_UltimateAutomizerSvcomp2019_jain_7_true_unreach_call_true_no_overflow_false_termination_i_8.smt2`, beside this file. An SMT problem is a
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

theorem T_jain_7_true_x2dunreach_x2dcall_true_x2dno_x2doverflow_false_x2dtermination_x2ei_8 (c_main__x7ex_x7e0 : ℤ) (c_main__x7ey_x7e0 : ℤ) (c_main__x7ez_x7e0 : ℤ) (a1 : ((∃ (v_main__x23t_x7enondet1_6 : ℤ) (v_main__x23t_x7enondet1_5 : ℤ), (c_main__x7ey_x7e0 = ((2097152 * v_main__x23t_x7enondet1_6) + (2097152 * v_main__x23t_x7enondet1_5)))) ∧ (∃ (v_main__x23t_x7enondet0_5 : ℤ) (v_main__x23t_x7enondet0_6 : ℤ), (c_main__x7ex_x7e0 = ((1048576 * v_main__x23t_x7enondet0_5) + (1048576 * v_main__x23t_x7enondet0_6)))) ∧ (∃ (v_main__x23t_x7enondet2_5 : ℤ) (v_main__x23t_x7enondet2_6 : ℤ), (((4194304 * v_main__x23t_x7enondet2_5) + (4194304 * v_main__x23t_x7enondet2_6)) = c_main__x7ez_x7e0)))) (a2 : (¬((∃ (v_main__x23t_x7enondet1_8 : ℤ) (v_main__x23t_x7enondet1_6 : ℤ) (v_main__x23t_x7enondet1_7 : ℤ) (v_main__x23t_x7enondet1_5 : ℤ), (((2097152 * v_main__x23t_x7enondet1_8) + (2097152 * v_main__x23t_x7enondet1_6) + (2097152 * v_main__x23t_x7enondet1_7) + (2097152 * v_main__x23t_x7enondet1_5)) = c_main__x7ey_x7e0)) ∧ (∃ (v_main__x23t_x7enondet0_7 : ℤ) (v_main__x23t_x7enondet0_8 : ℤ) (v_main__x23t_x7enondet0_5 : ℤ) (v_main__x23t_x7enondet0_6 : ℤ), (((1048576 * v_main__x23t_x7enondet0_7) + (1048576 * v_main__x23t_x7enondet0_8) + (1048576 * v_main__x23t_x7enondet0_5) + (1048576 * v_main__x23t_x7enondet0_6)) = c_main__x7ex_x7e0)) ∧ (∃ (v_main__x23t_x7enondet2_7 : ℤ) (v_main__x23t_x7enondet2_8 : ℤ) (v_main__x23t_x7enondet2_5 : ℤ) (v_main__x23t_x7enondet2_6 : ℤ), (((4194304 * v_main__x23t_x7enondet2_7) + (4194304 * v_main__x23t_x7enondet2_8) + (4194304 * v_main__x23t_x7enondet2_5) + (4194304 * v_main__x23t_x7enondet2_6)) = c_main__x7ez_x7e0))))) :
    False := by
  vampire [*]
