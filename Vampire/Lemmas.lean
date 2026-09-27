import Mathlib.Algebra.Order.Floor.Ring
import Mathlib.Algebra.Order.Field.Basic
import Mathlib.Tactic.Linarith
import Mathlib.Tactic.Ring
import Mathlib.Tactic.FieldSimp

/-!
Lemmas that certify one kind of vampire step each, stated the way the step
writes its conclusion, so that replay instantiates one at the step's terms and
relates the instance to the step by ring arithmetic alone -- no decision
procedure runs at replay time. The procedures used to prove them here run once,
when this file is built.

Replay is precompiled and imports no Mathlib, so it names these rather than
referring to them.
-/

namespace Vampire.Lemmas

-- The lemmas share one set of instance assumptions, and not every lemma uses all of them.
set_option linter.unusedSectionVars false

variable {α : Type*} [Field α] [LinearOrder α] [IsStrictOrderedRing α] [FloorRing α]

/-!
### ALASCA's integer Fourier-Motzkin

    k₀ s + r₀ > 0    -k₁ s + r₁ > 0    isInt(j s + u)
    ─────────────────────────────────────────────────
    t₀' + t₁' > 0  ∨  s + t₀' = 0

with `t₀ = r₀ / k₀` and `t₁ = r₁ / k₁` what vampire calls the premises' terms
besides `s`, and each `tᵢ'` strengthened from `tᵢ` by the integrality of
`j s + u` where its premise is strict: `t₀' = (u + ⌈j t₀ - u⌉ - 1) / j` and
`t₁' = (-u + ⌈j t₁ + u⌉ - 1) / j`, a ceiling being written `-⌊-x⌋`. The floor's
argument is taken as the step writes it (`X`, `Y`), and is one with what it
stands for up to ring arithmetic.
-/

/-- The lower bound, strict: `j s + u` is an integer above `u - j t₀`. -/
theorem ifm_lower {k s r j u t₀ X : α} (hk : 0 < k) (hj : 0 < j) (ht : t₀ * k = r)
    (h : 0 < k * s + r) (hint : ∃ n : ℤ, (n : α) = j * s + u) (hX : X = -(j * t₀ - u)) :
    0 ≤ s + (u + -((⌊X⌋ : ℤ) : α) - 1) / j := by
  obtain ⟨n, hn⟩ := hint
  have hs : 0 < s + t₀ := by
    have : k * (s + t₀) = k * s + r := by rw [← ht]; ring
    exact pos_of_mul_pos_right (this ▸ h) hk.le
  -- `n` is above `X`, so above its floor by at least one.
  have hnX : X < (n : α) := by rw [hX, hn]; nlinarith
  have hfl : (⌊X⌋ : ℤ) + 1 ≤ n := by
    have := Int.floor_lt.mpr hnX
    omega
  have hfl' : ((⌊X⌋ : ℤ) : α) + 1 ≤ (n : α) := by exact_mod_cast hfl
  have e : s + (u + -((⌊X⌋ : ℤ) : α) - 1) / j
      = (j * s + u + -((⌊X⌋ : ℤ) : α) - 1) / j := by
    field_simp
    ring
  rw [e]
  apply div_nonneg _ hj.le
  rw [← hn]
  linarith

/-- The lower bound, not strict: the premise's own. -/
theorem ifm_lower_le {k s r t₀ : α} (hk : 0 < k) (ht : t₀ * k = r) (h : 0 ≤ k * s + r) :
    0 ≤ s + t₀ := by
  have : k * (s + t₀) = k * s + r := by rw [← ht]; ring
  exact nonneg_of_mul_nonneg_right (this ▸ h) hk

