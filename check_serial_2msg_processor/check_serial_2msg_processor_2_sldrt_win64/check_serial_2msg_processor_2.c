/*
 * check_serial_2msg_processor_2.c
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
#include "check_serial_2msg_processor_2_dt.h"

/* options for Simulink Desktop Real-Time board 0 */
static double SLDRTBoardOptions0[] = {
  115200.0,
  8.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
};

/* list of Simulink Desktop Real-Time timers */
const int SLDRTTimerCount = 1;
const double SLDRTTimers[2] = {
  0.01, 0.0,
};

/* list of Simulink Desktop Real-Time boards */
const int SLDRTBoardCount = 1;
SLDRTBOARD SLDRTBoards[1] = {
  { "Standard_Devices/Serial_Port", 5U, 8, SLDRTBoardOptions0 },
};

/* Block signals (default storage) */
B_check_serial_2msg_processor_2_T check_serial_2msg_processor_2_B;

/* Block states (default storage) */
DW_check_serial_2msg_processor_2_T check_serial_2msg_processor_2_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_check_serial_2msg_processor_2_T check_serial_2msg_processor_2_PrevZCX;

/* Real-time model */
static RT_MODEL_check_serial_2msg_processor_2_T check_serial_2msg_processor_2_M_;
RT_MODEL_check_serial_2msg_processor_2_T *const check_serial_2msg_processor_2_M =
  &check_serial_2msg_processor_2_M_;

/*
 * System initialize for enable_with_trigger system:
 *    '<S5>/Triggered Subsystem'
 *    '<S6>/Triggered Subsystem'
 *    '<S7>/Triggered Subsystem'
 */
void check_serial_2msg_processor_2_TriggeredSubsystem_Init
  (B_TriggeredSubsystem_check_serial_2msg_processor_2_T *localB,
   P_TriggeredSubsystem_check_serial_2msg_processor_2_T *localP)
{
  /* SystemInitialize for Outport: '<S11>/tx' incorporates:
   *  Inport: '<S11>/rx'
   */
  localB->rx[0] = localP->tx_Y0;
  localB->rx[1] = localP->tx_Y0;
  localB->rx[2] = localP->tx_Y0;
  localB->rx[3] = localP->tx_Y0;
}

/*
 * Output and update for enable_with_trigger system:
 *    '<S5>/Triggered Subsystem'
 *    '<S6>/Triggered Subsystem'
 *    '<S7>/Triggered Subsystem'
 */
void check_serial_2msg_processor_2_TriggeredSubsystem(boolean_T rtu_Enable,
  boolean_T rtu_Trigger, const uint8_T rtu_rx[4],
  B_TriggeredSubsystem_check_serial_2msg_processor_2_T *localB,
  DW_TriggeredSubsystem_check_serial_2msg_processor_2_T *localDW,
  ZCE_TriggeredSubsystem_check_serial_2msg_processor_2_T *localZCE)
{
  /* Outputs for Enabled and Triggered SubSystem: '<S5>/Triggered Subsystem' incorporates:
   *  EnablePort: '<S11>/Enable'
   *  TriggerPort: '<S11>/Trigger'
   */
  if (rtu_Enable && (rtu_Trigger && (localZCE->TriggeredSubsystem_Trig_ZCE !=
        POS_ZCSIG))) {
    /* Inport: '<S11>/rx' */
    localB->rx[0] = rtu_rx[0];
    localB->rx[1] = rtu_rx[1];
    localB->rx[2] = rtu_rx[2];
    localB->rx[3] = rtu_rx[3];
    localDW->TriggeredSubsystem_SubsysRanBC = 4;
  }

  localZCE->TriggeredSubsystem_Trig_ZCE = rtu_Trigger;

  /* End of Outputs for SubSystem: '<S5>/Triggered Subsystem' */
}

