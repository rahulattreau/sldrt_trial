/*
 * process.c
 *
 * Code generation for model "process".
 *
 * Model version              : 2.475
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Mar 30 22:44:11 2021
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
 *    '<S8>/Triggered Subsystem'
 *    '<S9>/Triggered Subsystem'
 */
void process_TriggeredSubsystem_Init(B_TriggeredSubsystem_process_T *localB,
  P_TriggeredSubsystem_process_T *localP)
{
  /* SystemInitialize for Outport: '<S14>/tx' incorporates:
   *  Inport: '<S14>/rx'
   */
  localB->rx[0] = localP->tx_Y0;
  localB->rx[1] = localP->tx_Y0;
  localB->rx[2] = localP->tx_Y0;
  localB->rx[3] = localP->tx_Y0;
}

/*
 * Output and update for enable_with_trigger system:
 *    '<S8>/Triggered Subsystem'
 *    '<S9>/Triggered Subsystem'
 */
void process_TriggeredSubsystem(boolean_T rtu_Enable, boolean_T rtu_Trigger,
  const uint8_T rtu_rx[4], B_TriggeredSubsystem_process_T *localB,
  DW_TriggeredSubsystem_process_T *localDW, ZCE_TriggeredSubsystem_process_T
  *localZCE)
{
  /* Outputs for Enabled and Triggered SubSystem: '<S8>/Triggered Subsystem' incorporates:
   *  EnablePort: '<S14>/Enable'
   *  TriggerPort: '<S14>/Trigger'
   */
  if (rtu_Enable && (rtu_Trigger && (localZCE->TriggeredSubsystem_Trig_ZCE !=
        POS_ZCSIG))) {
    /* Inport: '<S14>/rx' */
    localB->rx[0] = rtu_rx[0];
    localB->rx[1] = rtu_rx[1];
    localB->rx[2] = rtu_rx[2];
    localB->rx[3] = rtu_rx[3];
    localDW->TriggeredSubsystem_SubsysRanBC = 4;
  }

  localZCE->TriggeredSubsystem_Trig_ZCE = rtu_Trigger;

  /* End of Outputs for SubSystem: '<S8>/Triggered Subsystem' */
}

