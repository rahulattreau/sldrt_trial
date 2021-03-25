/*
 * check_serial_new_arduino_time.c
 *
 * Code generation for model "check_serial_new_arduino_time".
 *
 * Model version              : 2.8
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Wed Mar 24 20:49:51 2021
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "check_serial_new_arduino_time.h"
#include "check_serial_new_arduino_time_private.h"
#include "check_serial_new_arduino_time_dt.h"

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
B_check_serial_new_arduino_time_T check_serial_new_arduino_time_B;

/* Block states (default storage) */
DW_check_serial_new_arduino_time_T check_serial_new_arduino_time_DW;

/* Real-time model */
static RT_MODEL_check_serial_new_arduino_time_T check_serial_new_arduino_time_M_;
RT_MODEL_check_serial_new_arduino_time_T *const check_serial_new_arduino_time_M =
  &check_serial_new_arduino_time_M_;

/* Model output function */
void check_serial_new_arduino_time_output(void)
{
  real_T tmp;

  /* DataTypeConversion: '<S1>/Data Type Conversion' incorporates:
   *  Constant: '<S1>/Constant'
   */
  tmp = floor(check_serial_new_arduino_time_P.Constant_Value);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S1>/Data Type Conversion' */
  check_serial_new_arduino_time_B.DataTypeConversion = (uint8_T)(tmp < 0.0 ?
    (int32_T)(uint8_T)-(int8_T)(uint8_T)-tmp : (int32_T)(uint8_T)tmp);

  /* S-Function (sldrtpo): '<S3>/Packet Output' */
  /* S-Function Block: <S3>/Packet Output */
  check_serial_new_arduino_time_B.PacketOutput_o3 = 0;/* Missed Ticks value is always zero */

  {
    int status = RTBIO_DriverIO(0, STREAMOUTPUT, IOSTATUS, 1U, NULL, NULL, NULL);
    check_serial_new_arduino_time_B.PacketOutput_o2 = (status>>1) & 0x1;/* Data Error port */
    check_serial_new_arduino_time_B.PacketOutput_o1 = status & 0x1;/* Data Ready port */
  }

  /* S-Function (sldrtpi): '<S2>/Packet Input' */
  /* S-Function Block: <S2>/Packet Input */
  {
    uint8_T indata[1U];
    int status = RTBIO_DriverIO(0, STREAMINPUT, IOREAD, 1U,
      &check_serial_new_arduino_time_P.PacketInput_PacketID, (double*) indata,
      NULL);
    check_serial_new_arduino_time_B.PacketInput_o4 = 0;/* Missed Ticks value is always zero */
    check_serial_new_arduino_time_B.PacketInput_o3 = (status>>1) & 0x1;/* Data Error port */
    check_serial_new_arduino_time_B.PacketInput_o2 = status & 0x1;/* Data Ready port */
    if (status & 0x1) {
      RTWin_ANYTYPEPTR indp;
      indp.p_uint8_T = indata;
      check_serial_new_arduino_time_B.PacketInput_o1 = *indp.p_uint8_T++;
    }
  }

  /* RelationalOperator: '<S4>/Relational Operator' */
  check_serial_new_arduino_time_B.RelationalOperator =
    (check_serial_new_arduino_time_B.PacketInput_o1 ==
     check_serial_new_arduino_time_B.DataTypeConversion);

  /* DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  if (check_serial_new_arduino_time_B.RelationalOperator ||
      (check_serial_new_arduino_time_DW.DiscreteTimeIntegrator_PrevResetState !=
       0)) {
    check_serial_new_arduino_time_DW.DiscreteTimeIntegrator_DSTATE =
      check_serial_new_arduino_time_P.DiscreteTimeIntegrator_IC;
  }

  /* DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  check_serial_new_arduino_time_B.time_secs =
    check_serial_new_arduino_time_DW.DiscreteTimeIntegrator_DSTATE;

  /* Gain: '<S4>/Gain' */
  check_serial_new_arduino_time_B.time_ms =
    check_serial_new_arduino_time_P.Gain_Gain *
    check_serial_new_arduino_time_B.time_secs;
}

/* Model update function */
void check_serial_new_arduino_time_update(void)
{
  /* Update for S-Function (sldrtpo): '<S3>/Packet Output' */

  /* S-Function Block: <S3>/Packet Output */
  {
    uint8_T outdata[1U];
    RTWin_ANYTYPEPTR outdp;
    outdp.p_uint8_T = outdata;

    {
      uint8_T pktout = check_serial_new_arduino_time_B.DataTypeConversion;
      *outdp.p_uint8_T++ = pktout;
    }

    RTBIO_DriverIO(0, STREAMOUTPUT, IOWRITE, 1U,
                   &check_serial_new_arduino_time_P.PacketOutput_PacketID,
                   (double*) outdata, NULL);
  }

  /* Update for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S4>/Constant'
   */
  check_serial_new_arduino_time_DW.DiscreteTimeIntegrator_DSTATE +=
    check_serial_new_arduino_time_P.DiscreteTimeIntegrator_gainval *
    check_serial_new_arduino_time_P.Constant_Value_k;
  check_serial_new_arduino_time_DW.DiscreteTimeIntegrator_PrevResetState =
    (int8_T)check_serial_new_arduino_time_B.RelationalOperator;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++check_serial_new_arduino_time_M->Timing.clockTick0)) {
    ++check_serial_new_arduino_time_M->Timing.clockTickH0;
  }

  check_serial_new_arduino_time_M->Timing.t[0] =
    check_serial_new_arduino_time_M->Timing.clockTick0 *
    check_serial_new_arduino_time_M->Timing.stepSize0 +
    check_serial_new_arduino_time_M->Timing.clockTickH0 *
    check_serial_new_arduino_time_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void check_serial_new_arduino_time_initialize(void)
{
  /* Start for S-Function (sldrtpo): '<S3>/Packet Output' */

  /* S-Function Block: <S3>/Packet Output */
  /* no initial value should be set */

  /* InitializeConditions for DiscreteIntegrator: '<S4>/Discrete-Time Integrator' */
  check_serial_new_arduino_time_DW.DiscreteTimeIntegrator_DSTATE =
    check_serial_new_arduino_time_P.DiscreteTimeIntegrator_IC;
  check_serial_new_arduino_time_DW.DiscreteTimeIntegrator_PrevResetState = 0;
}

