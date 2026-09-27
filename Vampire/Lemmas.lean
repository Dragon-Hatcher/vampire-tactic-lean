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

end Vampire.Lemmas
