-- PUZ005+1, from TPTP v9.3.1 (PUZ).
-- TPTP Status: Theorem.  The vampire binary refutes it in 0.01s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `PUZ005+1.p`, beside this file. This is its statement in Lean:
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
variable {t_a__friday t_a__lion t_a__monday t_a__saturday t_a__sunday t_a__thursday t_a__tuesday t_a__unicorn t_a__wednesday : ι}
variable {t_yesterday : ι → ι}
variable {t_day t_friday t_lion__lies t_monday t_saturday t_sunday t_thursday t_tuesday t_unicorn__lies t_wednesday : ι → Prop}
variable {t_lies__on__one__of : ι → ι → ι → Prop}

theorem T_PUZ005p1 : (t_monday t_a__monday) → (t_tuesday t_a__tuesday) → (t_wednesday t_a__wednesday) → (t_thursday t_a__thursday) → (t_friday t_a__friday) → (t_saturday t_a__saturday) → (t_sunday t_a__sunday) → (∀ v0 : ι, ((t_monday v0) → (t_day v0))) → (∀ v1 : ι, ((t_tuesday v1) → (t_day v1))) → (∀ v2 : ι, ((t_wednesday v2) → (t_day v2))) → (∀ v3 : ι, ((t_thursday v3) → (t_day v3))) → (∀ v4 : ι, ((t_friday v4) → (t_day v4))) → (∀ v5 : ι, ((t_saturday v5) → (t_day v5))) → (∀ v6 : ι, ((t_sunday v6) → (t_day v6))) → (∀ v7 : ι, ((t_monday v7) → (t_sunday (t_yesterday v7)))) → (∀ v8 : ι, ((t_tuesday v8) → (t_monday (t_yesterday v8)))) → (∀ v9 : ι, ((t_wednesday v9) → (t_tuesday (t_yesterday v9)))) → (∀ v10 : ι, ((t_thursday v10) → (t_wednesday (t_yesterday v10)))) → (∀ v11 : ι, ((t_friday v11) → (t_thursday (t_yesterday v11)))) → (∀ v12 : ι, ((t_saturday v12) → (t_friday (t_yesterday v12)))) → (∀ v13 : ι, ((t_sunday v13) → (t_saturday (t_yesterday v13)))) → (∀ v14 : ι, ((t_monday v14) → (t_lion__lies v14))) → (∀ v15 : ι, ((t_tuesday v15) → (t_lion__lies v15))) → (∀ v16 : ι, ((t_wednesday v16) → (t_lion__lies v16))) → (∀ v17 : ι, ((t_thursday v17) → (¬(t_lion__lies v17)))) → (∀ v18 : ι, ((t_friday v18) → (¬(t_lion__lies v18)))) → (∀ v19 : ι, ((t_saturday v19) → (¬(t_lion__lies v19)))) → (∀ v20 : ι, ((t_sunday v20) → (¬(t_lion__lies v20)))) → (∀ v21 : ι, ((t_monday v21) → (¬(t_unicorn__lies v21)))) → (∀ v22 : ι, ((t_tuesday v22) → (¬(t_unicorn__lies v22)))) → (∀ v23 : ι, ((t_wednesday v23) → (¬(t_unicorn__lies v23)))) → (∀ v24 : ι, ((t_thursday v24) → (t_unicorn__lies v24))) → (∀ v25 : ι, ((t_friday v25) → (t_unicorn__lies v25))) → (∀ v26 : ι, ((t_saturday v26) → (t_unicorn__lies v26))) → (∀ v27 : ι, ((t_sunday v27) → (¬(t_unicorn__lies v27)))) → (∀ v28 : ι, ((t_lion__lies v28) → (t_day v28))) → (∀ v29 : ι, ((t_unicorn__lies v29) → (t_day v29))) → (∀ v30 : ι, ((t_day v30) → (∀ v31 : ι, ((t_day v31) → (((t_lion__lies v30) ∧ (t_lies__on__one__of t_a__lion v30 v31)) → (¬(t_lion__lies v31))))))) → (∀ v32 : ι, ((t_day v32) → (∀ v33 : ι, ((t_day v33) → (((¬(t_lion__lies v32)) ∧ (t_lies__on__one__of t_a__lion v32 v33)) → (t_lion__lies v33)))))) → (∀ v34 : ι, ((t_day v34) → (∀ v35 : ι, ((t_day v35) → (((¬(t_lion__lies v34)) ∧ (¬(t_lies__on__one__of t_a__lion v34 v35))) → (¬(t_lion__lies v35))))))) → (∀ v36 : ι, ((t_day v36) → (∀ v37 : ι, ((t_day v37) → (((t_lion__lies v36) ∧ (¬(t_lies__on__one__of t_a__lion v36 v37))) → (t_lion__lies v37)))))) → (∀ v38 : ι, ((t_day v38) → (∀ v39 : ι, ((t_day v39) → (((t_unicorn__lies v38) ∧ (t_lies__on__one__of t_a__unicorn v38 v39)) → (¬(t_unicorn__lies v39))))))) → (∀ v40 : ι, ((t_day v40) → (∀ v41 : ι, ((t_day v41) → (((¬(t_unicorn__lies v40)) ∧ (t_lies__on__one__of t_a__unicorn v40 v41)) → (t_unicorn__lies v41)))))) → (∀ v42 : ι, ((t_day v42) → (∀ v43 : ι, ((t_day v43) → (((¬(t_unicorn__lies v42)) ∧ (¬(t_lies__on__one__of t_a__unicorn v42 v43))) → (¬(t_unicorn__lies v43))))))) → (∀ v44 : ι, ((t_day v44) → (∀ v45 : ι, ((t_day v45) → (((t_unicorn__lies v44) ∧ (¬(t_lies__on__one__of t_a__unicorn v44 v45))) → (t_unicorn__lies v45)))))) → (∃ v46 : ι, ((t_day v46) ∧ (t_lies__on__one__of t_a__lion v46 (t_yesterday v46)) ∧ (t_lies__on__one__of t_a__unicorn v46 (t_yesterday v46)))) := by
  vampire
