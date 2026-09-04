# Where this stands

Working notes for picking the work back up. See `README.md` for what the library is and
`vampire-global-state.md` for the audit that constrains the FFI.

## Layout

    lean-vampire/
      vampire/            our fork of vprover/vampire (upstream = vprover, branch
                          `avatar-resolution-replay`)
      vampire-tactic/     this package: the Lean tactic (branch `main`)
        bench-tptp/       a second, wider TPTP benchmark; see its own README
      bodingbauer-etall/  the paper's artifacts, left as reference
        vamplean/         upstream reconstruction lemmas, required by the tactic
        demo/             the leancheck demo and the lean-smt hammer prototype
        bench/            the Figure 2 benchmark harness

## Build

    cmake -S ../vampire -B ../vampire/build -DCMAKE_BUILD_TYPE=Release \
          -DCMAKE_POSITION_INDEPENDENT_CODE=ON
    cmake --build ../vampire/build --target vampire_lib   # the static archive
    cmake --build ../vampire/build --target vampire       # bench-tptp/gen.sh wants this
    lake build                                            # tactic + tests

Lean 4.33.0 everywhere. `lake build` runs the tests as `#eval`s and fails on regression.

macOS is the platform this is developed and benchmarked on. A Linux build gets as far
as a working FFI — `Test/Ffi.lean` passes, including the reset cycles — and then aborts
when a proof is actually run, with `terminate called after throwing an instance of
'Kernel::MainLoop::RefutationFoundException'`: Vampire signals success by throwing that
and something is not catching it. Ruled out so far: the archive and the shim are in one
shared object, so it is not an exception crossing a `.so` boundary, and CMake's flags
for Vampire match `vampireCompileArgs` on everything that could move a class layout.
The two things a Linux build does need, both established, are below.

`CMAKE_POSITION_INDEPENDENT_CODE` is required on Linux and free on macOS. The tactic
runs in the elaborator, so `precompileModules := true`, so Lean links the archive into a
*shared object* — and every object in a `.so` has to be position-independent. CMake
builds a static library non-PIC by default, and the link then fails a few hundred times
over with

    ld.lld: error: relocation R_X86_64_PC32 cannot be used against symbol
      'std::cout'; recompile with -fPIC

which names the C++ runtime rather than Vampire and reads like a toolchain problem. It
is not: it is our archive. macOS never sees it, because Mach-O is position-independent
throughout.

The second is the C++ standard library. Lake compiles the shim with the *system* `c++`,
so on Linux the objects are libstdc++'s (`std::__cxx11::` symbols); but Lean's own clang
links its bundled **libc++** by default, and the two have incompatible `std::string`
layouts — which matters, because `vampire_build.cpp` passes `std::string` straight into
Vampire. The link therefore needs `-stdlib=libstdc++` to stop clang reaching for libc++,
`-lstdc++` to link the right one, and a `-L` naming the directory `g++
-print-file-name=libstdc++.so` reports, because Lean's `ld.lld` does not search GCC's
library directory. `lakefile.lean` names only the first two; the third is host-specific
and is why the Linux build is not wired up here yet.

## What works

The whole loop, in process:

    theorem chained (α : Type) (f : α → α) (P : α → Prop) (a : α)
        (h₁ : ∀ x, P x → P (f x)) (h₂ : P a) : P (f (f a)) := by
      vampire [*]
    -- 'chained' depends on axioms: [propext, Classical.choice, Quot.sound]

**Goal translation** is a port of lean-smt's pipeline — the `@[vampire_translate]`
registry, the translation monad with its dependency tracking, the graph that orders
declarations, the preprocessing steps — retargeted from SMT-LIB text at an embedded
Vampire's own `Signature`/`Term`/`Literal`/`Formula`. Provenance in `NOTICE`.

**Proof translation** is a port of Vampire's own Lean code generator
(`Shell/LeanChecker`): one lemma per inference with the same statement, proved by the
same tactic script, chained the same way — as `Expr`s and tactic `Syntax` rather than
source text. This fork's changes are included, AVATAR's resolution replay among them.
AVATAR runs, and its splitting, components, split clauses and SAT refutation all replay.

