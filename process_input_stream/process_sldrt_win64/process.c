/*
 * process.c
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

#include "process.h"
#include "process_private.h"
#include "process_dt.h"

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
B_process_T process_B;

/* Block states (default storage) */
DW_process_T process_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_process_T process_PrevZCX;

/* Real-time model */
static RT_MODEL_process_T process_M_;
RT_MODEL_process_T *const process_M = &process_M_;

/*
 * System initialize for enable_with_trigger system:
 *    '<S5>/Triggered Subsystem'
 *    '<S6>/Triggered Subsystem'
 *    '<S7>/Triggered Subsystem'
 */
void process_TriggeredSubsystem_Init(B_TriggeredSubsystem_process_T *localB,
  P_TriggeredSubsystem_process_T *localP)
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
void process_TriggeredSubsystem(boolean_T rtu_Enable, boolean_T rtu_Trigger,
  const uint8_T rtu_rx[4], B_TriggeredSubsystem_process_T *localB,
  DW_TriggeredSubsystem_process_T *localDW, ZCE_TriggeredSubsystem_process_T
  *localZCE)
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
void process_output(void)
{
  real_T tmp;
  int32_T i;
  int32_T j;
  uint32_T qY;
  uint16_T sum;
  uint8_T rtb_TmpSignalConversionAtSFunctionInport1[7];
  uint8_T data_vector_index;
  uint8_T msg_id;
  uint8_T packet_size;
  uint8_T rtb_Add1;
  uint8_T s4_iter;
  uint8_T state;
  boolean_T loopCond;

  /* Reset subsysRan breadcrumbs */
  srClearBC(process_DW.TriggeredSubsystem.TriggeredSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(process_DW.crc_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(process_DW.message_rx_looper_SubsysRanBC);

  /* Outputs for Iterator SubSystem: '<S3>/message_rx_looper' incorporates:
   *  WhileIterator: '<S4>/While Iterator'
   */
  s4_iter = 1U;

  /* Constant: '<S3>/Constant18' */
  loopCond = process_P.Constant18_Value_a;
  while (loopCond && (s4_iter <= 144)) {
    /* Outputs for Iterator SubSystem: '<S3>/message_rx_looper' incorporates:
     *  WhileIterator: '<S4>/While Iterator'
     */
    /* SystemInitialize for Iterator SubSystem: '<S3>/message_rx_looper' incorporates:
     *  WhileIterator: '<S4>/While Iterator'
     */
    process_B.WhileIterator = s4_iter;

    /* S-Function (sldrtpi): '<S8>/Packet Input2' */
    /* S-Function Block: <S8>/Packet Input2 */
    {
      uint8_T indata[1U];
      int status = RTBIO_DriverIO(0, STREAMINPUT, IOREAD, 1U,
        &process_P.PacketInput2_PacketID, (double*) indata, NULL);
      process_B.missed_ticks = 0;      /* Missed Ticks value is always zero */
      process_B.error = (status>>1) & 0x1;/* Data Error port */
      process_B.available = status & 0x1;/* Data Ready port */
      if (status & 0x1) {
        RTWin_ANYTYPEPTR indp;
        indp.p_uint8_T = indata;
        process_B.data = *indp.p_uint8_T++;
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
    process_B.crc = 0U;
    process_B.crc_calc = false;
    state = process_DW.UnitDelay_DSTATE;
    process_B.data_vector[0] = process_DW.UnitDelay1_DSTATE[0];
    process_B.data_vector[1] = process_DW.UnitDelay1_DSTATE[1];
    process_B.data_vector[2] = process_DW.UnitDelay1_DSTATE[2];
    process_B.data_vector[3] = process_DW.UnitDelay1_DSTATE[3];
    data_vector_index = process_DW.UnitDelay2_DSTATE_b;
    packet_size = process_DW.UnitDelay3_DSTATE;
    msg_id = process_DW.UnitDelay4_DSTATE;
    process_B.new_data = process_DW.UnitDelay5_DSTATE;
    switch (process_DW.UnitDelay_DSTATE) {
     case 1U:
      if (process_B.available && (process_B.data == process_P.kGrdFrameStart)) {
        i = (int32_T)(process_DW.UnitDelay_DSTATE + 1U);
        if (process_DW.UnitDelay_DSTATE + 1U > 255U) {
          i = 255;
        }

        state = (uint8_T)i;
        process_B.new_data = false;
        msg_id = 0U;
        process_B.data_vector[0] = 0U;
        process_B.data_vector[1] = 0U;
        process_B.data_vector[2] = 0U;
        process_B.data_vector[3] = 0U;
        data_vector_index = 1U;
        packet_size = 0U;
      }
      break;

     case 2U:
      if (process_B.available) {
        qY = (uint32_T)process_B.data - process_P.kGrdCmdSize;
        if (qY > process_B.data) {
          qY = 0U;
        }

        packet_size = (uint8_T)qY;
        i = (int32_T)(process_DW.UnitDelay_DSTATE + 1U);
        if (process_DW.UnitDelay_DSTATE + 1U > 255U) {
          i = 255;
        }

        state = (uint8_T)i;
      }
      break;

     case 3U:
      if (process_B.available) {
        msg_id = process_B.data;
        i = (int32_T)(process_DW.UnitDelay_DSTATE + 1U);
        if (process_DW.UnitDelay_DSTATE + 1U > 255U) {
          i = 255;
        }

        state = (uint8_T)i;
      }
      break;

     case 4U:
      if (process_B.available) {
        process_B.data_vector[process_DW.UnitDelay2_DSTATE_b - 1] =
          process_B.data;
        if (process_DW.UnitDelay2_DSTATE_b == process_DW.UnitDelay3_DSTATE) {
          i = (int32_T)(process_DW.UnitDelay_DSTATE + 1U);
          if (process_DW.UnitDelay_DSTATE + 1U > 255U) {
            i = 255;
          }

          state = (uint8_T)i;
          process_B.crc_calc = true;
        }

        i = (int32_T)(process_DW.UnitDelay2_DSTATE_b + 1U);
        if (process_DW.UnitDelay2_DSTATE_b + 1U > 255U) {
          i = 255;
        }

        data_vector_index = (uint8_T)i;
      }
      break;

     case 5U:
      process_B.crc_calc = false;
      if (process_B.available) {
        rtb_TmpSignalConversionAtSFunctionInport1[0] = process_P.kGrdFrameStart;
        i = (int32_T)((uint32_T)process_DW.UnitDelay3_DSTATE +
                      process_P.kGrdCmdSize);
        if ((uint32_T)i > 255U) {
          i = 255;
        }

        rtb_TmpSignalConversionAtSFunctionInport1[1] = (uint8_T)i;
        rtb_TmpSignalConversionAtSFunctionInport1[2] =
          process_DW.UnitDelay4_DSTATE;
        rtb_TmpSignalConversionAtSFunctionInport1[3] =
          process_DW.UnitDelay1_DSTATE[0];
        rtb_TmpSignalConversionAtSFunctionInport1[4] =
          process_DW.UnitDelay1_DSTATE[1];
        rtb_TmpSignalConversionAtSFunctionInport1[5] =
          process_DW.UnitDelay1_DSTATE[2];
        rtb_TmpSignalConversionAtSFunctionInport1[6] =
          process_DW.UnitDelay1_DSTATE[3];
        i = (int32_T)((uint32_T)process_P.kGrdFrameStartSize +
                      process_P.kGrdCmdSize);
        if ((uint32_T)i > 255U) {
          i = 255;
        }

        i = (int32_T)((uint32_T)i + process_P.kGrdCrcSize);
        if ((uint32_T)i > 255U) {
          i = 255;
        }

        i = (int32_T)((uint32_T)i + process_DW.UnitDelay3_DSTATE);
        if ((uint32_T)i > 255U) {
          i = 255;
        }

        sum = 0U;
        for (j = 0; j < (uint8_T)i; j++) {
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

        process_B.crc = (uint8_T)sum;
        process_B.new_data = true;
        state = 1U;
      }
      break;
    }

    /* End of MATLAB Function: '<S9>/MATLAB Function' */
    /* Outputs for Enabled and Triggered SubSystem: '<S6>/Triggered Subsystem' */
    /* RelationalOperator: '<S6>/Relational Operator' incorporates:
     *  Constant: '<S6>/Constant'
     */
    process_TriggeredSubsystem(msg_id == process_P.Constant_Value,
      process_B.new_data, process_B.data_vector, &process_B.TriggeredSubsystem_i,
      &process_DW.TriggeredSubsystem_i, &process_PrevZCX.TriggeredSubsystem_i);

    /* End of Outputs for SubSystem: '<S6>/Triggered Subsystem' */

    /* Outputs for Enabled and Triggered SubSystem: '<S7>/Triggered Subsystem' */
    /* RelationalOperator: '<S7>/Relational Operator' incorporates:
     *  Constant: '<S7>/Constant'
     */
    process_TriggeredSubsystem(msg_id == process_P.Constant_Value_m,
      process_B.new_data, process_B.data_vector, &process_B.TriggeredSubsystem_h,
      &process_DW.TriggeredSubsystem_h, &process_PrevZCX.TriggeredSubsystem_h);

    /* End of Outputs for SubSystem: '<S7>/Triggered Subsystem' */

    /* Outputs for Enabled and Triggered SubSystem: '<S5>/Triggered Subsystem' */
    /* Constant: '<S5>/Constant16' */
    process_TriggeredSubsystem(process_P.Constant16_Value, process_B.new_data,
      process_B.data_vector, &process_B.TriggeredSubsystem,
      &process_DW.TriggeredSubsystem, &process_PrevZCX.TriggeredSubsystem);

    /* End of Outputs for SubSystem: '<S5>/Triggered Subsystem' */

    /* Outputs for Triggered SubSystem: '<S9>/crc' incorporates:
     *  TriggerPort: '<S15>/Trigger'
     */
    if (process_B.crc_calc && (process_PrevZCX.crc_Trig_ZCE != POS_ZCSIG)) {
      /* Sum: '<S15>/Add1' incorporates:
       *  Constant: '<S15>/Constant2'
       *  Constant: '<S15>/Constant3'
       *  Constant: '<S15>/Constant4'
       */
      rtb_Add1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)
        process_P.kGrdFrameStartSize + process_P.kGrdCmdSize) +
        process_P.kGrdCrcSize) + packet_size);

      /* SignalConversion generated from: '<S16>/ SFunction ' incorporates:
       *  Constant: '<S15>/Constant'
       *  Constant: '<S15>/Constant1'
       *  MATLAB Function: '<S15>/MATLAB Function1'
       *  Sum: '<S15>/Add'
       */
      rtb_TmpSignalConversionAtSFunctionInport1[0] = process_P.kGrdFrameStart;
      rtb_TmpSignalConversionAtSFunctionInport1[1] = (uint8_T)((uint32_T)
        process_P.kGrdCmdSize + packet_size);
      rtb_TmpSignalConversionAtSFunctionInport1[2] = msg_id;
      rtb_TmpSignalConversionAtSFunctionInport1[3] = process_B.data_vector[0];
      rtb_TmpSignalConversionAtSFunctionInport1[4] = process_B.data_vector[1];
      rtb_TmpSignalConversionAtSFunctionInport1[5] = process_B.data_vector[2];
      rtb_TmpSignalConversionAtSFunctionInport1[6] = process_B.data_vector[3];

      /* MATLAB Function: '<S15>/MATLAB Function1' */
      sum = 0U;
      for (j = 0; j < rtb_Add1; j++) {
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

      process_B.sum_eight_bit = (uint8_T)sum;
      process_DW.crc_SubsysRanBC = 4;
    }

    process_PrevZCX.crc_Trig_ZCE = process_B.crc_calc;

    /* End of Outputs for SubSystem: '<S9>/crc' */
    /* MATLAB Function: '<S10>/MATLAB Function' incorporates:
     *  DiscreteIntegrator: '<S10>/Accumulator'
     *  UnitDelay: '<S10>/Unit Delay'
     */
    memcpy(&process_B.y[0], &process_DW.UnitDelay_DSTATE_i[0], 144U * sizeof
           (uint8_T));
    process_B.y[process_B.WhileIterator - 1] = process_DW.Accumulator_DSTATE_n;

    /* Update for UnitDelay: '<S9>/Unit Delay' */
    process_DW.UnitDelay_DSTATE = state;

    /* Update for UnitDelay: '<S9>/Unit Delay1' */
    process_DW.UnitDelay1_DSTATE[0] = process_B.data_vector[0];
    process_DW.UnitDelay1_DSTATE[1] = process_B.data_vector[1];
    process_DW.UnitDelay1_DSTATE[2] = process_B.data_vector[2];
    process_DW.UnitDelay1_DSTATE[3] = process_B.data_vector[3];

    /* Update for UnitDelay: '<S9>/Unit Delay2' */
    process_DW.UnitDelay2_DSTATE_b = data_vector_index;

    /* Update for UnitDelay: '<S9>/Unit Delay3' */
    process_DW.UnitDelay3_DSTATE = packet_size;

    /* Update for UnitDelay: '<S9>/Unit Delay4' */
    process_DW.UnitDelay4_DSTATE = msg_id;

    /* Update for UnitDelay: '<S9>/Unit Delay5' */
    process_DW.UnitDelay5_DSTATE = process_B.new_data;

    /* Update for UnitDelay: '<S10>/Unit Delay' */
    memcpy(&process_DW.UnitDelay_DSTATE_i[0], &process_B.y[0], 144U * sizeof
           (uint8_T));

    /* Update for DiscreteIntegrator: '<S10>/Accumulator' incorporates:
     *  DataTypeConversion: '<S10>/Data Type Conversion'
     */
    process_DW.Accumulator_DSTATE_n = (uint8_T)((uint32_T)
      process_DW.Accumulator_DSTATE_n + process_B.available);
    srUpdateBC(process_DW.message_rx_looper_SubsysRanBC);

    /* Constant: '<S4>/Constant' */
    loopCond = (process_P.Constant_Value_j != 0.0);
    s4_iter++;
  }

  /* End of Outputs for SubSystem: '<S3>/message_rx_looper' */
  /* S-Function (sldrttet): '<Root>/Execution Time' */
  /* S-Function Block: <Root>/Execution Time */
  {
    RTBIO_DriverIO(INTERNALIO, (IODEVICE) RTBIOTOTALEXECUTIONTIME, IOREAD, 0, 0,
                   &process_B.ExecutionTime, 0);
  }

  /* DiscreteIntegrator: '<S2>/Accumulator' */
  process_B.Accumulator = process_DW.Accumulator_DSTATE;

  /* Product: '<S2>/Divide' incorporates:
   *  Bias: '<S2>/Bias'
   *  Product: '<S2>/Product'
   *  Sum: '<S2>/Add'
   *  UnitDelay: '<S2>/Unit Delay2'
   */
  process_B.Divide = ((process_B.Accumulator + process_P.Bias_Bias) *
                      process_DW.UnitDelay2_DSTATE + process_B.ExecutionTime) /
    process_B.Accumulator;

  /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
   *  Constant: '<S1>/Constant'
   */
  tmp = floor(process_P.Constant_Value_i);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  process_B.DataTypeConversion = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion1' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  tmp = floor(process_P.Constant2_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion1' */
  process_B.DataTypeConversion1 = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion2' incorporates:
   *  Constant: '<S1>/Constant3'
   */
  tmp = floor(process_P.Constant3_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion2' */
  process_B.DataTypeConversion2 = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion3' incorporates:
   *  Constant: '<S1>/Constant4'
   */
  tmp = floor(process_P.Constant4_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion3' */
  process_B.DataTypeConversion3 = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion4' incorporates:
   *  Constant: '<S1>/Constant5'
   */
  tmp = floor(process_P.Constant5_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion4' */
  process_B.DataTypeConversion4 = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion5' incorporates:
   *  Constant: '<S1>/Constant1'
   */
  tmp = floor(process_P.Constant1_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion5' */
  process_B.DataTypeConversion5 = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* S-Function (sldrtpo): '<S1>/Packet Output' */
  /* S-Function Block: <S1>/Packet Output */

  /* no code required */

  /* S-Function (sldrtpo): '<S1>/Packet Output1' */
  /* S-Function Block: <S1>/Packet Output1 */

  /* no code required */

  /* DataTypeConversion: '<S1>/Data Type Conversion10' incorporates:
   *  Constant: '<S1>/Constant11'
   */
  tmp = floor(process_P.Constant11_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion10' */
  process_B.DataTypeConversion10 = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion11' incorporates:
   *  Constant: '<S1>/Constant7'
   */
  tmp = floor(process_P.Constant7_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion11' */
  process_B.DataTypeConversion11 = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion12' incorporates:
   *  Constant: '<S1>/Constant12'
   */
  tmp = floor(process_P.Constant12_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion12' */
  process_B.DataTypeConversion12 = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion13' incorporates:
   *  Constant: '<S1>/Constant13'
   */
  tmp = floor(process_P.Constant13_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion13' */
  process_B.DataTypeConversion13 = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion6' incorporates:
   *  Constant: '<S1>/Constant6'
   */
  tmp = floor(process_P.Constant6_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion6' */
  process_B.DataTypeConversion6 = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion7' incorporates:
   *  Constant: '<S1>/Constant8'
   */
  tmp = floor(process_P.Constant8_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion7' */
  process_B.DataTypeConversion7 = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion8' incorporates:
   *  Constant: '<S1>/Constant9'
   */
  tmp = floor(process_P.Constant9_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion8' */
  process_B.DataTypeConversion8 = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* DataTypeConversion: '<S1>/Data Type Conversion9' incorporates:
   *  Constant: '<S1>/Constant10'
   */
  tmp = floor(process_P.Constant10_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion9' */
  process_B.DataTypeConversion9 = (uint8_T)(tmp < 0.0 ? (int32_T)(uint8_T)
    -(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);
}

/* Model update function */
void process_update(void)
{
  /* Update for UnitDelay: '<S2>/Unit Delay2' */
  process_DW.UnitDelay2_DSTATE = process_B.Divide;

  /* Update for DiscreteIntegrator: '<S2>/Accumulator' incorporates:
   *  Constant: '<S2>/Constant18'
   */
  process_DW.Accumulator_DSTATE += process_P.Accumulator_gainval *
    process_P.Constant18_Value;

  /* Update for S-Function (sldrtpo): '<S1>/Packet Output' */

  /* S-Function Block: <S1>/Packet Output */
  {
    uint8_T outdata[6U];
    RTWin_ANYTYPEPTR outdp;
    outdp.p_uint8_T = outdata;

    {
      uint8_T pktout = process_B.DataTypeConversion;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = process_B.DataTypeConversion1;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = process_B.DataTypeConversion2;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = process_B.DataTypeConversion3;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = process_B.DataTypeConversion4;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = process_B.DataTypeConversion5;
      *outdp.p_uint8_T++ = pktout;
    }

    RTBIO_DriverIO(0, STREAMOUTPUT, IOWRITE, 6U,
                   &process_P.PacketOutput_PacketID, (double*) outdata, NULL);
  }

  /* Update for S-Function (sldrtpo): '<S1>/Packet Output1' */

  /* S-Function Block: <S1>/Packet Output1 */
  {
    uint8_T outdata[8U];
    RTWin_ANYTYPEPTR outdp;
    outdp.p_uint8_T = outdata;

    {
      uint8_T pktout = process_B.DataTypeConversion6;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = process_B.DataTypeConversion7;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = process_B.DataTypeConversion8;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = process_B.DataTypeConversion9;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = process_B.DataTypeConversion10;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = process_B.DataTypeConversion11;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = process_B.DataTypeConversion12;
      *outdp.p_uint8_T++ = pktout;
    }

    {
      uint8_T pktout = process_B.DataTypeConversion13;
      *outdp.p_uint8_T++ = pktout;
    }

    RTBIO_DriverIO(0, STREAMOUTPUT, IOWRITE, 8U,
                   &process_P.PacketOutput1_PacketID, (double*) outdata, NULL);
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++process_M->Timing.clockTick0)) {
    ++process_M->Timing.clockTickH0;
  }

  process_M->Timing.t[0] = process_M->Timing.clockTick0 *
    process_M->Timing.stepSize0 + process_M->Timing.clockTickH0 *
    process_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void process_initialize(void)
{
  /* Start for S-Function (sldrtpo): '<S1>/Packet Output' */

  /* S-Function Block: <S1>/Packet Output */
  /* no initial value should be set */

  /* Start for S-Function (sldrtpo): '<S1>/Packet Output1' */

  /* S-Function Block: <S1>/Packet Output1 */
  /* no initial value should be set */
  process_PrevZCX.crc_Trig_ZCE = POS_ZCSIG;
  process_PrevZCX.TriggeredSubsystem_h.TriggeredSubsystem_Trig_ZCE = POS_ZCSIG;
  process_PrevZCX.TriggeredSubsystem_i.TriggeredSubsystem_Trig_ZCE = POS_ZCSIG;
  process_PrevZCX.TriggeredSubsystem.TriggeredSubsystem_Trig_ZCE = POS_ZCSIG;

  {
    int32_T i;

    /* InitializeConditions for UnitDelay: '<S2>/Unit Delay2' */
    process_DW.UnitDelay2_DSTATE = process_P.UnitDelay2_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<S2>/Accumulator' */
    process_DW.Accumulator_DSTATE = process_P.Accumulator_IC;

    /* SystemInitialize for Iterator SubSystem: '<S3>/message_rx_looper' incorporates:
     *  WhileIterator: '<S4>/While Iterator'
     */
    /* InitializeConditions for UnitDelay: '<S9>/Unit Delay' */
    process_DW.UnitDelay_DSTATE = process_P.UnitDelay_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S9>/Unit Delay1' */
    process_DW.UnitDelay1_DSTATE[0] = process_P.UnitDelay1_InitialCondition;
    process_DW.UnitDelay1_DSTATE[1] = process_P.UnitDelay1_InitialCondition;
    process_DW.UnitDelay1_DSTATE[2] = process_P.UnitDelay1_InitialCondition;
    process_DW.UnitDelay1_DSTATE[3] = process_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S9>/Unit Delay2' */
    process_DW.UnitDelay2_DSTATE_b = process_P.UnitDelay2_InitialCondition_m;

    /* InitializeConditions for UnitDelay: '<S9>/Unit Delay3' */
    process_DW.UnitDelay3_DSTATE = process_P.UnitDelay3_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S9>/Unit Delay4' */
    process_DW.UnitDelay4_DSTATE = process_P.UnitDelay4_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S9>/Unit Delay5' */
    process_DW.UnitDelay5_DSTATE = process_P.UnitDelay5_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S10>/Unit Delay' */
    for (i = 0; i < 144; i++) {
      process_DW.UnitDelay_DSTATE_i[i] = process_P.UnitDelay_InitialCondition_h;
    }

    /* End of InitializeConditions for UnitDelay: '<S10>/Unit Delay' */

    /* InitializeConditions for DiscreteIntegrator: '<S10>/Accumulator' */
    process_DW.Accumulator_DSTATE_n = process_P.Accumulator_IC_c;

    /* SystemInitialize for Enabled and Triggered SubSystem: '<S6>/Triggered Subsystem' */
    process_TriggeredSubsystem_Init(&process_B.TriggeredSubsystem_i,
      &process_P.TriggeredSubsystem_i);

    /* End of SystemInitialize for SubSystem: '<S6>/Triggered Subsystem' */

    /* SystemInitialize for Enabled and Triggered SubSystem: '<S7>/Triggered Subsystem' */
    process_TriggeredSubsystem_Init(&process_B.TriggeredSubsystem_h,
      &process_P.TriggeredSubsystem_h);

    /* End of SystemInitialize for SubSystem: '<S7>/Triggered Subsystem' */

    /* SystemInitialize for Enabled and Triggered SubSystem: '<S5>/Triggered Subsystem' */
    process_TriggeredSubsystem_Init(&process_B.TriggeredSubsystem,
      &process_P.TriggeredSubsystem);

    /* End of SystemInitialize for SubSystem: '<S5>/Triggered Subsystem' */

    /* SystemInitialize for Triggered SubSystem: '<S9>/crc' */
    /* SystemInitialize for Outport: '<S15>/sum_eight_bit' */
    process_B.sum_eight_bit = process_P.sum_eight_bit_Y0;

    /* End of SystemInitialize for SubSystem: '<S9>/crc' */

    /* SystemInitialize for Outport: '<S4>/iterator' */
    process_B.WhileIterator = process_P.iterator_Y0;

    /* SystemInitialize for Outport: '<S4>/y' */
    for (i = 0; i < 144; i++) {
      process_B.y[i] = process_P.y_Y0;
    }

    /* End of SystemInitialize for Outport: '<S4>/y' */
    /* End of SystemInitialize for SubSystem: '<S3>/message_rx_looper' */
  }
}

/* Model terminate function */
void process_terminate(void)
{
  /* Terminate for S-Function (sldrtpo): '<S1>/Packet Output' */

  /* S-Function Block: <S1>/Packet Output */
  /* no initial value should be set */

  /* Terminate for S-Function (sldrtpo): '<S1>/Packet Output1' */

  /* S-Function Block: <S1>/Packet Output1 */
  /* no initial value should be set */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  process_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  process_update();
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
  process_initialize();
}

void MdlTerminate(void)
{
  process_terminate();
}

/* Registration function */
RT_MODEL_process_T *process(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  process_P.PacketInput2_MaxMissedTicks = rtInf;
  process_P.PacketOutput_MaxMissedTicks = rtInf;
  process_P.PacketOutput1_MaxMissedTicks = rtInf;

  /* initialize real-time model */
  (void) memset((void *)process_M, 0,
                sizeof(RT_MODEL_process_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap = process_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    process_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    process_M->Timing.sampleTimes = (&process_M->Timing.sampleTimesArray[0]);
    process_M->Timing.offsetTimes = (&process_M->Timing.offsetTimesArray[0]);

    /* task periods */
    process_M->Timing.sampleTimes[0] = (0.01);

    /* task offsets */
    process_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(process_M, &process_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = process_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    process_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(process_M, 100.0);
  process_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  process_M->Sizes.checksums[0] = (251237484U);
  process_M->Sizes.checksums[1] = (1007736297U);
  process_M->Sizes.checksums[2] = (3241716512U);
  process_M->Sizes.checksums[3] = (1073029855U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[9];
    process_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &process_DW.TriggeredSubsystem.TriggeredSubsystem_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &process_DW.TriggeredSubsystem_i.TriggeredSubsystem_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &process_DW.TriggeredSubsystem_h.TriggeredSubsystem_SubsysRanBC;
    systemRan[4] = (sysRanDType *)&process_DW.message_rx_looper_SubsysRanBC;
    systemRan[5] = (sysRanDType *)&process_DW.crc_SubsysRanBC;
    systemRan[6] = (sysRanDType *)&process_DW.crc_SubsysRanBC;
    systemRan[7] = (sysRanDType *)&process_DW.message_rx_looper_SubsysRanBC;
    systemRan[8] = (sysRanDType *)&process_DW.message_rx_looper_SubsysRanBC;
    rteiSetModelMappingInfoPtr(process_M->extModeInfo,
      &process_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(process_M->extModeInfo, process_M->Sizes.checksums);
    rteiSetTPtr(process_M->extModeInfo, rtmGetTPtr(process_M));
  }

  process_M->solverInfoPtr = (&process_M->solverInfo);
  process_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&process_M->solverInfo, 0.01);
  rtsiSetSolverMode(&process_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  process_M->blockIO = ((void *) &process_B);
  (void) memset(((void *) &process_B), 0,
                sizeof(B_process_T));

  /* parameters */
  process_M->defaultParam = ((real_T *)&process_P);

  /* states (dwork) */
  process_M->dwork = ((void *) &process_DW);
  (void) memset((void *)&process_DW, 0,
                sizeof(DW_process_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    process_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  process_M->Sizes.numContStates = (0);/* Number of continuous states */
  process_M->Sizes.numY = (0);         /* Number of model outputs */
  process_M->Sizes.numU = (0);         /* Number of model inputs */
  process_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  process_M->Sizes.numSampTimes = (1); /* Number of sample times */
  process_M->Sizes.numBlocks = (108);  /* Number of blocks */
  process_M->Sizes.numBlockIO = (36);  /* Number of block outputs */
  process_M->Sizes.numBlockPrms = (55);/* Sum of parameter "widths" */
  return process_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
