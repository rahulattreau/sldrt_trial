/*
 * check_serial_new_arduino_time.c
 *
 * Code generation for model "check_serial_new_arduino_time".
 *
 * Model version              : 2.7
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Wed Mar 24 21:40:21 2021
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

/* Previous zero-crossings (trigger) states */
PrevZCX_check_serial_new_arduino_time_T check_serial_new_arduino_time_PrevZCX;

/* Real-time model */
static RT_MODEL_check_serial_new_arduino_time_T check_serial_new_arduino_time_M_;
RT_MODEL_check_serial_new_arduino_time_T *const check_serial_new_arduino_time_M =
  &check_serial_new_arduino_time_M_;
static void rate_scheduler(void);

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (check_serial_new_arduino_time_M->Timing.TaskCounters.TID[1])++;
  if ((check_serial_new_arduino_time_M->Timing.TaskCounters.TID[1]) > 9) {/* Sample time: [0.1s, 0.0s] */
    check_serial_new_arduino_time_M->Timing.TaskCounters.TID[1] = 0;
  }

  check_serial_new_arduino_time_M->Timing.sampleHits[1] =
    (check_serial_new_arduino_time_M->Timing.TaskCounters.TID[1] == 0);
}

/* Model output function */
void check_serial_new_arduino_time_output(void)
{
  if (check_serial_new_arduino_time_M->Timing.TaskCounters.TID[1] == 0) {
    /* Delay: '<S5>/Resettable Delay' incorporates:
     *  Constant: '<S5>/Constant3'
     *  UnitDelay: '<S5>/Unit Delay'
     */
    check_serial_new_arduino_time_DW.icLoad =
      ((check_serial_new_arduino_time_DW.UnitDelay_DSTATE &&
        (check_serial_new_arduino_time_PrevZCX.ResettableDelay_Reset_ZCE !=
         POS_ZCSIG)) || check_serial_new_arduino_time_DW.icLoad);
    check_serial_new_arduino_time_PrevZCX.ResettableDelay_Reset_ZCE =
      check_serial_new_arduino_time_DW.UnitDelay_DSTATE;
    if (check_serial_new_arduino_time_DW.icLoad) {
      check_serial_new_arduino_time_DW.ResettableDelay_DSTATE =
        check_serial_new_arduino_time_P.Constant3_Value;
    }

    /* Sum: '<S5>/Sum' incorporates:
     *  Constant: '<S5>/Constant1'
     *  Delay: '<S5>/Resettable Delay'
     */
    check_serial_new_arduino_time_B.Sum = (uint8_T)((uint32_T)
      check_serial_new_arduino_time_P.Constant1_Value +
      check_serial_new_arduino_time_DW.ResettableDelay_DSTATE);
  }

  /* RateTransition: '<S1>/Rate Transition' */
  check_serial_new_arduino_time_B.RateTransition =
    check_serial_new_arduino_time_B.Sum;

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
     check_serial_new_arduino_time_B.RateTransition);

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
  if (check_serial_new_arduino_time_M->Timing.TaskCounters.TID[1] == 0) {
    /* RelationalOperator: '<S5>/Relational O perator' incorporates:
     *  Constant: '<S5>/Constant2'
     */
    check_serial_new_arduino_time_B.RelationalOperator_c =
      (check_serial_new_arduino_time_B.Sum ==
       check_serial_new_arduino_time_P.Constant2_Value);
  }
}