`vampire?` stops before the replay and shows the problem as Vampire renders it plus an
outline of the refutation.

## What does not

- **Polymorphism, without `+mono`.** Vampire's logic is monomorphic. `vampire +mono`
  runs lean-auto's monomorphisation, ported from lean-smt's `Smt/Preprocess/Mono.lean`
  and wired in the same way — it replaces `pushHintsToCtx`, `intros` and `negateGoal`,
  because auto's procedure does all three itself. Without it a polymorphic hypothesis
  swept up from the context is skipped and one named as a hint is reported.
- **Theory axioms** — the generated file emits a Lean `axiom`, which a tactic cannot.
- **Arithmetic evaluation**, whose script needs `norm_num1`; VampLean dropped Mathlib.
- `setSoftTimeLimit` bounds the saturation loop, not preprocessing or clausification.

**The input-step bridge** is `Vampire/Bridge.lean`: a structural congruence prover that
proves Vampire's recorded formula for an input unit from the Lean hypothesis it was
translated from, by walking the two types together rather than searching. The difference
it reconciles is one the export makes deliberately — `writeFormula` reverses every
junction to mirror `LeanPrinter`, and since Vampire holds a junction as a binary tree
that mirrors the whole tree — plus equations reoriented by the term ordering. It is
modelled on VampLean's `symmUnify`, which `rectify` uses through `symm_match` and which
gets everything except the junction cases: at an application node it recurses
positionally, so it takes `A ∧ B` against `B ∧ A` down `A` against `B`. The bridge also
backs `grind` on generic single-premise steps, where the rule is usually a weakening.

The quantifier reordering `LeanChecker::outputReorderIfNeeded` inserts into a
clausification, when prenexing the parent changes the order of its universal binders, is
now ported: `ffi/vampire_proof.cpp` exports the `VariablePrenexOrderingTree` ordering it
computes, and `.clausify` permutes the goal's `∀` prefix into it.

Predicate and function definition introductions, and `rectify` with a non-identity
renaming (including the quantifier-permutation case, not just plain alpha-renaming), are
now ported — see `Vampire/Reconstruct.lean`'s `.predicateDefinition`/`.functionDefinition`
and `.rectify` cases.

## Benchmark

`fullProof` statements extracted from `../bodingbauer-etall/bench/work/*.lean` — the
preamble's `variable` block plus everything between `theorem fullProof :` and `:= by` —
with the proof replaced by `vampire`, checked with `#print axioms` so a `sorryAx` counts
as a failure. This is not a replay of the recorded proof: the tactic re-translates the
statement and runs a fresh search, so Vampire finds a different proof each time. That is
what makes it a test of the port rather than of the file.

Four bugs came out of it that the unit tests could not have found, all of them the same
shape — something the generated *file* gets from being a file:

1. Predicate definitions are `let`-bound, not substituted. Substituting lets `cnfify`
   see through a definition Vampire introduced precisely so the CNF would not blow up.
2. Definitions are *opaque* inside a step lemma — a section variable in the generated
   file — and only `fullProof` binds the value. Two rules are exempt because they are
   definitional: the introduction itself and definition folding.
3. Each step is proved in a restricted context. `grind` reads the local context, and
   ours accumulates the goal's hypotheses and every definition so far. Measured: 8ms per
   superposition in a small context, 100ms in the goal's. The restriction keeps class
   instances even when they are `Prop`s: `Nonempty` is both, and `inhabitant` hands back
   `Classical.choice inst`, so dropping `inst` for being a `Prop` leaves the witness
   naming a variable that is out of scope.
4. Multi-clause clausification cannot be sized by Vampire's clause count, because
   VampLean's `cnfify` need not split the same way.

A fifth was the subtlest, and it had been hiding behind a workaround. `Formula::toString`
walks a junction's arguments *backwards* — "we will reverse the order // but that should
not matter" — and `LeanPrinter` does the same deliberately, with a `FormulaList::reverse`.
So the generated file states every disjunction in the reverse of the order Vampire holds
it in, and VampLean's `nnf_transformation` and friends were written to produce exactly
what that file states. Exporting `args()` order gave formulas that were correct but
mirror images of the ones those tactics build, so `exact h` missed every time. Earlier in
this work that showed up as ENNF producing `q ∨ ¬p` against Vampire's `q | ~p`, which was
misread as the two disagreeing about disjunct order and patched with a `grind` fallback.
They agree exactly. **When a formula comes back subtly wrong, suspect the printer.**

