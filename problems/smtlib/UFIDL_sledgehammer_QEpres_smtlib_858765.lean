-- UFIDL_sledgehammer_QEpres_smtlib_858765, from SMT-LIB (UFIDL, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `UFIDL_sledgehammer_QEpres_smtlib_858765.smt2`, beside this file. An SMT problem is a
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

theorem T_smtlib_x2e858765 {S1 S2 S3 S4 S5 S6 S7 S8 S9 S10 : Type} [Nonempty S1] [Nonempty S2] [Nonempty S3] [Nonempty S4] [Nonempty S5] [Nonempty S6] [Nonempty S7] [Nonempty S8] [Nonempty S9] [Nonempty S10] (f1 : S1) (f2 : S1) (f3 : S3 → S2 → S1) (f4 : S3) (f5 : S2 → S3 → S1) (f6 : S4 → S3) (f7 : S4) (f8 : S5 → S6 → S3) (f9 : S7 → S6 → S5) (f10 : S8 → S7) (f11 : S8) (f12 : S6) (f13 : S10 → S9 → S1) (f14 : S8 → ℤ → S10) (f15 : S6 → ℤ → S8) (f16 : S2) (f17 : S3 → S3) (a1 : (¬(f1 = f2))) (a2 : (∀ (_x3fv0 : S2), (((f3 f4 _x3fv0) = f1) ↔ (((f5 _x3fv0 (f6 f7)) = f1) ∧ ((f3 (f8 (f9 (f10 f11) f12) f12) _x3fv0) = f1))))) (a3 : (∀ (_x3fv0 : ℤ) (_x3fv1 : ℤ) (_x3fv2 : S9), (((f13 (f14 (f15 f12 _x3fv0) _x3fv1) _x3fv2) = f1) ↔ True))) (a4 : (∀ (_x3fv0 : ℤ) (_x3fv1 : S9), (((f13 (f14 f11 _x3fv0) _x3fv1) = f1) ↔ False))) (a5 : (¬((f3 (f8 (f9 (f10 f11) f12) f12) f16) = f1))) (a6 : ((f5 f16 (f17 f4)) = f1)) (a7 : (∀ (_x3fv0 : S2) (_x3fv1 : S3), (((f5 _x3fv0 _x3fv1) = f1) ↔ ((f3 _x3fv1 _x3fv0) = f1)))) (a8 : (∀ (_x3fv0 : S3), ((f17 _x3fv0) = _x3fv0))) :
    False := by
  vampire [*]
