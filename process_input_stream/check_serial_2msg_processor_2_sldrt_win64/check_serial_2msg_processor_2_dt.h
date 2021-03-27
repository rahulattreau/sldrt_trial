/*
 * check_serial_2msg_processor_2_dt.h
 *
 * Code generation for model "check_serial_2msg_processor_2".
 *
 * Model version              : 2.173
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Fri Mar 26 23:53:04 2021
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
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
  { (char_T *)(&check_serial_2msg_processor_2_B.ExecutionTime), 0, 0, 1 },

  { (char_T *)(&check_serial_2msg_processor_2_B.missed_ticks), 6, 0, 1 },

  { (char_T *)(&check_serial_2msg_processor_2_B.DataTypeConversion), 3, 0, 176 },

  { (char_T *)(&check_serial_2msg_processor_2_B.available), 8, 0, 3 }
  ,

  { (char_T *)(&check_serial_2msg_processor_2_DW.PacketOutput_PWORK[0]), 11, 0,
    19 },

  { (char_T *)(&check_serial_2msg_processor_2_DW.Accumulator_DSTATE), 3, 0, 1 },

  { (char_T *)(&check_serial_2msg_processor_2_DW.message_rx_looper_SubsysRanBC),
    2, 0, 2 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  7U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&check_serial_2msg_processor_2_P.PacketInput2_MaxMissedTicks), 0,
    0, 6 },

  { (char_T *)(&check_serial_2msg_processor_2_P.PacketInput2_PacketID), 6, 0, 3
  },

  { (char_T *)(&check_serial_2msg_processor_2_P.Constant_Value), 0, 0, 16 },

  { (char_T *)(&check_serial_2msg_processor_2_P.UnitDelay5_InitialCondition), 8,
    0, 3 },

  { (char_T *)(&check_serial_2msg_processor_2_P.Out1_Y0), 3, 0, 15 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  5U,
  rtPTransitions
};

/* [EOF] check_serial_2msg_processor_2_dt.h */