A sixth was a silent one: a tactic can *log* an error and admit its goal without
throwing, so a replay announced success while the proof depended on `sorryAx`, visible
only in `#print axioms`. `proveBy` and `transformHyp` now inspect the term they built —
`Expr.hasSorry` is the one check that cannot be evaded.

For calibration, `bench/work/ALG130+1.lean` — the *recorded* proof — checks in 8.4s under
the same toolchain. Replaying a freshly-found proof of the same problem takes 15s, on a
proof about 20% larger.

Error attribution matters here more than usual: a failing tactic is free to *log* its
error and admit the goal, which throws nothing, so a replay reported success while the
declaration carried `sorryAx`. Running scripts under `withoutRecover` makes a failure
throw and name its step — and doing so immediately moved the blame for three problems
from skolemisation, where it had been wrongly placed, to `nnf transformation`, which is
where the ordering bug was.

**Currently 57/57** on this benchmark. `SWC153`, the last holdout, was the input-step
bridge; `Vampire/Bridge.lean` closed it.

### Where a replay's time goes

The two problems that used to miss `bench-tptp`'s 150s cap were both cost, not
correctness, and neither cost was in the tactic scripts. Recorded because each was
invisible from the outside and obvious once measured — `set_option
trace.vampire.timing` gives the per-step figures and `trace.vampire.timing.tactic` the
per-line ones.

1. **Checking the assembled term was most of the replay.** The steps are chained by
   `mkAppN`, which does not typecheck, so the finished proof used to be handed to
   `Meta.check`. On `PRD001+1` that was 167s of a 240s replay, against 72s for all 1415
   step scripts together — the elaborator's `inferType` walking a shared DAG the kernel
   is about to walk again anyway. What the check bought was attribution, and the
   applications are the only place `mkAppN` can go wrong: `applyChecked` checks each one
   as it is made, in constant time per argument because `proveBy` ascribes every proof
   to its statement, and names the premise rather than the theorem. `set_option
   vampire.checkReplay true` puts the whole-term check back.

2. **A multi-clause clausification has to be shared.** `LeanChecker::clausify`
   destructures the parent once, in the enclosing block, for every clause it produced.
   Replaying it as one step lemma per clause redoes `prenexify` and `cnfify` over the
   parent per clause, which is quadratic in a number that is not small: `SYN472+1`'s
   conjecture clausifies 196 ways, the refutation uses 145 of them, and the pair of
   transformations over that seven-hundred-atom formula measured 117s. The replay now
   does it once per parent and each clause is a projection out of the result — see the
   `.clausify` case in `Vampire/Reconstruct.lean`.

3. **`prenexify` hoists past `∧`, and `cnfify` immediately undoes it.** Its four rules
   pull every `∀` to the front of the *whole* formula. On a conjunction a hundred wide
   that rewrites the whole formula once per binder — 96s of `SYN472+1`'s 117s — and
   `cnfify`'s `cnf_prenex3` then pushes them all back into the individual conjuncts.
   What the clauses need is a `∀` at the top of each *disjunction*, which the two `or`
   rules give on their own. `clausifyParent` tries that first and falls back to
   `prenexify` proper for a parent whose clauses it does not reach: 117s to 2s here,
   with nothing lost where the weaker form is not enough.

4. **`transformHyp` runs its block twice** — once against a throwaway goal to learn what
   the block leaves behind, then again to build a term of it. That is necessary when the
   tactics read the goal, and `exists_prenex` does. A block that only rewrites `at h`
   does not, and for those `transformOnce` leaves the target open and lets `exact h`
   assign it, which halves the cost of the one transformation that matters.

5. **`repeat (first | A | B)` pays a failing traversal per round.** Each simp call runs
   to its own fixpoint, so what the loop does is A\*, B\*, A\*, B\*, … — but `first`
   retries A at the top of every iteration, and the retry that discovers A has nothing
   left to do is a whole further pass over the formula. Making the pair one alternative
   removes it from every round but the last. Worth about 3% here, which is to say: it is
   the shape to fix *after* the ones above, not instead of them.

