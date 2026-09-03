#!/bin/bash
# Generate a leancheck proof for one TPTP problem. Usage: gen.sh <scratch-dir> <name>
set -euo pipefail
SP=$1
n=$2
DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
B="$DIR/../../bodingbauer-etall/bench"
V="$DIR/../../vampire"
p=$(find "$B/tptp/Problems" -name "$n.p" | head -1)
[ -z "$p" ] && exit 0
export TPTP="$B/tptp"
out="$SP/gen/$n.lean"
mkdir -p "$SP/gen"
(ulimit -t 60; "$V/build/vampire" --proof leancheck --proof_extra lean --output_mode lean \
   --skolemization syntactic --time_limit 20 "$p") > "$out" 2>/dev/null
grep -q "^theorem fullProof" "$out" || rm -f "$out"
