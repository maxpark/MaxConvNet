# 1 "pooling.cpp"
# 1 "pooling.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 155 "<built-in>" 3
# 1 "<command line>" 1






# 1 "/opt/xilinx/Vivado/2019.2/common/technology/autopilot/etc/autopilot_ssdm_op.h" 1
# 157 "/opt/xilinx/Vivado/2019.2/common/technology/autopilot/etc/autopilot_ssdm_op.h"
extern "C" {






    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));


    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));

    void _ssdm_op_Return(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecStable(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecStableContent(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipoDepth(...) __attribute__ ((nothrow));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));

    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));

    void __xilinx_ip_top(...) __attribute__ ((nothrow));


}
# 8 "<command line>" 2
# 1 "<built-in>" 2
# 1 "pooling.cpp" 2
# 1 "./conv_net.h" 1




# 1 "/opt/xilinx/Vivado/2019.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 1 3
# 33 "/opt/xilinx/Vivado/2019.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 3
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 402 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 403 "/usr/include/features.h" 2 3 4
# 424 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 427 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 428 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 429 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 425 "/usr/include/features.h" 2 3 4
# 448 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 449 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 130 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 131 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "/usr/include/stdint.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 68 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 81 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 97 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 111 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 34 "/opt/xilinx/Vivado/2019.2/lnx64/tools/clang/bin/../lib/clang/3.1/include/stdint.h" 2 3
# 6 "./conv_net.h" 2

typedef int32_t DTYPE;


const uint8_t IMG_DMNIN = 32;
const uint8_t IMG_CHANNELS = 3;
const uint8_t STRIDE = 1;


const uint8_t C1_N_CHAN = 3;
const uint8_t C1_X_DMNIN = 32;
const uint8_t C1_W_DMNIN = 5;
const uint8_t C1_OUT_DMNIN = 28;
const uint8_t C1_N_FILTERS = 32;


const uint16_t A1_ROWS = 28;
const uint8_t A1_COLS = 28;


const uint8_t C2_N_CHAN = 32;
const uint8_t C2_X_DMNIN = 28;
const uint8_t C2_W_DMNIN = 5;
const uint8_t C2_OUT_DMNIN = 24;
const uint8_t C2_N_FILTERS = 32;


const uint16_t A2_ROWS = 24;
const uint8_t A2_COLS = 24;


const uint8_t P1_SIZE = 24;
const uint8_t P1_DOWNSIZE = 12;


const uint8_t C3_N_CHAN = 32;
const uint8_t C3_X_DMNIN = 12;
const uint8_t C3_W_DMNIN = 3;
const uint8_t C3_OUT_DMNIN = 10;
const uint8_t C3_N_FILTERS = 32;


const uint16_t A3_ROWS = 10;
const uint8_t A3_COLS = 10;


const uint8_t C4_N_CHAN = 32;
const uint8_t C4_X_DMNIN = 10;
const uint8_t C4_W_DMNIN = 3;
const uint8_t C4_OUT_DMNIN = 8;
const uint8_t C4_N_FILTERS = 32;


const uint16_t A4_ROWS = 8;
const uint8_t A4_COLS = 8;


const uint8_t P2_SIZE = 8;
const uint8_t P2_DOWNSIZE = 4;


const uint16_t FLAT_VEC_SZ = 512;


const uint16_t F1_ROWS = 256;
const uint16_t F1_COLS = 512;


const uint8_t F2_ROWS = 128;
const uint16_t F2_COLS = 256;


const uint8_t F3_ROWS = 10;
const uint8_t F3_COLS = 128;


const uint8_t SFMX_SIZE = 10;



int CNN(int in_r);

void xillybus_wrapper(uint8_t *in_b, uint8_t *in_g, uint8_t *in_r,DTYPE out_t[1]);

DTYPE maxFour(DTYPE a, DTYPE b, DTYPE c, DTYPE d);
uint16_t averFour(uint16_t a, uint16_t b, uint16_t c, uint16_t d);


void pooling_1(uint16_t in[112][112][3], uint16_t out[56][56][3]);
void pooling_2(uint16_t in[56][56][3], DTYPE out[28][28][3]);

void predict(DTYPE img[IMG_DMNIN][IMG_DMNIN][IMG_CHANNELS], DTYPE p[SFMX_SIZE]);


void convolution_c1 (
        DTYPE X[C1_X_DMNIN][C1_X_DMNIN][C1_N_CHAN],
        const DTYPE W[C1_W_DMNIN][C1_W_DMNIN][C1_N_CHAN][C1_N_FILTERS],
              DTYPE out[C1_OUT_DMNIN][C1_OUT_DMNIN][C1_N_FILTERS],
        const DTYPE bias[C1_N_FILTERS]);

void relu_a1(
        DTYPE in[A1_ROWS][A1_COLS][C1_N_FILTERS],
        DTYPE out[A1_ROWS][A1_COLS][C1_N_FILTERS]);

void convolution_c2 (
        DTYPE X[C2_X_DMNIN][C2_X_DMNIN][C2_N_CHAN],
        const DTYPE W[C2_W_DMNIN][C2_W_DMNIN][C2_N_CHAN][C2_N_FILTERS],
              DTYPE out[C2_OUT_DMNIN][C2_OUT_DMNIN][C2_N_FILTERS],
        const DTYPE bias[C2_N_FILTERS]);

