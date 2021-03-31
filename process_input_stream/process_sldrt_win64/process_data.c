/*
 * process_data.c
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

#include "process.h"
#include "process_private.h"

/* Block parameters (default storage) */
P_process_T process_P = {
  /* Variable: message_poll_num
   * Referenced by: '<S12>/Constant'
   */
  144.0,

  /* Variable: kGrdCmdSize
   * Referenced by:
   *   '<S11>/MATLAB Function'
   *   '<S19>/Constant1'
   *   '<S19>/Constant3'
   */
  1U,

  /* Variable: kGrdCrcSize
   * Referenced by:
   *   '<S11>/MATLAB Function'
   *   '<S19>/Constant4'
   */
  1U,

  /* Variable: kGrdFrameStart
   * Referenced by:
   *   '<S11>/MATLAB Function'
   *   '<S19>/Constant'
   */
  239U,

  /* Variable: kGrdFrameStartSize
   * Referenced by:
   *   '<S11>/MATLAB Function'
   *   '<S19>/Constant2'
   */
  1U,

  /* Variable: kGrdMsgIdSize
   * Referenced by: '<S11>/MATLAB Function'
   */
  1U,

  /* Variable: kMaxPacketSize
   * Referenced by: '<S11>/MATLAB Function'
   */
  4U,

  /* Mask Parameter: PacketInput2_MaxMissedTicks
   * Referenced by: '<S10>/Packet Input2'
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
   * Referenced by: '<S10>/Packet Input2'
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

  /* Mask Parameter: holder_msgID_0x1_u_p
   * Referenced by: '<S8>/Constant'
   */
  0.0,

  /* Mask Parameter: holder_msgID_0x2_u_p
   * Referenced by: '<S9>/Constant'
   */
  1.0,

  /* Mask Parameter: PacketInput2_PacketID
   * Referenced by: '<S10>/Packet Input2'
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

  /* Computed Parameter: serial_rx_bus_Outport_2_Y0
   * Referenced by: synthesized block
   */
  {
    {
      0U, 0U, 0U, 0U }
    ,                                  /* holder */

    {
      0U,                              /* calls_16_bit */

      {
        0U, 0U, 0U, 0U }
      /* data */
    },                                 /* msgID_0x00 */

    {
      0U,                              /* calls_16_bit */

      {
        0U, 0U, 0U, 0U }
      /* data */
    }                                  /* msgID_0x01 */
  },

  /* Expression: 1
   * Referenced by: '<S5>/Constant'
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

  /* Expression: ShowTaskTimes
   * Referenced by: '<S2>/Execution Time'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/Unit Delay2'
   */
  0.0,

  /* Computed Parameter: Accumulator_gainval
   * Referenced by: '<S4>/Accumulator'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S4>/Accumulator'
   */
  1.0,

  /* Expression: -1
   * Referenced by: '<S4>/Bias'
   */
  -1.0,

  /* Expression: 1
   * Referenced by: '<S4>/Constant18'
   */
  1.0,

  /* Computed Parameter: Accumulator_IC_j
   * Referenced by: '<S7>/Accumulator'
   */
  0U,

  /* Expression: false
   * Referenced by: '<S11>/Unit Delay5'
   */
  0,

  /* Expression: true
   * Referenced by: '<S7>/Constant16'
   */
  1,

  /* Expression: false
   * Referenced by: '<S2>/Constant'
   */
  0,

  /* Expression: true
   * Referenced by: '<S3>/Constant18'
   */
  1,

  /* Computed Parameter: tx_Y0
   * Referenced by: '<S13>/tx'
   */
  0U,

  /* Computed Parameter: sum_eight_bit_Y0
   * Referenced by: '<S19>/sum_eight_bit'
   */
  0U,

  /* Computed Parameter: y_Y0
   * Referenced by: '<S5>/y'
   */
  0U,

  /* Expression: uint8(1)
   * Referenced by: '<S11>/Unit Delay'
   */
  1U,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S11>/Unit Delay1'
   */
  0U,

  /* Computed Parameter: UnitDelay2_InitialCondition_m
   * Referenced by: '<S11>/Unit Delay2'
   */
  1U,

  /* Computed Parameter: UnitDelay3_InitialCondition
   * Referenced by: '<S11>/Unit Delay3'
   */
  0U,

  /* Computed Parameter: UnitDelay4_InitialCondition
   * Referenced by: '<S11>/Unit Delay4'
   */
  0U,

  /* Expression: uint8(0)
   * Referenced by: '<S11>/Unit Delay6'
   */
  0U,

  /* Computed Parameter: Accumulator_IC_c
   * Referenced by: '<S12>/Accumulator'
   */
  0U,

  /* Computed Parameter: ResettableDelay_InitialCondition
   * Referenced by: '<S12>/Resettable Delay'
   */
  0U,

  /* Start of '<S9>/Triggered Subsystem' */
  {
    /* Computed Parameter: tx_Y0
     * Referenced by: '<S16>/tx'
     */
    0U
  }
  ,

  /* End of '<S9>/Triggered Subsystem' */

  /* Start of '<S8>/Triggered Subsystem' */
  {
    /* Computed Parameter: tx_Y0
     * Referenced by: '<S14>/tx'
     */
    0U
  }
  /* End of '<S8>/Triggered Subsystem' */
};
