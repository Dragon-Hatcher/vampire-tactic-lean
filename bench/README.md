# Benchmarks against lean-smt and the solvers

An unbiased comparison: problems drawn at random from TPTP and SMT-LIB, not chosen by
any prover, and every configuration run on every problem one at a time.

    ./index.py tptp TPTP-v9.3.1.tgz  $DATA      # once per archive
    ./index.py smt  smtlib/*.tar.zst $DATA
    ./sample.py $DATA s1 --seed 1                # 100 TPTP + 100 SMT-LIB problems
    ./run.py $DATA/suites/s1 s1.jsonl --timeout 10
    ./plot.py s1.jsonl s1.png

`sample.py` never draws a problem that is in `problems/` or in an earlier suite, since
those have been looked at. The configurations and what is timed are in `run.py`'s
header: the vampire tactic, the same with the strategy it reported named, lean-smt's
`smt`, and the vampire and cvc5 binaries. For the tactics the time is from the
tactic's start to the theorem being added, which is what a user waits for once the
file is loaded.
