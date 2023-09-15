#ifndef RTW_HEADER_LINEFOLLOW_90_DATA_READING_h_
#define RTW_HEADER_LINEFOLLOW_90_DATA_READING_h_
#ifndef LINEFOLLOW_90_DATA_READING_COMMON_INCLUDES_
#define LINEFOLLOW_90_DATA_READING_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "slexec_parallel.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "LINEFOLLOW_90_DATA_READING_types.h"
#include <stddef.h>
#include <string.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#define MODEL_NAME LINEFOLLOW_90_DATA_READING
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (32) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (0)   
#elif NCSTATES != 0
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { int8_T akjaaoglbg ; } g34h4wd5tk ; typedef struct { int32_T
ovm2oyeful ; uint32_T ohq2ztllxo ; uint8_T duw1xkqtek ; boolean_T ncb2yiikbt
; } p41daomnge ; typedef struct { uint32_T hoasecisyd ; } du4rwoznf1o ;
typedef struct { real_T houlu1kk0d [ 1327 ] ; real32_T kkjjs3cohz [ 1327 ] ;
} c14qb1dy0q ; typedef struct { int32_T l1mfqwj5rc ; uint8_T ciff0uw4a3 ;
boolean_T di3vr0e2iw ; du4rwoznf1o osbt1yzhh0 [ 1327 ] ; } du4rwoznf1 ;
typedef struct { real_T ouowhxxprb ; real_T jxi1x4e03t ; real_T pc3evx0mow ;
real_T m4eljzmdsj [ 4 ] ; real_T cuoexuzlm4 ; real_T becycjtoxf ; real_T
axzxj5uktk ; real_T idida0022t ; real_T jq2505hglk ; real_T njczvchnoe ;
real_T c0iltmlfbi ; real_T mbceuuvi1k ; real_T e2vtmpvjdz ; real_T n45i4rsrnl
; real_T itj32cisqf ; real_T mmkuncny5o ; real_T dowb3m4bgk ; real_T
jl4ub35pwm ; real_T k5srpchxkd ; real_T mzdhsevphf ; real_T ljdqe2rmnt ;
real_T jzxctmmzb1 ; real_T bpcnsls3wa [ 9 ] ; real_T in0g5ymfbo ; real_T
jb4chrbkfd ; real_T dgw1rht5ve ; real32_T csiuroqpjm [ 4 ] ; c14qb1dy0q
osbt1yzhh0 [ 1 ] ; } B ; typedef struct { real_T lddr43iukk ; real_T
eswpe1v5pw ; real_T gymzq2v1d1 ; real_T irdg0umelv ; real_T mnyij4et0u ;
real_T orx3nc2dkn ; real_T dky3a1sqsf [ 3 ] ; real_T eeh3unqcyj ; real_T
jjyoxccwxa [ 3 ] ; real_T o1xils2q02 ; real_T c2uqsnlhjq ; real_T iq0uewqkwz
; real_T hfhaxbdpqy ; real_T nhycdpz4ks ; struct { void * LoggedData ; }
i4jo210mxu ; struct { void * LoggedData ; } fuzb3gejwn ; struct { void *
LoggedData ; } kxzqy0x130 ; struct { void * LoggedData ; } a20layddt4 ;
int32_T om04ta0vib ; int32_T o4m4odno13 ; int32_T khqtjuisp2 ; int32_T
ehlxkuk1in ; uint32_T bff3bj3sb0 ; uint32_T dxnpm1ncbe ; uint8_T mh4aj0wqkn ;
uint8_T bdljyikdhx ; uint8_T aerlsydhoo ; boolean_T nmzj15qgzq ; boolean_T
jds0ut2wuv ; du4rwoznf1 osbt1yzhh0 [ 1 ] ; p41daomnge ofwjthgdta [ 4 ] ;
g34h4wd5tk jyumvcfqdh ; g34h4wd5tk ftq2sugm1pk ; } DW ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct dplyyzvhcv_ { real_T
Gain1_Gain ; real_T Bias_Bias ; real_T Gain_Gain ; real_T Bias1_Bias ; real_T
Saturation2_UpperSat ; real_T Saturation2_LowerSat ; real_T
Saturation3_UpperSat ; real_T Saturation3_LowerSat ; real_T Constant_Value ;
real32_T DirectLookupTablenD_table [ 791911 ] ; uint8_T
DirectLookupTablenD_DiagnosticForOutOfRangeInput ; } ; struct mjrg2f3s3bj_ {
real_T Gain1_Gain ; real_T Bias_Bias ; real_T Saturation_UpperSat ; real_T
Saturation_LowerSat ; real_T Gain_Gain ; real_T Bias1_Bias ; real_T
Saturation1_UpperSat ; real_T Saturation1_LowerSat ; real_T Constant_Value ;
real_T Constant1_Value ; real32_T DirectLookupTablenD_table [ 791911 ] ;
uint8_T DirectLookupTablenD_DiagnosticForOutOfRangeInput ; } ; struct
mjrg2f3s3b_ { real_T Constant_Value [ 1327 ] ; mjrg2f3s3bj osbt1yzhh0 ; } ;
struct P_ { real_T InputPWM [ 173 ] ; real_T WheelSpeed [ 173 ] ; real_T
axleLength ; real_T lineLength ; real_T ticksPerRot ; real_T wheelR ; real_T
LineSensor1_envVal ; real_T LineSensor1_lineVal ; real_T LeftMotor_sensorType
; real_T RightMotor_sensorType ; real_T RobotSimulator_startTheta ; real_T
RobotSimulator_startX ; real_T RobotSimulator_startY ; real_T Towlwr_wheelR ;
real_T Gain_Gain ; real_T Gain_Gain_cirheseb5s ; real_T
DiscreteTimeIntegrator2_gainval ; real_T DiscreteTimeIntegrator_gainval ;
real_T DiscreteTimeIntegrator1_gainval ; real_T
DiscreteTimeIntegrator_gainval_bfxl21iqwk ; real_T DiscreteTimeIntegrator_IC
; real_T DiscreteTimeIntegrator1_gainval_hret3wtaoa ; real_T
DiscreteTimeIntegrator1_IC ; real_T Gain_Gain_dvchqdxwbj ; real_T
Gain_Gain_oneshwnrhn ; real_T DiscreteTimeIntegrator_gainval_pqjn4s3zfp ;
real_T DiscreteTimeIntegrator_IC_nxjdqjay5a ; real_T Internal_A [ 9 ] ;
real_T Internal_B [ 3 ] ; real_T Internal_C [ 3 ] ; real_T Switch_Threshold ;
real_T DiscreteTimeIntegrator_gainval_nsbpff3iej ; real_T
DiscreteTimeIntegrator_IC_e2rs5vbr1z ; real_T Internal_A_bedsmejnmc [ 9 ] ;
real_T Internal_B_f5c2cweayi [ 3 ] ; real_T Internal_C_j3hwsrye03 [ 3 ] ;
real_T Switch_Threshold_optfqfjagg ; real_T SoftRealTime_P1_Size [ 2 ] ;
real_T SoftRealTime_P1 ; real_T Gain2_Gain ; real_T Gain3_Gain ; real_T
changeparameters_Gain [ 4 ] ; real_T DataStoreMemory_InitialValue ; real_T
DataStoreMemory1_InitialValue ; real_T Circle_Value ; real_T Gain1_Gain ;
real_T Constant_Value [ 4 ] ; real_T Constant1_Value [ 4 ] ; real_T
Constant_Value_lsb3s3lan1 ; real_T Constant1_Value_h1zlwjstwh ; real32_T
Switch_Threshold_dssh4epfux ; mjrg2f3s3b osbt1yzhh0 ; dplyyzvhcv ofwjthgdta ;
} ; extern const char_T * RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern
DW rtDW ; extern P rtP ; extern mxArray *
mr_LINEFOLLOW_90_DATA_READING_GetDWork ( ) ; extern void
mr_LINEFOLLOW_90_DATA_READING_SetDWork ( const mxArray * ssDW ) ; extern
mxArray * mr_LINEFOLLOW_90_DATA_READING_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
LINEFOLLOW_90_DATA_READING_GetCAPIStaticMap ( void ) ; extern SimStruct *
const rtS ; extern const int_T gblNumToFiles ; extern const int_T
gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern rtInportTUtable
* gblInportTUtables ; extern const char * gblInportFileName ; extern const
int_T gblNumRootInportBlks ; extern const int_T gblNumModelInputs ; extern
const int_T gblInportDataTypeIdx [ ] ; extern const int_T gblInportDims [ ] ;
extern const int_T gblInportComplex [ ] ; extern const int_T
gblInportInterpoFlag [ ] ; extern const int_T gblInportContinuous [ ] ;
extern const int_T gblParameterTuningTid ; extern DataMapInfo *
rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ;
void MdlOutputs ( int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T
tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
