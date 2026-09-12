-- SWV537-1.007, from TPTP v9.3.1 (SWV).
-- TPTP Status: Unsatisfiable.  The vampire binary refutes it in 0.15s
-- (`--mode portfolio --schedule casc --cores 1 -t 1`).
--
-- The problem itself is `SWV537-1.007.p`, beside this file. This is its statement in Lean:
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
variable {t_a1 t_a__834 t_a__836 t_a__838 t_a__840 t_a__842 t_a__844 t_a__846 t_a__848 t_a__850 t_a__851 t_a__853 t_a__855 t_a__857 t_a__859 t_a__860 t_a__861 t_a__863 t_a__865 t_a__867 t_a__869 t_a__871 t_a__872 t_a__874 t_a__876 t_a__878 t_a__880 t_e__833 t_e__835 t_e__837 t_e__839 t_e__841 t_e__843 t_e__845 t_e__847 t_e__849 t_e__852 t_e__854 t_e__856 t_e__858 t_e__862 t_e__864 t_e__866 t_e__868 t_e__870 t_e__873 t_e__875 t_e__877 t_e__879 t_e__882 t_e__883 t_i0 t_i1 t_i2 t_i3 t_i4 t_i5 t_i__881 : ι}
variable {t_select t_sk : ι → ι → ι}
variable {t_store : ι → ι → ι → ι}

theorem T_SWV537m1_007 : (∀ v0 v1 v2 : ι, ((t_select (t_store v0 v2 v1) v2) = v1)) → (∀ v3 v4 v5 v6 : ι, ((v5 = v6) ∨ ((t_select (t_store v3 v5 v4) v6) = (t_select v3 v6)))) → (t_a__834 = (t_store t_a1 t_i4 t_e__833)) → (t_a__836 = (t_store t_a__834 t_i3 t_e__835)) → (t_a__838 = (t_store t_a__836 t_i2 t_e__837)) → (t_a__840 = (t_store t_a__838 t_i1 t_e__839)) → (t_a__842 = (t_store t_a__840 t_i0 t_e__841)) → (t_a__844 = (t_store t_a__842 t_i5 t_e__843)) → (t_a__846 = (t_store t_a__844 t_i2 t_e__845)) → (t_a__848 = (t_store t_a__846 t_i5 t_e__847)) → (t_a__850 = (t_store t_a__848 t_i1 t_e__849)) → (t_a__851 = (t_store t_a__850 t_i1 t_e__849)) → (t_a__853 = (t_store t_a__851 t_i5 t_e__852)) → (t_a__855 = (t_store t_a__853 t_i2 t_e__854)) → (t_a__857 = (t_store t_a__855 t_i5 t_e__856)) → (t_a__859 = (t_store t_a__857 t_i2 t_e__858)) → (t_a__860 = (t_store t_a__836 t_i1 t_e__839)) → (t_a__861 = (t_store t_a__860 t_i2 t_e__837)) → (t_a__863 = (t_store t_a__861 t_i5 t_e__862)) → (t_a__865 = (t_store t_a__863 t_i0 t_e__864)) → (t_a__867 = (t_store t_a__865 t_i5 t_e__866)) → (t_a__869 = (t_store t_a__867 t_i2 t_e__868)) → (t_a__871 = (t_store t_a__869 t_i1 t_e__870)) → (t_a__872 = (t_store t_a__871 t_i1 t_e__870)) → (t_a__874 = (t_store t_a__872 t_i5 t_e__873)) → (t_a__876 = (t_store t_a__874 t_i2 t_e__875)) → (t_a__878 = (t_store t_a__876 t_i5 t_e__877)) → (t_a__880 = (t_store t_a__878 t_i2 t_e__879)) → (t_e__833 = (t_select t_a1 t_i3)) → (t_e__835 = (t_select t_a1 t_i4)) → (t_e__837 = (t_select t_a__836 t_i1)) → (t_e__839 = (t_select t_a__836 t_i2)) → (t_e__841 = (t_select t_a__840 t_i5)) → (t_e__843 = (t_select t_a__840 t_i0)) → (t_e__845 = (t_select t_a__844 t_i5)) → (t_e__847 = (t_select t_a__844 t_i2)) → (t_e__849 = (t_select t_a__848 t_i1)) → (t_e__852 = (t_select t_a__851 t_i2)) → (t_e__854 = (t_select t_a__851 t_i5)) → (t_e__856 = (t_select t_a__855 t_i2)) → (t_e__858 = (t_select t_a__855 t_i5)) → (t_e__862 = (t_select t_a__861 t_i0)) → (t_e__864 = (t_select t_a__861 t_i5)) → (t_e__866 = (t_select t_a__865 t_i2)) → (t_e__868 = (t_select t_a__865 t_i5)) → (t_e__870 = (t_select t_a__869 t_i1)) → (t_e__873 = (t_select t_a__872 t_i2)) → (t_e__875 = (t_select t_a__872 t_i5)) → (t_e__877 = (t_select t_a__876 t_i2)) → (t_e__879 = (t_select t_a__876 t_i5)) → (t_e__882 = (t_select t_a__859 t_i__881)) → (t_e__883 = (t_select t_a__880 t_i__881)) → (t_i__881 = (t_sk t_a__859 t_a__880)) → (¬(t_e__882 = t_e__883)) → False := by
  vampire
