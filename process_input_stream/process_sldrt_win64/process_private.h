/*
 * process_private.h
 *
 * Code generation for model "process".
 *
 * Model version              : 2.344
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Mar 30 20:37:10 2021
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_process_private_h_
#define RTW_HEADER_process_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "process.h"

extern void process_TriggeredSubsystem_Init(B_TriggeredSubsystem_process_T
  *localB, P_TriggeredSubsystem_process_T *localP);
extern void process_TriggeredSubsystem(boolean_T rtu_Enable, boolean_T
  rtu_Trigger, const uint8_T rtu_rx[4], B_TriggeredSubsystem_process_T *localB,
  DW_TriggeredSubsystem_process_T *localDW, ZCE_TriggeredSubsystem_process_T
  *localZCE);

#endif                                 /* RTW_HEADER_process_private_h_ */
