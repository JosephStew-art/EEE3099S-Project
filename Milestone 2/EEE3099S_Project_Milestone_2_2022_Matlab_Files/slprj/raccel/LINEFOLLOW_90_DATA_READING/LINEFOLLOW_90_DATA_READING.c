#include "LINEFOLLOW_90_DATA_READING.h"
#include "rtwtypes.h"
#include "LINEFOLLOW_90_DATA_READING_private.h"
#include <string.h>
#include "mwmathutil.h"
#include "rt_logging_mmi.h"
#include "LINEFOLLOW_90_DATA_READING_capi.h"
#include "LINEFOLLOW_90_DATA_READING_dt.h"
#include "sfcn_loader_c_api.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 2 , & stopRequested ) ; }
rtExtModeShutdown ( 2 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 1 ; int_T gbl_raccel_NumST = 3 ; const char_T
* gbl_raccel_Version = "9.9 (R2023a) 19-Nov-2022" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define nycszexvyd (-1)
#define ay5v5d3qtx (1U)
#define cphwwizc2w (6U)
#define d2ygkcwxzc (1U)
#define dozrj4buvm (2U)
#define e5cpv5p5xt (-1)
#define f1f2mkndo3 (2U)
#define fnajxmg0wo ((uint8_T)0U)
#define fwoqqvn4fr (3U)
#define i4khrkd3yc (3U)
#define jm04mwfdk5 (7U)
#define ksndbwgtzd (5U)
#define lwsbstfi31 (4U)
B rtB ; DW rtDW ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; uint32_T plook_u32d_binckan ( real_T u , const real_T bp [ ] ,
uint32_T maxIndex ) { uint32_T bpIndex ; if ( u <= bp [ 0U ] ) { bpIndex = 0U
; } else if ( u < bp [ maxIndex ] ) { bpIndex = binsearch_u32d ( u , bp ,
maxIndex >> 1U , maxIndex ) ; if ( ( bpIndex < maxIndex ) && ( bp [ bpIndex +
1U ] - u <= u - bp [ bpIndex ] ) ) { bpIndex ++ ; } } else { bpIndex =
maxIndex ; } return bpIndex ; } uint32_T binsearch_u32d ( real_T u , const
real_T bp [ ] , uint32_T startIndex , uint32_T maxIndex ) { uint32_T bpIdx ;
uint32_T bpIndex ; uint32_T iRght ; bpIdx = startIndex ; bpIndex = 0U ; iRght
= maxIndex ; while ( iRght - bpIndex > 1U ) { if ( u < bp [ bpIdx ] ) { iRght
= bpIdx ; } else { bpIndex = bpIdx ; } bpIdx = ( iRght + bpIndex ) >> 1U ; }
return bpIndex ; } void ftq2sugm1p ( real_T mapyp5yhsv , real_T * go1okunvcl
) { * go1okunvcl = mapyp5yhsv ; } void fbuctcnzkb ( void ) { int32_T
a5awtfoq0m ; for ( a5awtfoq0m = 0 ; a5awtfoq0m < 4 ; a5awtfoq0m ++ ) { rtDW .
ofwjthgdta [ a5awtfoq0m ] . ovm2oyeful = nycszexvyd ; rtDW . ofwjthgdta [
a5awtfoq0m ] . duw1xkqtek = 0U ; } } void pxaprgrl4c ( void ) { int32_T
a5awtfoq0m ; for ( a5awtfoq0m = 0 ; a5awtfoq0m < 4 ; a5awtfoq0m ++ ) { rtDW .
ofwjthgdta [ a5awtfoq0m ] . ohq2ztllxo = 0U ; } } void kqjybwecg2 ( int32_T
a5awtfoq0m ) { real_T ddzb25yz4d ; real_T jwnyaehkbj ; real32_T anr4vjrwap ;
ddzb25yz4d = rtP . Constant_Value [ a5awtfoq0m ] ; jwnyaehkbj = rtP .
Constant1_Value [ a5awtfoq0m ] ; { real_T tmp_p [ 9 ] ; real_T transPt [ 3 ]
; real_T hpvaf11fo4 ; real_T k3di3j4lwr ; real_T tmp ; int32_T i ; SimStruct
* S ; void * diag ; rtDW . ofwjthgdta [ a5awtfoq0m ] . ovm2oyeful =
nycszexvyd ; tmp_p [ 0 ] = muDoubleScalarCos ( rtB . ouowhxxprb ) ; tmp_p [ 3
] = - muDoubleScalarSin ( rtB . ouowhxxprb ) ; tmp_p [ 6 ] = 0.0 ; tmp_p [ 1
] = muDoubleScalarSin ( rtB . ouowhxxprb ) ; tmp_p [ 4 ] = muDoubleScalarCos
( rtB . ouowhxxprb ) ; tmp_p [ 7 ] = 0.0 ; tmp_p [ 2 ] = 0.0 ; tmp_p [ 5 ] =
0.0 ; tmp_p [ 8 ] = 1.0 ; for ( i = 0 ; i < 3 ; i ++ ) { transPt [ i ] =
tmp_p [ i + 3 ] * jwnyaehkbj + tmp_p [ i ] * ddzb25yz4d ; } k3di3j4lwr =
muDoubleScalarRound ( rtP . ofwjthgdta . Constant_Value - ( rtB . pc3evx0mow
+ transPt [ 1 ] ) * rtP . ofwjthgdta . Gain1_Gain ) + rtP . ofwjthgdta .
Bias_Bias ; if ( k3di3j4lwr > rtP . ofwjthgdta . Saturation2_UpperSat ) {
k3di3j4lwr = rtP . ofwjthgdta . Saturation2_UpperSat ; } else if ( k3di3j4lwr
< rtP . ofwjthgdta . Saturation2_LowerSat ) { k3di3j4lwr = rtP . ofwjthgdta .
Saturation2_LowerSat ; } hpvaf11fo4 = muDoubleScalarRound ( ( rtB .
jxi1x4e03t + transPt [ 0 ] ) * rtP . ofwjthgdta . Gain_Gain ) + rtP .
ofwjthgdta . Bias1_Bias ; if ( hpvaf11fo4 > rtP . ofwjthgdta .
Saturation3_UpperSat ) { hpvaf11fo4 = rtP . ofwjthgdta . Saturation3_UpperSat
; } else if ( hpvaf11fo4 < rtP . ofwjthgdta . Saturation3_LowerSat ) {
hpvaf11fo4 = rtP . ofwjthgdta . Saturation3_LowerSat ; } tmp =
muDoubleScalarFloor ( k3di3j4lwr ) ; if ( ( rtP . ofwjthgdta .
DirectLookupTablenD_DiagnosticForOutOfRangeInput != 0 ) && ( ( ! ( tmp >= 0.0
) ) || ( ! ( tmp <= 1258.0 ) ) ) ) { if ( rtP . ofwjthgdta .
DirectLookupTablenD_DiagnosticForOutOfRangeInput == 1 ) { if ( rtDW .
ofwjthgdta [ a5awtfoq0m ] . ohq2ztllxo == 0U ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeWarnMsg" , 1 , 5 ,
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Look up Line Value/Direct Lookup Table (n-D)"
) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } if ( rtDW . ofwjthgdta [
a5awtfoq0m ] . ohq2ztllxo != 0U ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockNumOfIndexOutOfRangeWarnMsg" , 2 , 5 ,
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Look up Line Value/Direct Lookup Table (n-D)"
, 1 , rtDW . ofwjthgdta [ a5awtfoq0m ] . ohq2ztllxo ) ;
rt_ssReportDiagnosticAsWarning ( S , diag ) ; } if ( rtDW . ofwjthgdta [
a5awtfoq0m ] . ohq2ztllxo < MAX_uint32_T ) { rtDW . ofwjthgdta [ a5awtfoq0m ]
. ohq2ztllxo ++ ; } } else { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeErrorMsg" , 1 , 5 ,
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Look up Line Value/Direct Lookup Table (n-D)"
) ; rt_ssSet_slErrMsg ( S , diag ) ; } } tmp = muDoubleScalarFloor (
hpvaf11fo4 ) ; if ( ( rtP . ofwjthgdta .
DirectLookupTablenD_DiagnosticForOutOfRangeInput != 0 ) && ( ( ! ( tmp >= 0.0
) ) || ( ! ( tmp <= 628.0 ) ) ) ) { if ( rtP . ofwjthgdta .
DirectLookupTablenD_DiagnosticForOutOfRangeInput == 1 ) { if ( rtDW .
ofwjthgdta [ a5awtfoq0m ] . ohq2ztllxo == 0U ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeWarnMsg" , 1 , 5 ,
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Look up Line Value/Direct Lookup Table (n-D)"
) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } if ( rtDW . ofwjthgdta [
a5awtfoq0m ] . ohq2ztllxo != 0U ) { S = rtS ; diag =
CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockNumOfIndexOutOfRangeWarnMsg" , 2 , 5 ,
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Look up Line Value/Direct Lookup Table (n-D)"
, 1 , rtDW . ofwjthgdta [ a5awtfoq0m ] . ohq2ztllxo ) ;
rt_ssReportDiagnosticAsWarning ( S , diag ) ; } if ( rtDW . ofwjthgdta [
a5awtfoq0m ] . ohq2ztllxo < MAX_uint32_T ) { rtDW . ofwjthgdta [ a5awtfoq0m ]
. ohq2ztllxo ++ ; } } else { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeErrorMsg" , 1 , 5 ,
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Look up Line Value/Direct Lookup Table (n-D)"
) ; rt_ssSet_slErrMsg ( S , diag ) ; } } if ( muDoubleScalarIsNaN (
hpvaf11fo4 ) ) { hpvaf11fo4 = 0.0 ; } if ( muDoubleScalarIsNaN ( k3di3j4lwr )
) { k3di3j4lwr = 0.0 ; } if ( hpvaf11fo4 > 628.0 ) { hpvaf11fo4 = 628.0 ; }
else if ( hpvaf11fo4 < 0.0 ) { hpvaf11fo4 = 0.0 ; } if ( k3di3j4lwr > 1258.0
) { k3di3j4lwr = 1258.0 ; } else if ( k3di3j4lwr < 0.0 ) { k3di3j4lwr = 0.0 ;
} anr4vjrwap = rtP . ofwjthgdta . DirectLookupTablenD_table [ ( int32_T )
hpvaf11fo4 * 1259 + ( int32_T ) k3di3j4lwr ] ; } rtB . csiuroqpjm [
a5awtfoq0m ] = anr4vjrwap ; } void nscgcgj2ek ( void ) { int32_T fjdf4pfngk ;
for ( fjdf4pfngk = 0 ; fjdf4pfngk < 1327 ; fjdf4pfngk ++ ) { rtDW .
osbt1yzhh0 [ rtDW . om04ta0vib ] . osbt1yzhh0 [ fjdf4pfngk ] . hoasecisyd =
0U ; } } void fejke3xcut ( int32_T fjdf4pfngk ) { real_T njzwn5rvnl [ 3 ] ;
real32_T ae2ebunufd ; njzwn5rvnl [ 0 ] = rtB . osbt1yzhh0 [ rtDW . om04ta0vib
] . houlu1kk0d [ fjdf4pfngk ] ; { real_T mfvlsfbujv [ 3 ] ; real_T jkctbyyw3b
; real_T p3emi02o53 ; real_T tmp ; int32_T i ; SimStruct * S ; void * diag ;
njzwn5rvnl [ 1 ] = rtB . ljdqe2rmnt ; njzwn5rvnl [ 2 ] = rtP . osbt1yzhh0 .
osbt1yzhh0 . Constant_Value ; jkctbyyw3b = njzwn5rvnl [ 1 ] ; p3emi02o53 =
njzwn5rvnl [ 0 ] ; tmp = njzwn5rvnl [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) {
mfvlsfbujv [ i ] = ( rtB . bpcnsls3wa [ i + 3 ] * jkctbyyw3b + rtB .
bpcnsls3wa [ i ] * p3emi02o53 ) + rtB . bpcnsls3wa [ i + 6 ] * tmp ; }
jkctbyyw3b = muDoubleScalarRound ( rtP . osbt1yzhh0 . osbt1yzhh0 .
Constant1_Value - ( mfvlsfbujv [ 1 ] + rtB . pc3evx0mow ) * rtP . osbt1yzhh0
. osbt1yzhh0 . Gain1_Gain ) + rtP . osbt1yzhh0 . osbt1yzhh0 . Bias_Bias ; if
( jkctbyyw3b > rtP . osbt1yzhh0 . osbt1yzhh0 . Saturation_UpperSat ) {
jkctbyyw3b = rtP . osbt1yzhh0 . osbt1yzhh0 . Saturation_UpperSat ; } else if
( jkctbyyw3b < rtP . osbt1yzhh0 . osbt1yzhh0 . Saturation_LowerSat ) {
jkctbyyw3b = rtP . osbt1yzhh0 . osbt1yzhh0 . Saturation_LowerSat ; }
p3emi02o53 = muDoubleScalarRound ( ( mfvlsfbujv [ 0 ] + rtB . jxi1x4e03t ) *
rtP . osbt1yzhh0 . osbt1yzhh0 . Gain_Gain ) + rtP . osbt1yzhh0 . osbt1yzhh0 .
Bias1_Bias ; if ( p3emi02o53 > rtP . osbt1yzhh0 . osbt1yzhh0 .
Saturation1_UpperSat ) { p3emi02o53 = rtP . osbt1yzhh0 . osbt1yzhh0 .
Saturation1_UpperSat ; } else if ( p3emi02o53 < rtP . osbt1yzhh0 . osbt1yzhh0
. Saturation1_LowerSat ) { p3emi02o53 = rtP . osbt1yzhh0 . osbt1yzhh0 .
Saturation1_LowerSat ; } tmp = muDoubleScalarFloor ( jkctbyyw3b ) ; if ( (
rtP . osbt1yzhh0 . osbt1yzhh0 .
DirectLookupTablenD_DiagnosticForOutOfRangeInput != 0 ) && ( ( ! ( tmp >= 0.0
) ) || ( ! ( tmp <= 1258.0 ) ) ) ) { if ( rtP . osbt1yzhh0 . osbt1yzhh0 .
DirectLookupTablenD_DiagnosticForOutOfRangeInput == 1 ) { if ( rtDW .
osbt1yzhh0 [ rtDW . om04ta0vib ] . osbt1yzhh0 [ fjdf4pfngk ] . hoasecisyd ==
0U ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeWarnMsg" , 1 , 5 ,
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Direct Lookup Table (n-D)"
) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } if ( rtDW . osbt1yzhh0 [
rtDW . om04ta0vib ] . osbt1yzhh0 [ fjdf4pfngk ] . hoasecisyd != 0U ) { S =
rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockNumOfIndexOutOfRangeWarnMsg" , 2 , 5 ,
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Direct Lookup Table (n-D)"
, 1 , rtDW . osbt1yzhh0 [ rtDW . om04ta0vib ] . osbt1yzhh0 [ fjdf4pfngk ] .
hoasecisyd ) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } if ( rtDW .
osbt1yzhh0 [ rtDW . om04ta0vib ] . osbt1yzhh0 [ fjdf4pfngk ] . hoasecisyd <
MAX_uint32_T ) { rtDW . osbt1yzhh0 [ rtDW . om04ta0vib ] . osbt1yzhh0 [
fjdf4pfngk ] . hoasecisyd ++ ; } } else { S = rtS ; diag =
CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeErrorMsg" , 1 , 5 ,
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Direct Lookup Table (n-D)"
) ; rt_ssSet_slErrMsg ( S , diag ) ; } } tmp = muDoubleScalarFloor (
p3emi02o53 ) ; if ( ( rtP . osbt1yzhh0 . osbt1yzhh0 .
DirectLookupTablenD_DiagnosticForOutOfRangeInput != 0 ) && ( ( ! ( tmp >= 0.0
) ) || ( ! ( tmp <= 628.0 ) ) ) ) { if ( rtP . osbt1yzhh0 . osbt1yzhh0 .
DirectLookupTablenD_DiagnosticForOutOfRangeInput == 1 ) { if ( rtDW .
osbt1yzhh0 [ rtDW . om04ta0vib ] . osbt1yzhh0 [ fjdf4pfngk ] . hoasecisyd ==
0U ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeWarnMsg" , 1 , 5 ,
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Direct Lookup Table (n-D)"
) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } if ( rtDW . osbt1yzhh0 [
rtDW . om04ta0vib ] . osbt1yzhh0 [ fjdf4pfngk ] . hoasecisyd != 0U ) { S =
rtS ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockNumOfIndexOutOfRangeWarnMsg" , 2 , 5 ,
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Direct Lookup Table (n-D)"
, 1 , rtDW . osbt1yzhh0 [ rtDW . om04ta0vib ] . osbt1yzhh0 [ fjdf4pfngk ] .
hoasecisyd ) ; rt_ssReportDiagnosticAsWarning ( S , diag ) ; } if ( rtDW .
osbt1yzhh0 [ rtDW . om04ta0vib ] . osbt1yzhh0 [ fjdf4pfngk ] . hoasecisyd <
MAX_uint32_T ) { rtDW . osbt1yzhh0 [ rtDW . om04ta0vib ] . osbt1yzhh0 [
fjdf4pfngk ] . hoasecisyd ++ ; } } else { S = rtS ; diag =
CreateDiagnosticAsVoidPtr (
"Simulink:blocks:DirectLookupNdBlockIndexOutOfRangeErrorMsg" , 1 , 5 ,
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Direct Lookup Table (n-D)"
) ; rt_ssSet_slErrMsg ( S , diag ) ; } } if ( muDoubleScalarIsNaN (
p3emi02o53 ) ) { p3emi02o53 = 0.0 ; } if ( muDoubleScalarIsNaN ( jkctbyyw3b )
) { jkctbyyw3b = 0.0 ; } if ( p3emi02o53 > 628.0 ) { p3emi02o53 = 628.0 ; }
else if ( p3emi02o53 < 0.0 ) { p3emi02o53 = 0.0 ; } if ( jkctbyyw3b > 1258.0
) { jkctbyyw3b = 1258.0 ; } else if ( jkctbyyw3b < 0.0 ) { jkctbyyw3b = 0.0 ;
} ae2ebunufd = rtP . osbt1yzhh0 . osbt1yzhh0 . DirectLookupTablenD_table [ (
int32_T ) p3emi02o53 * 1259 + ( int32_T ) jkctbyyw3b ] ; } rtB . osbt1yzhh0 [
rtDW . om04ta0vib ] . kkjjs3cohz [ fjdf4pfngk ] = ae2ebunufd ; } void
MdlInitialize ( void ) { rtDW . lddr43iukk = rtP . RobotSimulator_startTheta
* 0.017453292519943295 ; rtDW . eswpe1v5pw = rtP . RobotSimulator_startX ;
rtDW . gymzq2v1d1 = rtP . RobotSimulator_startY ; rtDW . irdg0umelv = rtP .
DiscreteTimeIntegrator_IC ; rtDW . mnyij4et0u = rtP .
DiscreteTimeIntegrator1_IC ; rtDW . orx3nc2dkn = rtP .
DiscreteTimeIntegrator_IC_nxjdqjay5a ; rtDW . dky3a1sqsf [ 0 ] = 0.0 ; rtDW .
dky3a1sqsf [ 1 ] = 0.0 ; rtDW . dky3a1sqsf [ 2 ] = 0.0 ; rtDW . eeh3unqcyj =
rtP . DiscreteTimeIntegrator_IC_e2rs5vbr1z ; rtDW . jjyoxccwxa [ 0 ] = 0.0 ;
rtDW . jjyoxccwxa [ 1 ] = 0.0 ; rtDW . jjyoxccwxa [ 2 ] = 0.0 ; rtDW .
o4m4odno13 = e5cpv5p5xt ; rtDW . mh4aj0wqkn = 0U ; rtDW . om04ta0vib = 0 ;
while ( rtDW . om04ta0vib < 1 ) { rtDW . osbt1yzhh0 [ rtDW . om04ta0vib ] .
l1mfqwj5rc = e5cpv5p5xt ; rtDW . osbt1yzhh0 [ rtDW . om04ta0vib ] .
ciff0uw4a3 = 0U ; rtDW . om04ta0vib ++ ; } fbuctcnzkb ( ) ; rtDW . ehlxkuk1in
= e5cpv5p5xt ; rtDW . dxnpm1ncbe = fnajxmg0wo ; rtDW . aerlsydhoo = 0U ; rtDW
. bff3bj3sb0 = fnajxmg0wo ; rtDW . iq0uewqkwz = 0.0 ; rtDW . hfhaxbdpqy = 0.0
; rtB . in0g5ymfbo = 0.0 ; rtB . jb4chrbkfd = 0.0 ; rtB . dgw1rht5ve = 0.0 ;
rtDW . khqtjuisp2 = e5cpv5p5xt ; rtDW . bdljyikdhx = 0U ; } void MdlStart (
void ) { { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} pxaprgrl4c ( ) ; rtDW . om04ta0vib = 0 ; while ( rtDW . om04ta0vib < 1 ) {
memset ( & rtB . osbt1yzhh0 [ rtDW . om04ta0vib ] . houlu1kk0d [ 0 ] , 0 ,
1327U * sizeof ( real_T ) ) ; nscgcgj2ek ( ) ; rtDW . om04ta0vib ++ ; } {
SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; { static const char *
blockSIDForSFcnLoader = "LINEFOLLOW_90_DATA_READING:7:401" ;
sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader ) ; void ( *
sfcnMethodPtr ) ( SimStruct * ) = ssGetmdlStart ( rts ) ;
sfcnLoader_separateComplexHandler ( rts , sfcnMethodPtr ) ; } if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW . o1xils2q02 = rtP .
DataStoreMemory_InitialValue ; rtDW . c2uqsnlhjq = rtP .
DataStoreMemory1_InitialValue ; MdlInitialize ( ) ; } void MdlOutputs ( int_T
tid ) { real_T a2gm0cgn1z ; real_T cmz0swa21r ; real_T duesfy0diy ; real_T
nh335xsjvs ; int32_T b_ii ; int32_T i ; int32_T ii_size_idx_0 ; int16_T
ii_data_idx_0 ; boolean_T exitg1 ; srClearBC ( rtDW . ftq2sugm1pk .
akjaaoglbg ) ; cmz0swa21r = rtDW . lddr43iukk ; rtB . ouowhxxprb =
muDoubleScalarMod ( rtDW . lddr43iukk , rtP . Circle_Value ) ; rtDW .
o4m4odno13 = e5cpv5p5xt ; rtB . bpcnsls3wa [ 0 ] = muDoubleScalarCos ( rtB .
ouowhxxprb ) ; rtB . bpcnsls3wa [ 3 ] = - muDoubleScalarSin ( rtB .
ouowhxxprb ) ; rtB . bpcnsls3wa [ 6 ] = 0.0 ; rtB . bpcnsls3wa [ 1 ] =
muDoubleScalarSin ( rtB . ouowhxxprb ) ; rtB . bpcnsls3wa [ 4 ] =
muDoubleScalarCos ( rtB . ouowhxxprb ) ; rtB . bpcnsls3wa [ 7 ] = 0.0 ; rtB .
bpcnsls3wa [ 2 ] = 0.0 ; rtB . bpcnsls3wa [ 5 ] = 0.0 ; rtB . bpcnsls3wa [ 8
] = 1.0 ; rtB . jxi1x4e03t = rtDW . eswpe1v5pw ; rtB . pc3evx0mow = rtDW .
gymzq2v1d1 ; rtDW . om04ta0vib = 0 ; while ( rtDW . om04ta0vib < 1 ) { rtB .
ljdqe2rmnt = rtP . Constant1_Value_h1zlwjstwh ; for ( i = 0 ; i < 1327 ; i ++
) { rtB . osbt1yzhh0 [ rtDW . om04ta0vib ] . houlu1kk0d [ i ] = rtP .
osbt1yzhh0 . Constant_Value [ i ] + rtP . Constant_Value_lsb3s3lan1 ; }
parallel_for ( 1327 , fejke3xcut , 1 , "fejke3xcut" ) ; rtDW . osbt1yzhh0 [
rtDW . om04ta0vib ] . l1mfqwj5rc = e5cpv5p5xt ; i = 0 ; ii_size_idx_0 = 1 ;
b_ii = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( b_ii < 1327 ) ) { if (
! ( rtB . osbt1yzhh0 [ rtDW . om04ta0vib ] . kkjjs3cohz [ b_ii ] != 0.0F ) )
{ i = 1 ; ii_data_idx_0 = ( int16_T ) ( b_ii + 1 ) ; exitg1 = true ; } else {
b_ii ++ ; } } if ( i == 0 ) { ii_size_idx_0 = 0 ; } rtB . jzxctmmzb1 = 0.0 ;
if ( ii_size_idx_0 != 0 ) { rtB . jzxctmmzb1 = rtP . osbt1yzhh0 .
Constant_Value [ ii_data_idx_0 - 1 ] ; } rtDW . om04ta0vib ++ ; }
parallel_for ( 4 , kqjybwecg2 , 1 , "kqjybwecg2" ) ; if ( rtB . csiuroqpjm [
0 ] > rtP . Switch_Threshold_dssh4epfux ) { rtB . m4eljzmdsj [ 0 ] = rtP .
LineSensor1_envVal ; } else { rtB . m4eljzmdsj [ 0 ] = rtP .
LineSensor1_lineVal ; } if ( rtB . csiuroqpjm [ 1 ] > rtP .
Switch_Threshold_dssh4epfux ) { rtB . m4eljzmdsj [ 1 ] = rtP .
LineSensor1_envVal ; } else { rtB . m4eljzmdsj [ 1 ] = rtP .
LineSensor1_lineVal ; } if ( rtB . csiuroqpjm [ 2 ] > rtP .
Switch_Threshold_dssh4epfux ) { rtB . m4eljzmdsj [ 2 ] = rtP .
LineSensor1_envVal ; } else { rtB . m4eljzmdsj [ 2 ] = rtP .
LineSensor1_lineVal ; } if ( rtB . csiuroqpjm [ 3 ] > rtP .
Switch_Threshold_dssh4epfux ) { rtB . m4eljzmdsj [ 3 ] = rtP .
LineSensor1_envVal ; } else { rtB . m4eljzmdsj [ 3 ] = rtP .
LineSensor1_lineVal ; } nh335xsjvs = muDoubleScalarCeil ( rtP . ticksPerRot /
360.0 * rtDW . irdg0umelv ) ; duesfy0diy = muDoubleScalarCeil ( rtP .
ticksPerRot / 360.0 * rtDW . mnyij4et0u ) ; rtB . cuoexuzlm4 = (
6.2831853071795862 * rtP . wheelR / rtP . ticksPerRot * duesfy0diy -
6.2831853071795862 * rtP . wheelR / rtP . ticksPerRot * nh335xsjvs ) * ( 1.0
/ rtP . axleLength ) * rtP . Gain_Gain_dvchqdxwbj ; rtB . becycjtoxf = (
6.2831853071795862 * rtP . wheelR / rtP . ticksPerRot * nh335xsjvs +
6.2831853071795862 * rtP . wheelR / rtP . ticksPerRot * duesfy0diy ) * rtP .
Gain_Gain_oneshwnrhn ; rtB . axzxj5uktk = rtDW . o1xils2q02 ; rtB .
idida0022t = rtDW . c2uqsnlhjq ; rtDW . ehlxkuk1in = e5cpv5p5xt ; if ( rtDW .
aerlsydhoo == 0U ) { rtDW . aerlsydhoo = 1U ; rtDW . bff3bj3sb0 = ay5v5d3qtx
; rtDW . dxnpm1ncbe = fwoqqvn4fr ; rtB . jb4chrbkfd = 0.075 ; rtB .
in0g5ymfbo = 0.0 ; } else { switch ( rtDW . bff3bj3sb0 ) { case ay5v5d3qtx :
if ( ( rtB . m4eljzmdsj [ 3 ] == 1.0 ) && ( rtB . m4eljzmdsj [ 0 ] == 0.0 ) )
{ rtDW . dxnpm1ncbe = fnajxmg0wo ; rtDW . bff3bj3sb0 = dozrj4buvm ; rtB .
jb4chrbkfd = 0.0 ; rtB . in0g5ymfbo = 1.0 ; } else if ( ( rtB . m4eljzmdsj [
3 ] == 0.0 ) && ( rtB . m4eljzmdsj [ 0 ] == 0.0 ) && ( rtB . m4eljzmdsj [ 1 ]
== 0.0 ) && ( rtB . m4eljzmdsj [ 2 ] == 0.0 ) ) { rtDW . dxnpm1ncbe =
fnajxmg0wo ; rtDW . bff3bj3sb0 = cphwwizc2w ; rtB . jb4chrbkfd = 0.05 ; rtB .
in0g5ymfbo = 0.0 ; rtDW . hfhaxbdpqy = rtB . becycjtoxf + 0.07 ; } else if (
( rtB . m4eljzmdsj [ 3 ] == 1.0 ) && ( rtB . m4eljzmdsj [ 0 ] == 1.0 ) && (
rtB . m4eljzmdsj [ 1 ] == 1.0 ) && ( rtB . m4eljzmdsj [ 2 ] == 1.0 ) && ( rtB
. jzxctmmzb1 == 0.0 ) ) { rtDW . dxnpm1ncbe = fnajxmg0wo ; rtDW . bff3bj3sb0
= lwsbstfi31 ; rtB . jb4chrbkfd = 0.0 ; rtB . in0g5ymfbo = 1.0 ; rtDW .
iq0uewqkwz = rtB . cuoexuzlm4 + 175.0 ; } else { switch ( rtDW . dxnpm1ncbe )
{ case d2ygkcwxzc : rtB . in0g5ymfbo = 1.0 ; if ( ( rtB . m4eljzmdsj [ 2 ] ==
0.0 ) && ( rtB . m4eljzmdsj [ 1 ] == 0.0 ) ) { rtDW . dxnpm1ncbe = fwoqqvn4fr
; rtB . jb4chrbkfd = 0.075 ; rtB . in0g5ymfbo = 0.0 ; } break ; case
f1f2mkndo3 : rtB . in0g5ymfbo = - 1.0 ; if ( ( rtB . m4eljzmdsj [ 2 ] == 0.0
) && ( rtB . m4eljzmdsj [ 1 ] == 0.0 ) ) { rtDW . dxnpm1ncbe = fwoqqvn4fr ;
rtB . jb4chrbkfd = 0.075 ; rtB . in0g5ymfbo = 0.0 ; } break ; default : rtB .
in0g5ymfbo = 0.0 ; if ( ( rtB . m4eljzmdsj [ 2 ] == 0.0 ) && ( rtB .
m4eljzmdsj [ 1 ] == 1.0 ) ) { rtDW . dxnpm1ncbe = f1f2mkndo3 ; rtB .
in0g5ymfbo = - 1.0 ; rtB . jb4chrbkfd = 0.075 ; } else if ( ( rtB .
m4eljzmdsj [ 2 ] == 1.0 ) && ( rtB . m4eljzmdsj [ 1 ] == 0.0 ) ) { rtDW .
dxnpm1ncbe = d2ygkcwxzc ; rtB . in0g5ymfbo = 1.0 ; rtB . jb4chrbkfd = 0.075 ;
} break ; } } break ; case dozrj4buvm : rtB . in0g5ymfbo = 1.0 ; if ( ( rtB .
m4eljzmdsj [ 2 ] == 0.0 ) && ( rtB . m4eljzmdsj [ 1 ] == 0.0 ) ) { rtDW .
bff3bj3sb0 = ay5v5d3qtx ; rtDW . dxnpm1ncbe = fwoqqvn4fr ; rtB . jb4chrbkfd =
0.075 ; rtB . in0g5ymfbo = 0.0 ; } break ; case i4khrkd3yc : rtB . in0g5ymfbo
= 0.0 ; break ; case lwsbstfi31 : rtB . in0g5ymfbo = 1.0 ; if ( rtB .
cuoexuzlm4 >= rtDW . iq0uewqkwz ) { rtDW . bff3bj3sb0 = ay5v5d3qtx ; rtDW .
dxnpm1ncbe = fwoqqvn4fr ; rtB . jb4chrbkfd = 0.075 ; rtB . in0g5ymfbo = 0.0 ;
} break ; case ksndbwgtzd : rtB . in0g5ymfbo = 0.0 ; if ( rtB . becycjtoxf <=
rtDW . hfhaxbdpqy ) { rtB . dgw1rht5ve = rtB . jzxctmmzb1 ; rtDW . bff3bj3sb0
= lwsbstfi31 ; rtB . jb4chrbkfd = 0.0 ; rtB . in0g5ymfbo = 1.0 ; rtDW .
iq0uewqkwz = rtB . cuoexuzlm4 + 175.0 ; } else if ( ( rtB . dgw1rht5ve <= rtB
. axzxj5uktk + 0.05 ) && ( rtB . dgw1rht5ve >= rtB . axzxj5uktk - 0.05 ) && (
rtB . dgw1rht5ve > 0.0 ) && ( rtB . axzxj5uktk != rtB . idida0022t ) ) { rtB
. dgw1rht5ve = rtB . jzxctmmzb1 ; rtDW . bff3bj3sb0 = i4khrkd3yc ; rtB .
jb4chrbkfd = 0.0 ; rtB . in0g5ymfbo = 0.0 ; } break ; case cphwwizc2w : rtB .
in0g5ymfbo = 0.0 ; if ( rtB . becycjtoxf >= rtDW . hfhaxbdpqy ) { rtDW .
bff3bj3sb0 = jm04mwfdk5 ; rtB . jb4chrbkfd = 0.0 ; } break ; default : if ( (
rtB . m4eljzmdsj [ 3 ] == 1.0 ) && ( rtB . m4eljzmdsj [ 0 ] == 1.0 ) && ( rtB
. m4eljzmdsj [ 1 ] == 1.0 ) && ( rtB . m4eljzmdsj [ 2 ] == 1.0 ) && ( rtB .
jzxctmmzb1 == 0.0 ) ) { rtDW . bff3bj3sb0 = dozrj4buvm ; rtB . jb4chrbkfd =
0.0 ; rtB . in0g5ymfbo = 1.0 ; } else if ( ( rtB . m4eljzmdsj [ 3 ] == 0.0 )
&& ( rtB . m4eljzmdsj [ 0 ] == 0.0 ) && ( rtB . m4eljzmdsj [ 1 ] == 0.0 ) &&
( rtB . m4eljzmdsj [ 2 ] == 0.0 ) && ( rtB . jzxctmmzb1 == 0.0 ) ) { rtDW .
bff3bj3sb0 = lwsbstfi31 ; rtB . jb4chrbkfd = 0.0 ; rtB . in0g5ymfbo = 1.0 ;
rtDW . iq0uewqkwz = rtB . cuoexuzlm4 + 175.0 ; } else if ( rtB . jzxctmmzb1 >
0.0 ) { rtDW . bff3bj3sb0 = ksndbwgtzd ; rtB . jb4chrbkfd = - 0.05 ; rtB .
in0g5ymfbo = 0.0 ; rtB . dgw1rht5ve = rtB . jzxctmmzb1 ; rtDW . hfhaxbdpqy =
rtB . becycjtoxf - 0.07 ; } break ; } } rtDW . c2uqsnlhjq = rtB . dgw1rht5ve
; if ( ( rtB . dgw1rht5ve > 0.0 ) && ( rtDW . o1xils2q02 == 0.0 ) ) {
ftq2sugm1p ( rtB . dgw1rht5ve , & rtDW . o1xils2q02 ) ; } if ( ( rtB .
dgw1rht5ve < rtDW . o1xils2q02 ) && ( rtDW . o1xils2q02 > 0.0 ) ) {
ftq2sugm1p ( rtB . dgw1rht5ve , & rtDW . o1xils2q02 ) ; } rtDW . khqtjuisp2 =
e5cpv5p5xt ; { rtB . jq2505hglk = ( rtP . Internal_C [ 0 ] ) * rtDW .
dky3a1sqsf [ 0 ] + ( rtP . Internal_C [ 1 ] ) * rtDW . dky3a1sqsf [ 1 ] + (
rtP . Internal_C [ 2 ] ) * rtDW . dky3a1sqsf [ 2 ] ; } if ( rtP .
LeftMotor_sensorType > rtP . Switch_Threshold ) { nh335xsjvs = rtP .
Gain_Gain * rtDW . orx3nc2dkn ; } else { nh335xsjvs = rtB . jq2505hglk ; } {
rtB . njczvchnoe = ( rtP . Internal_C_j3hwsrye03 [ 0 ] ) * rtDW . jjyoxccwxa
[ 0 ] + ( rtP . Internal_C_j3hwsrye03 [ 1 ] ) * rtDW . jjyoxccwxa [ 1 ] + (
rtP . Internal_C_j3hwsrye03 [ 2 ] ) * rtDW . jjyoxccwxa [ 2 ] ; } if ( rtP .
RightMotor_sensorType > rtP . Switch_Threshold_optfqfjagg ) { duesfy0diy =
rtP . Gain_Gain_cirheseb5s * rtDW . eeh3unqcyj ; } else { duesfy0diy = rtB .
njczvchnoe ; } rtB . c0iltmlfbi = ( duesfy0diy - nh335xsjvs ) * rtB .
k5srpchxkd ; a2gm0cgn1z = ( nh335xsjvs + duesfy0diy ) * rtB . mzdhsevphf ;
rtB . mbceuuvi1k = a2gm0cgn1z * muDoubleScalarCos ( cmz0swa21r ) ; rtB .
e2vtmpvjdz = a2gm0cgn1z * muDoubleScalarSin ( cmz0swa21r ) ; { SimStruct *
rts = ssGetSFunction ( rtS , 0 ) ; { static const char *
blockSIDForSFcnLoader = "LINEFOLLOW_90_DATA_READING:7:401" ;
sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader ) ; void ( *
sfcnMethodPtr ) ( SimStruct * , int ) = rts -> modelMethods . sFcn .
mdlOutputs . level2 ; sfcnLoader_separateComplexHandler_withTID ( rts ,
sfcnMethodPtr , ( 0 <= 1 ) && gbl_raccel_tid01eq ? 0 : 0 ) ; } } rtB .
n45i4rsrnl = rtP . Gain2_Gain * nh335xsjvs ; rtB . itj32cisqf = rtP .
Gain3_Gain * duesfy0diy ; cmz0swa21r = 1.0 / rtP . Towlwr_wheelR ; rtB .
mmkuncny5o = rtP . InputPWM [ plook_u32d_binckan ( ( rtP .
changeparameters_Gain [ 0 ] * rtB . jb4chrbkfd + rtP . changeparameters_Gain
[ 2 ] * rtB . in0g5ymfbo ) * cmz0swa21r , rtP . WheelSpeed , 172U ) ] ; rtB .
dowb3m4bgk = rtP . InputPWM [ plook_u32d_binckan ( ( rtP .
changeparameters_Gain [ 1 ] * rtB . jb4chrbkfd + rtP . changeparameters_Gain
[ 3 ] * rtB . in0g5ymfbo ) * cmz0swa21r , rtP . WheelSpeed , 172U ) ] ; rtB .
jl4ub35pwm = rtDW . o1xils2q02 ; UNUSED_PARAMETER ( tid ) ; } void
MdlOutputsTID2 ( int_T tid ) { rtB . k5srpchxkd = rtP . wheelR / rtP .
axleLength ; rtB . mzdhsevphf = rtP . Gain1_Gain * rtP . wheelR ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) { rtDW . lddr43iukk
+= rtP . DiscreteTimeIntegrator2_gainval * rtB . c0iltmlfbi ; rtDW .
eswpe1v5pw += rtP . DiscreteTimeIntegrator_gainval * rtB . mbceuuvi1k ; rtDW
. gymzq2v1d1 += rtP . DiscreteTimeIntegrator1_gainval * rtB . e2vtmpvjdz ;
rtDW . irdg0umelv += rtP . DiscreteTimeIntegrator_gainval_bfxl21iqwk * rtB .
n45i4rsrnl ; rtDW . mnyij4et0u += rtP .
DiscreteTimeIntegrator1_gainval_hret3wtaoa * rtB . itj32cisqf ; rtDW .
orx3nc2dkn += rtP . DiscreteTimeIntegrator_gainval_pqjn4s3zfp * rtB .
jq2505hglk ; { real_T xnew [ 3 ] ; xnew [ 0 ] = ( rtP . Internal_A [ 0 ] ) *
rtDW . dky3a1sqsf [ 0 ] + ( rtP . Internal_A [ 1 ] ) * rtDW . dky3a1sqsf [ 1
] + ( rtP . Internal_A [ 2 ] ) * rtDW . dky3a1sqsf [ 2 ] ; xnew [ 0 ] += (
rtP . Internal_B [ 0 ] ) * rtB . mmkuncny5o ; xnew [ 1 ] = ( rtP . Internal_A
[ 3 ] ) * rtDW . dky3a1sqsf [ 0 ] + ( rtP . Internal_A [ 4 ] ) * rtDW .
dky3a1sqsf [ 1 ] + ( rtP . Internal_A [ 5 ] ) * rtDW . dky3a1sqsf [ 2 ] ;
xnew [ 1 ] += ( rtP . Internal_B [ 1 ] ) * rtB . mmkuncny5o ; xnew [ 2 ] = (
rtP . Internal_A [ 6 ] ) * rtDW . dky3a1sqsf [ 0 ] + ( rtP . Internal_A [ 7 ]
) * rtDW . dky3a1sqsf [ 1 ] + ( rtP . Internal_A [ 8 ] ) * rtDW . dky3a1sqsf
[ 2 ] ; xnew [ 2 ] += ( rtP . Internal_B [ 2 ] ) * rtB . mmkuncny5o ; ( void
) memcpy ( & rtDW . dky3a1sqsf [ 0 ] , xnew , sizeof ( real_T ) * 3 ) ; }
rtDW . eeh3unqcyj += rtP . DiscreteTimeIntegrator_gainval_nsbpff3iej * rtB .
njczvchnoe ; { real_T xnew [ 3 ] ; xnew [ 0 ] = ( rtP . Internal_A_bedsmejnmc
[ 0 ] ) * rtDW . jjyoxccwxa [ 0 ] + ( rtP . Internal_A_bedsmejnmc [ 1 ] ) *
rtDW . jjyoxccwxa [ 1 ] + ( rtP . Internal_A_bedsmejnmc [ 2 ] ) * rtDW .
jjyoxccwxa [ 2 ] ; xnew [ 0 ] += ( rtP . Internal_B_f5c2cweayi [ 0 ] ) * rtB
. dowb3m4bgk ; xnew [ 1 ] = ( rtP . Internal_A_bedsmejnmc [ 3 ] ) * rtDW .
jjyoxccwxa [ 0 ] + ( rtP . Internal_A_bedsmejnmc [ 4 ] ) * rtDW . jjyoxccwxa
[ 1 ] + ( rtP . Internal_A_bedsmejnmc [ 5 ] ) * rtDW . jjyoxccwxa [ 2 ] ;
xnew [ 1 ] += ( rtP . Internal_B_f5c2cweayi [ 1 ] ) * rtB . dowb3m4bgk ; xnew
[ 2 ] = ( rtP . Internal_A_bedsmejnmc [ 6 ] ) * rtDW . jjyoxccwxa [ 0 ] + (
rtP . Internal_A_bedsmejnmc [ 7 ] ) * rtDW . jjyoxccwxa [ 1 ] + ( rtP .
Internal_A_bedsmejnmc [ 8 ] ) * rtDW . jjyoxccwxa [ 2 ] ; xnew [ 2 ] += ( rtP
. Internal_B_f5c2cweayi [ 2 ] ) * rtB . dowb3m4bgk ; ( void ) memcpy ( & rtDW
. jjyoxccwxa [ 0 ] , xnew , sizeof ( real_T ) * 3 ) ; } UNUSED_PARAMETER (
tid ) ; } void MdlUpdateTID2 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; }
void MdlTerminate ( void ) { { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ;
{ static const char * blockSIDForSFcnLoader =
"LINEFOLLOW_90_DATA_READING:7:401" ; sfcnLoader_setCurrentSFcnBlockSID (
blockSIDForSFcnLoader ) ; void ( * sfcnMethodPtr ) ( SimStruct * ) = rts ->
modelMethods . sFcn . mdlTerminate ; sfcnLoader_separateComplexHandler ( rts
, sfcnMethodPtr ) ; } } } static void
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_LINEFOLLOW_90_DATA_READING_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_LINEFOLLOW_90_DATA_READING_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_LINEFOLLOW_90_DATA_READING_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_LINEFOLLOW_90_DATA_READING_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_LINEFOLLOW_90_DATA_READING_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_LINEFOLLOW_90_DATA_READING_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_LINEFOLLOW_90_DATA_READING_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void
mr_LINEFOLLOW_90_DATA_READING_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_LINEFOLLOW_90_DATA_READING_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_LINEFOLLOW_90_DATA_READING_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_LINEFOLLOW_90_DATA_READING_GetDWork (
) { static const char_T * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" ,
"NULL_PrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( ssDW ,
0 , 0 , ( const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char_T
* rtdwDataFieldNames [ 35 ] = { "rtDW.lddr43iukk" , "rtDW.eswpe1v5pw" ,
"rtDW.gymzq2v1d1" , "rtDW.irdg0umelv" , "rtDW.mnyij4et0u" , "rtDW.orx3nc2dkn"
, "rtDW.dky3a1sqsf" , "rtDW.eeh3unqcyj" , "rtDW.jjyoxccwxa" ,
"rtDW.o1xils2q02" , "rtDW.c2uqsnlhjq" , "rtDW.iq0uewqkwz" , "rtDW.hfhaxbdpqy"
, "rtDW.nhycdpz4ks" , "rtDW.om04ta0vib" , "rtDW.o4m4odno13" ,
"rtDW.khqtjuisp2" , "rtDW.ehlxkuk1in" , "rtDW.bff3bj3sb0" , "rtDW.dxnpm1ncbe"
, "rtDW.mh4aj0wqkn" , "rtDW.bdljyikdhx" , "rtDW.aerlsydhoo" ,
"rtDW.nmzj15qgzq" , "rtDW.jds0ut2wuv" , "rtDW.jyumvcfqdh.akjaaoglbg" ,
"rtDW.ftq2sugm1pk.akjaaoglbg" , "rtDW.osbt1yzhh0[0].l1mfqwj5rc" ,
"rtDW.osbt1yzhh0[0].ciff0uw4a3" , "rtDW.osbt1yzhh0[0].di3vr0e2iw" ,
"rtDW.osbt1yzhh0[0].osbt1yzhh0[0].hoasecisyd" ,
"rtDW.ofwjthgdta[0].ovm2oyeful" , "rtDW.ofwjthgdta[0].ohq2ztllxo" ,
"rtDW.ofwjthgdta[0].duw1xkqtek" , "rtDW.ofwjthgdta[0].ncb2yiikbt" , } ;
mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 35 , rtdwDataFieldNames )
; int k0 ; int k1 ; mxSetFieldByNumber ( rtdwData , 0 , 27 ,
mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . osbt1yzhh0 [ 0 ] .
l1mfqwj5rc ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 28 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . osbt1yzhh0 [ 0 ]
. ciff0uw4a3 ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData ,
0 , 29 , mxCreateUninitNumericMatrix ( 1 , 1 * sizeof ( rtDW . osbt1yzhh0 [ 0
] . di3vr0e2iw ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData
, 0 , 30 , mxCreateUninitNumericMatrix ( 1 , 1327 * sizeof ( rtDW .
osbt1yzhh0 [ 0 ] . osbt1yzhh0 [ 0 ] . hoasecisyd ) , mxUINT8_CLASS , mxREAL )
) ; mxSetFieldByNumber ( rtdwData , 0 , 31 , mxCreateUninitNumericMatrix ( 1
, 4 * sizeof ( rtDW . ofwjthgdta [ 0 ] . ovm2oyeful ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 32 ,
mxCreateUninitNumericMatrix ( 1 , 4 * sizeof ( rtDW . ofwjthgdta [ 0 ] .
ohq2ztllxo ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 33 , mxCreateUninitNumericMatrix ( 1 , 4 * sizeof ( rtDW . ofwjthgdta [ 0 ]
. duw1xkqtek ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData ,
0 , 34 , mxCreateUninitNumericMatrix ( 1 , 4 * sizeof ( rtDW . ofwjthgdta [ 0
] . ncb2yiikbt ) , mxUINT8_CLASS , mxREAL ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const
void * ) & ( rtDW . lddr43iukk ) , sizeof ( rtDW . lddr43iukk ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const
void * ) & ( rtDW . eswpe1v5pw ) , sizeof ( rtDW . eswpe1v5pw ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( rtDW . gymzq2v1d1 ) , sizeof ( rtDW . gymzq2v1d1 ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const
void * ) & ( rtDW . irdg0umelv ) , sizeof ( rtDW . irdg0umelv ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const
void * ) & ( rtDW . mnyij4et0u ) , sizeof ( rtDW . mnyij4et0u ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const
void * ) & ( rtDW . orx3nc2dkn ) , sizeof ( rtDW . orx3nc2dkn ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const
void * ) & ( rtDW . dky3a1sqsf ) , sizeof ( rtDW . dky3a1sqsf ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const
void * ) & ( rtDW . eeh3unqcyj ) , sizeof ( rtDW . eeh3unqcyj ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const
void * ) & ( rtDW . jjyoxccwxa ) , sizeof ( rtDW . jjyoxccwxa ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const
void * ) & ( rtDW . o1xils2q02 ) , sizeof ( rtDW . o1xils2q02 ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 10 , (
const void * ) & ( rtDW . c2uqsnlhjq ) , sizeof ( rtDW . c2uqsnlhjq ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 11 , (
const void * ) & ( rtDW . iq0uewqkwz ) , sizeof ( rtDW . iq0uewqkwz ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 12 , (
const void * ) & ( rtDW . hfhaxbdpqy ) , sizeof ( rtDW . hfhaxbdpqy ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 13 , (
const void * ) & ( rtDW . nhycdpz4ks ) , sizeof ( rtDW . nhycdpz4ks ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 14 , (
const void * ) & ( rtDW . om04ta0vib ) , sizeof ( rtDW . om04ta0vib ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 15 , (
const void * ) & ( rtDW . o4m4odno13 ) , sizeof ( rtDW . o4m4odno13 ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 16 , (
const void * ) & ( rtDW . khqtjuisp2 ) , sizeof ( rtDW . khqtjuisp2 ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 17 , (
const void * ) & ( rtDW . ehlxkuk1in ) , sizeof ( rtDW . ehlxkuk1in ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 18 , (
const void * ) & ( rtDW . bff3bj3sb0 ) , sizeof ( rtDW . bff3bj3sb0 ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 19 , (
const void * ) & ( rtDW . dxnpm1ncbe ) , sizeof ( rtDW . dxnpm1ncbe ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 20 , (
const void * ) & ( rtDW . mh4aj0wqkn ) , sizeof ( rtDW . mh4aj0wqkn ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 21 , (
const void * ) & ( rtDW . bdljyikdhx ) , sizeof ( rtDW . bdljyikdhx ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 22 , (
const void * ) & ( rtDW . aerlsydhoo ) , sizeof ( rtDW . aerlsydhoo ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 23 , (
const void * ) & ( rtDW . nmzj15qgzq ) , sizeof ( rtDW . nmzj15qgzq ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 24 , (
const void * ) & ( rtDW . jds0ut2wuv ) , sizeof ( rtDW . jds0ut2wuv ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 25 , (
const void * ) & ( rtDW . jyumvcfqdh . akjaaoglbg ) , sizeof ( rtDW .
jyumvcfqdh . akjaaoglbg ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataAsMxArray ( rtdwData , 0 , 26 , (
const void * ) & ( rtDW . ftq2sugm1pk . akjaaoglbg ) , sizeof ( rtDW .
ftq2sugm1pk . akjaaoglbg ) ) ; for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const
mwIndex offset0 = k0 ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
27 , offset0 , & ( rtDW . osbt1yzhh0 [ k0 ] . l1mfqwj5rc ) , sizeof ( rtDW .
osbt1yzhh0 [ 0 ] . l1mfqwj5rc ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
28 , offset0 , & ( rtDW . osbt1yzhh0 [ k0 ] . ciff0uw4a3 ) , sizeof ( rtDW .
osbt1yzhh0 [ 0 ] . ciff0uw4a3 ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
29 , offset0 , & ( rtDW . osbt1yzhh0 [ k0 ] . di3vr0e2iw ) , sizeof ( rtDW .
osbt1yzhh0 [ 0 ] . di3vr0e2iw ) ) ; for ( k1 = 0 ; k1 < 1327 ; ++ k1 ) {
const mwIndex offset1 = k0 * 1327 + k1 ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
30 , offset1 , & ( rtDW . osbt1yzhh0 [ k0 ] . osbt1yzhh0 [ k1 ] . hoasecisyd
) , sizeof ( rtDW . osbt1yzhh0 [ 0 ] . osbt1yzhh0 [ 0 ] . hoasecisyd ) ) ; }
} for ( k0 = 0 ; k0 < 4 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
31 , offset0 , & ( rtDW . ofwjthgdta [ k0 ] . ovm2oyeful ) , sizeof ( rtDW .
ofwjthgdta [ 0 ] . ovm2oyeful ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
32 , offset0 , & ( rtDW . ofwjthgdta [ k0 ] . ohq2ztllxo ) , sizeof ( rtDW .
ofwjthgdta [ 0 ] . ohq2ztllxo ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
33 , offset0 , & ( rtDW . ofwjthgdta [ k0 ] . duw1xkqtek ) , sizeof ( rtDW .
ofwjthgdta [ 0 ] . duw1xkqtek ) ) ;
mr_LINEFOLLOW_90_DATA_READING_cacheDataToMxArrayWithOffset ( rtdwData , 0 ,
34 , offset0 , & ( rtDW . ofwjthgdta [ k0 ] . ncb2yiikbt ) , sizeof ( rtDW .
ofwjthgdta [ 0 ] . ncb2yiikbt ) ) ; } mxSetFieldByNumber ( ssDW , 0 , 1 ,
rtdwData ) ; } return ssDW ; } void mr_LINEFOLLOW_90_DATA_READING_SetDWork (
const mxArray * ssDW ) { ( void ) ssDW ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtB ) ,
ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; int k0 ; int k1 ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
lddr43iukk ) , rtdwData , 0 , 0 , sizeof ( rtDW . lddr43iukk ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
eswpe1v5pw ) , rtdwData , 0 , 1 , sizeof ( rtDW . eswpe1v5pw ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gymzq2v1d1 ) , rtdwData , 0 , 2 , sizeof ( rtDW . gymzq2v1d1 ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
irdg0umelv ) , rtdwData , 0 , 3 , sizeof ( rtDW . irdg0umelv ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mnyij4et0u ) , rtdwData , 0 , 4 , sizeof ( rtDW . mnyij4et0u ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
orx3nc2dkn ) , rtdwData , 0 , 5 , sizeof ( rtDW . orx3nc2dkn ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dky3a1sqsf ) , rtdwData , 0 , 6 , sizeof ( rtDW . dky3a1sqsf ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
eeh3unqcyj ) , rtdwData , 0 , 7 , sizeof ( rtDW . eeh3unqcyj ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jjyoxccwxa ) , rtdwData , 0 , 8 , sizeof ( rtDW . jjyoxccwxa ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
o1xils2q02 ) , rtdwData , 0 , 9 , sizeof ( rtDW . o1xils2q02 ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
c2uqsnlhjq ) , rtdwData , 0 , 10 , sizeof ( rtDW . c2uqsnlhjq ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
iq0uewqkwz ) , rtdwData , 0 , 11 , sizeof ( rtDW . iq0uewqkwz ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hfhaxbdpqy ) , rtdwData , 0 , 12 , sizeof ( rtDW . hfhaxbdpqy ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nhycdpz4ks ) , rtdwData , 0 , 13 , sizeof ( rtDW . nhycdpz4ks ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
om04ta0vib ) , rtdwData , 0 , 14 , sizeof ( rtDW . om04ta0vib ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
o4m4odno13 ) , rtdwData , 0 , 15 , sizeof ( rtDW . o4m4odno13 ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
khqtjuisp2 ) , rtdwData , 0 , 16 , sizeof ( rtDW . khqtjuisp2 ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ehlxkuk1in ) , rtdwData , 0 , 17 , sizeof ( rtDW . ehlxkuk1in ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bff3bj3sb0 ) , rtdwData , 0 , 18 , sizeof ( rtDW . bff3bj3sb0 ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
dxnpm1ncbe ) , rtdwData , 0 , 19 , sizeof ( rtDW . dxnpm1ncbe ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mh4aj0wqkn ) , rtdwData , 0 , 20 , sizeof ( rtDW . mh4aj0wqkn ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bdljyikdhx ) , rtdwData , 0 , 21 , sizeof ( rtDW . bdljyikdhx ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
aerlsydhoo ) , rtdwData , 0 , 22 , sizeof ( rtDW . aerlsydhoo ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nmzj15qgzq ) , rtdwData , 0 , 23 , sizeof ( rtDW . nmzj15qgzq ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jds0ut2wuv ) , rtdwData , 0 , 24 , sizeof ( rtDW . jds0ut2wuv ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jyumvcfqdh . akjaaoglbg ) , rtdwData , 0 , 25 , sizeof ( rtDW . jyumvcfqdh .
akjaaoglbg ) ) ; mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArray ( (
void * ) & ( rtDW . ftq2sugm1pk . akjaaoglbg ) , rtdwData , 0 , 26 , sizeof (
rtDW . ftq2sugm1pk . akjaaoglbg ) ) ; for ( k0 = 0 ; k0 < 1 ; ++ k0 ) { const
mwIndex offset0 = k0 ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArrayWithOffset ( & ( rtDW .
osbt1yzhh0 [ k0 ] . l1mfqwj5rc ) , rtdwData , 0 , 27 , offset0 , sizeof (
rtDW . osbt1yzhh0 [ 0 ] . l1mfqwj5rc ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArrayWithOffset ( & ( rtDW .
osbt1yzhh0 [ k0 ] . ciff0uw4a3 ) , rtdwData , 0 , 28 , offset0 , sizeof (
rtDW . osbt1yzhh0 [ 0 ] . ciff0uw4a3 ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArrayWithOffset ( & ( rtDW .
osbt1yzhh0 [ k0 ] . di3vr0e2iw ) , rtdwData , 0 , 29 , offset0 , sizeof (
rtDW . osbt1yzhh0 [ 0 ] . di3vr0e2iw ) ) ; for ( k1 = 0 ; k1 < 1327 ; ++ k1 )
{ const mwIndex offset1 = k0 * 1327 + k1 ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArrayWithOffset ( & ( rtDW .
osbt1yzhh0 [ k0 ] . osbt1yzhh0 [ k1 ] . hoasecisyd ) , rtdwData , 0 , 30 ,
offset1 , sizeof ( rtDW . osbt1yzhh0 [ 0 ] . osbt1yzhh0 [ 0 ] . hoasecisyd )
) ; } } for ( k0 = 0 ; k0 < 4 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArrayWithOffset ( & ( rtDW .
ofwjthgdta [ k0 ] . ovm2oyeful ) , rtdwData , 0 , 31 , offset0 , sizeof (
rtDW . ofwjthgdta [ 0 ] . ovm2oyeful ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArrayWithOffset ( & ( rtDW .
ofwjthgdta [ k0 ] . ohq2ztllxo ) , rtdwData , 0 , 32 , offset0 , sizeof (
rtDW . ofwjthgdta [ 0 ] . ohq2ztllxo ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArrayWithOffset ( & ( rtDW .
ofwjthgdta [ k0 ] . duw1xkqtek ) , rtdwData , 0 , 33 , offset0 , sizeof (
rtDW . ofwjthgdta [ 0 ] . duw1xkqtek ) ) ;
mr_LINEFOLLOW_90_DATA_READING_restoreDataFromMxArrayWithOffset ( & ( rtDW .
ofwjthgdta [ k0 ] . ncb2yiikbt ) , rtdwData , 0 , 34 , offset0 , sizeof (
rtDW . ofwjthgdta [ 0 ] . ncb2yiikbt ) ) ; } } } mxArray *
mr_LINEFOLLOW_90_DATA_READING_GetSimStateDisallowedBlocks ( ) { mxArray *
data = mxCreateCellMatrix ( 4 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static
const char_T * blockType [ 4 ] = { "Scope" , "Scope" , "Scope" , "Scope" , }
; static const char_T * blockPath [ 4 ] = {
"LINEFOLLOW_90_DATA_READING/Scope" , "LINEFOLLOW_90_DATA_READING/Scope1" ,
"LINEFOLLOW_90_DATA_READING/Scope2" , "LINEFOLLOW_90_DATA_READING/Scope3" , }
; static const int reason [ 4 ] = { 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0
; subs [ 0 ] < 4 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( real_T ) reason [ subs [ 0 ] ] ) ) ; } } return data
; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 2 ) ; ssSetNumBlocks ( rtS , 147 ) ;
ssSetNumBlockIO ( rtS , 32 ) ; ssSetNumBlockParams ( rtS , 1585599 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.01 ) ; ssSetOffsetTime ( rtS , 0 , 0.0 ) ;
ssSetOffsetTime ( rtS , 1 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3341672022U ) ; ssSetChecksumVal ( rtS , 1 ,
236687412U ) ; ssSetChecksumVal ( rtS , 2 , 3185214979U ) ; ssSetChecksumVal
( rtS , 3 , 4213670557U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char_T * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo ,
0 , sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) &
blkInfo2 , 0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T *
) & blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ;
ssSetBlkInfo2Ptr ( rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , &
blkInfoSLSize ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo (
rtS , executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T
mdlPeriod [ NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ;
static time_T mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [
NSAMPLE_TIMES ] ; static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static
boolean_T mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T
mdlPerTaskSampleHits [ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T
mdlTimeOfNextSampleHit [ NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i <
NSAMPLE_TIMES ; i ++ ) { mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ;
mdlTaskTimes [ i ] = 0.0 ; mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } }
ssSetSampleTimePtr ( rtS , & mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , &
mdlOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ;
ssSetTPtr ( rtS , & mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , &
mdlSampleHits [ 0 ] ) ; ssSetTNextWasAdjustedPtr ( rtS , &
mdlTNextWasAdjustedPtr [ 0 ] ) ; ssSetPerTaskSampleHitsPtr ( rtS , &
mdlPerTaskSampleHits [ 0 ] ) ; ssSetTimeOfNextSampleHitPtr ( rtS , &
mdlTimeOfNextSampleHit [ 0 ] ) ; } ssSetSolverMode ( rtS ,
SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS , ( ( void * ) & rtB ) ) ;
( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof ( B ) ) ; } { void *
dwork = ( void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset
( dwork , 0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void
) memset ( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ;
ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo . numDataTypes = 23 ;
dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = &
rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = & rtBTransTable ; dtInfo .
PTransTable = & rtPTransTable ; dtInfo . dataTypeInfoTable =
rtDataTypeInfoTable ; } LINEFOLLOW_90_DATA_READING_InitializeDataMapInfo ( )
; ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"LINEFOLLOW_90_DATA_READING" ) ; ssSetPath ( rtS ,
"LINEFOLLOW_90_DATA_READING" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal (
rtS , 1200.0 ) ; ssSetStepSize ( rtS , 0.01 ) ; ssSetFixedStepSize ( rtS ,
0.01 ) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo .
loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ;
} { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 3 , 1
, 3 } ; static int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1
, 1 , 1 , 3 , 1 , 3 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ;
static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 } ; static RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [
] = { ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , (
NULL ) , ( NULL ) , ( NULL ) } ; static const char_T * rt_LoggedStateLabels [
] = { "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = {
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Discrete-Time\nIntegrator2" ,
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Discrete-Time\nIntegrator" ,
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Discrete-Time\nIntegrator1" ,
"LINEFOLLOW_90_DATA_READING/Encoder/Discrete-Time\nIntegrator" ,
"LINEFOLLOW_90_DATA_READING/Encoder/Discrete-Time\nIntegrator1" ,
"LINEFOLLOW_90_DATA_READING/LeftMotor/Discrete-Time\nIntegrator" ,
"LINEFOLLOW_90_DATA_READING/LeftMotor/Motor/Internal" ,
"LINEFOLLOW_90_DATA_READING/RightMotor/Discrete-Time\nIntegrator" ,
"LINEFOLLOW_90_DATA_READING/RightMotor/Motor/Internal" } ; static const
char_T * rt_LoggedStateNames [ ] = { "DSTATE" , "DSTATE" , "DSTATE" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" } ; static
boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
} ; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 5 ,
6 , 7 , 8 } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 9 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 9 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtDW . lddr43iukk ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtDW . eswpe1v5pw ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtDW . gymzq2v1d1 ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtDW . irdg0umelv ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtDW . mnyij4et0u ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtDW . orx3nc2dkn ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) rtDW . dky3a1sqsf ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtDW . eeh3unqcyj ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) rtDW . jjyoxccwxa ; } rtliSetLogT
( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS )
, "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) , "xFinal" ) ;
rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
ssSolverInfo slvrInfo ; ssSetNumNonContDerivSigInfos ( rtS , 0 ) ;
ssSetNonContDerivSigInfos ( rtS , ( NULL ) ) ; ssSetSolverInfo ( rtS , &
slvrInfo ) ; ssSetSolverName ( rtS , "FixedStepDiscrete" ) ;
ssSetVariableStepSolver ( rtS , 0 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetTNextTid ( rtS , INT_MIN ) ;
ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 0 ) ; } ssSetChecksumVal ( rtS , 0 ,
3341672022U ) ; ssSetChecksumVal ( rtS , 1 , 236687412U ) ; ssSetChecksumVal
( rtS , 2 , 3185214979U ) ; ssSetChecksumVal ( rtS , 3 , 4213670557U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 17 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = ( sysRanDType * ) & rtDW . ftq2sugm1pk .
akjaaoglbg ; systemRan [ 3 ] = ( sysRanDType * ) & rtDW . jyumvcfqdh .
akjaaoglbg ; systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = &
rtAlwaysEnabled ; systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = &
rtAlwaysEnabled ; systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = &
rtAlwaysEnabled ; systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = &
rtAlwaysEnabled ; systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = &
rtAlwaysEnabled ; systemRan [ 14 ] = & rtAlwaysEnabled ; systemRan [ 15 ] = &
rtAlwaysEnabled ; systemRan [ 16 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_LINEFOLLOW_90_DATA_READING_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_LINEFOLLOW_90_DATA_READING_GetDWork )
; slsaSetWorkFcnForSimTargetOP ( rtS , mr_LINEFOLLOW_90_DATA_READING_SetDWork
) ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS
) ) { return rtS ; } ssSetNumSFunctions ( rtS , 1 ) ; { static SimStruct
childSFunctions [ 1 ] ; static SimStruct * childSFunctionPtrs [ 1 ] ; ( void
) memset ( ( void * ) & childSFunctions [ 0 ] , 0 , sizeof ( childSFunctions
) ) ; ssSetSFunctions ( rtS , & childSFunctionPtrs [ 0 ] ) ; ssSetSFunction (
rtS , 0 , & childSFunctions [ 0 ] ) ; { SimStruct * rts = ssGetSFunction (
rtS , 0 ) ; static time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ;
static int_T sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 ,
sizeof ( time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 ,
sizeof ( time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; { static struct _ssBlkInfo2 _blkInfo2 ; struct
_ssBlkInfo2 * blkInfo2 = & _blkInfo2 ; ssSetBlkInfo2Ptr ( rts , blkInfo2 ) ;
} { static struct _ssPortInfo2 _portInfo2 ; struct _ssPortInfo2 * portInfo2 =
& _portInfo2 ; _ssSetBlkInfo2PortInfo2Ptr ( rts , portInfo2 ) ; }
ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; { static struct
_ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , & methods2 ) ; } {
static struct _ssSFcnModelMethods3 methods3 ; ssSetModelMethods3 ( rts , &
methods3 ) ; } { static struct _ssSFcnModelMethods4 methods4 ;
ssSetModelMethods4 ( rts , & methods4 ) ; } { static struct _ssStatesInfo2
statesInfo2 ; static ssPeriodicStatesInfo periodicStatesInfo ; static
ssJacobianPerturbationBounds jacPerturbationBounds ; ssSetStatesInfo2 ( rts ,
& statesInfo2 ) ; ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ;
ssSetJacobianPerturbationBounds ( rts , & jacPerturbationBounds ) ; }
ssSetModelName ( rts , "sfun_time" ) ; ssSetPath ( rts ,
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Soft Real Time" ) ; if (
ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 1 ] ; ssSetSFcnParamsCount ( rts , 1 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SoftRealTime_P1_Size ) ; } ssSetRWork ( rts , ( real_T *
) & rtDW . nhycdpz4ks ) ; { static struct _ssDWorkRecord dWorkRecord [ 1 ] ;
static struct _ssDWorkAuxRecord dWorkAuxRecord [ 1 ] ; ssSetSFcnDWork ( rts ,
dWorkRecord ) ; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ;
ssSetNumDWorkAsInt ( rts , 1 ) ; ssSetDWorkWidthAsInt ( rts , 0 , 1 ) ;
ssSetDWorkDataType ( rts , 0 , SS_DOUBLE ) ; ssSetDWorkComplexSignal ( rts ,
0 , 0 ) ; ssSetDWork ( rts , 0 , & rtDW . nhycdpz4ks ) ; } {
raccelLoadSFcnMexFile ( "sfun_time" , "LINEFOLLOW_90_DATA_READING:7:401" ,
rts , 0 ) ; if ( ssGetErrorStatus ( rtS ) ) { return rtS ; } }
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 0 ;
ssSetNumNonsampledZCsAsInt ( rts , 0 ) ; } } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 2 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID2 ( tid ) ; }