/* Model terminate function */
void check_serial_new_arduino_time_terminate(void)
{
  /* Terminate for S-Function (sldrtpo): '<S3>/Packet Output' */

  /* S-Function Block: <S3>/Packet Output */
  /* no initial value should be set */
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  check_serial_new_arduino_time_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  check_serial_new_arduino_time_update();
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
  check_serial_new_arduino_time_initialize();
}

void MdlTerminate(void)
{
  check_serial_new_arduino_time_terminate();
}

/* Registration function */
RT_MODEL_check_serial_new_arduino_time_T *check_serial_new_arduino_time(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* non-finite (run-time) assignments */
  check_serial_new_arduino_time_P.PacketOutput_MaxMissedTicks = rtInf;
  check_serial_new_arduino_time_P.PacketInput_MaxMissedTicks = rtInf;

  /* initialize real-time model */
  (void) memset((void *)check_serial_new_arduino_time_M, 0,
                sizeof(RT_MODEL_check_serial_new_arduino_time_T));

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      check_serial_new_arduino_time_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    check_serial_new_arduino_time_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    check_serial_new_arduino_time_M->Timing.sampleTimes =
      (&check_serial_new_arduino_time_M->Timing.sampleTimesArray[0]);
    check_serial_new_arduino_time_M->Timing.offsetTimes =
      (&check_serial_new_arduino_time_M->Timing.offsetTimesArray[0]);

    /* task periods */
    check_serial_new_arduino_time_M->Timing.sampleTimes[0] = (0.01);

    /* task offsets */
    check_serial_new_arduino_time_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(check_serial_new_arduino_time_M,
             &check_serial_new_arduino_time_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      check_serial_new_arduino_time_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    check_serial_new_arduino_time_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(check_serial_new_arduino_time_M, -1);
  check_serial_new_arduino_time_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  check_serial_new_arduino_time_M->Sizes.checksums[0] = (465528581U);
  check_serial_new_arduino_time_M->Sizes.checksums[1] = (2442592527U);
  check_serial_new_arduino_time_M->Sizes.checksums[2] = (163522946U);
  check_serial_new_arduino_time_M->Sizes.checksums[3] = (3412180533U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    check_serial_new_arduino_time_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(check_serial_new_arduino_time_M->extModeInfo,
      &check_serial_new_arduino_time_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(check_serial_new_arduino_time_M->extModeInfo,
                        check_serial_new_arduino_time_M->Sizes.checksums);
    rteiSetTPtr(check_serial_new_arduino_time_M->extModeInfo, rtmGetTPtr
                (check_serial_new_arduino_time_M));
  }

  check_serial_new_arduino_time_M->solverInfoPtr =
    (&check_serial_new_arduino_time_M->solverInfo);
  check_serial_new_arduino_time_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&check_serial_new_arduino_time_M->solverInfo, 0.01);
  rtsiSetSolverMode(&check_serial_new_arduino_time_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  check_serial_new_arduino_time_M->blockIO = ((void *)
    &check_serial_new_arduino_time_B);
  (void) memset(((void *) &check_serial_new_arduino_time_B), 0,
                sizeof(B_check_serial_new_arduino_time_T));

  /* parameters */
  check_serial_new_arduino_time_M->defaultParam = ((real_T *)
    &check_serial_new_arduino_time_P);

  /* states (dwork) */
  check_serial_new_arduino_time_M->dwork = ((void *)
    &check_serial_new_arduino_time_DW);
  (void) memset((void *)&check_serial_new_arduino_time_DW, 0,
                sizeof(DW_check_serial_new_arduino_time_T));

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    check_serial_new_arduino_time_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 14;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  /* Initialize Sizes */
  check_serial_new_arduino_time_M->Sizes.numContStates = (0);/* Number of continuous states */
  check_serial_new_arduino_time_M->Sizes.numY = (0);/* Number of model outputs */
  check_serial_new_arduino_time_M->Sizes.numU = (0);/* Number of model inputs */
  check_serial_new_arduino_time_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  check_serial_new_arduino_time_M->Sizes.numSampTimes = (1);/* Number of sample times */
  check_serial_new_arduino_time_M->Sizes.numBlocks = (20);/* Number of blocks */
  check_serial_new_arduino_time_M->Sizes.numBlockIO = (11);/* Number of block outputs */
  check_serial_new_arduino_time_M->Sizes.numBlockPrms = (11);/* Sum of parameter "widths" */
  return check_serial_new_arduino_time_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
