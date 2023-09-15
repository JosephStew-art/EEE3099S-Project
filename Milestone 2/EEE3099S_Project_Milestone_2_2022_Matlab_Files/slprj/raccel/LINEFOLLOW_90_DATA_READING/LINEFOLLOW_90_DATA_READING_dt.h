#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , { "uint64_T" , 17 , 8 } , {
"int64_T" , 18 , 8 } , { "uint_T" , 19 , 32 } , { "char_T" , 20 , 8 } , {
"uchar_T" , 21 , 8 } , { "time_T" , 22 , 8 } } ; static uint_T
rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T ) , sizeof (
int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) ,
sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof (
fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof ( action_T )
, 2 * sizeof ( uint32_T ) , sizeof ( int32_T ) , sizeof ( int64_T ) , sizeof
( uint64_T ) , sizeof ( uint64_T ) , sizeof ( int64_T ) , sizeof ( uint_T ) ,
sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof ( time_T ) } ; static const
char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T"
, "int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" ,
"fcn_call_T" , "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"physical_connection" , "int64_T" , "uint64_T" , "uint64_T" , "int64_T" ,
"uint_T" , "char_T" , "uchar_T" , "time_T" } ; static DataTypeTransition
rtBTransitions [ ] = { { ( char_T * ) ( & rtB . ouowhxxprb ) , 0 , 0 , 37 } ,
{ ( char_T * ) ( & rtB . csiuroqpjm [ 0 ] ) , 1 , 0 , 4 } , { ( char_T * ) (
& rtB . osbt1yzhh0 [ 0 ] . houlu1kk0d [ 0 ] ) , 0 , 0 , 1327 } , { ( char_T *
) ( & rtB . osbt1yzhh0 [ 0 ] . kkjjs3cohz [ 0 ] ) , 1 , 0 , 1327 } , { (
char_T * ) ( & rtDW . lddr43iukk ) , 0 , 0 , 18 } , { ( char_T * ) ( & rtDW .
i4jo210mxu . LoggedData ) , 11 , 0 , 4 } , { ( char_T * ) ( & rtDW .
om04ta0vib ) , 6 , 0 , 4 } , { ( char_T * ) ( & rtDW . bff3bj3sb0 ) , 7 , 0 ,
2 } , { ( char_T * ) ( & rtDW . mh4aj0wqkn ) , 3 , 0 , 3 } , { ( char_T * ) (
& rtDW . nmzj15qgzq ) , 8 , 0 , 2 } , { ( char_T * ) ( & rtDW . osbt1yzhh0 [
0 ] . l1mfqwj5rc ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW . osbt1yzhh0 [ 0 ]
. ciff0uw4a3 ) , 3 , 0 , 1 } , { ( char_T * ) ( & rtDW . osbt1yzhh0 [ 0 ] .
di3vr0e2iw ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW . osbt1yzhh0 [ 0 ] .
osbt1yzhh0 [ 1326 ] . hoasecisyd ) , 7 , 0 , 1 } , { ( char_T * ) ( & rtDW .
ofwjthgdta [ 3 ] . ovm2oyeful ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW .
ofwjthgdta [ 3 ] . ohq2ztllxo ) , 7 , 0 , 1 } , { ( char_T * ) ( & rtDW .
ofwjthgdta [ 3 ] . duw1xkqtek ) , 3 , 0 , 1 } , { ( char_T * ) ( & rtDW .
ofwjthgdta [ 3 ] . ncb2yiikbt ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
jyumvcfqdh . akjaaoglbg ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
ftq2sugm1pk . akjaaoglbg ) , 2 , 0 , 1 } } ; static DataTypeTransitionTable
rtBTransTable = { 20U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . InputPWM [ 0 ] ) , 0 , 0 ,
428 } , { ( char_T * ) ( & rtP . Switch_Threshold_dssh4epfux ) , 1 , 0 , 1 }
, { ( char_T * ) ( & rtP . osbt1yzhh0 . Constant_Value [ 0 ] ) , 0 , 0 , 1327
} , { ( char_T * ) ( & rtP . osbt1yzhh0 . osbt1yzhh0 . Gain1_Gain ) , 0 , 0 ,
10 } , { ( char_T * ) ( & rtP . osbt1yzhh0 . osbt1yzhh0 .
DirectLookupTablenD_table [ 0 ] ) , 1 , 0 , 791911 } , { ( char_T * ) ( & rtP
. osbt1yzhh0 . osbt1yzhh0 . DirectLookupTablenD_DiagnosticForOutOfRangeInput
) , 3 , 0 , 1 } , { ( char_T * ) ( & rtP . ofwjthgdta . Gain1_Gain ) , 0 , 0
, 9 } , { ( char_T * ) ( & rtP . ofwjthgdta . DirectLookupTablenD_table [ 0 ]
) , 1 , 0 , 791911 } , { ( char_T * ) ( & rtP . ofwjthgdta .
DirectLookupTablenD_DiagnosticForOutOfRangeInput ) , 3 , 0 , 1 } } ; static
DataTypeTransitionTable rtPTransTable = { 9U , rtPTransitions } ;
