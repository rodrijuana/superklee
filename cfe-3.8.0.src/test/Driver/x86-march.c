// Ensure we support the various CPU architecture names.
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=nocona 2>&1 \
// RUN:   | FileCheck %s -check-prefix=nocona
// nocona: "-target-cpu" "nocona"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=core2 2>&1 \
// RUN:   | FileCheck %s -check-prefix=core2
// core2: "-target-cpu" "core2"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=penryn 2>&1 \
// RUN:   | FileCheck %s -check-prefix=penryn
// penryn: "-target-cpu" "penryn"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=nehalem 2>&1 \
// RUN:   | FileCheck %s -check-prefix=nehalem
// nehalem: "-target-cpu" "nehalem"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=westmere 2>&1 \
// RUN:   | FileCheck %s -check-prefix=westmere
// westmere: "-target-cpu" "westmere"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=sandybridge 2>&1 \
// RUN:   | FileCheck %s -check-prefix=sandybridge
// sandybridge: "-target-cpu" "sandybridge"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=ivybridge 2>&1 \
// RUN:   | FileCheck %s -check-prefix=ivybridge
// ivybridge: "-target-cpu" "ivybridge"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=haswell 2>&1 \
// RUN:   | FileCheck %s -check-prefix=haswell
// haswell: "-target-cpu" "haswell"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=broadwell 2>&1 \
// RUN:   | FileCheck %s -check-prefix=broadwell
// broadwell: "-target-cpu" "broadwell"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=bonnell 2>&1 \
// RUN:   | FileCheck %s -check-prefix=bonnell
// bonnell: "-target-cpu" "bonnell"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=silvermont 2>&1 \
// RUN:   | FileCheck %s -check-prefix=silvermont
// silvermont: "-target-cpu" "silvermont"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=k8 2>&1 \
// RUN:   | FileCheck %s -check-prefix=k8
// k8: "-target-cpu" "k8"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=opteron 2>&1 \
// RUN:   | FileCheck %s -check-prefix=opteron
// opteron: "-target-cpu" "opteron"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=athlon64 2>&1 \
// RUN:   | FileCheck %s -check-prefix=athlon64
// athlon64: "-target-cpu" "athlon64"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=athlon-fx 2>&1 \
// RUN:   | FileCheck %s -check-prefix=athlon-fx
// athlon-fx: "-target-cpu" "athlon-fx"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=k8-sse3 2>&1 \
// RUN:   | FileCheck %s -check-prefix=k8-sse3
// k8-sse3: "-target-cpu" "k8-sse3"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=opteron-sse3 2>&1 \
// RUN:   | FileCheck %s -check-prefix=opteron-sse3
// opteron-sse3: "-target-cpu" "opteron-sse3"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=athlon64-sse3 2>&1 \
// RUN:   | FileCheck %s -check-prefix=athlon64-sse3
// athlon64-sse3: "-target-cpu" "athlon64-sse3"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=amdfam10 2>&1 \
// RUN:   | FileCheck %s -check-prefix=amdfam10
// amdfam10: "-target-cpu" "amdfam10"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=barcelona 2>&1 \
// RUN:   | FileCheck %s -check-prefix=barcelona
// barcelona: "-target-cpu" "barcelona"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=bdver1 2>&1 \
// RUN:   | FileCheck %s -check-prefix=bdver1
// bdver1: "-target-cpu" "bdver1"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=bdver2 2>&1 \
// RUN:   | FileCheck %s -check-prefix=bdver2
// bdver2: "-target-cpu" "bdver2"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=bdver3 2>&1 \
// RUN:   | FileCheck %s -check-prefix=bdver3
// bdver3: "-target-cpu" "bdver3"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=bdver4 2>&1 \
// RUN:   | FileCheck %s -check-prefix=bdver4
// bdver4: "-target-cpu" "bdver4"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=btver1 2>&1 \
// RUN:   | FileCheck %s -check-prefix=btver1
// btver1: "-target-cpu" "btver1"
//
// RUN: %clang -target x86_64-unknown-unknown -c -### %s -march=btver2 2>&1 \
// RUN:   | FileCheck %s -check-prefix=btver2
// btver2: "-target-cpu" "btver2"
