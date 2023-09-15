#ifndef RTW_HEADER_LINEFOLLOW_90_DATA_READING_private_h_
#define RTW_HEADER_LINEFOLLOW_90_DATA_READING_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "LINEFOLLOW_90_DATA_READING_types.h"
#include "LINEFOLLOW_90_DATA_READING.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
    }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
#else
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
#endif
#endif
extern uint32_T plook_u32d_binckan ( real_T u , const real_T bp [ ] ,
uint32_T maxIndex ) ; extern uint32_T binsearch_u32d ( real_T u , const
real_T bp [ ] , uint32_T startIndex , uint32_T maxIndex ) ; extern void
sfun_time ( SimStruct * rts ) ; extern void ftq2sugm1p ( real_T mapyp5yhsv ,
real_T * go1okunvcl ) ; extern void nscgcgj2ek ( void ) ; extern void
fejke3xcut ( int32_T fjdf4pfngk ) ; extern void fbuctcnzkb ( void ) ; extern
void pxaprgrl4c ( void ) ; extern void kqjybwecg2 ( int32_T a5awtfoq0m ) ;
#if defined(MULTITASKING)
#error Model (LINEFOLLOW_90_DATA_READING) was built in \SingleTasking solver mode, however the MULTITASKING define is \present. If you have multitasking (e.g. -DMT or -DMULTITASKING) \defined on the Code Generation page of Simulation parameter dialog, please \remove it and on the Solver page, select solver mode \MultiTasking. If the Simulation parameter dialog is configured \correctly, please verify that your template makefile is \configured correctly.
#endif
#endif
