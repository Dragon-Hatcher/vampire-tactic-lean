# `vampire`, `duper` and `smt` on the same 194 problems

A first comparison against the two other automation tactics that take a first-order Lean
goal and discharge it: [duper](https://github.com/leanprover-community/duper), a
superposition prover written in Lean, and [lean-smt](https://github.com/ufmg-smite/lean-smt),
which translates to SMT-LIB and calls cvc5. Run on 2026-09-03 on an 8-core M-series
MacBook Air, 17GB.

**Read the caveats before the numbers.** One of them invalidates a naive reading of the
headline, and the problem set is not neutral.

## Method

The 194 problems are `bench-tptp`'s: a `fullProof` statement extracted from a
reference-generated leancheck proof, with the proof replaced by a tactic call. Same
statements for all three tools — `bench-tptp/retarget.py` changes the import, the
options and the tactic line and nothing else — so what differs is the tactic.

    vampire:   vampire [*]
    duper:     intros; duper [*]
    lean-smt:  have _hne : Nonempty ι := ⟨default⟩; intros; smt [*]

Three details in that, each of which is a way to get the comparison wrong:

* **`intros` first, for the other two.** An extracted statement is an implication chain
  `h₁ → … → hₙ → goal`. `vampire`'s own preprocessing introduces the binders before
  translating; another tactic sees the chain as its goal with an empty local context, so
  `[*]` would send it nothing at all.

* **`maxHeartbeats 0` throughout.** Otherwise a slow tactic dies on the heartbeat count
  rather than on the harness's CPU limit — a different kind of failure, at a threshold
  nobody chose.

* **lean-smt is given the non-emptiness assumption.** Vampire's logic assumes every sort
  is inhabited and our tactic gets that from the preamble's `[Inhabited ι]` through
  `inhabitant`. lean-smt's preprocessing asks for `Nonempty ι`, does not find it in the
  shape these files provide, and then *logs* the failure and admits the goal. See
  "Corrections" below: this was worth 40 problems.

Verdict rule, the same for all three and the same as `one.sh`'s: a pass is `lake lean`
exiting 0 with no `sorryAx` in the output. The second half is not redundant — all three
tactics can log an error and admit the goal, which exits 0 with the proof depending on
`sorryAx`, and lean-smt did so 43 times before the fix above.

Run with `bench-tptp/sweep.py`, at `--jobs 6 --cpu-limit 15`.

## Solved within 15s of CPU, six at a time

| | solved | wall | median CPU¹ | mean CPU¹ |
|---|---:|---:|---:|---:|
| **vampire** | **182 / 194** (94%) | 3.2 min² | **3.00s** | 3.34s |
| **lean-smt** | 155 / 194 (80%) | 6.9 min | 7.34s | 7.55s |
| **duper** | 133 / 194 (69%) | 6.0 min | 5.06s | 5.61s |

¹ over the 117 problems all three solve, so the three columns describe the same work.
² phase one only, derived as the 8.3-minute two-phase run less its 5.1-minute serial
phase two. The other two ran phase one alone, so all three wall figures are for the same
182–194 problems at six jobs; only `vampire`'s had to be separated out.

### Overlap

- solved by all three: **117**
- only vampire: **17** — only lean-smt: **4** — only duper: **0**
- solved by none within 15s: **7**

The seven nothing gets are `P_ALG128p1`, `P_ALG160p1`, `P_ALG165p1`, `P_ALG190p1`,
`Q_BIO006p1`, `Q_PRD001p1`, `Q_SYN472p1` — which is our own slow tail. All seven pass
under `vampire` given more time, at 11.5s to 78.5s measured alone.

**The four "only lean-smt" problems are mostly an artifact, and this is the caveat that
matters.** Measured alone, `vampire` solves three of them inside 15s:

| | lean-smt (6 jobs) | vampire, alone |
|---|---:|---:|
| `Q_MGT035m2` | 10.1s | 11.6s |
| `Q_PRO014p3` | 12.0s | 14.9s |
| `Q_SYN036p1` | 8.1s | 11.9s |
| `Q_MGT035p2` | 9.7s | 18.2s ← genuinely over |

They fell out of our phase-1 column because a six-way parallel run inflates CPU as well
as wall time: Lean elaborates on several threads and time they spend spinning for a core
is charged to the process. All three tools paid that tax equally, so the comparison
between the columns is sound; what is not sound is reading any column as "solved within
15s on an idle machine". Six of our twelve phase-2 problems are under 15s when run
alone, which would put `vampire` at 188/194 rather than 182 on that stricter reading.
The equivalent serial numbers for duper and lean-smt were not measured — see below.

## Past 15s: the tail, partially measured

Each tool's unsolved problems were rerun one at a time at a 100s CPU limit — the bound
chosen because `vampire`'s slowest is 78.5s. **Both runs were stopped early**, so these
are samples rather than results:

**duper — 0 solved of 9 attempted** (61 unsolved). Every one used the full budget:
`P_ALG120p1`, `122`, `124`, `126`, `128`, `130`, `140`, `150`, `160`, all at 104s. The
15s cutoff was not what was binding for duper on these; stopped on that evidence.

**lean-smt — 3 solved of 10 attempted** (39 unsolved):

    solved    P_ALG122p1   14.7s      failed    P_ALG140p1  113s
              P_ALG150p1   24.1s                P_ALG160p1  111s
              P_ALG128p1  100.8s                P_ALG165p1  112s
                                                P_ALG190p1  108s
                                                P_COL001m1  104s
                                                P_COL081m1  104s
                                                P_SET667p3  104s

`P_ALG122p1` at 14.7s and `P_ALG128p1` at 100.8s are both instructive: the first was a
marginal timeout at the 15s cap, the second needed nearly seven times the budget it had.
On this sample lean-smt converts about a third of its tail given 100s and duper none,
but neither sample is large enough to put a figure on.

## Caveats

1. **The problem set is Vampire's.** `bench-tptp/gen.sh` builds each test by running
   Vampire until it finds a proof and extracting the statement it proved. Every problem
   here is therefore one Vampire can refute, chosen by Vampire's own search. duper and
   lean-smt are being asked to solve someone else's curated set. **This measures how the
   three fare on Vampire's problems, not their general strength**, and a comparison
   drawn from a duper-generated or SMT-LIB-derived set would very likely rank them
   differently. The 194 problems are also not a random TPTP sample: they are what
   survived a 20s Vampire time limit during generation.

2. **Nothing here is an idle-machine measurement.** See the artifact discussion above.
   The comparison is internally consistent — same machine, same parallelism, same cap —
   but the absolute counts are all slightly pessimistic and the marginal cases move.

3. **The tail runs are incomplete**, at 9 of 61 and 10 of 39.

4. **Each tool ran as it ships.** No portfolio tuning, no per-problem options, default
   duper configuration, default cvc5 invocation. A tuned run of any of the three would
   look different.

5. **One version each**, both current at the time: lean-smt `main` at `76b4eeaf`, duper
   `v4.33.0` (`845ba5f4`), both on Lean 4.33.0, cvc5 as lean-smt pins it.

## Corrections

Recorded because the first version of this comparison was wrong by 40 problems, and the
error had the shape that this whole benchmark exists to catch.

The first lean-smt run gave **115/194**, with 43 failures reading `depends on sorryAx`.
That is not a fact about lean-smt. Its preprocessing asks for `Nonempty ι`; the extracted
preamble offers `[inst : Inhabited ι]`, from which the instance is not found in the shape
these files provide; and lean-smt then logs `failed to synthesize Nonempty ι` and admits
the goal rather than throwing. One `have _hne : Nonempty ι := ⟨default⟩` — the same
assumption our own tactic derives internally, so not a hint and not favouritism — took
it to **155/194**.

Two things are worth taking from that. The mechanism is the one `docs/STATUS.md` records
as a hazard for our own replay: **a tactic can log an error and admit its goal without
throwing**, and only `#print axioms` sees it. Without that check those 43 would have
been counted as passes and the number would have been wrong in lean-smt's favour rather
than against it. And an unexpectedly bad result from another tool is worth one round of
disbelief before it is written down — the failure was in the harness on the first look,
and would have been on the second look too if nobody had checked.

The two lean-smt failures that survive the fix are its own: `P_SWV398p1` fails in cvc5
with `Symbol '->' not declared as a variable`, which is a malformed SMT-LIB symbol from
the translation, and `Q_BIO006p1` admits its goal with no error recovered from the log.

## Reproducing

    SP=/tmp/cmp
    # the 194 statements, as bench-tptp/README.md describes
    python3 bench-tptp/retarget.py $SP/tests $SP/duper-tests duper
    python3 bench-tptp/retarget.py $SP/tests $SP/smt-tests   smt

    python3 bench-tptp/sweep.py $SP/duper-res $SP/duper-tests \
      --package <a package requiring duper> --jobs 6 --cpu-limit 15 --port 8081
    python3 bench-tptp/sweep.py $SP/smt-res $SP/smt-tests \
      --package <a package requiring smt>   --jobs 6 --cpu-limit 15 --port 8082

One package can require both. Watch either at `http://<host>:<port>/`; the page shows
load, so it also shows whether the run is worth believing.
