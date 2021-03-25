/*
 * check_serial_2msg_processor_dt.h
 *
 * Code generation for model "check_serial_2msg_processor".
 *
 * Model version              : 2.0
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Wed Mar 24 21:22:18 2021
 *
 * Target selection: sldrtert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(void*),
  sizeof(action_T),
  2*sizeof(uint32_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&check_serial_2msg_processor_B.PacketInput_o4), 6, 0, 2 },

  { (char_T *)(&check_serial_2msg_processor_B.DataTypeConversion), 3, 0, 42 },

  { (char_T *)(&check_serial_2msg_processor_B.PacketInput_o2), 8, 0, 2 }
  ,

  { (char_T *)(&check_serial_2msg_processor_DW.PacketOutput_PWORK[0]), 11, 0, 31
  },

  { (char_T *)(&check_serial_2msg_processor_DW.UnitDelay_DSTATE[0]), 3, 0, 14 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  5U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&check_serial_2msg_processor_P.PacketOutput_MaxMissedTicks), 0, 0,
    8 },

  { (char_T *)(&check_serial_2msg_processor_P.PacketOutput_PacketID), 6, 0, 4 },

  { (char_T *)(&check_serial_2msg_processor_P.Constant_Value), 0, 0, 14 },

  { (char_T *)(&check_serial_2msg_processor_P.Constant16_Value), 8, 0, 2 },

  { (char_T *)(&check_serial_2msg_processor_P.Constant15_Value[0]), 3, 0, 16 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  5U,
  rtPTransitions
};

/* [EOF] check_serial_2msg_processor_dt.h */
