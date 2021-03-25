/*
 * check_serial_2msg_processor_data.c
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

#include "check_serial_2msg_processor.h"
#include "check_serial_2msg_processor_private.h"

/* Block parameters (default storage) */
P_check_serial_2msg_processor_T check_serial_2msg_processor_P = {
  /* Mask Parameter: PacketOutput_MaxMissedTicks
   * Referenced by: '<Root>/Packet Output'
   */
  0.0,

  /* Mask Parameter: PacketOutput1_MaxMissedTicks
   * Referenced by: '<Root>/Packet Output1'
   */
  0.0,

  /* Mask Parameter: PacketInput_MaxMissedTicks
   * Referenced by: '<Root>/Packet Input'
   */
  0.0,

  /* Mask Parameter: PacketInput1_MaxMissedTicks
   * Referenced by: '<Root>/Packet Input1'
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

  /* Mask Parameter: PacketInput_YieldWhenWaiting
   * Referenced by: '<Root>/Packet Input'
   */
  0.0,

  /* Mask Parameter: PacketInput1_YieldWhenWaiting
   * Referenced by: '<Root>/Packet Input1'
   */
  0.0,

  /* Mask Parameter: PacketOutput_PacketID
   * Referenced by: '<Root>/Packet Output'
   */
  1,

  /* Mask Parameter: PacketOutput1_PacketID
   * Referenced by: '<Root>/Packet Output1'
   */
  1,

  /* Mask Parameter: PacketInput_PacketID
   * Referenced by: '<Root>/Packet Input'
   */
  1,

  /* Mask Parameter: PacketInput1_PacketID
   * Referenced by: '<Root>/Packet Input1'
   */
  1,

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

  /* Expression: false
   * Referenced by: '<Root>/Constant16'
   */
  0,

  /* Expression: false
   * Referenced by: '<Root>/Constant17'
   */
  0,

  /* Expression: uint8(zeros(8,1))
   * Referenced by: '<Root>/Constant15'
   */
  { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U },

  /* Expression: uint8(zeros(6,1))
   * Referenced by: '<Root>/Constant14'
   */
  { 0U, 0U, 0U, 0U, 0U, 0U },

  /* Computed Parameter: UnitDelay_InitialCondition
   * Referenced by: '<Root>/Unit Delay'
   */
  0U,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<Root>/Unit Delay1'
   */
  0U
};
