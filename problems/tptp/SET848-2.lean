-- SET848-2, from TPTP v9.3.1 (SET).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SET848-2.p`, beside this file. This is its statement in Lean:
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
variable {t_t__a t_v__S : ι}
variable {t_tc__set : ι → ι}
variable {t_c__Union t_c__Zorn__OTFin t_c__Zorn__Ochain t_c__Zorn__Omaxchain : ι → ι → ι}
variable {t_c__Zorn__Osucc t_c__minus : ι → ι → ι → ι}
variable {t_c__in t_c__lessequals : ι → ι → ι → Prop}

theorem T_SET848m2 : (∀ v0 v1 v2 v3 : ι, ((¬(t_c__in v3 v1 v0)) ∨ (t_c__in v3 v2 v0) ∨ (t_c__in v3 (t_c__minus v1 v2 (t_tc__set v0)) v0))) → (∀ v4 v5 : ι, (t_c__lessequals v5 v5 (t_tc__set v4))) → (∀ v6 v7 v8 : ι, ((¬(t_c__lessequals v8 (t_c__Zorn__OTFin v7 v6) (t_tc__set (t_tc__set (t_tc__set v6))))) ∨ (t_c__in (t_c__Union v8 (t_tc__set v6)) (t_c__Zorn__OTFin v7 v6) (t_tc__set (t_tc__set v6))))) → (∀ v9 v10 v11 : ι, ((¬(t_c__in v11 (t_c__Zorn__OTFin v10 v9) (t_tc__set (t_tc__set v9)))) ∨ (t_c__in v11 (t_c__Zorn__Ochain v10 v9) (t_tc__set (t_tc__set v9))))) → (∀ v12 v13 v14 : ι, ((¬(t_c__in v14 (t_c__minus (t_c__Zorn__Ochain v13 v12) (t_c__Zorn__Omaxchain v13 v12) (t_tc__set (t_tc__set (t_tc__set v12)))) (t_tc__set (t_tc__set v12)))) ∨ (¬((t_c__Zorn__Osucc v13 v14 v12) = v14)))) → (¬(t_c__in (t_c__Union (t_c__Zorn__OTFin t_v__S t_t__a) (t_tc__set t_t__a)) (t_c__Zorn__Omaxchain t_v__S t_t__a) (t_tc__set (t_tc__set t_t__a)))) → ((t_c__Zorn__Osucc t_v__S (t_c__Union (t_c__Zorn__OTFin t_v__S t_t__a) (t_tc__set t_t__a)) t_t__a) = (t_c__Union (t_c__Zorn__OTFin t_v__S t_t__a) (t_tc__set t_t__a))) → False := by
  vampire
