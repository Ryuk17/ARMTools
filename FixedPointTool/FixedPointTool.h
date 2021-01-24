#ifndef FIXEDPOINTTOOL
#define FIXEDPOINTTOOL

#define MAX_UINT_8       256
#define MAX_UINT_16      65536
#define MAX_UINT_32      4294967295

#define MAX_SINT_8       127
#define MIN_SINT_8       -128

#define MAX_SINT_16      32767
#define MIN_SINT_16      -32768

#define MAX_SINT_32      2147483647
#define MIN_SINT_32      -2147483648

typedef unsigned char   fp_uint8;
typedef unsigned short  fp_uint16;
typedef unsigned int    fp_uint32;

typedef signed char     fp_sint8;
typedef signed short    fp_sint16;
typedef signed int      fp_sint32;		

fp_sint32 float_to_fp32(float x, int Qx);
float fp32_to_float(fp_sint32 x, int Qx);

fp_sint32 fp32_shift(fp_sint32 x, int Qx, int Qy);
fp_sint32 fp32_saturation();

fp_sint32 fp32_add(fp_sint32 x, fp_sint32 y);
fp_sint32 fp32_sub(fp_sint32 x, fp_sint32 y);
fp_sint32 fp32_mul(fp_sint32 x, fp_sint32 y);
fp_sint32 fp32_div(fp_sint32 x, fp_sint32 y);




#endif // !FIXEDPOINTTOOL