/* Model update function */
void check_serial_new_arduino_time_update(void)
{
  if (check_serial_new_arduino_time_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update for UnitDelay: '<S5>/Unit Delay' */
    check_serial_new_arduino_time_DW.UnitDelay_DSTATE =
      check_serial_new_arduino_time_B.RelationalOperator_c;

    /* Update for Delay: '<S5>/Resettable Delay' */
    check_serial_new_arduino_time_DW.icLoad = false;
    check_serial_new_arduino_time_DW.ResettableDelay_DSTATE =
      check_serial_new_arduino_time_B.Sum;
  }

  /* Update for S-Function (sldrtpo): '<S3>/Packet Output' */

  /* S-Function Block: <S3>/Packet Output */
  {
    uint8_T outdata[1U];
    RTWin_ANYTYPEPTR outdp;
    outdp.p_uint8_T = outdata;

    {
      uint8_T pktout = check_serial_new_arduino_time_B.RateTransition;
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
    check_serial_new_arduino_time_P.Constant_Value;
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
  if (check_serial_new_arduino_time_M->Timing.TaskCounters.TID[1] == 0) {
    /* Update absolute timer for sample time: [0.1s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++check_serial_new_arduino_time_M->Timing.clockTick1)) {
      ++check_serial_new_arduino_time_M->Timing.clockTickH1;
    }

    check_serial_new_arduino_time_M->Timing.t[1] =
      check_serial_new_arduino_time_M->Timing.clockTick1 *
      check_serial_new_arduino_time_M->Timing.stepSize1 +
      check_serial_new_arduino_time_M->Timing.clockTickH1 *
      check_serial_new_arduino_time_M->Timing.stepSize1 * 4294967296.0;
  }

  rate_scheduler();
}

/* Model initialize function */
void check_serial_new_arduino_time_initialize(void)
{
  /* Start for S-Function (sldrtpo): '<S3>/Packet Output' */

  /* S-Function Block: <S3>/Packet Output */
  /* no initial value should be set */
  check_serial_new_arduino_time_PrevZCX.ResettableDelay_Reset_ZCE = POS_ZCSIG;

  /* InitializeConditions for UnitDelay: '<S5>/Unit Delay' */
  check_serial_new_arduino_time_DW.UnitDelay_DSTATE =
    check_serial_new_arduino_time_P.UnitDelay_InitialCondition;

  /* InitializeConditions for Delay: '<S5>/Resettable Delay' */
  check_serial_new_arduino_time_DW.icLoad = true;

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
    mdlTsMap[1] = 1;
    check_serial_new_arduino_time_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    check_serial_new_arduino_time_M->Timing.sampleTimes =
      (&check_serial_new_arduino_time_M->Timing.sampleTimesArray[0]);
    check_serial_new_arduino_time_M->Timing.offsetTimes =
      (&check_serial_new_arduino_time_M->Timing.offsetTimesArray[0]);

    /* task periods */
    check_serial_new_arduino_time_M->Timing.sampleTimes[0] = (0.01);
    check_serial_new_arduino_time_M->Timing.sampleTimes[1] = (0.1);

    /* task offsets */
    check_serial_new_arduino_time_M->Timing.offsetTimes[0] = (0.0);
    check_serial_new_arduino_time_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(check_serial_new_arduino_time_M,
             &check_serial_new_arduino_time_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      check_serial_new_arduino_time_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    check_serial_new_arduino_time_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(check_serial_new_arduino_time_M, -1);
  check_serial_new_arduino_time_M->Timing.stepSize0 = 0.01;
  check_serial_new_arduino_time_M->Timing.stepSize1 = 0.1;

  /* External mode info */
  check_serial_new_arduino_time_M->Sizes.checksums[0] = (3424647604U);
  check_serial_new_arduino_time_M->Sizes.checksums[1] = (1334762674U);
  check_serial_new_arduino_time_M->Sizes.checksums[2] = (3098170034U);
  check_serial_new_arduino_time_M->Sizes.checksums[3] = (3743245936U);

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
  check_serial_new_arduino_time_M->Sizes.numSampTimes = (2);/* Number of sample times */
  check_serial_new_arduino_time_M->Sizes.numBlocks = (26);/* Number of blocks */
  check_serial_new_arduino_time_M->Sizes.numBlockIO = (14);/* Number of block outputs */
  check_serial_new_arduino_time_M->Sizes.numBlockPrms = (14);/* Sum of parameter "widths" */
  return check_serial_new_arduino_time_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
