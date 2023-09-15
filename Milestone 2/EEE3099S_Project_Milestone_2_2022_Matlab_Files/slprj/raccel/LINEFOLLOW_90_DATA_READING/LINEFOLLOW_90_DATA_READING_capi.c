#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "LINEFOLLOW_90_DATA_READING_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "LINEFOLLOW_90_DATA_READING.h"
#include "LINEFOLLOW_90_DATA_READING_capi.h"
#include "LINEFOLLOW_90_DATA_READING_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 1 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Chart" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 ,
0 } , { 1 , 1 , TARGET_STRING ( "LINEFOLLOW_90_DATA_READING/Chart" ) ,
TARGET_STRING ( "" ) , 1 , 0 , 0 , 0 , 0 } , { 2 , 1 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Chart" ) , TARGET_STRING ( "" ) , 2 , 0 , 0 , 0 ,
0 } , { 3 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Chart/is_active_c3_LINEFOLLOW_90_DATA_READING" )
, TARGET_STRING ( "is_active_c3_LINEFOLLOW_90_DATA_READING" ) , 0 , 1 , 0 , 0
, 0 } , { 4 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Chart/is_c3_LINEFOLLOW_90_DATA_READING" ) ,
TARGET_STRING ( "is_c3_LINEFOLLOW_90_DATA_READING" ) , 0 , 2 , 0 , 0 , 0 } ,
{ 5 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Chart/LINE_FOLLOW.is_LINE_FOLLOW" ) ,
TARGET_STRING ( "is_LINE_FOLLOW" ) , 0 , 2 , 0 , 0 , 0 } , { 6 , 0 ,
TARGET_STRING ( "LINEFOLLOW_90_DATA_READING/Data Store Read" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Data Store Read3" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 8 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Data Store Read4" ) , TARGET_STRING ( "" ) , 0 ,
0 , 0 , 0 , 0 } , { 9 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Left Motor LUT" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 10 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Left Motor LUT1" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Encoder/Gain2" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 12 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Encoder/Gain3" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Line Sensor1/Switch" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 0 } , { 14 , 0 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Robot Simulator/MATLAB Function/is_active_c1_mobileRoboticsTrainingLib"
) , TARGET_STRING ( "is_active_c1_mobileRoboticsTrainingLib" ) , 0 , 1 , 0 ,
0 , 0 } , { 15 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Discrete-Time Integrator" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 17 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Gain1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 1 } , { 18 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Math Function" ) , TARGET_STRING
( "" ) , 0 , 0 , 0 , 0 , 0 } , { 19 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Divide" ) , TARGET_STRING ( "" )
, 0 , 0 , 0 , 0 , 1 } , { 20 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Product1" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 21 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Product2" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 22 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Product3" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Subsystem1/Gain" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/LeftMotor/Motor/Internal" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 25 , 8 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem"
) , TARGET_STRING ( "" ) , 0 , 3 , 1 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/RightMotor/Motor/Internal" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 0 } , { 27 , 0 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Subsystem/Radians to Degrees/Gain" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 28 , 16 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 29 , 11 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Calculate Rotation Matrix"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Calculate Rotation Matrix/is_active_c4_mobileRoboticsTrainingLib"
) , TARGET_STRING ( "is_active_c4_mobileRoboticsTrainingLib" ) , 0 , 1 , 0 ,
0 , 0 } , { 31 , 0 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Transform Sensor Offset/is_active_c2_mobileRoboticsTrainingLib"
) , TARGET_STRING ( "is_active_c2_mobileRoboticsTrainingLib" ) , 0 , 1 , 0 ,
0 , 0 } , { 32 , 14 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value"
) , TARGET_STRING ( "" ) , 0 , 3 , 3 , 0 , 0 } , { 33 , 0 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Nearest Object/is_active_c5_mobileRoboticsTrainingLib"
) , TARGET_STRING ( "is_active_c5_mobileRoboticsTrainingLib" ) , 0 , 1 , 0 ,
0 , 0 } , { 34 , 15 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 35 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Data Store Memory" ) , TARGET_STRING (
"InitialValue" ) , 0 , 0 , 0 } , { 36 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Data Store Memory1" ) , TARGET_STRING (
"InitialValue" ) , 0 , 0 , 0 } , { 37 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/LeftMotor" ) , TARGET_STRING ( "sensorType" ) , 0
, 0 , 0 } , { 38 , TARGET_STRING ( "LINEFOLLOW_90_DATA_READING/Line Sensor1"
) , TARGET_STRING ( "envVal" ) , 0 , 0 , 0 } , { 39 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Line Sensor1" ) , TARGET_STRING ( "lineVal" ) , 0
, 0 , 0 } , { 40 , TARGET_STRING ( "LINEFOLLOW_90_DATA_READING/RightMotor" )
, TARGET_STRING ( "sensorType" ) , 0 , 0 , 0 } , { 41 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Robot Simulator" ) , TARGET_STRING ( "startX" ) ,
0 , 0 , 0 } , { 42 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Robot Simulator" ) , TARGET_STRING ( "startY" ) ,
0 , 0 , 0 } , { 43 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Robot Simulator" ) , TARGET_STRING ( "startTheta"
) , 0 , 0 , 0 } , { 44 , TARGET_STRING ( "LINEFOLLOW_90_DATA_READING/To wlwr"
) , TARGET_STRING ( "wheelR" ) , 0 , 0 , 0 } , { 45 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Encoder/Discrete-Time Integrator" ) ,
TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 46 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Encoder/Discrete-Time Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 47 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Encoder/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 48 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Encoder/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 49 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Encoder/Gain2" ) , TARGET_STRING ( "Gain" ) , 0 ,
0 , 0 } , { 50 , TARGET_STRING ( "LINEFOLLOW_90_DATA_READING/Encoder/Gain3" )
, TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 51 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/LeftMotor/Discrete-Time Integrator" ) ,
TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 52 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/LeftMotor/Discrete-Time Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 53 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/LeftMotor/Switch" ) , TARGET_STRING ( "Threshold"
) , 0 , 0 , 0 } , { 54 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Line Sensor1/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 55 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Line Sensor1/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 56 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Line Sensor1/Switch" ) , TARGET_STRING (
"Threshold" ) , 3 , 0 , 0 } , { 57 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/RightMotor/Discrete-Time Integrator" ) ,
TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 58 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/RightMotor/Discrete-Time Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 0 , 0 } , { 59 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/RightMotor/Switch" ) , TARGET_STRING (
"Threshold" ) , 0 , 0 , 0 } , { 60 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Circle" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 61 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Discrete-Time Integrator" ) ,
TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 62 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Discrete-Time Integrator1" ) ,
TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 63 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Discrete-Time Integrator2" ) ,
TARGET_STRING ( "gainval" ) , 0 , 0 , 0 } , { 64 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Gain1" ) , TARGET_STRING ( "Gain"
) , 0 , 0 , 0 } , { 65 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Robot Simulator/Soft Real Time" ) , TARGET_STRING
( "P1" ) , 0 , 0 , 0 } , { 66 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Subsystem1/Gain" ) , TARGET_STRING ( "Gain" ) , 0
, 0 , 0 } , { 67 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/To wlwr/change parameters" ) , TARGET_STRING (
"Gain" ) , 0 , 4 , 0 } , { 68 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 69 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 70 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/LeftMotor/Motor/Internal" ) , TARGET_STRING ( "A"
) , 0 , 5 , 0 } , { 71 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/LeftMotor/Motor/Internal" ) , TARGET_STRING ( "B"
) , 0 , 6 , 0 } , { 72 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/LeftMotor/Motor/Internal" ) , TARGET_STRING ( "C"
) , 0 , 6 , 0 } , { 73 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/LeftMotor/Radians to Degrees/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 74 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/RightMotor/Motor/Internal" ) , TARGET_STRING (
"A" ) , 0 , 5 , 0 } , { 75 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/RightMotor/Motor/Internal" ) , TARGET_STRING (
"B" ) , 0 , 6 , 0 } , { 76 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/RightMotor/Motor/Internal" ) , TARGET_STRING (
"C" ) , 0 , 6 , 0 } , { 77 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/RightMotor/Radians to Degrees/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 78 , TARGET_STRING (
"LINEFOLLOW_90_DATA_READING/Subsystem/Radians to Degrees/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 79 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 7 , 0 } , { 80 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Look up Line Value/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 81 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Look up Line Value/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 82 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Look up Line Value/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 83 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Look up Line Value/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 84 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Look up Line Value/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 85 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Look up Line Value/Saturation2"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 86 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Look up Line Value/Saturation2"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 87 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Look up Line Value/Saturation3"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 88 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Look up Line Value/Saturation3"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 89 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Look up Line Value/Direct Lookup Table (n-D)"
) , TARGET_STRING ( "Table" ) , 3 , 8 , 0 } , { 90 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Line Sensor1/Look up Line Value/For Each Subsystem/Look up Line Value/Direct Lookup Table (n-D)"
) , TARGET_STRING ( "DiagnosticForOutOfRangeInput" ) , 1 , 0 , 0 } , { 91 ,
TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 92 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Bias"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 93 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Bias1"
) , TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 94 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 95 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 96 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 97 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 98 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 99 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Saturation1"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 100 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Saturation1"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 , 0 } , { 101 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Direct Lookup Table (n-D)"
) , TARGET_STRING ( "Table" ) , 3 , 8 , 0 } , { 102 , TARGET_STRING (
 "LINEFOLLOW_90_DATA_READING/Ultrasonic Sensor/Look up Distance Value/Subsystem/Look up Sensor Value/Lookup Obstacle Map/Direct Lookup Table (n-D)"
) , TARGET_STRING ( "DiagnosticForOutOfRangeInput" ) , 1 , 0 , 0 } , { 0 , (
NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] =
{ - 1 } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL
) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals
rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 103 ,
TARGET_STRING ( "InputPWM" ) , 0 , 9 , 0 } , { 104 , TARGET_STRING (
"WheelSpeed" ) , 0 , 9 , 0 } , { 105 , TARGET_STRING ( "axleLength" ) , 0 , 0
, 0 } , { 106 , TARGET_STRING ( "lineLength" ) , 0 , 0 , 0 } , { 107 ,
TARGET_STRING ( "ticksPerRot" ) , 0 , 0 , 0 } , { 108 , TARGET_STRING (
"wheelR" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . in0g5ymfbo , & rtB . jb4chrbkfd ,
& rtB . dgw1rht5ve , & rtDW . aerlsydhoo , & rtDW . bff3bj3sb0 , & rtDW .
dxnpm1ncbe , & rtB . jl4ub35pwm , & rtB . axzxj5uktk , & rtB . idida0022t , &
rtB . mmkuncny5o , & rtB . dowb3m4bgk , & rtB . n45i4rsrnl , & rtB .
itj32cisqf , & rtB . m4eljzmdsj [ 0 ] , & rtDW . bdljyikdhx , & rtB .
jxi1x4e03t , & rtB . pc3evx0mow , & rtB . mzdhsevphf , & rtB . ouowhxxprb , &
rtB . k5srpchxkd , & rtB . c0iltmlfbi , & rtB . mbceuuvi1k , & rtB .
e2vtmpvjdz , & rtB . becycjtoxf , & rtB . jq2505hglk , & rtB . csiuroqpjm [ 0
] , & rtB . njczvchnoe , & rtB . cuoexuzlm4 , & rtB . jzxctmmzb1 , & rtB .
bpcnsls3wa [ 0 ] , & rtDW . mh4aj0wqkn , & rtDW . ofwjthgdta [ 3 ] .
duw1xkqtek , & rtB . osbt1yzhh0 [ 0 ] . kkjjs3cohz [ 0 ] , & rtDW .
osbt1yzhh0 [ 0 ] . ciff0uw4a3 , & rtB . osbt1yzhh0 [ 0 ] . houlu1kk0d [ 0 ] ,
& rtP . DataStoreMemory_InitialValue , & rtP . DataStoreMemory1_InitialValue
, & rtP . LeftMotor_sensorType , & rtP . LineSensor1_envVal , & rtP .
LineSensor1_lineVal , & rtP . RightMotor_sensorType , & rtP .
RobotSimulator_startX , & rtP . RobotSimulator_startY , & rtP .
RobotSimulator_startTheta , & rtP . Towlwr_wheelR , & rtP .
DiscreteTimeIntegrator_gainval_bfxl21iqwk , & rtP . DiscreteTimeIntegrator_IC
, & rtP . DiscreteTimeIntegrator1_gainval_hret3wtaoa , & rtP .
DiscreteTimeIntegrator1_IC , & rtP . Gain2_Gain , & rtP . Gain3_Gain , & rtP
. DiscreteTimeIntegrator_gainval_pqjn4s3zfp , & rtP .
DiscreteTimeIntegrator_IC_nxjdqjay5a , & rtP . Switch_Threshold , & rtP .
Constant_Value [ 0 ] , & rtP . Constant1_Value [ 0 ] , & rtP .
Switch_Threshold_dssh4epfux , & rtP .
DiscreteTimeIntegrator_gainval_nsbpff3iej , & rtP .
DiscreteTimeIntegrator_IC_e2rs5vbr1z , & rtP . Switch_Threshold_optfqfjagg ,
& rtP . Circle_Value , & rtP . DiscreteTimeIntegrator_gainval , & rtP .
DiscreteTimeIntegrator1_gainval , & rtP . DiscreteTimeIntegrator2_gainval , &
rtP . Gain1_Gain , & rtP . SoftRealTime_P1 , & rtP . Gain_Gain_oneshwnrhn , &
rtP . changeparameters_Gain [ 0 ] , & rtP . Constant_Value_lsb3s3lan1 , & rtP
. Constant1_Value_h1zlwjstwh , & rtP . Internal_A [ 0 ] , & rtP . Internal_B
[ 0 ] , & rtP . Internal_C [ 0 ] , & rtP . Gain_Gain , & rtP .
Internal_A_bedsmejnmc [ 0 ] , & rtP . Internal_B_f5c2cweayi [ 0 ] , & rtP .
Internal_C_j3hwsrye03 [ 0 ] , & rtP . Gain_Gain_cirheseb5s , & rtP .
Gain_Gain_dvchqdxwbj , & rtP . osbt1yzhh0 . Constant_Value [ 0 ] , & rtP .
ofwjthgdta . Bias_Bias , & rtP . ofwjthgdta . Bias1_Bias , & rtP . ofwjthgdta
. Constant_Value , & rtP . ofwjthgdta . Gain_Gain , & rtP . ofwjthgdta .
Gain1_Gain , & rtP . ofwjthgdta . Saturation2_UpperSat , & rtP . ofwjthgdta .
Saturation2_LowerSat , & rtP . ofwjthgdta . Saturation3_UpperSat , & rtP .
ofwjthgdta . Saturation3_LowerSat , & rtP . ofwjthgdta .
DirectLookupTablenD_table [ 0 ] , & rtP . ofwjthgdta .
DirectLookupTablenD_DiagnosticForOutOfRangeInput , & rtP . osbt1yzhh0 .
osbt1yzhh0 . Constant_Value , & rtP . osbt1yzhh0 . osbt1yzhh0 . Bias_Bias , &
rtP . osbt1yzhh0 . osbt1yzhh0 . Bias1_Bias , & rtP . osbt1yzhh0 . osbt1yzhh0
. Constant1_Value , & rtP . osbt1yzhh0 . osbt1yzhh0 . Gain_Gain , & rtP .
osbt1yzhh0 . osbt1yzhh0 . Gain1_Gain , & rtP . osbt1yzhh0 . osbt1yzhh0 .
Saturation_UpperSat , & rtP . osbt1yzhh0 . osbt1yzhh0 . Saturation_LowerSat ,
& rtP . osbt1yzhh0 . osbt1yzhh0 . Saturation1_UpperSat , & rtP . osbt1yzhh0 .
osbt1yzhh0 . Saturation1_LowerSat , & rtP . osbt1yzhh0 . osbt1yzhh0 .
DirectLookupTablenD_table [ 0 ] , & rtP . osbt1yzhh0 . osbt1yzhh0 .
DirectLookupTablenD_DiagnosticForOutOfRangeInput , & rtP . InputPWM [ 0 ] , &
rtP . WheelSpeed [ 0 ] , & rtP . axleLength , & rtP . lineLength , & rtP .
ticksPerRot , & rtP . wheelR , } ; static int32_T * rtVarDimsAddrMap [ ] = {
( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "uint8_T" , 0 , 0 , sizeof ( uint8_T ) , ( uint8_T )
SS_UINT8 , 0 , 0 , 0 } , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof (
uint32_T ) , ( uint8_T ) SS_UINT32 , 0 , 0 , 0 } , { "float" , "real32_T" , 0
, 0 , sizeof ( real32_T ) , ( uint8_T ) SS_SINGLE , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 16 , 2 , 0 } , { rtwCAPI_VECTOR , 18 , 2 , 0 } } ;
static const uint_T rtDimensionArray [ ] = { 1 , 1 , 4 , 1 , 3 , 3 , 1327 , 1
, 2 , 2 , 9 , 1 , 3 , 1 , 1 , 1327 , 1259 , 629 , 1 , 173 } ; static const
real_T rtcapiStoredFloats [ ] = { 0.01 , 0.0 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 1 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 2 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 35 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 68 ,
rtModelParameters , 6 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 3341672022U , 236687412U , 3185214979U , 4213670557U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * LINEFOLLOW_90_DATA_READING_GetCAPIStaticMap
( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void LINEFOLLOW_90_DATA_READING_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void LINEFOLLOW_90_DATA_READING_host_InitializeDataMapInfo (
LINEFOLLOW_90_DATA_READING_host_DataMapInfo_T * dataMap , const char * path )
{ rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap
-> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL
) ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