/* Model output function */
void check_serial_2msg_processor_2_output(void)
{
  real_T tmp;
  int32_T i;
  int32_T j;
  uint32_T qY;
  uint16_T sum;
  uint8_T array[7];
  uint8_T rtb_TmpSignalConversionAtSFunctionInport1[6];
  uint8_T data_vector_index;
  uint8_T msg_id;
  uint8_T packet_size;
  uint8_T s3_iter;
  uint8_T state;
  boolean_T loopCond;

  /* Reset subsysRan breadcrumbs */
  srClearBC
    (check_serial_2msg_processor_2_DW.TriggeredSubsystem.TriggeredSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(check_serial_2msg_processor_2_DW.message_rx_looper_SubsysRanBC);

  /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
   *  Constant: '<Root>/Constant'
   */
  tmp = floor(check_serial_2msg_processor_2_P.Constant_Value_i);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion' */
  check_serial_2msg_processor_2_B.DataTypeConversion = (uint8_T)(tmp < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  tmp = floor(check_serial_2msg_processor_2_P.Constant2_Value_g);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  check_serial_2msg_processor_2_B.DataTypeConversion1 = (uint8_T)(tmp < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion2' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  tmp = floor(check_serial_2msg_processor_2_P.Constant3_Value_k);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  check_serial_2msg_processor_2_B.DataTypeConversion2 = (uint8_T)(tmp < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
   *  Constant: '<Root>/Constant4'
   */
  tmp = floor(check_serial_2msg_processor_2_P.Constant4_Value_b);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion3' */
  check_serial_2msg_processor_2_B.DataTypeConversion3 = (uint8_T)(tmp < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Constant: '<Root>/Constant5'
   */
  tmp = floor(check_serial_2msg_processor_2_P.Constant5_Value_g);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion4' */
  check_serial_2msg_processor_2_B.DataTypeConversion4 = (uint8_T)(tmp < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  tmp = floor(check_serial_2msg_processor_2_P.Constant1_Value_g);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion5' */
  check_serial_2msg_processor_2_B.DataTypeConversion5 = (uint8_T)(tmp < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* S-Function (sldrtpo): '<Root>/Packet Output' */
  /* S-Function Block: <Root>/Packet Output */

  /* no code required */

  /* S-Function (sldrtpo): '<Root>/Packet Output1' */
  /* S-Function Block: <Root>/Packet Output1 */

  /* no code required */

  /* DataTypeConversion: '<Root>/Data Type Conversion10' incorporates:
   *  Constant: '<Root>/Constant11'
   */
  tmp = floor(check_serial_2msg_processor_2_P.Constant11_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion10' */
  check_serial_2msg_processor_2_B.DataTypeConversion10 = (uint8_T)(tmp < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion11' incorporates:
   *  Constant: '<Root>/Constant7'
   */
  tmp = floor(check_serial_2msg_processor_2_P.Constant7_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion11' */
  check_serial_2msg_processor_2_B.DataTypeConversion11 = (uint8_T)(tmp < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion12' incorporates:
   *  Constant: '<Root>/Constant12'
   */
  tmp = floor(check_serial_2msg_processor_2_P.Constant12_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion12' */
  check_serial_2msg_processor_2_B.DataTypeConversion12 = (uint8_T)(tmp < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion13' incorporates:
   *  Constant: '<Root>/Constant13'
   */
  tmp = floor(check_serial_2msg_processor_2_P.Constant13_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion13' */
  check_serial_2msg_processor_2_B.DataTypeConversion13 = (uint8_T)(tmp < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion6' incorporates:
   *  Constant: '<Root>/Constant6'
   */
  tmp = floor(check_serial_2msg_processor_2_P.Constant6_Value_a);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion6' */
  check_serial_2msg_processor_2_B.DataTypeConversion6 = (uint8_T)(tmp < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion7' incorporates:
   *  Constant: '<Root>/Constant8'
   */
  tmp = floor(check_serial_2msg_processor_2_P.Constant8_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion7' */
  check_serial_2msg_processor_2_B.DataTypeConversion7 = (uint8_T)(tmp < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion8' incorporates:
   *  Constant: '<Root>/Constant9'
   */
  tmp = floor(check_serial_2msg_processor_2_P.Constant9_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion8' */
  check_serial_2msg_processor_2_B.DataTypeConversion8 = (uint8_T)(tmp < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<Root>/Data Type Conversion9' incorporates:
   *  Constant: '<Root>/Constant10'
   */
  tmp = floor(check_serial_2msg_processor_2_P.Constant10_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion9' */
  check_serial_2msg_processor_2_B.DataTypeConversion9 = (uint8_T)(tmp < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* Outputs for Iterator SubSystem: '<S2>/message_rx_looper' incorporates:
   *  WhileIterator: '<S3>/While Iterator'
   */
  s3_iter = 1U;

  /* Constant: '<S2>/Constant18' */
  if (check_serial_2msg_processor_2_P.Constant18_Value_a) {
    /* DataTypeConversion: '<S3>/Data Type Conversion' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    tmp = floor(check_serial_2msg_processor_2_P.Constant1_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    /* SignalConversion generated from: '<S4>/ SFunction ' incorporates:
     *  DataTypeConversion: '<S3>/Data Type Conversion'
     *  MATLAB Function: '<S3>/MATLAB Function'
     */
    rtb_TmpSignalConversionAtSFunctionInport1[0] = (uint8_T)(tmp < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* DataTypeConversion: '<S3>/Data Type Conversion1' incorporates:
     *  Constant: '<S3>/Constant3'
     */
    tmp = floor(check_serial_2msg_processor_2_P.Constant3_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    /* SignalConversion generated from: '<S4>/ SFunction ' incorporates:
     *  DataTypeConversion: '<S3>/Data Type Conversion1'
     *  MATLAB Function: '<S3>/MATLAB Function'
     */
    rtb_TmpSignalConversionAtSFunctionInport1[1] = (uint8_T)(tmp < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* DataTypeConversion: '<S3>/Data Type Conversion2' incorporates:
     *  Constant: '<S3>/Constant4'
     */
    tmp = floor(check_serial_2msg_processor_2_P.Constant4_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    /* SignalConversion generated from: '<S4>/ SFunction ' incorporates:
     *  DataTypeConversion: '<S3>/Data Type Conversion2'
     *  MATLAB Function: '<S3>/MATLAB Function'
     */
    rtb_TmpSignalConversionAtSFunctionInport1[2] = (uint8_T)(tmp < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* DataTypeConversion: '<S3>/Data Type Conversion3' incorporates:
     *  Constant: '<S3>/Constant5'
     */
    tmp = floor(check_serial_2msg_processor_2_P.Constant5_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    /* SignalConversion generated from: '<S4>/ SFunction ' incorporates:
     *  DataTypeConversion: '<S3>/Data Type Conversion3'
     *  MATLAB Function: '<S3>/MATLAB Function'
     */
    rtb_TmpSignalConversionAtSFunctionInport1[3] = (uint8_T)(tmp < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* DataTypeConversion: '<S3>/Data Type Conversion4' incorporates:
     *  Constant: '<S3>/Constant6'
     */
    tmp = floor(check_serial_2msg_processor_2_P.Constant6_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    /* SignalConversion generated from: '<S4>/ SFunction ' incorporates:
     *  DataTypeConversion: '<S3>/Data Type Conversion4'
     *  MATLAB Function: '<S3>/MATLAB Function'
     */
    rtb_TmpSignalConversionAtSFunctionInport1[4] = (uint8_T)(tmp < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

    /* DataTypeConversion: '<S3>/Data Type Conversion5' incorporates:
     *  Constant: '<S3>/Constant2'
     */
    tmp = floor(check_serial_2msg_processor_2_P.Constant2_Value);
    if (rtIsNaN(tmp) || rtIsInf(tmp)) {
      tmp = 0.0;
    } else {
      tmp = fmod(tmp, 256.0);
    }

    /* SignalConversion generated from: '<S4>/ SFunction ' incorporates:
     *  DataTypeConversion: '<S3>/Data Type Conversion5'
     *  MATLAB Function: '<S3>/MATLAB Function'
     */
    rtb_TmpSignalConversionAtSFunctionInport1[5] = (uint8_T)(tmp < 0.0 ?
      (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);
  }

  loopCond = check_serial_2msg_processor_2_P.Constant18_Value_a;

  /* End of Constant: '<S2>/Constant18' */
  while (loopCond && (s3_iter <= 144)) {
    /* Outputs for Iterator SubSystem: '<S2>/message_rx_looper' incorporates:
     *  WhileIterator: '<S3>/While Iterator'
     */
    /* SystemInitialize for Iterator SubSystem: '<S2>/message_rx_looper' incorporates:
     *  WhileIterator: '<S3>/While Iterator'
     */
    check_serial_2msg_processor_2_B.WhileIterator = s3_iter;

    /* S-Function (sldrtpi): '<S8>/Packet Input2' */
    /* S-Function Block: <S8>/Packet Input2 */
    {
      uint8_T indata[1U];
      int status = RTBIO_DriverIO(0, STREAMINPUT, IOREAD, 1U,
        &check_serial_2msg_processor_2_P.PacketInput2_PacketID, (double*) indata,
        NULL);
      check_serial_2msg_processor_2_B.missed_ticks = 0;/* Missed Ticks value is always zero */
      check_serial_2msg_processor_2_B.error = (status>>1) & 0x1;/* Data Error port */
      check_serial_2msg_processor_2_B.available = status & 0x1;/* Data Ready port */
      if (status & 0x1) {
        RTWin_ANYTYPEPTR indp;
        indp.p_uint8_T = indata;
        check_serial_2msg_processor_2_B.data = *indp.p_uint8_T++;
      }
    }

    /* MATLAB Function: '<S9>/MATLAB Function' incorporates:
     *  UnitDelay: '<S9>/Unit Delay'
     *  UnitDelay: '<S9>/Unit Delay1'
     *  UnitDelay: '<S9>/Unit Delay2'
     *  UnitDelay: '<S9>/Unit Delay3'
     *  UnitDelay: '<S9>/Unit Delay4'
     *  UnitDelay: '<S9>/Unit Delay5'
     */
    state = check_serial_2msg_processor_2_DW.UnitDelay_DSTATE;
    check_serial_2msg_processor_2_B.data_vector[0] =
      check_serial_2msg_processor_2_DW.UnitDelay1_DSTATE[0];
    check_serial_2msg_processor_2_B.data_vector[1] =
      check_serial_2msg_processor_2_DW.UnitDelay1_DSTATE[1];
    check_serial_2msg_processor_2_B.data_vector[2] =
      check_serial_2msg_processor_2_DW.UnitDelay1_DSTATE[2];
    check_serial_2msg_processor_2_B.data_vector[3] =
      check_serial_2msg_processor_2_DW.UnitDelay1_DSTATE[3];
    data_vector_index = check_serial_2msg_processor_2_DW.UnitDelay2_DSTATE_b;
    packet_size = check_serial_2msg_processor_2_DW.UnitDelay3_DSTATE;
    msg_id = check_serial_2msg_processor_2_DW.UnitDelay4_DSTATE;
    check_serial_2msg_processor_2_B.new_data =
      check_serial_2msg_processor_2_DW.UnitDelay5_DSTATE;
    check_serial_2msg_processor_2_B.crc = 0U;
    switch (check_serial_2msg_processor_2_DW.UnitDelay_DSTATE) {
     case 1U:
      if (check_serial_2msg_processor_2_B.available &&
          (check_serial_2msg_processor_2_B.data == 239)) {
        i = (int32_T)(check_serial_2msg_processor_2_DW.UnitDelay_DSTATE + 1U);
        if (check_serial_2msg_processor_2_DW.UnitDelay_DSTATE + 1U > 255U) {
          i = 255;
        }

        state = (uint8_T)i;
        check_serial_2msg_processor_2_B.new_data = false;
        msg_id = 0U;
        check_serial_2msg_processor_2_B.data_vector[0] = 0U;
        check_serial_2msg_processor_2_B.data_vector[1] = 0U;
        check_serial_2msg_processor_2_B.data_vector[2] = 0U;
        check_serial_2msg_processor_2_B.data_vector[3] = 0U;
        data_vector_index = 1U;
        packet_size = 0U;
      }
      break;

     case 2U:
      if (check_serial_2msg_processor_2_B.available) {
        qY = check_serial_2msg_processor_2_B.data - 1U;
        if (check_serial_2msg_processor_2_B.data - 1U >
            check_serial_2msg_processor_2_B.data) {
          qY = 0U;
        }

        packet_size = (uint8_T)qY;
        i = (int32_T)(check_serial_2msg_processor_2_DW.UnitDelay_DSTATE + 1U);
        if (check_serial_2msg_processor_2_DW.UnitDelay_DSTATE + 1U > 255U) {
          i = 255;
        }

        state = (uint8_T)i;
      }
      break;

     case 3U:
      if (check_serial_2msg_processor_2_B.available) {
        msg_id = check_serial_2msg_processor_2_B.data;
        i = (int32_T)(check_serial_2msg_processor_2_DW.UnitDelay_DSTATE + 1U);
        if (check_serial_2msg_processor_2_DW.UnitDelay_DSTATE + 1U > 255U) {
          i = 255;
        }

        state = (uint8_T)i;
      }
      break;

     case 4U:
      if (check_serial_2msg_processor_2_B.available) {
        check_serial_2msg_processor_2_B.data_vector[check_serial_2msg_processor_2_DW.UnitDelay2_DSTATE_b
          - 1] = check_serial_2msg_processor_2_B.data;
        if (check_serial_2msg_processor_2_DW.UnitDelay2_DSTATE_b ==
            check_serial_2msg_processor_2_DW.UnitDelay3_DSTATE) {
          i = (int32_T)(check_serial_2msg_processor_2_DW.UnitDelay_DSTATE + 1U);
          if (check_serial_2msg_processor_2_DW.UnitDelay_DSTATE + 1U > 255U) {
            i = 255;
          }

          state = (uint8_T)i;
        }

        i = (int32_T)(check_serial_2msg_processor_2_DW.UnitDelay2_DSTATE_b + 1U);
        if (check_serial_2msg_processor_2_DW.UnitDelay2_DSTATE_b + 1U > 255U) {
          i = 255;
        }

        data_vector_index = (uint8_T)i;
      }
      break;

     case 5U:
      if (check_serial_2msg_processor_2_B.available) {
        array[0] = 239U;
        i = (int32_T)(check_serial_2msg_processor_2_DW.UnitDelay3_DSTATE + 1U);
        if (check_serial_2msg_processor_2_DW.UnitDelay3_DSTATE + 1U > 255U) {
          i = 255;
        }

        array[1] = (uint8_T)i;
        array[2] = check_serial_2msg_processor_2_DW.UnitDelay4_DSTATE;
        array[3] = check_serial_2msg_processor_2_DW.UnitDelay1_DSTATE[0];
        array[4] = check_serial_2msg_processor_2_DW.UnitDelay1_DSTATE[1];
        array[5] = check_serial_2msg_processor_2_DW.UnitDelay1_DSTATE[2];
        array[6] = check_serial_2msg_processor_2_DW.UnitDelay1_DSTATE[3];
        i = (int32_T)(check_serial_2msg_processor_2_DW.UnitDelay3_DSTATE + 3U);
        if (check_serial_2msg_processor_2_DW.UnitDelay3_DSTATE + 3U > 255U) {
          i = 255;
        }

        sum = 0U;
        for (j = 0; j < (uint8_T)i; j++) {
          qY = (uint32_T)sum + array[j];
          if (qY > 65535U) {
            qY = 65535U;
          }

          sum = (uint16_T)qY;
        }

        if (sum > 255) {
          sum = (uint16_T)((int32_T)((uint32_T)sum >> 8) + (sum & 255));
        }

        if (sum > 255) {
          sum = 255U;
        }

        check_serial_2msg_processor_2_B.crc = (uint8_T)sum;
        if ((uint8_T)sum != 0) {
          check_serial_2msg_processor_2_B.new_data = true;
          state = 1U;
        }
      }
      break;
    }

    /* End of MATLAB Function: '<S9>/MATLAB Function' */
    /* Outputs for Enabled and Triggered SubSystem: '<S6>/Triggered Subsystem' */
    /* RelationalOperator: '<S6>/Relational Operator' incorporates:
     *  Constant: '<S6>/Constant'
     */
    check_serial_2msg_processor_2_TriggeredSubsystem(msg_id ==
      check_serial_2msg_processor_2_P.Constant_Value,
      check_serial_2msg_processor_2_B.new_data,
      check_serial_2msg_processor_2_B.data_vector,
      &check_serial_2msg_processor_2_B.TriggeredSubsystem_i,
      &check_serial_2msg_processor_2_DW.TriggeredSubsystem_i,
      &check_serial_2msg_processor_2_PrevZCX.TriggeredSubsystem_i);

    /* End of Outputs for SubSystem: '<S6>/Triggered Subsystem' */

    /* Outputs for Enabled and Triggered SubSystem: '<S7>/Triggered Subsystem' */
    /* RelationalOperator: '<S7>/Relational Operator' incorporates:
     *  Constant: '<S7>/Constant'
     */
    check_serial_2msg_processor_2_TriggeredSubsystem(msg_id ==
      check_serial_2msg_processor_2_P.Constant_Value_m,
      check_serial_2msg_processor_2_B.new_data,
      check_serial_2msg_processor_2_B.data_vector,
      &check_serial_2msg_processor_2_B.TriggeredSubsystem_h,
      &check_serial_2msg_processor_2_DW.TriggeredSubsystem_h,
      &check_serial_2msg_processor_2_PrevZCX.TriggeredSubsystem_h);

    /* End of Outputs for SubSystem: '<S7>/Triggered Subsystem' */

    /* Outputs for Enabled and Triggered SubSystem: '<S5>/Triggered Subsystem' */
    /* Constant: '<S5>/Constant16' */
    check_serial_2msg_processor_2_TriggeredSubsystem
      (check_serial_2msg_processor_2_P.Constant16_Value,
       check_serial_2msg_processor_2_B.new_data,
       check_serial_2msg_processor_2_B.data_vector,
       &check_serial_2msg_processor_2_B.TriggeredSubsystem,
       &check_serial_2msg_processor_2_DW.TriggeredSubsystem,
       &check_serial_2msg_processor_2_PrevZCX.TriggeredSubsystem);

    /* End of Outputs for SubSystem: '<S5>/Triggered Subsystem' */

    /* MATLAB Function: '<S10>/MATLAB Function' incorporates:
     *  DiscreteIntegrator: '<S10>/Accumulator'
     *  UnitDelay: '<S10>/Unit Delay'
     */
    memcpy(&check_serial_2msg_processor_2_B.y[0],
           &check_serial_2msg_processor_2_DW.UnitDelay_DSTATE_i[0], 144U *
           sizeof(uint8_T));
    check_serial_2msg_processor_2_B.y[check_serial_2msg_processor_2_B.WhileIterator
      - 1] = check_serial_2msg_processor_2_DW.Accumulator_DSTATE_n;

    /* MATLAB Function: '<S3>/MATLAB Function' incorporates:
     *  Constant: '<S3>/Constant7'
     */
    sum = 0U;
    for (j = 0; j < check_serial_2msg_processor_2_P.Constant7_Value_i; j++) {
      qY = (uint32_T)sum + rtb_TmpSignalConversionAtSFunctionInport1[j];
      if (qY > 65535U) {
        qY = 65535U;
      }

      sum = (uint16_T)qY;
    }

    if (sum > 255) {
      sum = (uint16_T)((int32_T)((uint32_T)sum >> 8) + (sum & 255));
    }

    if (sum > 255) {
      sum = 255U;
    }

    check_serial_2msg_processor_2_B.sum_eight_bit = (uint8_T)sum;

    /* Update for UnitDelay: '<S9>/Unit Delay' */
    check_serial_2msg_processor_2_DW.UnitDelay_DSTATE = state;

    /* Update for UnitDelay: '<S9>/Unit Delay1' */
    check_serial_2msg_processor_2_DW.UnitDelay1_DSTATE[0] =
      check_serial_2msg_processor_2_B.data_vector[0];
    check_serial_2msg_processor_2_DW.UnitDelay1_DSTATE[1] =
      check_serial_2msg_processor_2_B.data_vector[1];
    check_serial_2msg_processor_2_DW.UnitDelay1_DSTATE[2] =
      check_serial_2msg_processor_2_B.data_vector[2];
    check_serial_2msg_processor_2_DW.UnitDelay1_DSTATE[3] =
      check_serial_2msg_processor_2_B.data_vector[3];

    /* Update for UnitDelay: '<S9>/Unit Delay2' */
    check_serial_2msg_processor_2_DW.UnitDelay2_DSTATE_b = data_vector_index;

    /* Update for UnitDelay: '<S9>/Unit Delay3' */
    check_serial_2msg_processor_2_DW.UnitDelay3_DSTATE = packet_size;

    /* Update for UnitDelay: '<S9>/Unit Delay4' */
    check_serial_2msg_processor_2_DW.UnitDelay4_DSTATE = msg_id;

    /* Update for UnitDelay: '<S9>/Unit Delay5' */
    check_serial_2msg_processor_2_DW.UnitDelay5_DSTATE =
      check_serial_2msg_processor_2_B.new_data;

    /* Update for UnitDelay: '<S10>/Unit Delay' */
    memcpy(&check_serial_2msg_processor_2_DW.UnitDelay_DSTATE_i[0],
           &check_serial_2msg_processor_2_B.y[0], 144U * sizeof(uint8_T));

    /* Update for DiscreteIntegrator: '<S10>/Accumulator' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion'
     */
    check_serial_2msg_processor_2_DW.Accumulator_DSTATE_n = (uint8_T)((uint32_T)
      check_serial_2msg_processor_2_DW.Accumulator_DSTATE_n +
      check_serial_2msg_processor_2_B.available);
    srUpdateBC(check_serial_2msg_processor_2_DW.message_rx_looper_SubsysRanBC);

    /* Constant: '<S3>/Constant' */
    loopCond = (check_serial_2msg_processor_2_P.Constant_Value_j != 0.0);
    s3_iter++;
  }

  /* End of Outputs for SubSystem: '<S2>/message_rx_looper' */
  /* S-Function (sldrttet): '<Root>/Execution Time' */
  /* S-Function Block: <Root>/Execution Time */
  {
    RTBIO_DriverIO(INTERNALIO, (IODEVICE) RTBIOTOTALEXECUTIONTIME, IOREAD, 0, 0,
                   &check_serial_2msg_processor_2_B.ExecutionTime, 0);
  }

  /* DiscreteIntegrator: '<S1>/Accumulator' */
  check_serial_2msg_processor_2_B.Accumulator =
    check_serial_2msg_processor_2_DW.Accumulator_DSTATE;

  /* Product: '<S1>/Divide' incorporates:
   *  Bias: '<S1>/Bias'
   *  Product: '<S1>/Product'
   *  Sum: '<S1>/Add'
   *  UnitDelay: '<S1>/Unit Delay2'
   */
  check_serial_2msg_processor_2_B.Divide =
    ((check_serial_2msg_processor_2_B.Accumulator +
      check_serial_2msg_processor_2_P.Bias_Bias) *
     check_serial_2msg_processor_2_DW.UnitDelay2_DSTATE +
     check_serial_2msg_processor_2_B.ExecutionTime) /
    check_serial_2msg_processor_2_B.Accumulator;
}

/* Model update function */
void check_serial_2msg_processor_2_update(void)
{
  /* Update for S-Function (sldrtpo): '<Root>/Packet Output' */

  /* S-Function Block: <Root>/Packet Output */
  {
    uint8_T outdata[6U];
    RTWin_ANYTYPEPTR outdp;
    outdp.p_uint8_T = outdata;

    {
      uint8_T pktout = check_serial_2msg_processor_2_B.DataTypeConversion;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = check_serial_2msg_processor_2_B.DataTypeConversion1;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = check_serial_2msg_processor_2_B.DataTypeConversion2;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = check_serial_2msg_processor_2_B.DataTypeConversion3;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = check_serial_2msg_processor_2_B.DataTypeConversion4;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = check_serial_2msg_processor_2_B.DataTypeConversion5;
      *outdp.p_uint8_T++ = pktout;
    }

    RTBIO_DriverIO(0, STREAMOUTPUT, IOWRITE, 6U,
                   &check_serial_2msg_processor_2_P.PacketOutput_PacketID,
                   (double*) outdata, NULL);
  }

  /* Update for S-Function (sldrtpo): '<Root>/Packet Output1' */

  /* S-Function Block: <Root>/Packet Output1 */
  {
    uint8_T outdata[8U];
    RTWin_ANYTYPEPTR outdp;
    outdp.p_uint8_T = outdata;

    {
      uint8_T pktout = check_serial_2msg_processor_2_B.DataTypeConversion6;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = check_serial_2msg_processor_2_B.DataTypeConversion7;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = check_serial_2msg_processor_2_B.DataTypeConversion8;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = check_serial_2msg_processor_2_B.DataTypeConversion9;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = check_serial_2msg_processor_2_B.DataTypeConversion10;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = check_serial_2msg_processor_2_B.DataTypeConversion11;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = check_serial_2msg_processor_2_B.DataTypeConversion12;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = check_serial_2msg_processor_2_B.DataTypeConversion13;
      *outdp.p_uint8_T++ = pktout;
    }

    RTBIO_DriverIO(0, STREAMOUTPUT, IOWRITE, 8U,
                   &check_serial_2msg_processor_2_P.PacketOutput1_PacketID,
                   (double*) outdata, NULL);
  }

  /* Update for UnitDelay: '<S1>/Unit Delay2' */
  check_serial_2msg_processor_2_DW.UnitDelay2_DSTATE =
    check_serial_2msg_processor_2_B.Divide;

  /* Update for DiscreteIntegrator: '<S1>/Accumulator' incorporates:
   *  Constant: '<S1>/Constant18'
   */
  check_serial_2msg_processor_2_DW.Accumulator_DSTATE +=
    check_serial_2msg_processor_2_P.Accumulator_gainval *
    check_serial_2msg_processor_2_P.Constant18_Value;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++check_serial_2msg_processor_2_M->Timing.clockTick0)) {
    ++check_serial_2msg_processor_2_M->Timing.clockTickH0;
  }

  check_serial_2msg_processor_2_M->Timing.t[0] =
    check_serial_2msg_processor_2_M->Timing.clockTick0 *
    check_serial_2msg_processor_2_M->Timing.stepSize0 +
    check_serial_2msg_processor_2_M->Timing.clockTickH0 *
    check_serial_2msg_processor_2_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void check_serial_2msg_processor_2_initialize(void)
{
  /* Start for S-Function (sldrtpo): '<Root>/Packet Output' */

  /* S-Function Block: <Root>/Packet Output */
  /* no initial value should be set */

  /* Start for S-Function (sldrtpo): '<Root>/Packet Output1' */

  /* S-Function Block: <Root>/Packet Output1 */
  /* no initial value should be set */
  check_serial_2msg_processor_2_PrevZCX.TriggeredSubsystem_h.TriggeredSubsystem_Trig_ZCE
    = POS_ZCSIG;
  check_serial_2msg_processor_2_PrevZCX.TriggeredSubsystem_i.TriggeredSubsystem_Trig_ZCE
    = POS_ZCSIG;
  check_serial_2msg_processor_2_PrevZCX.TriggeredSubsystem.TriggeredSubsystem_Trig_ZCE
    = POS_ZCSIG;

  {
    int32_T i;

    /* InitializeConditions for UnitDelay: '<S1>/Unit Delay2' */
    check_serial_2msg_processor_2_DW.UnitDelay2_DSTATE =
      check_serial_2msg_processor_2_P.UnitDelay2_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<S1>/Accumulator' */
    check_serial_2msg_processor_2_DW.Accumulator_DSTATE =
      check_serial_2msg_processor_2_P.Accumulator_IC;

    /* SystemInitialize for Iterator SubSystem: '<S2>/message_rx_looper' incorporates:
     *  WhileIterator: '<S3>/While Iterator'
     */
    /* InitializeConditions for UnitDelay: '<S9>/Unit Delay' */
    check_serial_2msg_processor_2_DW.UnitDelay_DSTATE =
      check_serial_2msg_processor_2_P.UnitDelay_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S9>/Unit Delay1' */
    check_serial_2msg_processor_2_DW.UnitDelay1_DSTATE[0] =
      check_serial_2msg_processor_2_P.UnitDelay1_InitialCondition;
    check_serial_2msg_processor_2_DW.UnitDelay1_DSTATE[1] =
      check_serial_2msg_processor_2_P.UnitDelay1_InitialCondition;
    check_serial_2msg_processor_2_DW.UnitDelay1_DSTATE[2] =
      check_serial_2msg_processor_2_P.UnitDelay1_InitialCondition;
    check_serial_2msg_processor_2_DW.UnitDelay1_DSTATE[3] =
      check_serial_2msg_processor_2_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S9>/Unit Delay2' */
    check_serial_2msg_processor_2_DW.UnitDelay2_DSTATE_b =
      check_serial_2msg_processor_2_P.UnitDelay2_InitialCondition_m;

    /* InitializeConditions for UnitDelay: '<S9>/Unit Delay3' */
    check_serial_2msg_processor_2_DW.UnitDelay3_DSTATE =
      check_serial_2msg_processor_2_P.UnitDelay3_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S9>/Unit Delay4' */
    check_serial_2msg_processor_2_DW.UnitDelay4_DSTATE =
      check_serial_2msg_processor_2_P.UnitDelay4_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S9>/Unit Delay5' */
    check_serial_2msg_processor_2_DW.UnitDelay5_DSTATE =
      check_serial_2msg_processor_2_P.UnitDelay5_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S10>/Unit Delay' */
    for (i = 0; i < 144; i++) {
      check_serial_2msg_processor_2_DW.UnitDelay_DSTATE_i[i] =
        check_serial_2msg_processor_2_P.UnitDelay_InitialCondition_h;
    }

    /* End of InitializeConditions for UnitDelay: '<S10>/Unit Delay' */

    /* InitializeConditions for DiscreteIntegrator: '<S10>/Accumulator' */
    check_serial_2msg_processor_2_DW.Accumulator_DSTATE_n =
      check_serial_2msg_processor_2_P.Accumulator_IC_c;

    /* SystemInitialize for Enabled and Triggered SubSystem: '<S6>/Triggered Subsystem' */
    check_serial_2msg_processor_2_TriggeredSubsystem_Init
      (&check_serial_2msg_processor_2_B.TriggeredSubsystem_i,
       &check_serial_2msg_processor_2_P.TriggeredSubsystem_i);

    /* End of SystemInitialize for SubSystem: '<S6>/Triggered Subsystem' */

    /* SystemInitialize for Enabled and Triggered SubSystem: '<S7>/Triggered Subsystem' */
    check_serial_2msg_processor_2_TriggeredSubsystem_Init
      (&check_serial_2msg_processor_2_B.TriggeredSubsystem_h,
       &check_serial_2msg_processor_2_P.TriggeredSubsystem_h);

    /* End of SystemInitialize for SubSystem: '<S7>/Triggered Subsystem' */

    /* SystemInitialize for Enabled and Triggered SubSystem: '<S5>/Triggered Subsystem' */
    check_serial_2msg_processor_2_TriggeredSubsystem_Init
      (&check_serial_2msg_processor_2_B.TriggeredSubsystem,
       &check_serial_2msg_processor_2_P.TriggeredSubsystem);

    /* End of SystemInitialize for SubSystem: '<S5>/Triggered Subsystem' */

    /* SystemInitialize for Outport: '<S3>/iterator' */
    check_serial_2msg_processor_2_B.WhileIterator =
      check_serial_2msg_processor_2_P.iterator_Y0;

    /* SystemInitialize for Outport: '<S3>/y' */
    for (i = 0; i < 144; i++) {
      check_serial_2msg_processor_2_B.y[i] =
        check_serial_2msg_processor_2_P.y_Y0;
    }

    /* End of SystemInitialize for Outport: '<S3>/y' */
    /* End of SystemInitialize for SubSystem: '<S2>/message_rx_looper' */
  }
}

/* Model terminate function */
void check_serial_2msg_processor_2_terminate(void)
{
  /* Terminate for S-Function (sldrtpo): '<Root>/Packet Output' */

  /* S-Function Block: <Root>/Packet Output */
  /* no initial value should be set */

  /* Terminate for S-Function (sldrtpo): '<Root>/Packet Output1' */

  /* S-Function Block: <Root>/Packet Output1 */
  /* no initial value should be set */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  check_serial_2msg_processor_2_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  check_serial_2msg_processor_2_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  check_serial_2msg_processor_2_initialize();
}

void MdlTerminate(void)
{
  check_serial_2msg_processor_2_terminate();
}

/* Registration function */
RT_MODEL_check_serial_2msg_processor_2_T *check_serial_2msg_processor_2(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  check_serial_2msg_processor_2_P.PacketInput2_MaxMissedTicks = rtInf;
  check_serial_2msg_processor_2_P.PacketOutput_MaxMissedTicks = rtInf;
  check_serial_2msg_processor_2_P.PacketOutput1_MaxMissedTicks = rtInf;

  /* initialize real-time model */
  (void) memset((void *)check_serial_2msg_processor_2_M, 0,
                sizeof(RT_MODEL_check_serial_2msg_processor_2_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      check_serial_2msg_processor_2_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    check_serial_2msg_processor_2_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    check_serial_2msg_processor_2_M->Timing.sampleTimes =
      (&check_serial_2msg_processor_2_M->Timing.sampleTimesArray[0]);
    check_serial_2msg_processor_2_M->Timing.offsetTimes =
      (&check_serial_2msg_processor_2_M->Timing.offsetTimesArray[0]);

    /* task periods */
    check_serial_2msg_processor_2_M->Timing.sampleTimes[0] = (0.01);

    /* task offsets */
    check_serial_2msg_processor_2_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(check_serial_2msg_processor_2_M,
             &check_serial_2msg_processor_2_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      check_serial_2msg_processor_2_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    check_serial_2msg_processor_2_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(check_serial_2msg_processor_2_M, 100.0);
  check_serial_2msg_processor_2_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  check_serial_2msg_processor_2_M->Sizes.checksums[0] = (3422502396U);
  check_serial_2msg_processor_2_M->Sizes.checksums[1] = (4252836161U);
  check_serial_2msg_processor_2_M->Sizes.checksums[2] = (1864369366U);
  check_serial_2msg_processor_2_M->Sizes.checksums[3] = (1484850985U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[8];
    check_serial_2msg_processor_2_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &check_serial_2msg_processor_2_DW.message_rx_looper_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &check_serial_2msg_processor_2_DW.TriggeredSubsystem.TriggeredSubsystem_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &check_serial_2msg_processor_2_DW.TriggeredSubsystem_i.TriggeredSubsystem_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &check_serial_2msg_processor_2_DW.TriggeredSubsystem_h.TriggeredSubsystem_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
      &check_serial_2msg_processor_2_DW.message_rx_looper_SubsysRanBC;
    systemRan[6] = (sysRanDType *)
      &check_serial_2msg_processor_2_DW.message_rx_looper_SubsysRanBC;
    systemRan[7] = (sysRanDType *)
      &check_serial_2msg_processor_2_DW.message_rx_looper_SubsysRanBC;
    rteiSetModelMappingInfoPtr(check_serial_2msg_processor_2_M->extModeInfo,
      &check_serial_2msg_processor_2_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(check_serial_2msg_processor_2_M->extModeInfo,
                        check_serial_2msg_processor_2_M->Sizes.checksums);
    rteiSetTPtr(check_serial_2msg_processor_2_M->extModeInfo, rtmGetTPtr
                (check_serial_2msg_processor_2_M));
  }

  check_serial_2msg_processor_2_M->solverInfoPtr =
    (&check_serial_2msg_processor_2_M->solverInfo);
  check_serial_2msg_processor_2_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&check_serial_2msg_processor_2_M->solverInfo, 0.01);
  rtsiSetSolverMode(&check_serial_2msg_processor_2_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  check_serial_2msg_processor_2_M->blockIO = ((void *)
    &check_serial_2msg_processor_2_B);
  (void) memset(((void *) &check_serial_2msg_processor_2_B), 0,
                sizeof(B_check_serial_2msg_processor_2_T));

  /* parameters */
  check_serial_2msg_processor_2_M->defaultParam = ((real_T *)
    &check_serial_2msg_processor_2_P);

  /* states (dwork) */
  check_serial_2msg_processor_2_M->dwork = ((void *)
    &check_serial_2msg_processor_2_DW);
  (void) memset((void *)&check_serial_2msg_processor_2_DW, 0,
                sizeof(DW_check_serial_2msg_processor_2_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    check_serial_2msg_processor_2_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  check_serial_2msg_processor_2_M->Sizes.numContStates = (0);/* Number of continuous states */
  check_serial_2msg_processor_2_M->Sizes.numY = (0);/* Number of model outputs */
  check_serial_2msg_processor_2_M->Sizes.numU = (0);/* Number of model inputs */
  check_serial_2msg_processor_2_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  check_serial_2msg_processor_2_M->Sizes.numSampTimes = (1);/* Number of sample times */
  check_serial_2msg_processor_2_M->Sizes.numBlocks = (110);/* Number of blocks */
  check_serial_2msg_processor_2_M->Sizes.numBlockIO = (35);/* Number of block outputs */
  check_serial_2msg_processor_2_M->Sizes.numBlockPrms = (55);/* Sum of parameter "widths" */
  return check_serial_2msg_processor_2_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
