-- GRP703+1, from TPTP v9.3.1 (GRP).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.03s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `GRP703+1.p`, beside this file. This is its statement in Lean:
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
variable {t_op__c t_op__d t_op__e t_op__f t_unit : ι}
variable {t_ld t_mult t_rd : ι → ι → ι}

theorem T_GRP703p1 : (∀ v0 v1 : ι, ((t_mult v1 (t_ld v1 v0)) = v0)) → (∀ v2 v3 : ι, ((t_ld v3 (t_mult v3 v2)) = v2)) → (∀ v4 v5 : ι, ((t_mult (t_rd v5 v4) v4) = v5)) → (∀ v6 v7 : ι, ((t_rd (t_mult v7 v6) v6) = v7)) → (∀ v8 : ι, ((t_mult v8 t_unit) = v8)) → (∀ v9 : ι, ((t_mult t_unit v9) = v9)) → (∀ v10 v11 v12 : ι, ((t_mult v12 (t_mult v11 (t_mult v11 v10))) = (t_mult (t_mult (t_mult v12 v11) v11) v10))) → (∀ v13 v14 : ι, ((t_mult t_op__c (t_mult v14 v13)) = (t_mult (t_mult t_op__c v14) v13))) → (∀ v15 v16 : ι, ((t_mult v16 (t_mult v15 t_op__c)) = (t_mult (t_mult v16 v15) t_op__c))) → (∀ v17 v18 : ι, ((t_mult v18 (t_mult t_op__c v17)) = (t_mult (t_mult v18 t_op__c) v17))) → (∀ v19 : ι, (t_op__d = (t_ld v19 (t_mult t_op__c v19)))) → (∀ v20 v21 : ι, (t_op__e = (t_mult (t_mult (t_rd t_op__c (t_mult v21 v20)) v20) v21))) → (∀ v22 v23 : ι, (t_op__f = (t_mult v23 (t_mult v22 (t_ld (t_mult v23 v22) t_op__c))))) → (∀ v24 v25 : ι, (((t_mult t_op__e (t_mult v24 v25)) = (t_mult (t_mult t_op__e v24) v25)) ∧ ((t_mult v24 (t_mult v25 t_op__e)) = (t_mult (t_mult v24 v25) t_op__e)) ∧ ((t_mult v24 (t_mult t_op__e v25)) = (t_mult (t_mult v24 t_op__e) v25)))) := by
  vampire
