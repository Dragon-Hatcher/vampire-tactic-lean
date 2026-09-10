-- GRP708-1, from TPTP v9.3.1 (GRP).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.16s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `GRP708-1.p`, beside this file. This is its statement in Lean:
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
variable {t_a t_b t_op__c t_unit : ι}
variable {t_ld t_mult t_rd : ι → ι → ι}

theorem T_GRP708m1 : (∀ v0 v1 : ι, ((t_mult v0 (t_ld v0 v1)) = v1)) → (∀ v2 v3 : ι, ((t_ld v2 (t_mult v2 v3)) = v3)) → (∀ v4 v5 : ι, ((t_mult (t_rd v4 v5) v5) = v4)) → (∀ v6 v7 : ι, ((t_rd (t_mult v6 v7) v7) = v6)) → (∀ v8 : ι, ((t_mult v8 t_unit) = v8)) → (∀ v9 : ι, ((t_mult t_unit v9) = v9)) → (∀ v10 v11 v12 : ι, ((t_mult v10 (t_mult v11 (t_mult v10 v12))) = (t_mult (t_mult v10 (t_mult v11 v10)) v12))) → (∀ v13 : ι, ((t_mult t_op__c v13) = (t_mult v13 t_op__c))) → (∀ v14 v15 : ι, ((t_mult (t_mult t_op__c t_op__c) (t_mult v14 v15)) = (t_mult (t_mult (t_mult t_op__c t_op__c) v14) v15))) → (¬((t_mult t_a (t_mult t_b t_op__c)) = (t_mult (t_mult t_a t_b) t_op__c))) → False := by
  vampire
