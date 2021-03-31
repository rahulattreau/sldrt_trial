/*
 * process_dt.h
 *
 * Code generation for model "process".
 *
 * Model version              : 2.467
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Mar 30 22:32:46 2021
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
  sizeof(uint8_T),
  sizeof(struct_qTPYqaCUNjh5BSzMwShH5B),
  sizeof(struct_QSg1mMqvkNcdAR48PoLPrG)
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
  "uint8_T",
  "struct_qTPYqaCUNjh5BSzMwShH5B",
  "struct_QSg1mMqvkNcdAR48PoLPrG"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&process_B.ExecutionTime), 0, 0, 3 },

  { (char_T *)(&process_B.missed_ticks), 6, 0, 1 },

  { (char_T *)(&process_B.Accumulator_i), 5, 0, 1 },

  { (char_T *)(&process_B.DataTypeConversion), 3, 0, 173 },

  { (char_T *)(&process_B.available), 8, 0, 3 },

  { (char_T *)(&process_B.TriggeredSubsystem_n.rx[0]), 3, 0, 4 },

  { (char_T *)(&process_B.TriggeredSubsystem_d.rx[0]), 3, 0, 4 }
  ,

  { (char_T *)(&process_DW.UnitDelay2_DSTATE), 0, 0, 2 },

  { (char_T *)(&process_DW.PacketOutput_PWORK[0]), 11, 0, 23 },

  { (char_T *)(&process_DW.Accumulator_DSTATE_h), 5, 0, 1 },

  { (char_T *)(&process_DW.UnitDelay_DSTATE), 3, 0, 154 },

  { (char_T *)(&process_DW.UnitDelay5_DSTATE), 8, 0, 1 },

  { (char_T *)(&process_DW.Accumulator_PrevResetState), 2, 0, 5 },

  { (char_T *)(&process_DW.TriggeredSubsystem_n.TriggeredSubsystem_SubsysRanBC),
    2, 0, 1 },

  { (char_T *)(&process_DW.TriggeredSubsystem_d.TriggeredSubsystem_SubsysRanBC),
    2, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  15U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&process_P.message_poll_num), 0, 0, 1 },

  { (char_T *)(&process_P.kGrdCmdSize), 3, 0, 6 },

  { (char_T *)(&process_P.PacketInput2_MaxMissedTicks), 0, 0, 8 },

  { (char_T *)(&process_P.PacketInput2_PacketID), 6, 0, 3 },

  { (char_T *)(&process_P.serial_rx_bus_Outport_2_Y0), 16, 0, 1 },

  { (char_T *)(&process_P.Constant_Value), 0, 0, 21 },

  { (char_T *)(&process_P.Accumulator_IC_j), 5, 0, 1 },

  { (char_T *)(&process_P.UnitDelay5_InitialCondition), 8, 0, 4 },

  { (char_T *)(&process_P.tx_Y0), 3, 0, 11 },

  { (char_T *)(&process_P.TriggeredSubsystem_n.tx_Y0), 3, 0, 1 },

  { (char_T *)(&process_P.TriggeredSubsystem_d.tx_Y0), 3, 0, 1 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  11U,
  rtPTransitions
};

/* [EOF] process_dt.h */