/* Model output function */
void process_output(void)
{
  real_T tmp;
  int32_T i;
  uint32_T qY;
  uint16_T sum;
  uint8_T rtb_TmpSignalConversionAtSFunctionInport1[7];
  uint8_T data_vector_index;
  uint8_T msg_id;
  uint8_T packet_size;
  uint8_T rtb_Add1;
  uint8_T s5_iter;
  uint8_T state;
  boolean_T loopCond;
  boolean_T rtb_RelationalOperator_o;
  boolean_T rtb_crc_calc;

  /* Reset subsysRan breadcrumbs */
  srClearBC(process_DW.TriggeredSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(process_DW.TriggeredSubsystem_d.TriggeredSubsystem_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(process_DW.crc_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(process_DW.message_rx_looper_SubsysRanBC);

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

  /* S-Function (sldrttet): '<S2>/Execution Time' */
  /* S-Function Block: <S2>/Execution Time */
  {
    RTBIO_DriverIO(INTERNALIO, (IODEVICE) RTBIOTOTALEXECUTIONTIME, IOREAD, 0, 0,
                   &process_B.ExecutionTime, 0);
  }

  /* DiscreteIntegrator: '<S4>/Accumulator' incorporates:
   *  Constant: '<S2>/Constant'
   */
  if (process_P.Constant_Value_n || (process_DW.Accumulator_PrevResetState != 0))
  {
    process_DW.Accumulator_DSTATE = process_P.Accumulator_IC;
  }

  /* DiscreteIntegrator: '<S4>/Accumulator' */
  process_B.Accumulator = process_DW.Accumulator_DSTATE;

  /* Product: '<S4>/Divide' incorporates:
   *  Bias: '<S4>/Bias'
   *  Product: '<S4>/Product'
   *  Sum: '<S4>/Add'
   *  UnitDelay: '<S4>/Unit Delay2'
   */
  process_B.Divide = ((process_B.Accumulator + process_P.Bias_Bias) *
                      process_DW.UnitDelay2_DSTATE + process_B.ExecutionTime) /
    process_B.Accumulator;

  /* Outputs for Iterator SubSystem: '<S3>/message_rx_looper' incorporates:
   *  WhileIterator: '<S5>/While Iterator'
   */
  s5_iter = 1U;

  /* Constant: '<S3>/Constant18' */
  loopCond = process_P.Constant18_Value_a;
  while (loopCond && (s5_iter <= 144)) {
    /* DiscreteIntegrator: '<S15>/Accumulator' */
    process_B.calls_16_bit = process_DW.Accumulator_DSTATE_b;

    /* SignalConversion generated from: '<S5>/serial_rx_bus_Outport_2' */
    process_B.calls_16_bit_p = process_B.calls_16_bit;

    /* S-Function (sldrtpi): '<S10>/Packet Input2' */
    /* S-Function Block: <S10>/Packet Input2 */
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

    /* MATLAB Function: '<S11>/MATLAB Function' incorporates:
     *  UnitDelay: '<S11>/Unit Delay'
     *  UnitDelay: '<S11>/Unit Delay1'
     *  UnitDelay: '<S11>/Unit Delay2'
     *  UnitDelay: '<S11>/Unit Delay3'
     *  UnitDelay: '<S11>/Unit Delay4'
     *  UnitDelay: '<S11>/Unit Delay5'
     *  UnitDelay: '<S11>/Unit Delay6'
     */
    rtb_crc_calc = false;
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
      process_B.new_data = false;
      msg_id = 0U;
      process_B.data_vector[0] = 0U;
      process_B.data_vector[1] = 0U;
      process_B.data_vector[2] = 0U;
      process_B.data_vector[3] = 0U;
      data_vector_index = 1U;
      packet_size = 0U;
      if (process_B.available && (process_B.data == process_P.kGrdFrameStart)) {
        i = (int32_T)(process_DW.UnitDelay_DSTATE + 1U);
        if (process_DW.UnitDelay_DSTATE + 1U > 255U) {
          i = 255;
        }

        state = (uint8_T)i;
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
          rtb_crc_calc = true;
        }

        i = (int32_T)(process_DW.UnitDelay2_DSTATE_b + 1U);
        if (process_DW.UnitDelay2_DSTATE_b + 1U > 255U) {
          i = 255;
        }

        data_vector_index = (uint8_T)i;
      }
      break;

     case 5U:
      if (process_B.available && (process_DW.UnitDelay6_DSTATE == process_B.data))
      {
        process_B.new_data = true;
        state = 1U;
      }
      break;
    }

    /* End of MATLAB Function: '<S11>/MATLAB Function' */

    /* RelationalOperator: '<S8>/Relational Operator' incorporates:
     *  Constant: '<S8>/Constant'
     */
    loopCond = (msg_id == process_P.holder_msgID_0x1_u_p);

    /* Outputs for Enabled and Triggered SubSystem: '<S8>/Triggered Subsystem' */
    process_TriggeredSubsystem(loopCond, process_B.new_data,
      process_B.data_vector, &process_B.TriggeredSubsystem_d,
      &process_DW.TriggeredSubsystem_d, &process_PrevZCX.TriggeredSubsystem_d);

    /* End of Outputs for SubSystem: '<S8>/Triggered Subsystem' */

    /* SignalConversion generated from: '<S5>/serial_rx_bus_Outport_2' */
    process_B.data_n[0] = process_B.TriggeredSubsystem_d.rx[0];
    process_B.data_n[1] = process_B.TriggeredSubsystem_d.rx[1];
    process_B.data_n[2] = process_B.TriggeredSubsystem_d.rx[2];
    process_B.data_n[3] = process_B.TriggeredSubsystem_d.rx[3];

    /* DiscreteIntegrator: '<S17>/Accumulator' */
    process_B.calls_16_bit_b = process_DW.Accumulator_DSTATE_c;

    /* SignalConversion generated from: '<S5>/serial_rx_bus_Outport_2' */
    process_B.calls_16_bit_pp = process_B.calls_16_bit_b;

    /* RelationalOperator: '<S9>/Relational Operator' incorporates:
     *  Constant: '<S9>/Constant'
     */
    rtb_RelationalOperator_o = (msg_id == process_P.holder_msgID_0x2_u_p);

    /* Outputs for Enabled and Triggered SubSystem: '<S9>/Triggered Subsystem' */
    process_TriggeredSubsystem(rtb_RelationalOperator_o, process_B.new_data,
      process_B.data_vector, &process_B.TriggeredSubsystem_n,
      &process_DW.TriggeredSubsystem_n, &process_PrevZCX.TriggeredSubsystem_n);

    /* End of Outputs for SubSystem: '<S9>/Triggered Subsystem' */

    /* SignalConversion generated from: '<S5>/serial_rx_bus_Outport_2' */
    process_B.data_nm[0] = process_B.TriggeredSubsystem_n.rx[0];
    process_B.data_nm[1] = process_B.TriggeredSubsystem_n.rx[1];
    process_B.data_nm[2] = process_B.TriggeredSubsystem_n.rx[2];
    process_B.data_nm[3] = process_B.TriggeredSubsystem_n.rx[3];

    /* DiscreteIntegrator: '<S7>/Accumulator' */
    process_B.Accumulator_i = process_DW.Accumulator_DSTATE_h;

    /* Outputs for Enabled and Triggered SubSystem: '<S7>/Triggered Subsystem' incorporates:
     *  EnablePort: '<S13>/Enable'
     *  TriggerPort: '<S13>/Trigger'
     */
    /* Constant: '<S7>/Constant16' */
    if (process_P.Constant16_Value && (process_B.new_data &&
         (process_PrevZCX.TriggeredSubsystem_Trig_ZCE_m != POS_ZCSIG))) {
      process_DW.TriggeredSubsystem_SubsysRanBC = 4;
    }

    process_PrevZCX.TriggeredSubsystem_Trig_ZCE_m = process_B.new_data;

    /* End of Outputs for SubSystem: '<S7>/Triggered Subsystem' */
    /* Outputs for Triggered SubSystem: '<S19>/crc' incorporates:
     *  TriggerPort: '<S20>/Trigger'
     */
    if (rtb_crc_calc && (process_PrevZCX.crc_Trig_ZCE != POS_ZCSIG)) {
      /* Sum: '<S20>/Add1' incorporates:
       *  Constant: '<S20>/Constant2'
       *  Constant: '<S20>/Constant3'
       *  Constant: '<S20>/Constant4'
       */
      rtb_Add1 = (uint8_T)((uint32_T)(uint8_T)((uint32_T)(uint8_T)((uint32_T)
        process_P.kGrdFrameStartSize + process_P.kGrdCmdSize) +
        process_P.kGrdCrcSize) + packet_size);

      /* SignalConversion generated from: '<S21>/ SFunction ' incorporates:
       *  Constant: '<S20>/Constant'
       *  Constant: '<S20>/Constant1'
       *  MATLAB Function: '<S20>/MATLAB Function1'
       *  Sum: '<S20>/Add'
       */
      rtb_TmpSignalConversionAtSFunctionInport1[0] = process_P.kGrdFrameStart;
      rtb_TmpSignalConversionAtSFunctionInport1[1] = (uint8_T)((uint32_T)
        process_P.kGrdCmdSize + packet_size);
      rtb_TmpSignalConversionAtSFunctionInport1[2] = msg_id;
      rtb_TmpSignalConversionAtSFunctionInport1[3] = process_B.data_vector[0];
      rtb_TmpSignalConversionAtSFunctionInport1[4] = process_B.data_vector[1];
      rtb_TmpSignalConversionAtSFunctionInport1[5] = process_B.data_vector[2];
      rtb_TmpSignalConversionAtSFunctionInport1[6] = process_B.data_vector[3];

      /* MATLAB Function: '<S20>/MATLAB Function1' */
      sum = 0U;
      for (i = 0; i < rtb_Add1; i++) {
        qY = (uint32_T)sum + rtb_TmpSignalConversionAtSFunctionInport1[i];
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

    process_PrevZCX.crc_Trig_ZCE = rtb_crc_calc;

    /* End of Outputs for SubSystem: '<S19>/crc' */
    /* RelationalOperator: '<S12>/Relational Operator' incorporates:
     *  Constant: '<S12>/Constant'
     */
    rtb_crc_calc = (s5_iter == process_P.message_poll_num);

    /* DiscreteIntegrator: '<S12>/Accumulator' */
    if (rtb_crc_calc || (process_DW.Accumulator_PrevResetState_n != 0)) {
      process_DW.Accumulator_DSTATE_n = process_P.Accumulator_IC_cz;
    }

    /* DiscreteIntegrator: '<S12>/Accumulator' */
    process_B.Accumulator_f = process_DW.Accumulator_DSTATE_n;

    /* MATLAB Function: '<S12>/MATLAB Function' incorporates:
     *  Delay: '<S12>/Resettable Delay'
     */
    memcpy(&process_B.y[0], &process_DW.ResettableDelay_DSTATE[0], 144U * sizeof
           (uint8_T));
    process_B.y[s5_iter - 1] = process_B.Accumulator_f;

    /* Update for DiscreteIntegrator: '<S15>/Accumulator' incorporates:
     *  Logic: '<S15>/Logical Operator'
     */
    process_DW.Accumulator_DSTATE_b = (uint16_T)((uint32_T)(process_B.new_data &&
      loopCond) + process_DW.Accumulator_DSTATE_b);

    /* Update for UnitDelay: '<S11>/Unit Delay' */
    process_DW.UnitDelay_DSTATE = state;

    /* Update for UnitDelay: '<S11>/Unit Delay1' */
    process_DW.UnitDelay1_DSTATE[0] = process_B.data_vector[0];
    process_DW.UnitDelay1_DSTATE[1] = process_B.data_vector[1];
    process_DW.UnitDelay1_DSTATE[2] = process_B.data_vector[2];
    process_DW.UnitDelay1_DSTATE[3] = process_B.data_vector[3];

    /* Update for UnitDelay: '<S11>/Unit Delay2' */
    process_DW.UnitDelay2_DSTATE_b = data_vector_index;

    /* Update for UnitDelay: '<S11>/Unit Delay3' */
    process_DW.UnitDelay3_DSTATE = packet_size;

    /* Update for UnitDelay: '<S11>/Unit Delay4' */
    process_DW.UnitDelay4_DSTATE = msg_id;

    /* Update for UnitDelay: '<S11>/Unit Delay5' */
    process_DW.UnitDelay5_DSTATE = process_B.new_data;

    /* Update for UnitDelay: '<S11>/Unit Delay6' */
    process_DW.UnitDelay6_DSTATE = process_B.sum_eight_bit;

    /* Update for DiscreteIntegrator: '<S17>/Accumulator' incorporates:
     *  Logic: '<S17>/Logical Operator'
     */
    process_DW.Accumulator_DSTATE_c = (uint16_T)((uint32_T)(process_B.new_data &&
      rtb_RelationalOperator_o) + process_DW.Accumulator_DSTATE_c);

    /* Update for DiscreteIntegrator: '<S7>/Accumulator' incorporates:
     *  Constant: '<S7>/Constant16'
     *  Logic: '<S7>/Logical Operator'
     */
    process_DW.Accumulator_DSTATE_h = (uint16_T)((uint32_T)(process_B.new_data &&
      process_P.Constant16_Value) + process_DW.Accumulator_DSTATE_h);

    /* Update for DiscreteIntegrator: '<S12>/Accumulator' incorporates:
     *  DataTypeConversion: '<S12>/Data Type Conversion'
     */
    process_DW.Accumulator_DSTATE_n = (uint8_T)((uint32_T)
      process_DW.Accumulator_DSTATE_n + process_B.available);
    process_DW.Accumulator_PrevResetState_n = (int8_T)rtb_crc_calc;

    /* Update for Delay: '<S12>/Resettable Delay' */
    memcpy(&process_DW.ResettableDelay_DSTATE[0], &process_B.y[0], 144U * sizeof
           (uint8_T));
    srUpdateBC(process_DW.message_rx_looper_SubsysRanBC);

    /* Constant: '<S5>/Constant' */
    loopCond = (process_P.Constant_Value != 0.0);
    s5_iter++;
  }

  /* End of Outputs for SubSystem: '<S3>/message_rx_looper' */
}

/* Model update function */
void process_update(void)
{
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

  /* Update for UnitDelay: '<S4>/Unit Delay2' */
  process_DW.UnitDelay2_DSTATE = process_B.Divide;

  /* Update for DiscreteIntegrator: '<S4>/Accumulator' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S4>/Constant18'
   */
  process_DW.Accumulator_DSTATE += process_P.Accumulator_gainval *
    process_P.Constant18_Value;
  process_DW.Accumulator_PrevResetState = (int8_T)process_P.Constant_Value_n;

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
  process_PrevZCX.TriggeredSubsystem_Trig_ZCE_m = POS_ZCSIG;
  process_PrevZCX.crc_Trig_ZCE = POS_ZCSIG;
  process_PrevZCX.TriggeredSubsystem_n.TriggeredSubsystem_Trig_ZCE = POS_ZCSIG;
  process_PrevZCX.TriggeredSubsystem_d.TriggeredSubsystem_Trig_ZCE = POS_ZCSIG;

  {
    int32_T i;

    /* InitializeConditions for UnitDelay: '<S4>/Unit Delay2' */
    process_DW.UnitDelay2_DSTATE = process_P.UnitDelay2_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<S4>/Accumulator' */
    process_DW.Accumulator_DSTATE = process_P.Accumulator_IC;
    process_DW.Accumulator_PrevResetState = 0;

    /* SystemInitialize for Iterator SubSystem: '<S3>/message_rx_looper' */
    /* InitializeConditions for DiscreteIntegrator: '<S15>/Accumulator' */
    process_DW.Accumulator_DSTATE_b = process_P.Accumulator_IC_c;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay' */
    process_DW.UnitDelay_DSTATE = process_P.UnitDelay_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay1' */
    process_DW.UnitDelay1_DSTATE[0] = process_P.UnitDelay1_InitialCondition;
    process_DW.UnitDelay1_DSTATE[1] = process_P.UnitDelay1_InitialCondition;
    process_DW.UnitDelay1_DSTATE[2] = process_P.UnitDelay1_InitialCondition;
    process_DW.UnitDelay1_DSTATE[3] = process_P.UnitDelay1_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay2' */
    process_DW.UnitDelay2_DSTATE_b = process_P.UnitDelay2_InitialCondition_m;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay3' */
    process_DW.UnitDelay3_DSTATE = process_P.UnitDelay3_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay4' */
    process_DW.UnitDelay4_DSTATE = process_P.UnitDelay4_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay5' */
    process_DW.UnitDelay5_DSTATE = process_P.UnitDelay5_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S11>/Unit Delay6' */
    process_DW.UnitDelay6_DSTATE = process_P.UnitDelay6_InitialCondition;

    /* InitializeConditions for DiscreteIntegrator: '<S17>/Accumulator' */
    process_DW.Accumulator_DSTATE_c = process_P.Accumulator_IC_j;

    /* InitializeConditions for DiscreteIntegrator: '<S7>/Accumulator' */
    process_DW.Accumulator_DSTATE_h = process_P.Accumulator_IC_j3;

    /* InitializeConditions for DiscreteIntegrator: '<S12>/Accumulator' */
    process_DW.Accumulator_DSTATE_n = process_P.Accumulator_IC_cz;
    process_DW.Accumulator_PrevResetState_n = 0;

    /* InitializeConditions for Delay: '<S12>/Resettable Delay' */
    for (i = 0; i < 144; i++) {
      process_DW.ResettableDelay_DSTATE[i] =
        process_P.ResettableDelay_InitialCondition;
    }

    /* End of InitializeConditions for Delay: '<S12>/Resettable Delay' */

    /* SystemInitialize for Enabled and Triggered SubSystem: '<S8>/Triggered Subsystem' */
    process_TriggeredSubsystem_Init(&process_B.TriggeredSubsystem_d,
      &process_P.TriggeredSubsystem_d);

    /* End of SystemInitialize for SubSystem: '<S8>/Triggered Subsystem' */

    /* SystemInitialize for Enabled and Triggered SubSystem: '<S9>/Triggered Subsystem' */
    process_TriggeredSubsystem_Init(&process_B.TriggeredSubsystem_n,
      &process_P.TriggeredSubsystem_n);

    /* End of SystemInitialize for SubSystem: '<S9>/Triggered Subsystem' */

    /* SystemInitialize for Triggered SubSystem: '<S19>/crc' */
    /* SystemInitialize for Outport: '<S20>/sum_eight_bit' */
    process_B.sum_eight_bit = process_P.sum_eight_bit_Y0;

    /* End of SystemInitialize for SubSystem: '<S19>/crc' */

    /* SystemInitialize for Outport: '<S5>/y' */
    for (i = 0; i < 144; i++) {
      process_B.y[i] = process_P.y_Y0;
    }

    /* End of SystemInitialize for Outport: '<S5>/y' */

    /* SystemInitialize for SignalConversion generated from: '<S5>/serial_rx_bus_Outport_2' incorporates:
     *  Outport: '<S5>/serial_rx_bus_Outport_2'
     */
    process_B.calls_16_bit_p =
      process_P.serial_rx_bus_Outport_2_Y0.msgID_0x00.calls_16_bit;

    /* SystemInitialize for SignalConversion generated from: '<S5>/serial_rx_bus_Outport_2' incorporates:
     *  Outport: '<S5>/serial_rx_bus_Outport_2'
     */
    process_B.calls_16_bit_pp =
      process_P.serial_rx_bus_Outport_2_Y0.msgID_0x01.calls_16_bit;

    /* SystemInitialize for SignalConversion generated from: '<S5>/serial_rx_bus_Outport_2' incorporates:
     *  Outport: '<S5>/serial_rx_bus_Outport_2'
     */
    process_B.data_n[0] = process_P.serial_rx_bus_Outport_2_Y0.msgID_0x00.data[0];

    /* SystemInitialize for SignalConversion generated from: '<S5>/serial_rx_bus_Outport_2' incorporates:
     *  Outport: '<S5>/serial_rx_bus_Outport_2'
     */
    process_B.data_nm[0] = process_P.serial_rx_bus_Outport_2_Y0.msgID_0x01.data
      [0];

    /* SystemInitialize for SignalConversion generated from: '<S5>/serial_rx_bus_Outport_2' incorporates:
     *  Outport: '<S5>/serial_rx_bus_Outport_2'
     */
    process_B.data_n[1] = process_P.serial_rx_bus_Outport_2_Y0.msgID_0x00.data[1];

    /* SystemInitialize for SignalConversion generated from: '<S5>/serial_rx_bus_Outport_2' incorporates:
     *  Outport: '<S5>/serial_rx_bus_Outport_2'
     */
    process_B.data_nm[1] = process_P.serial_rx_bus_Outport_2_Y0.msgID_0x01.data
      [1];

    /* SystemInitialize for SignalConversion generated from: '<S5>/serial_rx_bus_Outport_2' incorporates:
     *  Outport: '<S5>/serial_rx_bus_Outport_2'
     */
    process_B.data_n[2] = process_P.serial_rx_bus_Outport_2_Y0.msgID_0x00.data[2];

    /* SystemInitialize for SignalConversion generated from: '<S5>/serial_rx_bus_Outport_2' incorporates:
     *  Outport: '<S5>/serial_rx_bus_Outport_2'
     */
    process_B.data_nm[2] = process_P.serial_rx_bus_Outport_2_Y0.msgID_0x01.data
      [2];

    /* SystemInitialize for SignalConversion generated from: '<S5>/serial_rx_bus_Outport_2' incorporates:
     *  Outport: '<S5>/serial_rx_bus_Outport_2'
     */
    process_B.data_n[3] = process_P.serial_rx_bus_Outport_2_Y0.msgID_0x00.data[3];

    /* SystemInitialize for SignalConversion generated from: '<S5>/serial_rx_bus_Outport_2' incorporates:
     *  Outport: '<S5>/serial_rx_bus_Outport_2'
     */
    process_B.data_nm[3] = process_P.serial_rx_bus_Outport_2_Y0.msgID_0x01.data
      [3];

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

  rtmSetTFinal(process_M, 10.0);
  process_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  process_M->Sizes.checksums[0] = (2995657403U);
  process_M->Sizes.checksums[1] = (2059044149U);
  process_M->Sizes.checksums[2] = (4254829868U);
  process_M->Sizes.checksums[3] = (3128716530U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[9];
    process_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)&process_DW.TriggeredSubsystem_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &process_DW.TriggeredSubsystem_d.TriggeredSubsystem_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &process_DW.TriggeredSubsystem_n.TriggeredSubsystem_SubsysRanBC;
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
    dtInfo.numDataTypes = 17;
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
  process_M->Sizes.numBlocks = (111);  /* Number of blocks */
  process_M->Sizes.numBlockIO = (44);  /* Number of block outputs */
  process_M->Sizes.numBlockPrms = (60);/* Sum of parameter "widths" */
  return process_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
