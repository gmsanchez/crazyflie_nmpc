/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) crazyflie_expl_vde_adj_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[17] = {13, 1, 0, 13, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
static const casadi_int casadi_s1[8] = {4, 1, 0, 4, 0, 1, 2, 3};
static const casadi_int casadi_s2[21] = {17, 1, 0, 17, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

casadi_real casadi_sq(casadi_real x) { return x*x;}

/* crazyflie_expl_vde_adj:(i0[13],i1[13],i2[4])->(o0[17]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a5, a6, a7, a8, a9;
  a0=0.;
  if (res[0]!=0) res[0][0]=a0;
  if (res[0]!=0) res[0][1]=a0;
  if (res[0]!=0) res[0][2]=a0;
  a0=arg[0] ? arg[0][3] : 0;
  a1=(a0+a0);
  a2=2.;
  a3=9.8000000000000007e+00;
  a4=arg[1] ? arg[1][9] : 0;
  a5=(a3*a4);
  a6=(a2*a5);
  a1=(a1*a6);
  a6=arg[0] ? arg[0][4] : 0;
  a7=arg[1] ? arg[1][8] : 0;
  a8=(a3*a7);
  a9=(a6*a8);
  a9=(a2*a9);
  a1=(a1+a9);
  a9=arg[0] ? arg[0][5] : 0;
  a10=arg[1] ? arg[1][7] : 0;
  a3=(a3*a10);
  a11=(a9*a3);
  a11=(a2*a11);
  a1=(a1-a11);
  a11=arg[0] ? arg[0][12] : 0;
  a12=5.0000000000000000e-01;
  a13=arg[1] ? arg[1][6] : 0;
  a14=(a12*a13);
  a15=(a11*a14);
  a1=(a1+a15);
  a15=arg[0] ? arg[0][11] : 0;
  a16=arg[1] ? arg[1][5] : 0;
  a17=(a12*a16);
  a18=(a15*a17);
  a1=(a1+a18);
  a18=arg[0] ? arg[0][10] : 0;
  a19=arg[1] ? arg[1][4] : 0;
  a20=(a12*a19);
  a21=(a18*a20);
  a1=(a1+a21);
  a21=arg[0] ? arg[0][8] : 0;
  a22=arg[1] ? arg[1][2] : 0;
  a23=(a21*a22);
  a24=(a6*a23);
  a24=(a2*a24);
  a1=(a1+a24);
  a24=arg[0] ? arg[0][7] : 0;
  a25=(a24*a22);
  a26=(a9*a25);
  a26=(a2*a26);
  a1=(a1-a26);
  a26=(a0+a0);
  a27=arg[0] ? arg[0][9] : 0;
  a28=(a27*a22);
  a29=(a2*a28);
  a26=(a26*a29);
  a1=(a1+a26);
  a26=arg[1] ? arg[1][1] : 0;
  a29=(a27*a26);
  a30=(a6*a29);
  a30=(a2*a30);
  a1=(a1-a30);
  a30=arg[0] ? arg[0][6] : 0;
  a31=(a24*a26);
  a32=(a30*a31);
  a32=(a2*a32);
  a1=(a1+a32);
  a32=(a0+a0);
  a33=(a21*a26);
  a34=(a2*a33);
  a32=(a32*a34);
  a1=(a1+a32);
  a32=arg[1] ? arg[1][0] : 0;
  a34=(a27*a32);
  a35=(a9*a34);
  a35=(a2*a35);
  a1=(a1+a35);
  a35=(a21*a32);
  a36=(a30*a35);
  a36=(a2*a36);
  a1=(a1-a36);
  a36=(a0+a0);
  a37=(a24*a32);
  a38=(a2*a37);
  a36=(a36*a38);
  a1=(a1+a36);
  if (res[0]!=0) res[0][3]=a1;
  a1=(a2*a0);
  a1=(a1*a8);
  a36=(a30*a3);
  a36=(a2*a36);
  a1=(a1+a36);
  a36=(a12*a13);
  a38=(a15*a36);
  a1=(a1+a38);
  a38=(a12*a16);
  a39=(a11*a38);
  a1=(a1-a39);
  a39=arg[1] ? arg[1][3] : 0;
  a40=(a12*a39);
  a41=(a18*a40);
  a1=(a1-a41);
  a41=(a2*a0);
  a42=(a41*a23);
  a1=(a1+a42);
  a42=(a30*a25);
  a42=(a2*a42);
  a1=(a1+a42);
  a42=(a2*a0);
  a43=(a42*a29);
  a1=(a1-a43);
  a43=(a9*a31);
  a43=(a2*a43);
  a1=(a1+a43);
  a43=(a30*a34);
  a43=(a2*a43);
  a1=(a1+a43);
  a43=(a9*a35);
  a43=(a2*a43);
  a1=(a1+a43);
  a43=(a6+a6);
  a37=(a2*a37);
  a43=(a43*a37);
  a1=(a1+a43);
  if (res[0]!=0) res[0][4]=a1;
  a1=(a30*a8);
  a1=(a2*a1);
  a43=(a2*a0);
  a43=(a43*a3);
  a1=(a1-a43);
  a13=(a12*a13);
  a43=(a18*a13);
  a1=(a1-a43);
  a43=(a12*a19);
  a37=(a11*a43);
  a1=(a1+a37);
  a37=(a12*a39);
  a44=(a15*a37);
  a1=(a1-a44);
  a44=(a30*a23);
  a44=(a2*a44);
  a1=(a1+a44);
  a44=(a2*a0);
  a45=(a44*a25);
  a1=(a1-a45);
  a45=(a30*a29);
  a45=(a2*a45);
  a1=(a1+a45);
  a45=(a2*a6);
  a46=(a45*a31);
  a1=(a1+a46);
  a46=(a9+a9);
  a33=(a2*a33);
  a46=(a46*a33);
  a1=(a1+a46);
  a46=(a2*a0);
  a33=(a46*a34);
  a1=(a1+a33);
  a33=(a2*a6);
  a47=(a33*a35);
  a1=(a1+a47);
  if (res[0]!=0) res[0][5]=a1;
  a1=(a30+a30);
  a5=(a2*a5);
  a1=(a1*a5);
  a5=(a2*a9);
  a5=(a5*a8);
  a1=(a1+a5);
  a5=(a2*a6);
  a5=(a5*a3);
  a1=(a1+a5);
  a16=(a12*a16);
  a5=(a18*a16);
  a1=(a1+a5);
  a19=(a12*a19);
  a5=(a15*a19);
  a1=(a1-a5);
  a12=(a12*a39);
  a39=(a11*a12);
  a1=(a1-a39);
  a39=(a2*a9);
  a23=(a39*a23);
  a1=(a1+a23);
  a23=(a2*a6);
  a25=(a23*a25);
  a1=(a1+a25);
  a25=(a30+a30);
  a28=(a2*a28);
  a25=(a25*a28);
  a1=(a1+a25);
  a25=(a2*a9);
  a29=(a25*a29);
  a1=(a1+a29);
  a29=(a2*a0);
  a31=(a29*a31);
  a1=(a1+a31);
  a31=(a2*a6);
  a34=(a31*a34);
  a1=(a1+a34);
  a34=(a2*a0);
  a35=(a34*a35);
  a1=(a1-a35);
  if (res[0]!=0) res[0][6]=a1;
  a1=(a15*a4);
  a35=(a11*a7);
  a1=(a1-a35);
  a44=(a44*a9);
  a23=(a23*a30);
  a44=(a44-a23);
  a44=(a44*a22);
  a1=(a1-a44);
  a29=(a29*a30);
  a45=(a45*a9);
  a29=(a29+a45);
  a29=(a29*a26);
  a1=(a1+a29);
  a29=casadi_sq(a0);
  a29=(a2*a29);
  a45=casadi_sq(a6);
  a45=(a2*a45);
  a29=(a29+a45);
  a45=1.;
  a29=(a29-a45);
  a29=(a29*a32);
  a1=(a1+a29);
  if (res[0]!=0) res[0][7]=a1;
  a1=(a11*a10);
  a29=(a18*a4);
  a1=(a1-a29);
  a41=(a41*a6);
  a39=(a39*a30);
  a41=(a41+a39);
  a41=(a41*a22);
  a1=(a1+a41);
  a41=casadi_sq(a0);
  a41=(a2*a41);
  a39=casadi_sq(a9);
  a39=(a2*a39);
  a41=(a41+a39);
  a41=(a41-a45);
  a41=(a41*a26);
  a1=(a1+a41);
  a34=(a34*a30);
  a33=(a33*a9);
  a34=(a34-a33);
  a34=(a34*a32);
  a1=(a1-a34);
  if (res[0]!=0) res[0][8]=a1;
  a1=(a18*a7);
  a34=(a15*a10);
  a1=(a1-a34);
  a34=casadi_sq(a0);
  a34=(a2*a34);
  a33=casadi_sq(a30);
  a2=(a2*a33);
  a34=(a34+a2);
  a34=(a34-a45);
  a34=(a34*a22);
  a1=(a1+a34);
  a42=(a42*a6);
  a25=(a25*a30);
  a42=(a42-a25);
  a42=(a42*a26);
  a1=(a1-a42);
  a46=(a46*a9);
  a31=(a31*a30);
  a46=(a46+a31);
  a46=(a46*a32);
  a1=(a1+a46);
  if (res[0]!=0) res[0][9]=a1;
  a1=1.3950000000000000e-05;
  a46=4.6019328117809477e+04;
  a32=arg[1] ? arg[1][12] : 0;
  a46=(a46*a32);
  a32=(a15*a46);
  a32=(a1*a32);
  a31=(a15*a46);
  a31=(a1*a31);
  a32=(a32-a31);
  a31=2.1730000000000000e-05;
  a42=7.1684587813620077e+04;
  a26=arg[1] ? arg[1][11] : 0;
  a26=(a42*a26);
  a25=(a11*a26);
  a25=(a31*a25);
  a32=(a32+a25);
  a25=(a11*a26);
  a25=(a1*a25);
  a32=(a32-a25);
  a25=(a21*a4);
  a32=(a32-a25);
  a25=(a27*a7);
  a32=(a32+a25);
  a13=(a9*a13);
  a32=(a32-a13);
  a16=(a30*a16);
  a32=(a32+a16);
  a20=(a0*a20);
  a32=(a32+a20);
  a40=(a6*a40);
  a32=(a32-a40);
  if (res[0]!=0) res[0][10]=a32;
  a32=(a1*a18);
  a32=(a32*a46);
  a40=(a1*a18);
  a40=(a40*a46);
  a32=(a32-a40);
  a40=arg[1] ? arg[1][10] : 0;
  a42=(a42*a40);
  a40=(a11*a42);
  a40=(a31*a40);
  a32=(a32-a40);
  a11=(a11*a42);
  a11=(a1*a11);
  a32=(a32+a11);
  a11=(a24*a4);
  a32=(a32+a11);
  a27=(a27*a10);
  a32=(a32-a27);
  a36=(a6*a36);
  a32=(a32+a36);
  a17=(a0*a17);
  a32=(a32+a17);
  a19=(a30*a19);
  a32=(a32-a19);
  a37=(a9*a37);
  a32=(a32-a37);
  if (res[0]!=0) res[0][11]=a32;
  a32=(a31*a18);
  a32=(a32*a26);
  a18=(a1*a18);
  a18=(a18*a26);
  a32=(a32-a18);
  a31=(a31*a15);
  a31=(a31*a42);
  a32=(a32-a31);
  a1=(a1*a15);
  a1=(a1*a42);
  a32=(a32+a1);
  a24=(a24*a7);
  a32=(a32-a24);
  a21=(a21*a10);
  a32=(a32+a21);
  a0=(a0*a14);
  a32=(a32+a0);
  a6=(a6*a38);
  a32=(a32-a6);
  a9=(a9*a43);
  a32=(a32+a9);
  a30=(a30*a12);
  a32=(a32-a30);
  if (res[0]!=0) res[0][12]=a32;
  a32=arg[2] ? arg[2][0] : 0;
  a30=(a32+a32);
  a12=7.9378999999999999e-12;
  a12=(a12*a46);
  a30=(a30*a12);
  a46=(a32+a32);
  a9=1.0264150000000000e-11;
  a26=(a9*a26);
  a46=(a46*a26);
  a30=(a30+a46);
  a46=(a32+a32);
  a9=(a9*a42);
  a46=(a46*a9);
  a30=(a30+a46);
  a32=(a32+a32);
  a46=3.1582000000000000e-10;
  a42=3.0303030303030301e+01;
  a42=(a42*a4);
  a46=(a46*a42);
  a32=(a32*a46);
  a30=(a30+a32);
  a30=(-a30);
  if (res[0]!=0) res[0][13]=a30;
  a30=arg[2] ? arg[2][1] : 0;
  a32=(a30+a30);
  a32=(a32*a12);
  a42=(a30+a30);
  a42=(a42*a26);
  a32=(a32+a42);
  a42=(a30+a30);
  a42=(a42*a9);
  a32=(a32-a42);
  a30=(a30+a30);
  a30=(a30*a46);
  a32=(a32-a30);
  if (res[0]!=0) res[0][14]=a32;
  a32=arg[2] ? arg[2][2] : 0;
  a30=(a32+a32);
  a30=(a30*a26);
  a42=(a32+a32);
  a42=(a42*a12);
  a30=(a30-a42);
  a42=(a32+a32);
  a42=(a42*a9);
  a30=(a30+a42);
  a32=(a32+a32);
  a32=(a32*a46);
  a30=(a30-a32);
  if (res[0]!=0) res[0][15]=a30;
  a30=arg[2] ? arg[2][3] : 0;
  a32=(a30+a30);
  a32=(a32*a12);
  a12=(a30+a30);
  a12=(a12*a26);
  a32=(a32-a12);
  a12=(a30+a30);
  a12=(a12*a9);
  a32=(a32+a12);
  a30=(a30+a30);
  a30=(a30*a46);
  a32=(a32-a30);
  if (res[0]!=0) res[0][16]=a32;
  return 0;
}

CASADI_SYMBOL_EXPORT int crazyflie_expl_vde_adj(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void crazyflie_expl_vde_adj_incref(void) {
}

CASADI_SYMBOL_EXPORT void crazyflie_expl_vde_adj_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int crazyflie_expl_vde_adj_n_in(void) { return 3;}

CASADI_SYMBOL_EXPORT casadi_int crazyflie_expl_vde_adj_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT const char* crazyflie_expl_vde_adj_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* crazyflie_expl_vde_adj_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* crazyflie_expl_vde_adj_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s0;
    case 2: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* crazyflie_expl_vde_adj_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int crazyflie_expl_vde_adj_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
