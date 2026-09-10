-- SYN004-1.007, from TPTP v9.3.1 (SYN).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SYN004-1.007.p`, beside this file. This is its statement in Lean:
-- one type variable for TPTP's single sort, functors as functions into it, predicates
-- as functions into `Prop`, and the whole problem as `axiom₁ → … → axiomₙ → goal`.
-- `False` as the goal means the problem states no conjecture and asks for a refutation.
--
-- Only `Vampire` is imported, for the `vampire` tactic that closes the goal.
import Vampire
set_option maxHeartbeats 0
set_option maxRecDepth 100000000
set_option linter.all false
universe u
variable {ι : Type u}
variable [inst : Inhabited ι]
variable {t_p__1 t_p__2 t_p__3 t_p__4 t_p__5 t_p__6 t_p__7 t_q__1 t_q__2 t_q__3 t_q__4 t_q__5 t_q__6 t_q__7 : Prop}

theorem T_SYN004m1_007 : ((¬t_p__1) ∨ (¬t_q__1) ∨ t_p__2) → ((¬t_p__2) ∨ (¬t_q__2) ∨ t_p__3) → ((¬t_p__3) ∨ (¬t_q__3) ∨ t_p__4) → ((¬t_p__4) ∨ (¬t_q__4) ∨ t_p__5) → ((¬t_p__5) ∨ (¬t_q__5) ∨ t_p__6) → ((¬t_p__6) ∨ (¬t_q__6) ∨ t_p__7) → ((¬t_p__1) ∨ (¬t_q__1) ∨ t_q__2) → ((¬t_p__2) ∨ (¬t_q__2) ∨ t_q__3) → ((¬t_p__3) ∨ (¬t_q__3) ∨ t_q__4) → ((¬t_p__4) ∨ (¬t_q__4) ∨ t_q__5) → ((¬t_p__5) ∨ (¬t_q__5) ∨ t_q__6) → ((¬t_p__6) ∨ (¬t_q__6) ∨ t_q__7) → t_p__1 → t_q__1 → ((¬t_p__7) ∨ (¬t_q__7)) → False := by
  vampire
