-- UFIDL_Burns_burns11, from SMT-LIB (UFIDL, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `UFIDL_Burns_burns11.smt2`, beside this file. An SMT problem is a
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

theorem T_burns11 (s_0 : ℤ → Prop) (s_1 : ℤ → Prop) (s_2 : ℤ → Prop) (s_3 : ℤ → Prop) (s_4 : ℤ → Prop) (s_5 : ℤ → Prop) (s : ℤ → ℤ → Prop) (flag : ℤ → Prop) (p : ℤ) (q : ℤ) (a1 : (¬(((∀ (_x3fp : ℤ), ((¬(flag _x3fp)) → ((s_0 _x3fp) ∨ (s_1 _x3fp) ∨ (s_2 _x3fp)))) ∧ (∀ (_x3fp : ℤ), (∀ (_x3fq : ℤ), ((s_2 _x3fp) → (¬(s _x3fp _x3fq))))) ∧ (∀ (_x3fp : ℤ), (∀ (_x3fq : ℤ), (((_x3fq < _x3fp) ∧ (flag _x3fq) ∧ ((s_5 _x3fp) ∨ (s_4 _x3fp) ∨ ((s_3 _x3fp) ∧ (s _x3fp _x3fq)))) → ((¬(s_5 _x3fq)) ∧ (¬((s_4 _x3fq) ∧ (s _x3fq _x3fp))))))) ∧ (∀ (_x3fp : ℤ), ((s_0 _x3fp) → (¬((s_1 _x3fp) ∨ (s_2 _x3fp) ∨ (s_3 _x3fp) ∨ (s_4 _x3fp) ∨ (s_5 _x3fp))))) ∧ (∀ (_x3fp : ℤ), ((s_1 _x3fp) → (¬((s_2 _x3fp) ∨ (s_3 _x3fp) ∨ (s_4 _x3fp) ∨ (s_5 _x3fp))))) ∧ (∀ (_x3fp : ℤ), ((s_2 _x3fp) → (¬((s_3 _x3fp) ∨ (s_4 _x3fp) ∨ (s_5 _x3fp))))) ∧ (∀ (_x3fp : ℤ), ((s_3 _x3fp) → (¬((s_4 _x3fp) ∨ (s_5 _x3fp))))) ∧ (∀ (_x3fp : ℤ), ((s_4 _x3fp) → (¬(s_5 _x3fp)))) ∧ (∀ (_x3fr : ℤ), ((s_0 _x3fr) → (¬((s_1 _x3fr) ∨ (s_2 _x3fr) ∨ (((¬(_x3fr = p))) ∧ (((¬(_x3fr = p))) → (s_3 _x3fr))) ∨ (((¬(_x3fr = p))) → (s_4 _x3fr)) ∨ (s_5 _x3fr))))) ∧ (∀ (_x3fr : ℤ), ((s_1 _x3fr) → (¬((s_2 _x3fr) ∨ (((¬(_x3fr = p))) ∧ (((¬(_x3fr = p))) → (s_3 _x3fr))) ∨ (((¬(_x3fr = p))) → (s_4 _x3fr)) ∨ (s_5 _x3fr))))) ∧ (∀ (_x3fr : ℤ), ((s_2 _x3fr) → (¬((((¬(_x3fr = p))) ∧ (((¬(_x3fr = p))) → (s_3 _x3fr))) ∨ (((¬(_x3fr = p))) → (s_4 _x3fr)) ∨ (s_5 _x3fr))))) ∧ (∀ (_x3fr : ℤ), ((((¬(_x3fr = p))) ∧ (((¬(_x3fr = p))) → (s_3 _x3fr))) → (¬((((¬(_x3fr = p))) → (s_4 _x3fr)) ∨ (s_5 _x3fr))))) ∧ (∀ (_x3fr : ℤ), (((¬(_x3fr = p)) → (s_4 _x3fr)) → (¬(s_5 _x3fr)))) ∧ (s_3 p) ∧ (∀ (_x3fq : ℤ), ((_x3fq < p) → (s p _x3fq)))) → ((∀ (_x3ft : ℤ), ((¬(flag _x3ft)) → ((s_0 _x3ft) ∨ (s_1 _x3ft) ∨ (s_2 _x3ft)))) ∧ (∀ (_x3ft : ℤ), (∀ (_x3fr : ℤ), ((s_2 _x3ft) → (¬(((¬(_x3ft = p))) ∧ (((¬(_x3ft = p))) → (s _x3ft _x3fr))))))) ∧ (∀ (_x3ft : ℤ), (∀ (_x3fr : ℤ), (((_x3fr < _x3ft) ∧ (flag _x3fr) ∧ ((s_5 _x3ft) ∨ (((¬(_x3ft = p))) → (s_4 _x3ft)) ∨ (((¬(_x3ft = p))) ∧ (((¬(_x3ft = p))) → (s_3 _x3ft)) ∧ ((¬(_x3ft = p))) ∧ (((¬(_x3ft = p))) → (s _x3ft _x3fr))))) → ((¬(s_5 _x3fr)) ∧ (¬((((¬(_x3fr = p))) → (s_4 _x3fr)) ∧ ((¬(_x3fr = p))) ∧ (((¬(_x3fr = p))) → (s _x3fr _x3ft)))))))))))) :
    False := by
  vampire [*]
