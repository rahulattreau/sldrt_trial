/*
 * check_serial_new_arduino_time_data.c
 *
 * Code generation for model "check_serial_new_arduino_time".
 *
 * Model version              : 2.7
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Wed Mar 24 21:40:21 2021
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "check_serial_new_arduino_time.h"
#include "check_serial_new_arduino_time_private.h"

/* Block parameters (default storage) */
P_check_serial_new_arduino_time_T check_serial_new_arduino_time_P = {
  /* Mask Parameter: PacketOutput_MaxMissedTicks
   * Referenced by: '<S3>/Packet Output'
   */
  0.0,

  /* Mask Parameter: PacketInput_MaxMissedTicks
   * Referenced by: '<S2>/Packet Input'
   */
  0.0,

  /* Mask Parameter: PacketOutput_YieldWhenWaiting
   * Referenced by: '<S3>/Packet Output'
   */
  0.0,

  /* Mask Parameter: PacketInput_YieldWhenWaiting
   * Referenced by: '<S2>/Packet Input'
   */
  0.0,

  /* Mask Parameter: PacketOutput_PacketID
   * Referenced by: '<S3>/Packet Output'
   */
  1,

  /* Mask Parameter: PacketInput_PacketID
   * Referenced by: '<S2>/Packet Input'
   */
  1,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<S4>/Discrete-Time Integrator'
   */
  0.01,

  /* Expression: 0
   * Referenced by: '<S4>/Discrete-Time Integrator'
   */
  0.0,

  /* Expression: 1e3
   * Referenced by: '<S4>/Gain'
   */
  1000.0,

  /* Expression: 1
   * Referenced by: '<S4>/Constant'
   */
  1.0,

  /* Computed Parameter: UnitDelay_InitialCondition
   * Referenced by: '<S5>/Unit Delay'
   */
  0,

  /* Expression: uint8(1)
   * Referenced by: '<S5>/Constant1'
   */
  1U,

  /* Expression: uint8(0)
   * Referenced by: '<S5>/Constant3'
   */
  0U,

  /* Expression: uint8(10)
   * Referenced by: '<S5>/Constant2'
   */
  10U
};
