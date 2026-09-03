#!/bin/bash
# Check one extracted fullProof statement. Usage: one.sh <scratch-dir> <name>
set -uo pipefail
SP=$1
n=$2
DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
VT="$DIR/.."
cd "$VT"
# `lake lean`, not `lake env lean` with a hand-built `--load-dynlib` list. Since the
# monomorphisation step calls into lean-auto, which is itself precompiled, the tactic's
# own dylib carries unresolved `auto` symbols; loading it by hand segfaults however the
# list is ordered. Lake knows the right closure, so let it say.
start=$(date +%s)
out=$( (ulimit -t 150; lake lean "$SP/bench/$n.lean") 2>&1 )
rc=$?
end=$(date +%s)
mkdir -p "$SP/log" "$SP/res"
echo "$out" > "$SP/log/$n.txt"
if [ $rc -eq 0 ] && ! grep -q "sorryAx" <<< "$out"; then verdict=PASS; else verdict=FAIL; fi
reason=$(grep -m1 -oE "vampire: [^\"]{0,120}" <<< "$out")
[ -z "$reason" ] && reason=$(grep -m1 -oE "error: .{0,120}" <<< "$out" | tr '\n' ' ')
printf "%s\t%s\t%ss\t%s\n" "$verdict" "$n" "$((end-start))" "$reason" | tee "$SP/res/$n.tsv"