/-- The upper bound, strict: `j s + u` is an integer below `j t₁ + u`. -/
theorem ifm_upper {k s r j u t₁ Y : α} (hk : 0 < k) (hj : 0 < j) (ht : t₁ * k = r)
    (h : 0 < -(k * s) + r) (hint : ∃ n : ℤ, (n : α) = j * s + u) (hY : Y = -(j * t₁ + u)) :
    0 ≤ -s + (-u + -((⌊Y⌋ : ℤ) : α) - 1) / j := by
  obtain ⟨n, hn⟩ := hint
  have hs : 0 < -s + t₁ := by
    have : k * (-s + t₁) = -(k * s) + r := by rw [← ht]; ring
    exact pos_of_mul_pos_right (this ▸ h) hk.le
  -- `-n` is above `Y`, so above its floor by at least one.
  have hnY : Y < ((-n : ℤ) : α) := by push_cast; rw [hY, hn]; nlinarith
  have hfl : (⌊Y⌋ : ℤ) + 1 ≤ -n := by
    have := Int.floor_lt.mpr hnY
    omega
  have hfl' : ((⌊Y⌋ : ℤ) : α) + 1 ≤ -(n : α) := by exact_mod_cast hfl
  have e : -s + (-u + -((⌊Y⌋ : ℤ) : α) - 1) / j
      = (-(j * s + u) + -((⌊Y⌋ : ℤ) : α) - 1) / j := by
    field_simp
    ring
  rw [e]
  apply div_nonneg _ hj.le
  rw [← hn]
  linarith

/-- The upper bound, not strict: the premise's own. -/
theorem ifm_upper_le {k s r t₁ : α} (hk : 0 < k) (ht : t₁ * k = r) (h : 0 ≤ -(k * s) + r) :
    0 ≤ -s + t₁ := by
  have : k * (-s + t₁) = -(k * s) + r := by rw [← ht]; ring
  exact nonneg_of_mul_nonneg_right (this ▸ h) hk

/-- The two bounds together: they meet, or leave room between them. -/
theorem ifm_join {x y : α} (hx : 0 ≤ x) (hy : 0 ≤ y) : 0 < x + y ∨ x = 0 := by
  rcases hx.lt_or_eq with h | h
  · left; linarith
  · right; exact h.symm

/-- A floor is an integer: floor Fourier-Motzkin's `isInt(⌊x⌋)`, at `j = 1`, `u = 0`. -/
theorem ifm_floor_int (x : α) : ∃ n : ℤ, (n : α) = 1 * ((⌊x⌋ : ℤ) : α) + 0 :=
  ⟨⌊x⌋, by ring⟩

/--
A term is an integer where an equation says it is a floor: ALASCA states
`isInt(w)` as `a = b` with `b - a = c (⌊…⌋ - w)`, for a positive `c` -- the
floor the summand it orders biggest, the rest over its coefficient `w`.
-/
theorem int_of_eq {a b c w : α} {n : ℤ} (h : a = b) (hc : 0 < c) (he : b - a = c * ((n : α) - w)) :
    ∃ m : ℤ, (m : α) = w :=
  ⟨n, by
    have h0 : c * ((n : α) - w) = 0 := by rw [← he, h]; ring
    have := (mul_eq_zero.mp h0).resolve_left hc.ne'
    linarith⟩

/-- `int_of_eq`, for a floor of negative coefficient. -/
theorem int_of_eq' {a b c w : α} {n : ℤ} (h : a = b) (hc : 0 < c) (he : b - a = c * (w - (n : α))) :
    ∃ m : ℤ, (m : α) = w :=
  ⟨n, by
    have h0 : c * (w - (n : α)) = 0 := by rw [← he, h]; ring
    have := (mul_eq_zero.mp h0).resolve_left hc.ne'
    linarith⟩

/--
An integer's negation is one: the third premise states `isInt(-(j s + u))`
where vampire's coefficient of `s` in it was negative, `j` being its absolute
value.
-/
theorem ifm_int_neg {w : α} (h : ∃ n : ℤ, (n : α) = -w) : ∃ n : ℤ, (n : α) = w :=
  let ⟨n, hn⟩ := h
  ⟨-n, by push_cast; rw [hn]; ring⟩

