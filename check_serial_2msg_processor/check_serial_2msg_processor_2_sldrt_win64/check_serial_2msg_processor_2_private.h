/*
 * check_serial_2msg_processor_2_private.h
 *
 * Code generation for model "check_serial_2msg_processor_2".
 *
 * Model version              : 2.289
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Sat Mar 27 02:20:27 2021
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_check_serial_2msg_processor_2_private_h_
#define RTW_HEADER_check_serial_2msg_processor_2_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "check_serial_2msg_processor_2.h"

extern void check_serial_2msg_processor_2_TriggeredSubsystem_Init
  (B_TriggeredSubsystem_check_serial_2msg_processor_2_T *localB,
   P_TriggeredSubsystem_check_serial_2msg_processor_2_T *localP);
extern void check_serial_2msg_processor_2_TriggeredSubsystem(boolean_T
  rtu_Enable, boolean_T rtu_Trigger, const uint8_T rtu_rx[4],
  B_TriggeredSubsystem_check_serial_2msg_processor_2_T *localB,
  DW_TriggeredSubsystem_check_serial_2msg_processor_2_T *localDW,
  ZCE_TriggeredSubsystem_check_serial_2msg_processor_2_T *localZCE);

#endif                 /* RTW_HEADER_check_serial_2msg_processor_2_private_h_ */
