#!/bin/bash
# Refute every problem of the neutral set with the Vampire binary, for comparison with
# the tactic. Usage: parity.sh <scratch-dir> [extra vampire args]
#
# The tactic embeds Vampire, so the question worth asking of it is not how many problems
# it gets but how many of *Vampire's* it gets. This is the denominator: the same schedule
# the tactic now runs, given the same budget, on the same problems, from the command line.
#
#     ./parity.sh $SP                 # all cores, as the binary would be run
#     ./parity.sh $SP --cores 1       # one core, which is what the tactic is
#
# Writes `<scratch>/binary.tsv`: REF/NO, the problem, and its wall time. Compare against a
# sweep's `results.jsonl` with `parity.py`.
#
# Run it alone. The time limit is wall-clock, so anything else on the machine changes the
# answer -- which is also why the tactic's own sweeps must not run at the same time.
set -uo pipefail
SP=$1; shift
DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
export TPTP=${TPTP:-$DIR/../../bodingbauer-etall/bench/tptp}
V=${VAMPIRE:-$DIR/../../vampire/build/vampire}
LIMIT=${LIMIT:-20}

[ -s "$SP/probs.txt" ] || { echo "expected $SP/probs.txt: one TPTP problem name per line" >&2; exit 1; }
: > "$SP/binary.tsv"
while read -r p; do
  f=$(find "$TPTP/Problems" -name "$p.p" | head -1)
  [ -n "$f" ] || { printf "MISSING\t%s\t0\n" "$p" >> "$SP/binary.tsv"; continue; }
  start=$(date +%s)
  if timeout $((LIMIT * 3)) "$V" --mode portfolio --schedule casc --time_limit "$LIMIT" "$@" "$f" 2>&1 \
     | grep -q "Refutation found"; then v=REF; else v=NO; fi
  printf "%s\t%s\t%s\n" "$v" "$p" "$(( $(date +%s) - start ))" >> "$SP/binary.tsv"
done < "$SP/probs.txt"
awk -F'\t' '{c[$1]++} END {for (k in c) print c[k], k}' "$SP/binary.tsv"
