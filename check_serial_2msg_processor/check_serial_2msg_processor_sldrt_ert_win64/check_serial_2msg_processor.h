/*
 * check_serial_2msg_processor.h
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

#ifndef RTW_HEADER_check_serial_2msg_processor_h_
#define RTW_HEADER_check_serial_2msg_processor_h_
#include <math.h>
#include <float.h>
#include <string.h>
#ifndef check_serial_2msg_processor_COMMON_INCLUDES_
#define check_serial_2msg_processor_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "sldrtdef.h"
#endif                        /* check_serial_2msg_processor_COMMON_INCLUDES_ */

#include "check_serial_2msg_processor_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  int32_T PacketInput_o4;              /* '<Root>/Packet Input' */
  int32_T PacketInput1_o3;             /* '<Root>/Packet Input1' */
  uint8_T DataTypeConversion;          /* '<Root>/Data Type Conversion' */
  uint8_T DataTypeConversion1;         /* '<Root>/Data Type Conversion1' */
  uint8_T DataTypeConversion2;         /* '<Root>/Data Type Conversion2' */
  uint8_T DataTypeConversion3;         /* '<Root>/Data Type Conversion3' */
  uint8_T DataTypeConversion4;         /* '<Root>/Data Type Conversion4' */
  uint8_T DataTypeConversion5;         /* '<Root>/Data Type Conversion5' */
  uint8_T DataTypeConversion10;        /* '<Root>/Data Type Conversion10' */
  uint8_T DataTypeConversion11;        /* '<Root>/Data Type Conversion11' */
  uint8_T DataTypeConversion12;        /* '<Root>/Data Type Conversion12' */
  uint8_T DataTypeConversion13;        /* '<Root>/Data Type Conversion13' */
  uint8_T DataTypeConversion6;         /* '<Root>/Data Type Conversion6' */
  uint8_T DataTypeConversion7;         /* '<Root>/Data Type Conversion7' */
  uint8_T DataTypeConversion8;         /* '<Root>/Data Type Conversion8' */
  uint8_T DataTypeConversion9;         /* '<Root>/Data Type Conversion9' */
  uint8_T PacketInput_o1[6];           /* '<Root>/Packet Input' */
  uint8_T PacketInput1_o1[8];          /* '<Root>/Packet Input1' */
  uint8_T y[8];                        /* '<Root>/MATLAB Function2' */
  uint8_T y_k[6];                      /* '<Root>/MATLAB Function1' */
  boolean_T PacketInput_o2;            /* '<Root>/Packet Input' */
  boolean_T PacketInput_o3;            /* '<Root>/Packet Input' */
} B_check_serial_2msg_processor_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  void *PacketOutput_PWORK[2];         /* '<Root>/Packet Output' */
  void *PacketOutput1_PWORK[2];        /* '<Root>/Packet Output1' */
  void *PacketInput_PWORK;             /* '<Root>/Packet Input' */
  void *PacketInput1_PWORK;            /* '<Root>/Packet Input1' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *LoggedData;
  } Scope12_PWORK;                     /* '<Root>/Scope12' */

  struct {
    void *LoggedData;
  } Scope14_PWORK;                     /* '<Root>/Scope14' */

  struct {
    void *LoggedData;
  } Scope15_PWORK;                     /* '<Root>/Scope15' */

  struct {
    void *LoggedData;
  } Scope16_PWORK;                     /* '<Root>/Scope16' */

  struct {
    void *LoggedData;
  } Scope17_PWORK;                     /* '<Root>/Scope17' */

  struct {
    void *LoggedData;
  } Scope18_PWORK;                     /* '<Root>/Scope18' */

  struct {
    void *LoggedData;
  } Scope19_PWORK;                     /* '<Root>/Scope19' */

  struct {
    void *LoggedData;
  } Scope20_PWORK;                     /* '<Root>/Scope20' */

  struct {
    void *LoggedData;
  } Scope21_PWORK;                     /* '<Root>/Scope21' */

  struct {
    void *LoggedData;
  } Scope22_PWORK;                     /* '<Root>/Scope22' */

  struct {
    void *LoggedData;
  } Scope23_PWORK;                     /* '<Root>/Scope23' */

  struct {
    void *LoggedData;
  } Scope24_PWORK;                     /* '<Root>/Scope24' */

  struct {
    void *LoggedData;
  } Scope5_PWORK;                      /* '<Root>/Scope5' */

  struct {
    void *LoggedData;
  } Scope7_PWORK;                      /* '<Root>/Scope7' */

  struct {
    void *LoggedData;
  } Scope8_PWORK;                      /* '<Root>/Scope8' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *LoggedData;
  } Scope10_PWORK;                     /* '<Root>/Scope10' */

  struct {
    void *LoggedData;
  } Scope11_PWORK;                     /* '<Root>/Scope11' */

  struct {
    void *LoggedData;
  } Scope13_PWORK;                     /* '<Root>/Scope13' */

  struct {
    void *LoggedData;
  } Scope2_PWORK;                      /* '<Root>/Scope2' */

  struct {
    void *LoggedData;
  } Scope3_PWORK;                      /* '<Root>/Scope3' */

  struct {
    void *LoggedData;
  } Scope4_PWORK;                      /* '<Root>/Scope4' */

  struct {
    void *LoggedData;
  } Scope6_PWORK;                      /* '<Root>/Scope6' */

  struct {
    void *LoggedData;
  } Scope9_PWORK;                      /* '<Root>/Scope9' */

  uint8_T UnitDelay_DSTATE[6];         /* '<Root>/Unit Delay' */
  uint8_T UnitDelay1_DSTATE[8];        /* '<Root>/Unit Delay1' */
} DW_check_serial_2msg_processor_T;

