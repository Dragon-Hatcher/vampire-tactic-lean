-- LAT086-1, from TPTP v9.3.1 (LAT).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.34s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `LAT086-1.p`, beside this file. This is its statement in Lean:
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
variable {t_a t_b : ι}
variable {t_join t_meet : ι → ι → ι}

theorem T_LAT086m1 : (∀ v0 v1 v2 v3 v4 v5 v6 : ι, ((t_join (t_meet (t_join (t_meet v0 v1) (t_meet v1 (t_join v0 v1))) v2) (t_meet (t_join (t_meet v0 (t_join (t_join (t_meet v3 v1) (t_meet v1 v4)) v1)) (t_meet (t_join (t_meet v1 (t_meet (t_meet (t_join v3 (t_join v1 v4)) (t_join v5 v1)) v1)) (t_meet v6 (t_join v1 (t_meet (t_meet (t_join v3 (t_join v1 v4)) (t_join v5 v1)) v1)))) (t_join v0 (t_join (t_join (t_meet v3 v1) (t_meet v1 v4)) v1)))) (t_join (t_join (t_meet v0 v1) (t_meet v1 (t_join v0 v1))) v2))) = v1)) → (¬((t_meet t_a (t_join t_a t_b)) = t_a)) → False := by
  vampire
