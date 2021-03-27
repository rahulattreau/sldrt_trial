/*
 * check_serial_2msg_processor_2.c
 *
 * Code generation for model "check_serial_2msg_processor_2".
 *
 * Model version              : 2.173
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Fri Mar 26 23:53:04 2021
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

/* Model output function */
void check_serial_2msg_processor_2_output(void)
{
  real_T tmp;
  int32_T i;
  uint32_T qY;
  uint8_T UnitDelay_DSTATE_i[144];
  uint8_T UnitDelay1_DSTATE_b_idx_0;
  uint8_T UnitDelay1_DSTATE_b_idx_1;
  uint8_T UnitDelay1_DSTATE_b_idx_2;
  uint8_T UnitDelay1_DSTATE_b_idx_3;
  uint8_T UnitDelay1_DSTATE_idx_0;
  uint8_T UnitDelay1_DSTATE_idx_1;
  uint8_T UnitDelay1_DSTATE_idx_2;
  uint8_T UnitDelay1_DSTATE_idx_3;
  uint8_T UnitDelay2_DSTATE;
  uint8_T UnitDelay2_DSTATE_g;
  uint8_T UnitDelay3_DSTATE;
  uint8_T UnitDelay3_DSTATE_d;
  uint8_T UnitDelay4_DSTATE_c;
  uint8_T UnitDelay_DSTATE;
  uint8_T UnitDelay_DSTATE_g;
  uint8_T s2_iter;
  boolean_T UnitDelay5_DSTATE;
  boolean_T loopCond;

  /* Reset subsysRan breadcrumbs */
  srClearBC(check_serial_2msg_processor_2_DW.TriggeredSubsystem_SubsysRanBC);

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
  tmp = floor(check_serial_2msg_processor_2_P.Constant2_Value);
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
  tmp = floor(check_serial_2msg_processor_2_P.Constant3_Value);
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
  tmp = floor(check_serial_2msg_processor_2_P.Constant4_Value);
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
  tmp = floor(check_serial_2msg_processor_2_P.Constant5_Value);
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
  tmp = floor(check_serial_2msg_processor_2_P.Constant1_Value);
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
  tmp = floor(check_serial_2msg_processor_2_P.Constant6_Value);
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

  /* Outputs for Iterator SubSystem: '<S1>/message_rx_looper' incorporates:
   *  WhileIterator: '<S2>/While Iterator'
   */
  s2_iter = 1U;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
  UnitDelay_DSTATE = check_serial_2msg_processor_2_P.UnitDelay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay2' */
  UnitDelay2_DSTATE =
    check_serial_2msg_processor_2_P.UnitDelay2_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay3' */
  UnitDelay3_DSTATE =
    check_serial_2msg_processor_2_P.UnitDelay3_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay' */
  UnitDelay_DSTATE_g =
    check_serial_2msg_processor_2_P.UnitDelay_InitialCondition_k;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay1' */
  UnitDelay1_DSTATE_idx_0 =
    check_serial_2msg_processor_2_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay1' */
  UnitDelay1_DSTATE_b_idx_0 =
    check_serial_2msg_processor_2_P.UnitDelay1_InitialCondition_j;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay1' */
  UnitDelay1_DSTATE_idx_1 =
    check_serial_2msg_processor_2_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay1' */
  UnitDelay1_DSTATE_b_idx_1 =
    check_serial_2msg_processor_2_P.UnitDelay1_InitialCondition_j;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay1' */
  UnitDelay1_DSTATE_idx_2 =
    check_serial_2msg_processor_2_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay1' */
  UnitDelay1_DSTATE_b_idx_2 =
    check_serial_2msg_processor_2_P.UnitDelay1_InitialCondition_j;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay1' */
  UnitDelay1_DSTATE_idx_3 =
    check_serial_2msg_processor_2_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay1' */
  UnitDelay1_DSTATE_b_idx_3 =
    check_serial_2msg_processor_2_P.UnitDelay1_InitialCondition_j;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay2' */
  UnitDelay2_DSTATE_g =
    check_serial_2msg_processor_2_P.UnitDelay2_InitialCondition_j;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay3' */
  UnitDelay3_DSTATE_d =
    check_serial_2msg_processor_2_P.UnitDelay3_InitialCondition_b;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay4' */
  UnitDelay4_DSTATE_c =
    check_serial_2msg_processor_2_P.UnitDelay4_InitialCondition_n;

  /* InitializeConditions for UnitDelay: '<S4>/Unit Delay5' */
  UnitDelay5_DSTATE =
    check_serial_2msg_processor_2_P.UnitDelay5_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S6>/Unit Delay' */
  for (i = 0; i < 144; i++) {
    UnitDelay_DSTATE_i[i] =
      check_serial_2msg_processor_2_P.UnitDelay_InitialCondition_h;
  }

  /* End of InitializeConditions for UnitDelay: '<S6>/Unit Delay' */

  /* InitializeConditions for DiscreteIntegrator: '<S6>/Accumulator' */
  check_serial_2msg_processor_2_DW.Accumulator_DSTATE =
    check_serial_2msg_processor_2_P.Accumulator_IC;

  /* Constant: '<S1>/Constant18' */
  loopCond = check_serial_2msg_processor_2_P.Constant18_Value;
  while (loopCond && (s2_iter <= 144)) {
    /* Outputs for Iterator SubSystem: '<S1>/message_rx_looper' incorporates:
     *  WhileIterator: '<S2>/While Iterator'
     */
    /* SystemInitialize for Iterator SubSystem: '<S1>/message_rx_looper' incorporates:
     *  WhileIterator: '<S2>/While Iterator'
     */
    check_serial_2msg_processor_2_B.WhileIterator = s2_iter;

    /* S-Function (sldrtpi): '<S5>/Packet Input2' */
    /* S-Function Block: <S5>/Packet Input2 */
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

    /* MATLAB Function: '<S2>/MATLAB Function' incorporates:
     *  UnitDelay: '<S2>/Unit Delay'
     *  UnitDelay: '<S2>/Unit Delay1'
     *  UnitDelay: '<S2>/Unit Delay2'
     *  UnitDelay: '<S2>/Unit Delay3'
     */
    check_serial_2msg_processor_2_B.state_d = UnitDelay_DSTATE;
    check_serial_2msg_processor_2_B.data_vector_m[0] = UnitDelay1_DSTATE_idx_0;
    check_serial_2msg_processor_2_B.data_vector_m[1] = UnitDelay1_DSTATE_idx_1;
    check_serial_2msg_processor_2_B.data_vector_m[2] = UnitDelay1_DSTATE_idx_2;
    check_serial_2msg_processor_2_B.data_vector_m[3] = UnitDelay1_DSTATE_idx_3;
    switch (UnitDelay_DSTATE) {
     case 1U:
      if (check_serial_2msg_processor_2_B.available &&
          (check_serial_2msg_processor_2_B.data == 239)) {
        check_serial_2msg_processor_2_B.state_d = 2U;
      }
      break;

     case 2U:
      if (check_serial_2msg_processor_2_B.available &&
          (check_serial_2msg_processor_2_B.data == 239)) {
        check_serial_2msg_processor_2_B.state_d = 3U;
      }
      break;

     case 3U:
      if (check_serial_2msg_processor_2_B.available) {
        qY = check_serial_2msg_processor_2_B.data - 1U;
        if (check_serial_2msg_processor_2_B.data - 1U >
            check_serial_2msg_processor_2_B.data) {
          qY = 0U;
        }

        UnitDelay3_DSTATE = (uint8_T)qY;
        check_serial_2msg_processor_2_B.state_d = 4U;
      }
      break;

     case 4U:
      if (check_serial_2msg_processor_2_B.available) {
        check_serial_2msg_processor_2_B.state_d = 5U;
      }
      break;

     case 5U:
      if (check_serial_2msg_processor_2_B.available) {
        check_serial_2msg_processor_2_B.data_vector_m[UnitDelay2_DSTATE - 1] =
          check_serial_2msg_processor_2_B.data;
        i = (int32_T)(UnitDelay2_DSTATE + 1U);
        if (UnitDelay2_DSTATE + 1U > 255U) {
          i = 255;
        }

        UnitDelay2_DSTATE = (uint8_T)i;
        if ((uint8_T)i == UnitDelay3_DSTATE) {
          check_serial_2msg_processor_2_B.state_d = 6U;
        }
      }
      break;

     case 6U:
      if (check_serial_2msg_processor_2_B.available &&
          (check_serial_2msg_processor_2_B.data != 0)) {
        check_serial_2msg_processor_2_B.state_d = 0U;
        check_serial_2msg_processor_2_B.data_vector_m[0] = 0U;
        check_serial_2msg_processor_2_B.data_vector_m[1] = 0U;
        check_serial_2msg_processor_2_B.data_vector_m[2] = 0U;
        check_serial_2msg_processor_2_B.data_vector_m[3] = 0U;
        UnitDelay2_DSTATE = 0U;
        UnitDelay3_DSTATE = 0U;
      }
      break;
    }

    /* End of MATLAB Function: '<S2>/MATLAB Function' */
    /* MATLAB Function: '<S4>/MATLAB Function' incorporates:
     *  UnitDelay: '<S4>/Unit Delay'
     *  UnitDelay: '<S4>/Unit Delay1'
     *  UnitDelay: '<S4>/Unit Delay2'
     *  UnitDelay: '<S4>/Unit Delay3'
     *  UnitDelay: '<S4>/Unit Delay4'
     *  UnitDelay: '<S4>/Unit Delay5'
     */
    check_serial_2msg_processor_2_B.state = UnitDelay_DSTATE_g;
    check_serial_2msg_processor_2_B.data_vector_n[0] = UnitDelay1_DSTATE_b_idx_0;
    check_serial_2msg_processor_2_B.data_vector_n[1] = UnitDelay1_DSTATE_b_idx_1;
    check_serial_2msg_processor_2_B.data_vector_n[2] = UnitDelay1_DSTATE_b_idx_2;
    check_serial_2msg_processor_2_B.data_vector_n[3] = UnitDelay1_DSTATE_b_idx_3;
    check_serial_2msg_processor_2_B.packet_size = UnitDelay3_DSTATE_d;
    check_serial_2msg_processor_2_B.msg_id = UnitDelay4_DSTATE_c;
    check_serial_2msg_processor_2_B.new_data = UnitDelay5_DSTATE;
    switch (UnitDelay_DSTATE_g) {
     case 1U:
      if (check_serial_2msg_processor_2_B.available &&
          (check_serial_2msg_processor_2_B.data == 239)) {
        i = (int32_T)(UnitDelay_DSTATE_g + 1U);
        if (UnitDelay_DSTATE_g + 1U > 255U) {
          i = 255;
        }

        check_serial_2msg_processor_2_B.state = (uint8_T)i;
        check_serial_2msg_processor_2_B.new_data = false;
        check_serial_2msg_processor_2_B.msg_id = 0U;
        check_serial_2msg_processor_2_B.data_vector_n[0] = 0U;
        check_serial_2msg_processor_2_B.data_vector_n[1] = 0U;
        check_serial_2msg_processor_2_B.data_vector_n[2] = 0U;
        check_serial_2msg_processor_2_B.data_vector_n[3] = 0U;
        UnitDelay2_DSTATE_g = 1U;
        check_serial_2msg_processor_2_B.packet_size = 0U;
      }
      break;

     case 2U:
      if (check_serial_2msg_processor_2_B.available) {
        qY = check_serial_2msg_processor_2_B.data - 1U;
        if (check_serial_2msg_processor_2_B.data - 1U >
            check_serial_2msg_processor_2_B.data) {
          qY = 0U;
        }

        check_serial_2msg_processor_2_B.packet_size = (uint8_T)qY;
        i = (int32_T)(UnitDelay_DSTATE_g + 1U);
        if (UnitDelay_DSTATE_g + 1U > 255U) {
          i = 255;
        }

        check_serial_2msg_processor_2_B.state = (uint8_T)i;
      }
      break;

     case 3U:
      if (check_serial_2msg_processor_2_B.available) {
        check_serial_2msg_processor_2_B.msg_id =
          check_serial_2msg_processor_2_B.data;
        i = (int32_T)(UnitDelay_DSTATE_g + 1U);
        if (UnitDelay_DSTATE_g + 1U > 255U) {
          i = 255;
        }

        check_serial_2msg_processor_2_B.state = (uint8_T)i;
      }
      break;

     case 4U:
      if (check_serial_2msg_processor_2_B.available) {
        check_serial_2msg_processor_2_B.data_vector_n[UnitDelay2_DSTATE_g - 1] =
          check_serial_2msg_processor_2_B.data;
        if (UnitDelay2_DSTATE_g == UnitDelay3_DSTATE_d) {
          i = (int32_T)(UnitDelay_DSTATE_g + 1U);
          if (UnitDelay_DSTATE_g + 1U > 255U) {
            i = 255;
          }

          check_serial_2msg_processor_2_B.state = (uint8_T)i;
        }

        i = (int32_T)(UnitDelay2_DSTATE_g + 1U);
        if (UnitDelay2_DSTATE_g + 1U > 255U) {
          i = 255;
        }

        UnitDelay2_DSTATE_g = (uint8_T)i;
      }
      break;

     case 5U:
      if (check_serial_2msg_processor_2_B.available &&
          (check_serial_2msg_processor_2_B.data != 0)) {
        check_serial_2msg_processor_2_B.new_data = true;
        check_serial_2msg_processor_2_B.state = 1U;
      }
      break;
    }

    /* End of MATLAB Function: '<S4>/MATLAB Function' */

    /* Outputs for Enabled and Triggered SubSystem: '<S4>/Triggered Subsystem' incorporates:
     *  EnablePort: '<S8>/Enable'
     *  TriggerPort: '<S8>/Trigger'
     */
    /* Constant: '<S4>/Constant16' */
    if (check_serial_2msg_processor_2_P.Constant16_Value &&
        (check_serial_2msg_processor_2_B.new_data &&
         (check_serial_2msg_processor_2_PrevZCX.TriggeredSubsystem_Trig_ZCE !=
          POS_ZCSIG))) {
      /* Inport: '<S8>/data_vector' */
      check_serial_2msg_processor_2_B.data_vector[0] =
        check_serial_2msg_processor_2_B.data_vector_n[0];
      check_serial_2msg_processor_2_B.data_vector[1] =
        check_serial_2msg_processor_2_B.data_vector_n[1];
      check_serial_2msg_processor_2_B.data_vector[2] =
        check_serial_2msg_processor_2_B.data_vector_n[2];
      check_serial_2msg_processor_2_B.data_vector[3] =
        check_serial_2msg_processor_2_B.data_vector_n[3];
      check_serial_2msg_processor_2_DW.TriggeredSubsystem_SubsysRanBC = 4;
    }

    /* End of Constant: '<S4>/Constant16' */
    check_serial_2msg_processor_2_PrevZCX.TriggeredSubsystem_Trig_ZCE =
      check_serial_2msg_processor_2_B.new_data;

    /* End of Outputs for SubSystem: '<S4>/Triggered Subsystem' */
    /* MATLAB Function: '<S6>/MATLAB Function' incorporates:
     *  DiscreteIntegrator: '<S6>/Accumulator'
     *  UnitDelay: '<S6>/Unit Delay'
     */
    memcpy(&check_serial_2msg_processor_2_B.y[0], &UnitDelay_DSTATE_i[0], 144U *
           sizeof(uint8_T));
    check_serial_2msg_processor_2_B.y[check_serial_2msg_processor_2_B.WhileIterator
      - 1] = check_serial_2msg_processor_2_DW.Accumulator_DSTATE;

    /* Update for UnitDelay: '<S2>/Unit Delay' */
    UnitDelay_DSTATE = check_serial_2msg_processor_2_B.state_d;

    /* Update for UnitDelay: '<S4>/Unit Delay' */
    UnitDelay_DSTATE_g = check_serial_2msg_processor_2_B.state;

    /* Update for UnitDelay: '<S2>/Unit Delay1' */
    UnitDelay1_DSTATE_idx_0 = check_serial_2msg_processor_2_B.data_vector_m[0];

    /* Update for UnitDelay: '<S4>/Unit Delay1' */
    UnitDelay1_DSTATE_b_idx_0 = check_serial_2msg_processor_2_B.data_vector_n[0];

    /* Update for UnitDelay: '<S2>/Unit Delay1' */
    UnitDelay1_DSTATE_idx_1 = check_serial_2msg_processor_2_B.data_vector_m[1];

    /* Update for UnitDelay: '<S4>/Unit Delay1' */
    UnitDelay1_DSTATE_b_idx_1 = check_serial_2msg_processor_2_B.data_vector_n[1];

    /* Update for UnitDelay: '<S2>/Unit Delay1' */
    UnitDelay1_DSTATE_idx_2 = check_serial_2msg_processor_2_B.data_vector_m[2];

    /* Update for UnitDelay: '<S4>/Unit Delay1' */
    UnitDelay1_DSTATE_b_idx_2 = check_serial_2msg_processor_2_B.data_vector_n[2];

    /* Update for UnitDelay: '<S2>/Unit Delay1' */
    UnitDelay1_DSTATE_idx_3 = check_serial_2msg_processor_2_B.data_vector_m[3];

    /* Update for UnitDelay: '<S4>/Unit Delay1' */
    UnitDelay1_DSTATE_b_idx_3 = check_serial_2msg_processor_2_B.data_vector_n[3];

    /* Update for UnitDelay: '<S4>/Unit Delay3' */
    UnitDelay3_DSTATE_d = check_serial_2msg_processor_2_B.packet_size;

    /* Update for UnitDelay: '<S4>/Unit Delay4' */
    UnitDelay4_DSTATE_c = check_serial_2msg_processor_2_B.msg_id;

    /* Update for UnitDelay: '<S4>/Unit Delay5' */
    UnitDelay5_DSTATE = check_serial_2msg_processor_2_B.new_data;

    /* Update for UnitDelay: '<S6>/Unit Delay' */
    memcpy(&UnitDelay_DSTATE_i[0], &check_serial_2msg_processor_2_B.y[0], 144U *
           sizeof(uint8_T));

    /* Update for DiscreteIntegrator: '<S6>/Accumulator' incorporates:
     *  DataTypeConversion: '<S6>/Data Type Conversion'
     */
    check_serial_2msg_processor_2_DW.Accumulator_DSTATE = (uint8_T)((uint32_T)
      check_serial_2msg_processor_2_DW.Accumulator_DSTATE +
      check_serial_2msg_processor_2_B.available);
    srUpdateBC(check_serial_2msg_processor_2_DW.message_rx_looper_SubsysRanBC);

    /* Constant: '<S2>/Constant' */
    loopCond = (check_serial_2msg_processor_2_P.Constant_Value != 0.0);
    s2_iter++;
  }

  /* End of Outputs for SubSystem: '<S1>/message_rx_looper' */
  /* S-Function (sldrttet): '<Root>/Execution Time' */
  /* S-Function Block: <Root>/Execution Time */
  {
    RTBIO_DriverIO(INTERNALIO, (IODEVICE) RTBIOTOTALEXECUTIONTIME, IOREAD, 0, 0,
                   &check_serial_2msg_processor_2_B.ExecutionTime, 0);
  }
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
  check_serial_2msg_processor_2_PrevZCX.TriggeredSubsystem_Trig_ZCE = POS_ZCSIG;

  {
    int32_T i;

    /* SystemInitialize for Iterator SubSystem: '<S1>/message_rx_looper' incorporates:
     *  WhileIterator: '<S2>/While Iterator'
     */
    /* InitializeConditions for DiscreteIntegrator: '<S6>/Accumulator' */
    check_serial_2msg_processor_2_DW.Accumulator_DSTATE =
      check_serial_2msg_processor_2_P.Accumulator_IC;

    /* SystemInitialize for Enabled and Triggered SubSystem: '<S4>/Triggered Subsystem' */
    /* SystemInitialize for Outport: '<S8>/Out1' incorporates:
     *  Inport: '<S8>/data_vector'
     */
    check_serial_2msg_processor_2_B.data_vector[0] =
      check_serial_2msg_processor_2_P.Out1_Y0;
    check_serial_2msg_processor_2_B.data_vector[1] =
      check_serial_2msg_processor_2_P.Out1_Y0;
    check_serial_2msg_processor_2_B.data_vector[2] =
      check_serial_2msg_processor_2_P.Out1_Y0;
    check_serial_2msg_processor_2_B.data_vector[3] =
      check_serial_2msg_processor_2_P.Out1_Y0;

    /* End of SystemInitialize for SubSystem: '<S4>/Triggered Subsystem' */

    /* SystemInitialize for Outport: '<S2>/iterator' */
    check_serial_2msg_processor_2_B.WhileIterator =
      check_serial_2msg_processor_2_P.iterator_Y0;

    /* SystemInitialize for Outport: '<S2>/y' */
    for (i = 0; i < 144; i++) {
      check_serial_2msg_processor_2_B.y[i] =
        check_serial_2msg_processor_2_P.y_Y0;
    }

    /* End of SystemInitialize for Outport: '<S2>/y' */
    /* End of SystemInitialize for SubSystem: '<S1>/message_rx_looper' */
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

  rtmSetTFinal(check_serial_2msg_processor_2_M, -1);
  check_serial_2msg_processor_2_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  check_serial_2msg_processor_2_M->Sizes.checksums[0] = (1957581205U);
  check_serial_2msg_processor_2_M->Sizes.checksums[1] = (2880920992U);
  check_serial_2msg_processor_2_M->Sizes.checksums[2] = (2871374533U);
  check_serial_2msg_processor_2_M->Sizes.checksums[3] = (3742932676U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[6];
    check_serial_2msg_processor_2_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &check_serial_2msg_processor_2_DW.message_rx_looper_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &check_serial_2msg_processor_2_DW.message_rx_looper_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &check_serial_2msg_processor_2_DW.TriggeredSubsystem_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &check_serial_2msg_processor_2_DW.message_rx_looper_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
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
  check_serial_2msg_processor_2_M->Sizes.numBlocks = (75);/* Number of blocks */
  check_serial_2msg_processor_2_M->Sizes.numBlockIO = (34);/* Number of block outputs */
  check_serial_2msg_processor_2_M->Sizes.numBlockPrms = (43);/* Sum of parameter "widths" */
  return check_serial_2msg_processor_2_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
