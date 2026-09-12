-- SET015-4, from TPTP v9.3.1 (SET).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.13s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET015-4.p`, beside this file. This is its statement in Lean:
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
variable {t_as t_bs t_cs t_ds t_empty__set t_universal__set : ι}
variable {t_complement : ι → ι}
variable {t_f1 t_intersection t_union : ι → ι → ι}
variable {t_little__set : ι → Prop}
variable {t_member : ι → ι → Prop}

theorem T_SET015m4 : (∀ v0 v1 : ι, ((¬(t_member v0 v1)) ∨ (t_little__set v0))) → (∀ v2 v3 : ι, ((t_little__set (t_f1 v2 v3)) ∨ (v2 = v3))) → (∀ v4 v5 : ι, ((t_member (t_f1 v4 v5) v4) ∨ (t_member (t_f1 v4 v5) v5) ∨ (v4 = v5))) → (∀ v6 v7 : ι, ((¬(t_member (t_f1 v6 v7) v6)) ∨ (¬(t_member (t_f1 v6 v7) v7)) ∨ (v6 = v7))) → (∀ v8 v9 v10 : ι, ((¬(t_member v10 (t_intersection v8 v9))) ∨ (t_member v10 v8))) → (∀ v11 v12 v13 : ι, ((¬(t_member v13 (t_intersection v11 v12))) ∨ (t_member v13 v12))) → (∀ v14 v15 v16 : ι, ((t_member v16 (t_intersection v14 v15)) ∨ (¬(t_member v16 v14)) ∨ (¬(t_member v16 v15)))) → (∀ v17 v18 : ι, ((¬(t_member v18 (t_complement v17))) ∨ (¬(t_member v18 v17)))) → (∀ v19 v20 : ι, ((t_member v20 (t_complement v19)) ∨ (¬(t_little__set v20)) ∨ (t_member v20 v19))) → (∀ v21 v22 : ι, ((t_union v21 v22) = (t_complement (t_intersection (t_complement v21) (t_complement v22))))) → (∀ v23 : ι, (¬(t_member v23 t_empty__set))) → (∀ v24 : ι, ((t_member v24 t_universal__set) ∨ (¬(t_little__set v24)))) → ((t_union t_as t_bs) = t_cs) → ((t_union t_bs t_as) = t_ds) → (¬(t_cs = t_ds)) → False := by
  vampire