/-!
### ALASCA's floor rules
-/

/--
Floor elimination: `k ⌊s⌋ + r = 0` is false where `-r / k` is not an integer,
which is that it lies strictly between one, `m`, and the next.
-/
theorem floor_elim {a b k r : α} {n : ℤ} (m : ℤ) (h : a = b) (he : b - a = r + k * (n : α))
    (hk : k ≠ 0) (hlo : (m : α) < -r / k) (hhi : -r / k < (m : α) + 1) : False := by
  have hn : (n : α) = -r / k := by
    rw [eq_div_iff hk]
    have : r + k * (n : α) = 0 := by rw [← he, h]; ring
    linarith
  rw [← hn] at hlo hhi
  have h1 : m < n := by exact_mod_cast hlo
  have h2 : n < m + 1 := by exact_mod_cast hhi
  omega

/-- Coherence normalization: a term equal to an integer is its own floor. -/
theorem coherence_normalization {t : α} (h : ∃ n : ℤ, (n : α) = t) : t = ((⌊t⌋ : ℤ) : α) := by
  obtain ⟨n, rfl⟩ := h
  simp

/--
Coherence: a floor is unchanged by taking out an integer multiple `i` of an
integer `w`, `⌊X⌋ = ⌊X - i w⌋ + i w`; `Y` is `X - i w` as the step writes it.
-/
theorem coherence {X Y I w : α} (i : ℤ) (hI : (i : α) = I) (hw : ∃ n : ℤ, (n : α) = w)
    (hY : Y = X - I * w) : ((⌊X⌋ : ℤ) : α) = ((⌊Y⌋ : ℤ) : α) + I * w := by
  obtain ⟨n, rfl⟩ := hw
  subst hI
  have : X = Y + ((i * n : ℤ) : α) := by rw [hY]; push_cast; ring
  rw [this, Int.floor_add_intCast]
  push_cast
  ring

/-!
### Vampire's theory axioms

`Shell/TheoryAxioms.cpp` adds each as a clause of fixed literals over the
variables `X0`, `X1`, ... it numbers itself. Each lemma here states one, its
disjuncts in the order the axiom lists its literals and its arguments the
variables in the order of their numbers, so that replay instantiates it at the
clause's variables and places each disjunct where the worker recorded the
axiom's literal went.
-/

section Ring
variable {α : Type*} [CommRing α] [LinearOrder α] [IsStrictOrderedRing α]

theorem tha_add_commutativity (x y : α) : x + y = y + x := add_comm x y
theorem tha_mul_commutativity (x y : α) : x * y = y * x := mul_comm x y
theorem tha_add_associativity (x y z : α) : x + (y + z) = x + y + z := (add_assoc x y z).symm
theorem tha_mul_associativity (x y z : α) : x * (y * z) = x * y * z := (mul_assoc x y z).symm
theorem tha_add_right_identity (x : α) : x + 0 = x := add_zero x
theorem tha_mul_right_identity (x : α) : x * 1 = x := mul_one x
theorem tha_inverse_op_op_inverses (x y : α) : -(x + y) = -y + -x := by ring
theorem tha_inverse_op_unit (x : α) : x + -x = 0 := add_neg_cancel x
theorem tha_nonreflex (x : α) : ¬x < x := lt_irrefl x
theorem tha_transitivity (x y z : α) : ¬x < y ∨ ¬y < z ∨ x < z := by
  by_cases h₁ : x < y
  · by_cases h₂ : y < z
    · exact Or.inr (Or.inr (h₁.trans h₂))
    · exact Or.inr (Or.inl h₂)
  · exact Or.inl h₁
theorem tha_order_totality (x y : α) : x < y ∨ y < x ∨ x = y := by
  rcases lt_trichotomy x y with h | h | h
  · exact Or.inl h
  · exact Or.inr (Or.inr h)
  · exact Or.inr (Or.inl h)