void relu_a2(
        DTYPE in[A2_ROWS][A2_COLS][C2_N_FILTERS],
        DTYPE out[A2_ROWS][A2_COLS][C2_N_FILTERS]);

void pooling_p1(DTYPE in[P1_SIZE][P1_SIZE][C2_N_FILTERS],
        DTYPE out[P1_DOWNSIZE][P1_DOWNSIZE][C2_N_FILTERS]);

void convolution_c3 (
        DTYPE X[C3_X_DMNIN][C3_X_DMNIN][C3_N_CHAN],
        const DTYPE W[C3_W_DMNIN][C3_W_DMNIN][C3_N_CHAN][C3_N_FILTERS],
              DTYPE out[C3_OUT_DMNIN][C3_OUT_DMNIN][C3_N_FILTERS],
        const DTYPE bias[C3_N_FILTERS]);

void relu_a3(
        DTYPE in[A3_ROWS][A3_COLS][C3_N_FILTERS],
        DTYPE out[A3_ROWS][A3_COLS][C3_N_FILTERS]);

void convolution_c4 (
        DTYPE X[C4_X_DMNIN][C4_X_DMNIN][C4_N_CHAN],
        const DTYPE W[C4_W_DMNIN][C4_W_DMNIN][C4_N_CHAN][C4_N_FILTERS],
              DTYPE out[C4_OUT_DMNIN][C4_OUT_DMNIN][C4_N_FILTERS],
        const DTYPE bias[C4_N_FILTERS]);

void relu_a4(
        DTYPE in[A4_ROWS][A4_COLS][C4_N_FILTERS],
        DTYPE out[A4_ROWS][A4_COLS][C4_N_FILTERS]);

void pooling_p2(DTYPE in[P2_SIZE][P2_SIZE][C4_N_FILTERS],
        DTYPE out[P2_DOWNSIZE][P2_DOWNSIZE][C4_N_FILTERS]);

void flatten(
        DTYPE IN[P2_DOWNSIZE][P2_DOWNSIZE][C4_N_FILTERS],
        DTYPE OUT[FLAT_VEC_SZ]);

void vec_mat_mul_f1(
              DTYPE X[FLAT_VEC_SZ],
        const DTYPE W[F1_COLS][F1_ROWS],
        const DTYPE bias[F1_ROWS],
              DTYPE Z[F1_ROWS]);

void relu_a5(DTYPE in[F1_ROWS], DTYPE out[F1_ROWS]);

void vec_mat_mul_f2(
          DTYPE X[F1_ROWS],
    const DTYPE W[F2_COLS][F2_ROWS],
    const DTYPE bias[F2_ROWS],
          DTYPE Z[F2_ROWS]);

void relu_a6(DTYPE in[F2_ROWS], DTYPE out[F2_ROWS]);

void vec_mat_mul_f3(
          DTYPE X[F2_ROWS],
    const DTYPE W[F3_COLS][F3_ROWS],
    const DTYPE bias[F3_ROWS],
          DTYPE Z[F3_ROWS]);

void softmax(DTYPE Z[SFMX_SIZE], DTYPE p[1]);
# 2 "pooling.cpp" 2







DTYPE maxFour(DTYPE a, DTYPE b, DTYPE c, DTYPE d) {
    return ({ __typeof__ (({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })) _a = (({ __typeof__ (a) _a = (a); __typeof__ (b) _b = (b); _a > _b ? _a : _b; })); __typeof__ (({ __typeof__ (c) _a = (c); __typeof__ (d) _b = (d); _a > _b ? _a : _b; })) _b = (({ __typeof__ (c) _a = (c); __typeof__ (d) _b = (d); _a > _b ? _a : _b; })); _a > _b ? _a : _b; });
}

void pooling_p1(DTYPE in[P1_SIZE][P1_SIZE][C2_N_FILTERS], DTYPE out[P1_DOWNSIZE][P1_DOWNSIZE][C2_N_FILTERS]) {_ssdm_SpecArrayDimSize(in, 24);_ssdm_SpecArrayDimSize(out, 12);

    uint8_t i, j, m;

    for (m = 0; m < C1_N_FILTERS; ++m) {
        for (i = 0; i < P1_DOWNSIZE; i++) {
            for (j = 0; j < P1_DOWNSIZE; j++) {
#pragma HLS UNROLL
 out[i][j][m] = maxFour(
                     in[i << 1][j << 1][m],
                     in[(i << 1) + 1][j << 1][m],
                     in[i << 1][(j << 1) + 1][m],
                     in[(i << 1) + 1][(j << 1) + 1][m]

                );
            }
        }
    }
}

void pooling_p2(DTYPE in[P2_SIZE][P2_SIZE][C4_N_FILTERS], DTYPE out[P2_DOWNSIZE][P2_DOWNSIZE][C4_N_FILTERS]) {_ssdm_SpecArrayDimSize(in, 8);_ssdm_SpecArrayDimSize(out, 4);

    uint8_t i, j, m;

    for (m = 0; m < C2_N_FILTERS; ++m) {
        for (i = 0; i < P2_DOWNSIZE; i++) {
            for (j = 0; j < P2_DOWNSIZE; j++) {
#pragma HLS UNROLL
 out[i][j][m] = maxFour(
                        in[i << 1][j << 1][m],
                        in[(i << 1) + 1][j << 1][m],
                        in[i << 1][(j << 1) + 1][m],
                        in[(i << 1) + 1][(j << 1) + 1][m]
                );
            }
        }
    }
}