### `bench-tptp/`

A second, wider benchmark: more TPTP problems, same method (extract a `fullProof`
statement, replace its proof with `vampire [*]`, check for `sorryAx`). With the original
57 that is **194/194**, in 8.3 minutes. What used to fail, and what each one turned out
to be, is in `bench-tptp/README.md`; scripts to regenerate and rerun it are there too.

`bench-tptp/sweep.py` runs it and serves a live page. Run it in two phases:

    ./sweep.py $SP/res $SP/tests --jobs 6 --triage 15 --cpu-limit 300

The median problem replays in 3.6s of CPU and the 90th percentile in 7.0s, so phase one
takes everything six at a time under a 15s cap; twelve problems exceed it and phase two
reruns those one at a time. That is faster than a flat parallel run and, more to the
point, correct — **a timing taken beside other work measures the machine.** CPU time
looks like it should be immune, since it is not wall time, but Lean elaborates on
several threads and time they spend spinning for a core is charged to the process. The
same 194 problems, run at `--jobs 3` on a machine that also had a game on it, reported
192/194 with `PRD001+1` and `BIO006+1` over a 150s cap; measured alone they are 79s and
77s, and `SYN472+1` was 43s there against 13s here. `sweep.py` warns if the load average
is high before it starts, and keeps load on the page.

Peak RSS is the other figure to watch, and the reason `--jobs` is not the core count:
`PRD001+1` holds 5.5GB on its own, and a few of those at once will put a 16GB machine
into swap, after which every timing is measuring paging.

### Against duper and lean-smt