theorem tha_order_monotonicity (x y z : α) : ¬x < y ∨ x + z < y + z := by
  by_cases h : x < y
  · exact Or.inr (add_lt_add_of_lt_of_le h le_rfl)
  · exact Or.inl h
theorem tha_order_plus_one_dichotomy (x y : α) : x < y ∨ y < x + 1 := by
  by_cases h : x < y
  · exact Or.inl h
  · exact Or.inr (lt_of_le_of_lt (not_lt.mp h) (lt_add_one x))
theorem tha_minus_minus_x (x : α) : - -x = x := neg_neg x
theorem tha_times_zero (x : α) : x * 0 = 0 := mul_zero x
theorem tha_distributivity (x y z : α) : x * (y + z) = x * y + x * z := mul_add x y z
theorem tha_abs_equals (x : α) : ¬0 < x ∨ |x| = x := by
  by_cases h : 0 < x
  · exact Or.inr (abs_of_pos h)
  · exact Or.inl h
theorem tha_abs_minus_equals (x : α) : ¬x < 0 ∨ |x| = -x := by
  by_cases h : x < 0
  · exact Or.inr (abs_of_neg h)
  · exact Or.inl h

end Ring

section Int

theorem tha_extra_integer_ordering (x y : ℤ) : ¬x < y ∨ ¬y < x + 1 := by omega
theorem tha_modulo_multiply (x y : ℤ) : y = 0 ∨ x = x % y + y * (x / y) := by
  by_cases h : y = 0
  · exact Or.inl h
  · exact Or.inr (Int.emod_add_mul_ediv x y).symm
theorem tha_modulo_positive (x y : ℤ) : y = 0 ∨ ¬x % y < 0 := by
  by_cases h : y = 0
  · exact Or.inl h
  · exact Or.inr (not_lt.mpr (Int.emod_nonneg x h))
theorem tha_modulo_small (x y : ℤ) : y = 0 ∨ ¬|y| + -1 < x % y := by
  by_cases h : y = 0
  · exact Or.inl h
  · have := Int.emod_lt_abs x h
    exact Or.inr (by omega)

end Int

section Field
variable {α : Type*} [Field α] [LinearOrder α] [IsStrictOrderedRing α]

theorem tha_quotient_non_zero (x : α) : x = 0 ∨ ¬1 / x = 0 := by
  by_cases h : x = 0
  · exact Or.inl h
  · exact Or.inr (one_div_ne_zero h)
theorem tha_quotient_multiply (x y : α) : x = 0 ∨ y * x / x = y := by
  by_cases h : x = 0
  · exact Or.inl h
  · exact Or.inr (mul_div_cancel_right₀ y h)

variable [FloorRing α]

theorem tha_floor_small (x : α) : ¬x < ((⌊x⌋ : ℤ) : α) := not_lt.mpr (Int.floor_le x)
theorem tha_floor_big (x : α) : x + -1 < ((⌊x⌋ : ℤ) : α) := by
  have := Int.sub_one_lt_floor x
  linarith
theorem tha_ceiling_big (x : α) : ¬((⌈x⌉ : ℤ) : α) < x := not_lt.mpr (Int.le_ceil x)
theorem tha_ceiling_small (x : α) : ((⌈x⌉ : ℤ) : α) < x + 1 := Int.ceil_lt_add_one x

end Field

section Alasca
variable {α : Type*} [CommRing α] [LinearOrder α] [IsStrictOrderedRing α]

/-! ALASCA's axioms (`AlascaAxioms`), for a nonlinear problem, in the order it adds them. -/

