-- LIA_tptp_ARI079_1, from SMT-LIB (LIA, status unsat).
-- The vampire binary refutes it in 0.01s
-- (`--input_syntax smtlib2 --mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LIA_tptp_ARI079_1.smt2`, beside this file. An SMT problem is a
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

theorem T_ARI079_x3d1 (a1 : (¬(∃ (_x3fX : ℤ) (_x3fY : ℤ), ((_x3fX + _x3fY) = _x3fX)))) :
    False := by
  vampire [*]