`docs/comparison.md` runs the same 194 statements through
[duper](https://github.com/leanprover-community/duper) and
[lean-smt](https://github.com/ufmg-smite/lean-smt), by retargeting the tactic line and
nothing else. Within 15s of CPU at six jobs: `vampire` 182, lean-smt 155, duper 133, and
on the 117 all three solve the median CPU is 3.0s, 7.3s and 5.1s.

Two things in that document matter more than the numbers. The problem set is Vampire's
own — `gen.sh` generates each test by running Vampire until it finds a proof — so it
measures how the three fare on Vampire's problems and not their general strength. And
the first lean-smt run was wrong by 40 problems because its preprocessing wants
`Nonempty ι`, does not find it in the shape these files provide, and then *logs* the
failure and admits the goal: the same hazard recorded below for our own replay, hit by
somebody else's tactic and caught only by `#print axioms`.

## Things that will bite

Recorded because each cost real time to find.

1. **Lean elaborates tactics in parallel.** `Elab.async` is off by default but overridden
   on in the language server and cmdline. Measured: 7 threads, 3 concurrent. Every
   `extern "C"` function must open with `vampire_ffi::EntryGuard` from
   `ffi/vampire_lock.hpp`. A guard that only some entry points take is worse than none.
2. **Run-then-read is not atomic.** The lock makes each call atomic, not the sequence.
   The step buffers are `thread_local` for that reason.
3. **Lake does not track the Vampire archive.** It is declared as an input to
   `extern_lib`; without that a rebuilt Vampire leaves a stale dylib whose calls into new
   symbols fault with no stack.
4. **`env.proofExtra.get<>` segfaults on a missing entry** — no RTTI, no check. Guard
   with `find()`.
5. **Function-local statics that cache Vampire objects** dangle after a reset. Fixed for
   the built-in sorts; six more are listed in the audit, unhandled.
6. **The whole run is one FFI call, deliberately.** Build, solve and export together.
   Splitting them left a window in which another elaboration thread's build landed
   between this thread's build and its solve, which showed up as one goal in a file
   failing while the same goal passed alone.
7. **The inference replayer leaked its saturation algorithm.** A `SaturationAlgorithm`
   registers itself and its indexes globally and unregisters only in its destructor, so
   the second problem solved in a process saturated without finding a proof it had
   found the first time. Invisible in a one-shot binary; fatal embedded. Fixed in the
   fork; the same shape is worth suspecting whenever run *n+1* behaves differently from
   run *n*.
8. **A `Unit*` does not survive preprocessing.** The problem's unit list is replaced by
   clausification, so anything the FFI wants to report about the input must be captured
   when it is built, not read back afterwards.
9. **Vampire generation is nondeterministic** under a wall-clock limit, so any
   before/after comparison must transform one fixed generated file, or sample enough to
   average out. This produced a phantom "2.6× regression" earlier in the work.
10. **Two large problems in one process used to segfault** — fixed, but the shape is
   worth remembering. `TermPartialOrdering` cached relations in function-local statics,
   and a cached relation keeps a `const Ordering&`; the second problem got the first
   problem's ordering and died on a vtable call into freed memory. It only showed up on
   problems large enough for forward demodulation, and only on the *second* one, because
   nothing read the stale cache until then. `Lib::resetGlobalState` drops it now. Two
   things made this hard to see: a wrong hypothesis (`+mono`, which was merely correlated
   with the problems being large), and a broken reproducer — see 11.
11. **A hand-rolled `Expr` traversal without a visited set is exponential, not linear.**
   `restrictedContext` collected free variables with a plain structural recursion. An
   `Expr` is a DAG with heavy sharing, so shared subterms were re-walked once per path
   to them — and it was being asked for the free variables of a `let`'s *value*, which
   here is a skolem witness of the form `Classical.choose <the whole parent proof>`. On
   `SYN036+1` that was over two minutes of a two-minute run: 8333 of 8378 stack samples,
   nine hundred frames deep. `Expr.collectFVars` carries a memo table; use it. Found by
   sampling the process (`sample <pid>`), which took a minute and pointed straight at the
   frame — after an attempt to read it off the timing trace, which never printed because
   traces are only flushed when the declaration finishes and this one never did.
12. **`lean` needs `--load-dynlib` for the extern lib as well as `--plugin` for each
   precompiled module.** `lake setup-file`'s JSON has both a `plugins` and a `dynlibs`
   key; miss the second and the FFI symbols are unresolved and the process dies before
   running anything. Two hours went into a backtrace of that crash rather than the real
   one. Validate any hand-built `lean` invocation on a goal you know passes before
   believing what it says about one that fails.
13. **Nothing a run prints reaches you until the file finishes.** Traces and log
   messages are attached to the command's snapshot and reported when the frontend folds
   the tree, so a `lake lean` on a goal that takes twenty minutes says nothing for
   twenty minutes and then says everything — including, if you kill it, nothing at all.
   `IO.eprintln` does not help either: lake buffers the child's stderr. To watch a run
   that may not finish, write to a file and flush it, or stop the tactic earlier —
   `vampire?` does translation and search and no replay, which is how the two-minute
   question "is this the prover or the replay?" got a seven-second answer.
14. **`sample` truncates a deep stack.** The replay nests one frame per `let` it binds
   and one per step it chains, and past a few thousand frames the profile shows the
   *top* of the stack with no path back to the caller — every branch looks like it
   starts inside `simp`. Read what the leaves are doing, and get the attribution from
   `trace.vampire.timing.tactic` instead.

## Fork changes, in order

    2abf74e  AVATAR refutations as resolution steps, not bv_decide
    7032c0f  avoid `contradiction` over the whole context in clausification
    24f10e6  bind split propositions per theorem; autoImplicit false
    9126105  `vampire_lib` static target for embedding
    e3f62c2  `Lib::resetGlobalState` — more than one problem per process
    124034e  no exit(10); `Timer::startClock` so the timeout cannot _Exit the host
    9a593d8  re-arm the exit lock between runs
    e101aa7  do not leak the inference replayer's saturation algorithm
    4473042  reset TermPartialOrdering's caches between problems
    b120371  reset TermOrderingDiagram's single-comparison cache too

The first three are proof-generation work from before the FFI and are independent of
it: all 14 ALG problems that Vampire solves now check, 874s → 233s, four former
timeouts fixed. `bench/` reproduces that.

## Open questions

- Per-thread Vampire contexts would remove the global lock. Deferred deliberately.
- Whether to vendor `vamplean` rather than depend on a path into `bodingbauer-etall/`.
- The allocator is never reset, so a long-lived Lean process grows across runs.