/* Parameters (default storage) */
struct P_check_serial_2msg_processor_T_ {
  real_T PacketOutput_MaxMissedTicks;
                                  /* Mask Parameter: PacketOutput_MaxMissedTicks
                                   * Referenced by: '<Root>/Packet Output'
                                   */
  real_T PacketOutput1_MaxMissedTicks;
                                 /* Mask Parameter: PacketOutput1_MaxMissedTicks
                                  * Referenced by: '<Root>/Packet Output1'
                                  */
  real_T PacketInput_MaxMissedTicks;
                                   /* Mask Parameter: PacketInput_MaxMissedTicks
                                    * Referenced by: '<Root>/Packet Input'
                                    */
  real_T PacketInput1_MaxMissedTicks;
                                  /* Mask Parameter: PacketInput1_MaxMissedTicks
                                   * Referenced by: '<Root>/Packet Input1'
                                   */
  real_T PacketOutput_YieldWhenWaiting;
                                /* Mask Parameter: PacketOutput_YieldWhenWaiting
                                 * Referenced by: '<Root>/Packet Output'
                                 */
  real_T PacketOutput1_YieldWhenWaiting;
                               /* Mask Parameter: PacketOutput1_YieldWhenWaiting
                                * Referenced by: '<Root>/Packet Output1'
                                */
  real_T PacketInput_YieldWhenWaiting;
                                 /* Mask Parameter: PacketInput_YieldWhenWaiting
                                  * Referenced by: '<Root>/Packet Input'
                                  */
  real_T PacketInput1_YieldWhenWaiting;
                                /* Mask Parameter: PacketInput1_YieldWhenWaiting
                                 * Referenced by: '<Root>/Packet Input1'
                                 */
  int32_T PacketOutput_PacketID;       /* Mask Parameter: PacketOutput_PacketID
                                        * Referenced by: '<Root>/Packet Output'
                                        */
  int32_T PacketOutput1_PacketID;      /* Mask Parameter: PacketOutput1_PacketID
                                        * Referenced by: '<Root>/Packet Output1'
                                        */
  int32_T PacketInput_PacketID;        /* Mask Parameter: PacketInput_PacketID
                                        * Referenced by: '<Root>/Packet Input'
                                        */
  int32_T PacketInput1_PacketID;       /* Mask Parameter: PacketInput1_PacketID
                                        * Referenced by: '<Root>/Packet Input1'
                                        */
  real_T Constant_Value;               /* Expression: hex2dec('0xEF')
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: hex2dec('0xF5')
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: hex2dec('0x03')
                                        * Referenced by: '<Root>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: hex2dec('0x00')
                                        * Referenced by: '<Root>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: hex2dec('0x01')
                                        * Referenced by: '<Root>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: hex2dec('0x02')
                                        * Referenced by: '<Root>/Constant5'
                                        */
  real_T Constant10_Value;             /* Expression: hex2dec('0x01')
                                        * Referenced by: '<Root>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: hex2dec('0x02')
                                        * Referenced by: '<Root>/Constant11'
                                        */
  real_T Constant12_Value;             /* Expression: hex2dec('0x04')
                                        * Referenced by: '<Root>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: hex2dec('0xFF')
                                        * Referenced by: '<Root>/Constant13'
                                        */
  real_T Constant6_Value;              /* Expression: hex2dec('0xEF')
                                        * Referenced by: '<Root>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: hex2dec('0x03')
                                        * Referenced by: '<Root>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: hex2dec('0x05')
                                        * Referenced by: '<Root>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: hex2dec('0x01')
                                        * Referenced by: '<Root>/Constant9'
                                        */
  boolean_T Constant16_Value;          /* Expression: false
                                        * Referenced by: '<Root>/Constant16'
                                        */
  boolean_T Constant17_Value;          /* Expression: false
                                        * Referenced by: '<Root>/Constant17'
                                        */
  uint8_T Constant15_Value[8];         /* Expression: uint8(zeros(8,1))
                                        * Referenced by: '<Root>/Constant15'
                                        */
  uint8_T Constant14_Value[6];         /* Expression: uint8(zeros(6,1))
                                        * Referenced by: '<Root>/Constant14'
                                        */
  uint8_T UnitDelay_InitialCondition;
                               /* Computed Parameter: UnitDelay_InitialCondition
                                * Referenced by: '<Root>/Unit Delay'
                                */
  uint8_T UnitDelay1_InitialCondition;
                              /* Computed Parameter: UnitDelay1_InitialCondition
                               * Referenced by: '<Root>/Unit Delay1'
                               */
};

/* Real-time Model Data Structure */
struct tag_RTM_check_serial_2msg_processor_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_check_serial_2msg_processor_T check_serial_2msg_processor_P;

/* Block signals (default storage) */
extern B_check_serial_2msg_processor_T check_serial_2msg_processor_B;

/* Block states (default storage) */
extern DW_check_serial_2msg_processor_T check_serial_2msg_processor_DW;

/* Model entry point functions */
extern void check_serial_2msg_processor_initialize(void);
extern void check_serial_2msg_processor_output(void);
extern void check_serial_2msg_processor_update(void);
extern void check_serial_2msg_processor_terminate(void);

/* Real-time Model object */
extern RT_MODEL_check_serial_2msg_processor_T *const
  check_serial_2msg_processor_M;

/* Simulink Desktop Real-Time specific functions */
time_T check_serial_2msg_processor_sldrtGetTaskTime(int_T tid);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'check_serial_2msg_processor'
 * '<S1>'   : 'check_serial_2msg_processor/MATLAB Function1'
 * '<S2>'   : 'check_serial_2msg_processor/MATLAB Function2'
 */
#endif                           /* RTW_HEADER_check_serial_2msg_processor_h_ */
