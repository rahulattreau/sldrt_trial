/*
 * process_data.c
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

#include "process.h"
#include "process_private.h"

/* Block parameters (default storage) */
P_process_T process_P = {
  /* Variable: kGrdCmdSize
   * Referenced by:
   *   '<S10>/MATLAB Function'
   *   '<S16>/Constant1'
   *   '<S16>/Constant3'
   */
  1U,

  /* Variable: kGrdCrcSize
   * Referenced by:
   *   '<S10>/MATLAB Function'
   *   '<S16>/Constant4'
   */
  1U,

  /* Variable: kGrdFrameStart
   * Referenced by:
   *   '<S10>/MATLAB Function'
   *   '<S16>/Constant'
   */
  239U,

  /* Variable: kGrdFrameStartSize
   * Referenced by:
   *   '<S10>/MATLAB Function'
   *   '<S16>/Constant2'
   */
  1U,

  /* Variable: kGrdMsgIdSize
   * Referenced by: '<S10>/MATLAB Function'
   */
  1U,

  /* Variable: kMaxPacketSize
   * Referenced by: '<S10>/MATLAB Function'
   */
  4U,

  /* Mask Parameter: PacketInput2_MaxMissedTicks
   * Referenced by: '<S9>/Packet Input2'
   */
  0.0,

  /* Mask Parameter: PacketOutput_MaxMissedTicks
   * Referenced by: '<S1>/Packet Output'
   */
  0.0,

  /* Mask Parameter: PacketOutput1_MaxMissedTicks
   * Referenced by: '<S1>/Packet Output1'
   */
  0.0,

  /* Mask Parameter: PacketInput2_YieldWhenWaiting
   * Referenced by: '<S9>/Packet Input2'
   */
  0.0,

  /* Mask Parameter: PacketOutput_YieldWhenWaiting
   * Referenced by: '<S1>/Packet Output'
   */
  0.0,

  /* Mask Parameter: PacketOutput1_YieldWhenWaiting
   * Referenced by: '<S1>/Packet Output1'
   */
  0.0,

  /* Mask Parameter: PacketInput2_PacketID
   * Referenced by: '<S9>/Packet Input2'
   */
  1,

  /* Mask Parameter: PacketOutput_PacketID
   * Referenced by: '<S1>/Packet Output'
   */
  1,

  /* Mask Parameter: PacketOutput1_PacketID
   * Referenced by: '<S1>/Packet Output1'
   */
  1,

  /* Expression: hex2dec('0x00')
   * Referenced by: '<S7>/Constant'
   */
  0.0,

  /* Expression: hex2dec('0x01')
   * Referenced by: '<S8>/Constant'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S5>/Constant'
   */
  1.0,

  /* Expression: ShowTaskTimes
   * Referenced by: '<Root>/Execution Time'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S2>/Unit Delay2'
   */
  0.0,

  /* Computed Parameter: Accumulator_gainval
   * Referenced by: '<S2>/Accumulator'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S2>/Accumulator'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S2>/Bias'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S2>/Constant18'
   */
  1.0,

  /* Expression: hex2dec('0xEF')
   * Referenced by: '<S1>/Constant'
   */
  239.0,

  /* Expression: hex2dec('0xF5')
   * Referenced by: '<S1>/Constant1'
   */
  245.0,

  /* Expression: hex2dec('0x03')
   * Referenced by: '<S1>/Constant2'
   */
  3.0,

  /* Expression: hex2dec('0x00')
   * Referenced by: '<S1>/Constant3'
   */
  0.0,

  /* Expression: hex2dec('0x01')
   * Referenced by: '<S1>/Constant4'
   */
  1.0,

  /* Expression: hex2dec('0x02')
   * Referenced by: '<S1>/Constant5'
   */
  2.0,

  /* Expression: hex2dec('0x01')
   * Referenced by: '<S1>/Constant10'
   */
  1.0,

  /* Expression: hex2dec('0x02')
   * Referenced by: '<S1>/Constant11'
   */
  2.0,

  /* Expression: hex2dec('0x04')
   * Referenced by: '<S1>/Constant12'
   */
  4.0,

  /* Expression: hex2dec('0xFF')
   * Referenced by: '<S1>/Constant13'
   */
  255.0,

  /* Expression: hex2dec('0xEF')
   * Referenced by: '<S1>/Constant6'
   */
  239.0,

  /* Expression: hex2dec('0x03')
   * Referenced by: '<S1>/Constant7'
   */
  3.0,

  /* Expression: hex2dec('0x05')
   * Referenced by: '<S1>/Constant8'
   */
  5.0,

  /* Expression: hex2dec('0x01')
   * Referenced by: '<S1>/Constant9'
   */
  1.0,

  /* Computed Parameter: Accumulator_IC_g
   * Referenced by: '<S7>/Accumulator'
   */
  0U,

  /* Computed Parameter: Accumulator_IC_a
   * Referenced by: '<S8>/Accumulator'
   */
  0U,

  /* Expression: false
   * Referenced by: '<S10>/Unit Delay5'
   */
  0,

  /* Expression: true
   * Referenced by: '<S6>/Constant16'
   */
  1,

  /* Expression: true
   * Referenced by: '<S3>/Constant18'
   */
  1,

  /* Computed Parameter: sum_eight_bit_Y0
   * Referenced by: '<S16>/sum_eight_bit'
   */
  0U,

  /* Computed Parameter: iterator_Y0
   * Referenced by: '<S5>/iterator'
   */
  0U,

  /* Computed Parameter: y_Y0
   * Referenced by: '<S5>/y'
   */
  0U,

  /* Expression: uint8(1)
   * Referenced by: '<S10>/Unit Delay'
   */
  1U,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S10>/Unit Delay1'
   */
  0U,

  /* Computed Parameter: UnitDelay2_InitialCondition_m
   * Referenced by: '<S10>/Unit Delay2'
   */
  1U,

  /* Computed Parameter: UnitDelay3_InitialCondition
   * Referenced by: '<S10>/Unit Delay3'
   */
  0U,

  /* Computed Parameter: UnitDelay4_InitialCondition
   * Referenced by: '<S10>/Unit Delay4'
   */
  0U,

  /* Expression: uint8(0)
   * Referenced by: '<S10>/Unit Delay6'
   */
  0U,

  /* Computed Parameter: Accumulator_IC_j
   * Referenced by: '<S6>/Accumulator'
   */
  0U,

  /* Expression: uint8(144)
   * Referenced by: '<S11>/Constant'
   */
  144U,

  /* Computed Parameter: Accumulator_IC_c
   * Referenced by: '<S11>/Accumulator'
   */
  0U,

  /* Computed Parameter: ResettableDelay_InitialCondition
   * Referenced by: '<S11>/Resettable Delay'
   */
  0U,

  /* Start of '<S8>/Triggered Subsystem' */
  {
    /* Computed Parameter: tx_Y0
     * Referenced by: '<S14>/tx'
     */
    0U
  }
  ,

  /* End of '<S8>/Triggered Subsystem' */

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
  /* End of '<S6>/Triggered Subsystem' */
};
