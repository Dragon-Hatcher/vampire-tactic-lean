-- SWV904-1, from TPTP v9.3.1 (SWV).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SWV904-1.p`, beside this file. This is its statement in Lean:
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
variable {t_c__Com__Ocom__OSKIP t_tc__Com__Ocom t_v__c t_v__sko____Hoare____Mirabelle____Xstate____not____singleton____def____1 t_v__sko____Hoare____Mirabelle____Xstate____not____singleton____def____2 t_v__sko____Hoare____Mirabelle____Xstate____not____singleton____def____raw____1 t_v__sko____Hoare____Mirabelle____Xstate____not____singleton____def____raw____2 : ι}
variable {t_c__Com__Obody t_c__Com__Ocom__OBODY t_c__Com__Osko____Com____XWTs____elim____cases____7____1 t_c__Option__Ooption__ONone t_v__sko____Hoare____Mirabelle____Xsingle____stateE____1 : ι → ι}
variable {t_c__Com__Ocom__OSemi t_c__Option__Ooption__OSome : ι → ι → ι}
variable {t_c__Com__OWT____bodies t_c__Hoare____Mirabelle__Ostate____not____singleton : Prop}
variable {t_c__Com__OWT : ι → Prop}

theorem T_SWV904m1 : (∀ v0 v1 : ι, (¬((t_c__Option__Ooption__ONone v0) = (t_c__Option__Ooption__OSome v1 v0)))) → (∀ v2 v3 : ι, (¬((t_c__Option__Ooption__ONone v2) = (t_c__Option__Ooption__OSome v3 v2)))) → (∀ v4 v5 : ι, (¬((t_c__Option__Ooption__OSome v5 v4) = (t_c__Option__Ooption__ONone v4)))) → (∀ v6 v7 : ι, (¬((t_c__Option__Ooption__OSome v7 v6) = (t_c__Option__Ooption__ONone v6)))) → (∀ v8 : ι, ((t_c__Com__OWT (t_c__Com__Ocom__OBODY v8)) ∨ ((t_c__Com__Obody v8) = (t_c__Option__Ooption__ONone t_tc__Com__Ocom)))) → (∀ v9 : ι, (¬((t_c__Com__Ocom__OBODY v9) = t_c__Com__Ocom__OSKIP))) → (∀ v10 v11 v12 : ι, (¬((t_c__Com__Ocom__OBODY v12) = (t_c__Com__Ocom__OSemi v10 v11)))) → (∀ v13 v14 v15 : ι, (¬((t_c__Com__Ocom__OSemi v13 v14) = (t_c__Com__Ocom__OBODY v15)))) → (∀ v16 v17 : ι, ((¬((t_c__Com__Ocom__OBODY v16) = (t_c__Com__Ocom__OBODY v17))) ∨ (v16 = v17))) → (∀ v18 : ι, (¬(t_c__Com__Ocom__OSKIP = (t_c__Com__Ocom__OBODY v18)))) → (∀ v19 : ι, (((t_c__Com__Obody v19) = (t_c__Option__Ooption__OSome (t_c__Com__Osko____Com____XWTs____elim____cases____7____1 v19) t_tc__Com__Ocom)) ∨ (¬(t_c__Com__OWT (t_c__Com__Ocom__OBODY v19))))) → (∀ v20 v21 v22 v23 : ι, ((¬((t_c__Com__Ocom__OSemi v20 v22) = (t_c__Com__Ocom__OSemi v21 v23))) ∨ (v22 = v23))) → (∀ v24 v25 v26 v27 : ι, ((¬((t_c__Com__Ocom__OSemi v24 v26) = (t_c__Com__Ocom__OSemi v25 v27))) ∨ (v24 = v25))) → (∀ v28 v29 v30 : ι, ((¬((t_c__Option__Ooption__OSome v29 v28) = (t_c__Option__Ooption__OSome v30 v28))) ∨ (v29 = v30))) → (∀ v31 v32 : ι, (¬((t_c__Com__Ocom__OSemi v31 v32) = t_c__Com__Ocom__OSKIP))) → (∀ v33 v34 : ι, (¬(t_c__Com__Ocom__OSKIP = (t_c__Com__Ocom__OSemi v33 v34)))) → (∀ v35 v36 : ι, ((¬((t_c__Com__Obody v36) = (t_c__Option__Ooption__OSome v35 t_tc__Com__Ocom))) ∨ (¬t_c__Com__OWT____bodies) ∨ (t_c__Com__OWT v35))) → (∀ v37 v38 : ι, ((t_c__Com__OWT (t_c__Com__Ocom__OSemi v37 v38)) ∨ (¬(t_c__Com__OWT v38)) ∨ (¬(t_c__Com__OWT v37)))) → (∀ v39 v40 : ι, ((t_c__Com__OWT v39) ∨ (¬(t_c__Com__OWT (t_c__Com__Ocom__OSemi v39 v40))))) → (∀ v41 v42 : ι, ((t_c__Com__OWT v42) ∨ (¬(t_c__Com__OWT (t_c__Com__Ocom__OSemi v41 v42))))) → ((¬(t_v__sko____Hoare____Mirabelle____Xstate____not____singleton____def____raw____1 = t_v__sko____Hoare____Mirabelle____Xstate____not____singleton____def____raw____2)) ∨ (¬t_c__Hoare____Mirabelle__Ostate____not____singleton)) → (∀ v43 v44 : ι, (t_c__Hoare____Mirabelle__Ostate____not____singleton ∨ (v43 = v44))) → (∀ v45 : ι, ((¬((t_v__sko____Hoare____Mirabelle____Xsingle____stateE____1 v45) = v45)) ∨ (¬t_c__Hoare____Mirabelle__Ostate____not____singleton))) → (t_c__Com__OWT t_c__Com__Ocom__OSKIP) → ((¬(t_v__sko____Hoare____Mirabelle____Xstate____not____singleton____def____1 = t_v__sko____Hoare____Mirabelle____Xstate____not____singleton____def____2)) ∨ (¬t_c__Hoare____Mirabelle__Ostate____not____singleton)) → t_c__Hoare____Mirabelle__Ostate____not____singleton → t_c__Com__OWT____bodies → (t_c__Com__OWT t_v__c) → (¬t_c__Hoare____Mirabelle__Ostate____not____singleton) → False := by
  vampire
