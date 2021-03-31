/*
 * process_dt.h
 *
 * Code generation for model "process".
 *
 * Model version              : 2.406
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Mar 30 21:41:59 2021
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
  2*sizeof(uint32_T),
  sizeof(uint8_T)
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
  "timer_uint32_pair_T",
  "uint8_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&process_B.ExecutionTime), 0, 0, 3 },

  { (char_T *)(&process_B.missed_ticks), 6, 0, 1 },

  { (char_T *)(&process_B.Accumulator_c), 5, 0, 2 },

  { (char_T *)(&process_B.DataTypeConversion), 3, 0, 167 },

  { (char_T *)(&process_B.available), 8, 0, 3 },

  { (char_T *)(&process_B.TriggeredSubsystem_h.rx[0]), 3, 0, 4 },

  { (char_T *)(&process_B.TriggeredSubsystem_i.rx[0]), 3, 0, 4 },

  { (char_T *)(&process_B.TriggeredSubsystem.rx[0]), 3, 0, 4 }
  ,

  { (char_T *)(&process_DW.UnitDelay2_DSTATE), 0, 0, 2 },

  { (char_T *)(&process_DW.Scope26_PWORK.LoggedData), 11, 0, 34 },

  { (char_T *)(&process_DW.Accumulator_DSTATE_j), 5, 0, 2 },

  { (char_T *)(&process_DW.UnitDelay_DSTATE), 3, 0, 155 },

  { (char_T *)(&process_DW.UnitDelay5_DSTATE), 8, 0, 1 },

  { (char_T *)(&process_DW.message_rx_looper_SubsysRanBC), 2, 0, 3 },

  { (char_T *)(&process_DW.TriggeredSubsystem_h.TriggeredSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&process_DW.TriggeredSubsystem_i.TriggeredSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&process_DW.TriggeredSubsystem.TriggeredSubsystem_SubsysRanBC), 2,
    0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  17U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&process_P.kGrdCmdSize), 3, 0, 6 },

  { (char_T *)(&process_P.PacketInput2_MaxMissedTicks), 0, 0, 6 },

  { (char_T *)(&process_P.PacketInput2_PacketID), 6, 0, 3 },

  { (char_T *)(&process_P.Constant_Value), 0, 0, 23 },

  { (char_T *)(&process_P.Accumulator_IC_g), 5, 0, 2 },

  { (char_T *)(&process_P.UnitDelay5_InitialCondition), 8, 0, 3 },

  { (char_T *)(&process_P.sum_eight_bit_Y0), 3, 0, 13 },

  { (char_T *)(&process_P.TriggeredSubsystem_h.tx_Y0), 3, 0, 1 },

  { (char_T *)(&process_P.TriggeredSubsystem_i.tx_Y0), 3, 0, 1 },

  { (char_T *)(&process_P.TriggeredSubsystem.tx_Y0), 3, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  10U,
  rtPTransitions
};

/* [EOF] process_dt.h */