theorem tha_alasca_0 (x y z : α) : x + (y + z) = x + y + z := (add_assoc x y z).symm
theorem tha_alasca_1 (x y : α) : x + y = x + y := rfl
theorem tha_alasca_2 (x y z : α) : x * (y + z) = x * y + x * z := mul_add x y z
theorem tha_alasca_3 (x y z : α) : 0 ≤ -x ∨ 0 ≤ y + -z ∨ 0 < x * z + -(x * y) := by
  by_cases hx : 0 ≤ -x
  · exact Or.inl hx
  by_cases hyz : 0 ≤ y + -z
  · exact Or.inr (Or.inl hyz)
  refine Or.inr (Or.inr ?_)
  have hx : 0 < x := by linarith
  have hyz : 0 < z - y := by linarith
  have := mul_pos hx hyz
  linarith [mul_sub x z y]
theorem tha_alasca_4 (x y z : α) : 0 ≤ x ∨ 0 ≤ y + -z ∨ 0 < x * y + -(x * z) := by
  by_cases hx : 0 ≤ x
  · exact Or.inl hx
  by_cases hyz : 0 ≤ y + -z
  · exact Or.inr (Or.inl hyz)
  refine Or.inr (Or.inr ?_)
  have hx : 0 < -x := by linarith
  have hyz : 0 < z - y := by linarith
  have := mul_pos hx hyz
  linarith [mul_sub x z y, neg_mul x (z - y)]

end Alasca

/-!
### ALASCA's Fourier-Motzkin

    j s + a >₁ 0    -k s + b >₂ 0
    ─────────────────────────────
    k a + j b > 0    (∨ -k s + b = 0 where both are ≥)

for positive numerals `j` and `k`; at the integers `k a + j b - 1 > 0`.
-/

section FourierMotzkin
variable {α : Type*} [CommRing α] [LinearOrder α] [IsStrictOrderedRing α]

theorem fm_gt_gt {j k s a b : α} (hj : 0 < j) (hk : 0 < k)
    (h₁ : 0 < j * s + a) (h₂ : 0 < -(k * s) + b) : 0 < k * a + j * b := by
  have := add_pos (mul_pos hk h₁) (mul_pos hj h₂)
  linarith [this]
theorem fm_gt_ge {j k s a b : α} (hj : 0 < j) (hk : 0 < k)
    (h₁ : 0 < j * s + a) (h₂ : 0 ≤ -(k * s) + b) : 0 < k * a + j * b := by
  have := add_pos_of_pos_of_nonneg (mul_pos hk h₁) (mul_nonneg hj.le h₂)
  linarith [this]
theorem fm_ge_gt {j k s a b : α} (hj : 0 < j) (hk : 0 < k)
    (h₁ : 0 ≤ j * s + a) (h₂ : 0 < -(k * s) + b) : 0 < k * a + j * b := by
  have := add_pos_of_nonneg_of_pos (mul_nonneg hk.le h₁) (mul_pos hj h₂)
  linarith [this]
theorem fm_ge_ge {j k s a b : α} (hj : 0 < j) (hk : 0 < k)
    (h₁ : 0 ≤ j * s + a) (h₂ : 0 ≤ -(k * s) + b) :
    0 < k * a + j * b ∨ -(k * s) + b = 0 := by
  have p := mul_nonneg hk.le h₁
  have q := mul_nonneg hj.le h₂
  rcases (add_nonneg p q).lt_or_eq with h | h
  · left; linarith
  · right
    have : j * (-(k * s) + b) = 0 := by linarith
    exact (mul_eq_zero.mp this).resolve_left hj.ne'

end FourierMotzkin

theorem fm_int {j k s a b : ℤ} (hj : 0 < j) (hk : 0 < k)
    (h₁ : 0 < j * s + a) (h₂ : 0 < -(k * s) + b) : 0 < k * a + j * b + -1 := by
  have p : k ≤ k * (j * s + a) := le_mul_of_one_le_right hk.le h₁
  have q : j ≤ j * (-(k * s) + b) := le_mul_of_one_le_right hj.le h₂
  nlinarith

end Vampire.Lemmas
