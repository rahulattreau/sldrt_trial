/*
 * check_serial_2msg_processor_2.c
 *
 * Code generation for model "check_serial_2msg_processor_2".
 *
 * Model version              : 2.57
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Fri Mar 26 17:25:05 2021
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

/* Real-time model */
static RT_MODEL_check_serial_2msg_processor_2_T check_serial_2msg_processor_2_M_;
RT_MODEL_check_serial_2msg_processor_2_T *const check_serial_2msg_processor_2_M =
  &check_serial_2msg_processor_2_M_;

/* Model output function */
void check_serial_2msg_processor_2_output(void)
{
  /* local block i/o variables */
  boolean_T rtb_PacketInput2_o2;
  real_T tmp;
  int32_T i;
  uint8_T UnitDelay_DSTATE[20];
  uint8_T s1_iter;
  boolean_T loopCond;

  /* Reset subsysRan breadcrumbs */
  srClearBC(check_serial_2msg_processor_2_DW.ForIteratorSubsystem_SubsysRanBC);

  /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
   *  WhileIterator: '<S1>/While Iterator'
   */
  s1_iter = 1U;

  /* InitializeConditions for DiscreteIntegrator: '<S1>/Accumulator1' */
  check_serial_2msg_processor_2_DW.Accumulator1_DSTATE =
    check_serial_2msg_processor_2_P.Accumulator1_IC;

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
  for (i = 0; i < 20; i++) {
    UnitDelay_DSTATE[i] =
      check_serial_2msg_processor_2_P.UnitDelay_InitialCondition;
  }

  /* End of InitializeConditions for UnitDelay: '<S2>/Unit Delay' */

  /* InitializeConditions for DiscreteIntegrator: '<S2>/Accumulator' */
  check_serial_2msg_processor_2_DW.Accumulator_DSTATE =
    check_serial_2msg_processor_2_P.Accumulator_IC;

  /* Constant: '<Root>/Constant18' */
  loopCond = check_serial_2msg_processor_2_P.Constant18_Value;
  while (loopCond && (s1_iter <= 144)) {
    /* Outputs for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
     *  WhileIterator: '<S1>/While Iterator'
     */
    /* SystemInitialize for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
     *  WhileIterator: '<S1>/While Iterator'
     */
    check_serial_2msg_processor_2_B.WhileIterator = s1_iter;

    /* RelationalOperator: '<S1>/Equal' incorporates:
     *  Constant: '<S1>/Constant2'
     *  DiscreteIntegrator: '<S1>/Accumulator1'
     */
    check_serial_2msg_processor_2_B.Equal =
      (check_serial_2msg_processor_2_DW.Accumulator1_DSTATE <
       check_serial_2msg_processor_2_P.Constant2_Value);

    /* S-Function (sldrtpi): '<S1>/Packet Input2' */
    /* S-Function Block: <S1>/Packet Input2 */
    {
      uint8_T indata[1U];
      int status = RTBIO_DriverIO(0, STREAMINPUT, IOREAD, 1U,
        &check_serial_2msg_processor_2_P.PacketInput2_PacketID, (double*) indata,
        NULL);
      rtb_PacketInput2_o2 = status & 0x1;/* Data Ready port */
      if (status & 0x1) {
        RTWin_ANYTYPEPTR indp;
        indp.p_uint8_T = indata;
        check_serial_2msg_processor_2_B.PacketInput2_o1 = *indp.p_uint8_T++;
      }
    }

    /* MATLAB Function: '<S2>/MATLAB Function' incorporates:
     *  DiscreteIntegrator: '<S2>/Accumulator'
     *  UnitDelay: '<S2>/Unit Delay'
     */
    for (i = 0; i < 20; i++) {
      check_serial_2msg_processor_2_B.y[i] = UnitDelay_DSTATE[i];
    }

    check_serial_2msg_processor_2_B.y[check_serial_2msg_processor_2_B.WhileIterator
      - 1] = check_serial_2msg_processor_2_DW.Accumulator_DSTATE;

    /* End of MATLAB Function: '<S2>/MATLAB Function' */

    /* Update for DiscreteIntegrator: '<S1>/Accumulator1' incorporates:
     *  Constant: '<S1>/Constant'
     */
    check_serial_2msg_processor_2_DW.Accumulator1_DSTATE +=
      check_serial_2msg_processor_2_P.Accumulator1_gainval *
      check_serial_2msg_processor_2_P.Constant_Value;

    /* Update for UnitDelay: '<S2>/Unit Delay' */
    for (i = 0; i < 20; i++) {
      UnitDelay_DSTATE[i] = check_serial_2msg_processor_2_B.y[i];
    }

    /* End of Update for UnitDelay: '<S2>/Unit Delay' */

    /* Update for DiscreteIntegrator: '<S2>/Accumulator' incorporates:
     *  DataTypeConversion: '<S2>/Data Type Conversion'
     */
    check_serial_2msg_processor_2_DW.Accumulator_DSTATE = (uint8_T)((uint32_T)
      check_serial_2msg_processor_2_DW.Accumulator_DSTATE + rtb_PacketInput2_o2);
    srUpdateBC(check_serial_2msg_processor_2_DW.ForIteratorSubsystem_SubsysRanBC);

    /* Logic: '<S1>/Logical Operator1' */
    loopCond = (check_serial_2msg_processor_2_B.Equal || rtb_PacketInput2_o2);
    s1_iter++;
  }

  /* End of Outputs for SubSystem: '<Root>/For Iterator Subsystem' */

  /* S-Function (sldrttstamp): '<Root>/Timestamp' */
  /* S-Function Block: <Root>/Timestamp */
  {
    check_serial_2msg_processor_2_B.Timestamp = sldrt_read_timestamp();
  }

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
  {
    int32_T i;

    /* SystemInitialize for Iterator SubSystem: '<Root>/For Iterator Subsystem' incorporates:
     *  WhileIterator: '<S1>/While Iterator'
     */
    /* InitializeConditions for DiscreteIntegrator: '<S1>/Accumulator1' */
    check_serial_2msg_processor_2_DW.Accumulator1_DSTATE =
      check_serial_2msg_processor_2_P.Accumulator1_IC;

    /* InitializeConditions for DiscreteIntegrator: '<S2>/Accumulator' */
    check_serial_2msg_processor_2_DW.Accumulator_DSTATE =
      check_serial_2msg_processor_2_P.Accumulator_IC;

    /* SystemInitialize for Outport: '<S1>/Out1' */
    check_serial_2msg_processor_2_B.WhileIterator =
      check_serial_2msg_processor_2_P.Out1_Y0;

    /* SystemInitialize for Outport: '<S1>/y' */
    for (i = 0; i < 20; i++) {
      check_serial_2msg_processor_2_B.y[i] =
        check_serial_2msg_processor_2_P.y_Y0;
    }

    /* End of SystemInitialize for Outport: '<S1>/y' */
    /* End of SystemInitialize for SubSystem: '<Root>/For Iterator Subsystem' */
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
  check_serial_2msg_processor_2_M->Sizes.checksums[0] = (2935135364U);
  check_serial_2msg_processor_2_M->Sizes.checksums[1] = (363550746U);
  check_serial_2msg_processor_2_M->Sizes.checksums[2] = (405179995U);
  check_serial_2msg_processor_2_M->Sizes.checksums[3] = (1360949718U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    check_serial_2msg_processor_2_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &check_serial_2msg_processor_2_DW.ForIteratorSubsystem_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &check_serial_2msg_processor_2_DW.ForIteratorSubsystem_SubsysRanBC;
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
  check_serial_2msg_processor_2_M->Sizes.numBlocks = (53);/* Number of blocks */
  check_serial_2msg_processor_2_M->Sizes.numBlockIO = (21);/* Number of block outputs */
  check_serial_2msg_processor_2_M->Sizes.numBlockPrms = (33);/* Sum of parameter "widths" */
  return check_serial_2msg_processor_2_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
