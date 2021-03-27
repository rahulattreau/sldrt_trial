/*
 * check_serial_2msg_processor_2_data.c
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

#include "check_serial_2msg_processor_2.h"
#include "check_serial_2msg_processor_2_private.h"

/* Block parameters (default storage) */
P_check_serial_2msg_processor_2_T check_serial_2msg_processor_2_P = {
  /* Mask Parameter: PacketInput2_MaxMissedTicks
   * Referenced by: '<S8>/Packet Input2'
   */
  0.0,

  /* Mask Parameter: PacketOutput_MaxMissedTicks
   * Referenced by: '<Root>/Packet Output'
   */
  0.0,

  /* Mask Parameter: PacketOutput1_MaxMissedTicks
   * Referenced by: '<Root>/Packet Output1'
   */
  0.0,

  /* Mask Parameter: PacketInput2_YieldWhenWaiting
   * Referenced by: '<S8>/Packet Input2'
   */
  0.0,

  /* Mask Parameter: PacketOutput_YieldWhenWaiting
   * Referenced by: '<Root>/Packet Output'
   */
  0.0,

  /* Mask Parameter: PacketOutput1_YieldWhenWaiting
   * Referenced by: '<Root>/Packet Output1'
   */
  0.0,

  /* Mask Parameter: PacketInput2_PacketID
   * Referenced by: '<S8>/Packet Input2'
   */
  1,

  /* Mask Parameter: PacketOutput_PacketID
   * Referenced by: '<Root>/Packet Output'
   */
  1,

  /* Mask Parameter: PacketOutput1_PacketID
   * Referenced by: '<Root>/Packet Output1'
   */
  1,

  /* Expression: hex2dec('0x00')
   * Referenced by: '<S6>/Constant'
   */
  0.0,

  /* Expression: hex2dec('0x01')
   * Referenced by: '<S7>/Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S3>/Constant'
   */
  1.0,

  /* Expression: hex2dec('0xEF')
   * Referenced by: '<S3>/Constant1'
   */
  239.0,

  /* Expression: hex2dec('0x03')
   * Referenced by: '<S3>/Constant3'
   */
  3.0,

  /* Expression: hex2dec('0x00')
   * Referenced by: '<S3>/Constant4'
   */
  0.0,

  /* Expression: hex2dec('0x01')
   * Referenced by: '<S3>/Constant5'
   */
  1.0,

  /* Expression: hex2dec('0x02')
   * Referenced by: '<S3>/Constant6'
   */
  2.0,

  /* Expression: hex2dec('0xF5')
   * Referenced by: '<S3>/Constant2'
   */
  245.0,

  /* Expression: hex2dec('0xEF')
   * Referenced by: '<Root>/Constant'
   */
  239.0,

  /* Expression: hex2dec('0xF5')
   * Referenced by: '<Root>/Constant1'
   */
  245.0,

  /* Expression: hex2dec('0x03')
   * Referenced by: '<Root>/Constant2'
   */
  3.0,

  /* Expression: hex2dec('0x00')
   * Referenced by: '<Root>/Constant3'
   */
  0.0,

  /* Expression: hex2dec('0x01')
   * Referenced by: '<Root>/Constant4'
   */
  1.0,

  /* Expression: hex2dec('0x02')
   * Referenced by: '<Root>/Constant5'
   */
  2.0,

  /* Expression: hex2dec('0x01')
   * Referenced by: '<Root>/Constant10'
   */
  1.0,

  /* Expression: hex2dec('0x02')
   * Referenced by: '<Root>/Constant11'
   */
  2.0,

  /* Expression: hex2dec('0x04')
   * Referenced by: '<Root>/Constant12'
   */
  4.0,

  /* Expression: hex2dec('0xFF')
   * Referenced by: '<Root>/Constant13'
   */
  255.0,

  /* Expression: hex2dec('0xEF')
   * Referenced by: '<Root>/Constant6'
   */
  239.0,

  /* Expression: hex2dec('0x03')
   * Referenced by: '<Root>/Constant7'
   */
  3.0,

  /* Expression: hex2dec('0x05')
   * Referenced by: '<Root>/Constant8'
   */
  5.0,

  /* Expression: hex2dec('0x01')
   * Referenced by: '<Root>/Constant9'
   */
  1.0,

  /* Expression: ShowTaskTimes
   * Referenced by: '<Root>/Execution Time'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay2'
   */
  0.0,

  /* Computed Parameter: Accumulator_gainval
   * Referenced by: '<S1>/Accumulator'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S1>/Accumulator'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S1>/Bias'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S1>/Constant18'
   */
  1.0,

  /* Expression: false
   * Referenced by: '<S9>/Unit Delay5'
   */
  0,

  /* Expression: true
   * Referenced by: '<S5>/Constant16'
   */
  1,

  /* Expression: true
   * Referenced by: '<S2>/Constant18'
   */
  1,

  /* Computed Parameter: iterator_Y0
   * Referenced by: '<S3>/iterator'
   */
  0U,

  /* Computed Parameter: y_Y0
   * Referenced by: '<S3>/y'
   */
  0U,

  /* Expression: uint8(1)
   * Referenced by: '<S9>/Unit Delay'
   */
  1U,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S9>/Unit Delay1'
   */
  0U,

  /* Computed Parameter: UnitDelay2_InitialCondition_m
   * Referenced by: '<S9>/Unit Delay2'
   */
  1U,

  /* Computed Parameter: UnitDelay3_InitialCondition
   * Referenced by: '<S9>/Unit Delay3'
   */
  0U,

  /* Computed Parameter: UnitDelay4_InitialCondition
   * Referenced by: '<S9>/Unit Delay4'
   */
  0U,

  /* Expression: uint8(0)
   * Referenced by: '<S9>/Unit Delay6'
   */
  0U,

  /* Computed Parameter: UnitDelay_InitialCondition_h
   * Referenced by: '<S10>/Unit Delay'
   */
  0U,

  /* Computed Parameter: Accumulator_IC_c
   * Referenced by: '<S10>/Accumulator'
   */
  0U,

  /* Expression: uint8(5)
   * Referenced by: '<S3>/Constant7'
   */
  5U,

  /* Start of '<S7>/Triggered Subsystem' */
  {
    /* Computed Parameter: tx_Y0
     * Referenced by: '<S13>/tx'
     */
    0U
  }
  ,

  /* End of '<S7>/Triggered Subsystem' */

  /* Start of '<S6>/Triggered Subsystem' */
  {
    /* Computed Parameter: tx_Y0
     * Referenced by: '<S12>/tx'
     */
    0U
  }
  ,

  /* End of '<S6>/Triggered Subsystem' */

  /* Start of '<S5>/Triggered Subsystem' */
  {
    /* Computed Parameter: tx_Y0
     * Referenced by: '<S11>/tx'
     */
    0U
  }
  /* End of '<S5>/Triggered Subsystem' */
};
