/*
 * process_types.h
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

#ifndef RTW_HEADER_process_types_h_
#define RTW_HEADER_process_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_struct_qTPYqaCUNjh5BSzMwShH5B_
#define DEFINED_TYPEDEF_FOR_struct_qTPYqaCUNjh5BSzMwShH5B_

typedef struct {
  uint16_T calls_16_bit;
  uint8_T data[4];
} struct_qTPYqaCUNjh5BSzMwShH5B;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_QSg1mMqvkNcdAR48PoLPrG_
#define DEFINED_TYPEDEF_FOR_struct_QSg1mMqvkNcdAR48PoLPrG_

typedef struct {
  uint8_T holder[4];
  struct_qTPYqaCUNjh5BSzMwShH5B msgID_0x00;
  struct_qTPYqaCUNjh5BSzMwShH5B msgID_0x01;
} struct_QSg1mMqvkNcdAR48PoLPrG;

#endif

/* Parameters for system: '<S8>/Triggered Subsystem' */
typedef struct P_TriggeredSubsystem_process_T_ P_TriggeredSubsystem_process_T;

/* Parameters (default storage) */
typedef struct P_process_T_ P_process_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_process_T RT_MODEL_process_T;

#endif                                 /* RTW_HEADER_process_types_h_ */
