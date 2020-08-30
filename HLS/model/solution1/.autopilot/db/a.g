#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/max/work/MaxConvNet/HLS/model/solution1/.autopilot/db/a.g.bc ${1+"$@"}
