import Vampire

/-!
Does Lean ever run the tactic on more than one thread?

`Elab.async` defaults to false but is overridden to true in the language server and the
cmdline driver, so declarations in one file can elaborate concurrently. Vampire's state
is process-global and it is compiled with `-fno-threadsafe-statics`, so concurrent entry
would be a correctness problem.

Each theorem below calls the FFI; the report at the end says how many OS threads were
involved and what the high-water mark of concurrent entries was.
-/

open Vampire.Ffi

theorem c00 (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by vampire_replay
theorem c01 (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by vampire_replay
theorem c02 (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by vampire_replay
theorem c03 (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by vampire_replay
theorem c04 (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by vampire_replay
theorem c05 (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by vampire_replay
theorem c06 (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by vampire_replay
theorem c07 (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by vampire_replay
theorem c08 (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by vampire_replay
theorem c09 (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by vampire_replay
theorem c10 (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by vampire_replay
theorem c11 (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by vampire_replay
theorem c12 (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by vampire_replay
theorem c13 (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by vampire_replay
theorem c14 (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by vampire_replay
theorem c15 (p q : Prop) (h : p ∨ q) (hp : ¬p) (hq : ¬q) : False := by vampire_replay

#eval show IO Unit from do
  let threads ← threadCount
  let peak ← maxConcurrent
  IO.println s!"distinct threads entering the FFI : {threads}"
  IO.println s!"max concurrent entries            : {peak}"
  if peak > 1 then
    throw <| IO.userError s!"Vampire was entered concurrently ({peak} in flight); \
      its global state cannot survive that"
  if threads > 1 then
    IO.println "serialised: many threads reach the tactic, one is inside Vampire at a time"
  else
    IO.println "note: only one thread reached the tactic in this run, so the lock was \
      not exercised; Elab.async may be off"
