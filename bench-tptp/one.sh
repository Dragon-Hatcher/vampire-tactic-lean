#!/bin/bash
# Check one extracted fullProof statement. Usage: one.sh <scratch-dir> <name>
set -uo pipefail
SP=$1
n=$2
DIR=$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)
VT="$DIR/.."
VL="$DIR/../../bodingbauer-etall/vamplean"
cd "$VT"
DYN="--load-dynlib=$VL/.lake/build/lib/libvamp__lean_VampLean.dylib --load-dynlib=$VT/.lake/build/lib/libvampireffi.dylib --load-dynlib=$VT/.lake/build/lib/libvampire_Vampire.dylib"
start=$(date +%s)
out=$( (ulimit -t 150; lake env lean $DYN "$SP/bench/$n.lean") 2>&1 )
rc=$?
end=$(date +%s)
mkdir -p "$SP/log" "$SP/res"
echo "$out" > "$SP/log/$n.txt"
if [ $rc -eq 0 ] && ! grep -q "sorryAx" <<< "$out"; then verdict=PASS; else verdict=FAIL; fi
reason=$(grep -m1 -oE "vampire: [^\"]{0,120}" <<< "$out")
[ -z "$reason" ] && reason=$(grep -m1 -oE "error: .{0,120}" <<< "$out" | tr '\n' ' ')
printf "%s\t%s\t%ss\t%s\n" "$verdict" "$n" "$((end-start))" "$reason" | tee "$SP/res/$n.tsv"
