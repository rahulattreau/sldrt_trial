/*
 * process.h
 *
 * Code generation for model "process".
 *
 * Model version              : 2.467
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C source code generated on : Tue Mar 30 22:32:46 2021
 *
 * Target selection: sldrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_process_h_
#define RTW_HEADER_process_h_
#include <math.h>
#include <string.h>
#ifndef process_COMMON_INCLUDES_
#define process_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "sldrtdef.h"
#endif                                 /* process_COMMON_INCLUDES_ */

#include "process_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
#define rtmGetBlockIO(rtm)             ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
#define rtmSetBlockIO(rtm, val)        ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
#define rtmGetChecksums(rtm)           ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
#define rtmSetChecksums(rtm, val)      ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
#define rtmGetConstBlockIO(rtm)        ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
#define rtmSetConstBlockIO(rtm, val)   ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
#define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
#define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
#define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
#define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
#define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
#define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ()
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ()
#endif

#ifndef rtmGetDefaultParam
#define rtmGetDefaultParam(rtm)        ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
#define rtmSetDefaultParam(rtm, val)   ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
#define rtmGetDirectFeedThrough(rtm)   ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
#define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
#define rtmGetErrorStatusFlag(rtm)     ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
#define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
#define rtmSetFinalTime(rtm, val)      ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
#define rtmGetFirstInitCondFlag(rtm)   ()
#endif

#ifndef rtmSetFirstInitCondFlag
#define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ()
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ()
#endif

#ifndef rtmGetMdlRefGlobalRuntimeEventIndices
#define rtmGetMdlRefGlobalRuntimeEventIndices(rtm) ()
#endif

#ifndef rtmSetMdlRefGlobalRuntimeEventIndices
#define rtmSetMdlRefGlobalRuntimeEventIndices(rtm, val) ()
#endif

#ifndef rtmGetMdlRefGlobalTID
#define rtmGetMdlRefGlobalTID(rtm)     ()
#endif

#ifndef rtmSetMdlRefGlobalTID
#define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
#define rtmGetMdlRefTriggerTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefTriggerTID
#define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
#define rtmGetModelMappingInfo(rtm)    ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
#define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
#define rtmGetModelName(rtm)           ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
#define rtmSetModelName(rtm, val)      ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
#define rtmGetNonInlinedSFcns(rtm)     ()
#endif

#ifndef rtmSetNonInlinedSFcns
#define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
#define rtmGetNumBlockIO(rtm)          ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
#define rtmSetNumBlockIO(rtm, val)     ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
#define rtmGetNumBlockParams(rtm)      ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
#define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
#define rtmGetNumBlocks(rtm)           ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
#define rtmSetNumBlocks(rtm, val)      ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
#define rtmGetNumContStates(rtm)       ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
#define rtmSetNumContStates(rtm, val)  ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
#define rtmGetNumDWork(rtm)            ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
#define rtmSetNumDWork(rtm, val)       ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
#define rtmGetNumInputPorts(rtm)       ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
#define rtmSetNumInputPorts(rtm, val)  ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
#define rtmGetNumNonSampledZCs(rtm)    ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
#define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
#define rtmGetNumOutputPorts(rtm)      ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
#define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
#define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
#define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
#define rtmGetNumSFcnParams(rtm)       ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
#define rtmSetNumSFcnParams(rtm, val)  ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
#define rtmGetNumSFunctions(rtm)       ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
#define rtmSetNumSFunctions(rtm, val)  ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
#define rtmGetNumSampleTimes(rtm)      ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
#define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
#define rtmGetNumU(rtm)                ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
#define rtmSetNumU(rtm, val)           ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
#define rtmGetNumY(rtm)                ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
#define rtmSetNumY(rtm, val)           ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
#define rtmGetOdeF(rtm)                ()
#endif

#ifndef rtmSetOdeF
#define rtmSetOdeF(rtm, val)           ()
#endif

#ifndef rtmGetOdeY
#define rtmGetOdeY(rtm)                ()
#endif

#ifndef rtmSetOdeY
#define rtmSetOdeY(rtm, val)           ()
#endif

#ifndef rtmGetOffsetTimeArray
#define rtmGetOffsetTimeArray(rtm)     ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
#define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
#define rtmGetOffsetTimePtr(rtm)       ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
#define rtmSetOffsetTimePtr(rtm, val)  ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
#define rtmGetOptions(rtm)             ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
#define rtmSetOptions(rtm, val)        ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
#define rtmGetParamIsMalloced(rtm)     ()
#endif

#ifndef rtmSetParamIsMalloced
#define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
#define rtmGetPath(rtm)                ((rtm)->path)
#endif

#ifndef rtmSetPath
#define rtmSetPath(rtm, val)           ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
#define rtmGetPerTaskSampleHits(rtm)   ()
#endif

#ifndef rtmSetPerTaskSampleHits
#define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
#define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
#define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
#define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
#define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
#define rtmGetPrevZCSigState(rtm)      ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
#define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
#define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
#define rtmGetRTWGeneratedSFcn(rtm)    ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
#define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ()
#endif

#ifndef rtmSetRTWLogInfo
#define rtmSetRTWLogInfo(rtm, val)     ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
#define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
#define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
#define rtmGetRTWSfcnInfo(rtm)         ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
#define rtmSetRTWSfcnInfo(rtm, val)    ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
#define rtmGetRTWSolverInfo(rtm)       ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
#define rtmSetRTWSolverInfo(rtm, val)  ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
#define rtmGetRTWSolverInfoPtr(rtm)    ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
#define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
#define rtmGetReservedForXPC(rtm)      ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
#define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
#define rtmGetRootDWork(rtm)           ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
#define rtmSetRootDWork(rtm, val)      ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
#define rtmGetSFunctions(rtm)          ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
#define rtmSetSFunctions(rtm, val)     ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
#define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
#define rtmGetSampleHitPtr(rtm)        ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
#define rtmSetSampleHitPtr(rtm, val)   ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
#define rtmGetSampleTimeArray(rtm)     ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
#define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
#define rtmGetSampleTimePtr(rtm)       ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
#define rtmSetSampleTimePtr(rtm, val)  ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
#define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
#define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
#define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
#define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
#define rtmGetSelf(rtm)                ()
#endif

#ifndef rtmSetSelf
#define rtmSetSelf(rtm, val)           ()
#endif

#ifndef rtmGetSimMode
#define rtmGetSimMode(rtm)             ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
#define rtmSetSimMode(rtm, val)        ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
#define rtmGetSimTimeStep(rtm)         ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
#define rtmSetSimTimeStep(rtm, val)    ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
#define rtmGetStartTime(rtm)           ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
#define rtmSetStartTime(rtm, val)      ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
#define rtmSetStepSize(rtm, val)       ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
#define rtmGetStopRequestedFlag(rtm)   ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
#define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
#define rtmGetTaskCounters(rtm)        ()
#endif

#ifndef rtmSetTaskCounters
#define rtmSetTaskCounters(rtm, val)   ()
#endif

#ifndef rtmGetTaskTimeArray
#define rtmGetTaskTimeArray(rtm)       ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
#define rtmSetTaskTimeArray(rtm, val)  ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
#define rtmGetTimePtr(rtm)             ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
#define rtmSetTimePtr(rtm, val)        ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
#define rtmGetTimingData(rtm)          ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
#define rtmSetTimingData(rtm, val)     ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
#define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
#define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
#define rtmGetZCSignalValues(rtm)      ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
#define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
#define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
#define rtmGettimingBridge(rtm)        ()
#endif

#ifndef rtmSettimingBridge
#define rtmSettimingBridge(rtm, val)   ()
#endif

#ifndef rtmGetChecksumVal
#define rtmGetChecksumVal(rtm, idx)    ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
#define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
#define rtmGetDWork(rtm, idx)          ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
#define rtmSetDWork(rtm, idx, val)     ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
#define rtmGetOffsetTime(rtm, idx)     ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
#define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
#define rtmGetSFunction(rtm, idx)      ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
#define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
#define rtmGetSampleTime(rtm, idx)     ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
#define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
#define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
#define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
#define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
#define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
#define rtmIsContinuousTask(rtm, tid)  0
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid)  ((rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
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
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
#define rtmSetT(rtm, val)                                        /* Do Nothing */
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
#define rtmSetTStart(rtm, val)         ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti)       (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val)  (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define process_rtModel                RT_MODEL_process_T

/* Block signals for system '<S8>/Triggered Subsystem' */
typedef struct {
  uint8_T rx[4];                       /* '<S14>/rx' */
} B_TriggeredSubsystem_process_T;

/* Block states (default storage) for system '<S8>/Triggered Subsystem' */
typedef struct {
  int8_T TriggeredSubsystem_SubsysRanBC;/* '<S8>/Triggered Subsystem' */
} DW_TriggeredSubsystem_process_T;

/* Zero-crossing (trigger) state for system '<S8>/Triggered Subsystem' */
typedef struct {
  ZCSigState TriggeredSubsystem_Trig_ZCE;/* '<S8>/Triggered Subsystem' */
} ZCE_TriggeredSubsystem_process_T;

/* Block signals (default storage) */
typedef struct {
  real_T ExecutionTime;                /* '<S2>/Execution Time' */
  real_T Accumulator;                  /* '<S4>/Accumulator' */
  real_T Divide;                       /* '<S4>/Divide' */
  int32_T missed_ticks;                /* '<S10>/Packet Input2' */
  uint16_T Accumulator_i;              /* '<S7>/Accumulator' */
  uint8_T DataTypeConversion;          /* '<S1>/Data Type Conversion' */
  uint8_T DataTypeConversion1;         /* '<S1>/Data Type Conversion1' */
  uint8_T DataTypeConversion2;         /* '<S1>/Data Type Conversion2' */
  uint8_T DataTypeConversion3;         /* '<S1>/Data Type Conversion3' */
  uint8_T DataTypeConversion4;         /* '<S1>/Data Type Conversion4' */
  uint8_T DataTypeConversion5;         /* '<S1>/Data Type Conversion5' */
  uint8_T DataTypeConversion10;        /* '<S1>/Data Type Conversion10' */
  uint8_T DataTypeConversion11;        /* '<S1>/Data Type Conversion11' */
  uint8_T DataTypeConversion12;        /* '<S1>/Data Type Conversion12' */
  uint8_T DataTypeConversion13;        /* '<S1>/Data Type Conversion13' */
  uint8_T DataTypeConversion6;         /* '<S1>/Data Type Conversion6' */
  uint8_T DataTypeConversion7;         /* '<S1>/Data Type Conversion7' */
  uint8_T DataTypeConversion8;         /* '<S1>/Data Type Conversion8' */
  uint8_T DataTypeConversion9;         /* '<S1>/Data Type Conversion9' */
  uint8_T data;                        /* '<S10>/Packet Input2' */
  uint8_T data_n[4];
  uint8_T data_nm[4];
  uint8_T Accumulator_f;               /* '<S12>/Accumulator' */
  uint8_T y[144];                      /* '<S12>/MATLAB Function' */
  uint8_T sum_eight_bit;               /* '<S19>/MATLAB Function1' */
  uint8_T data_vector[4];              /* '<S11>/MATLAB Function' */
  boolean_T available;                 /* '<S10>/Packet Input2' */
  boolean_T error;                     /* '<S10>/Packet Input2' */
  boolean_T new_data;                  /* '<S11>/MATLAB Function' */
  B_TriggeredSubsystem_process_T TriggeredSubsystem_n;/* '<S9>/Triggered Subsystem' */
  B_TriggeredSubsystem_process_T TriggeredSubsystem_d;/* '<S8>/Triggered Subsystem' */
} B_process_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay2_DSTATE;            /* '<S4>/Unit Delay2' */
  real_T Accumulator_DSTATE;           /* '<S4>/Accumulator' */
  void *PacketOutput_PWORK[2];         /* '<S1>/Packet Output' */
  void *PacketOutput1_PWORK[2];        /* '<S1>/Packet Output1' */
  struct {
    void *LoggedData[2];
  } Scope_PWORK;                       /* '<S2>/Scope' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<S2>/Scope1' */

  struct {
    void *LoggedData;
  } Scope1_PWORK_k;                    /* '<S3>/Scope1' */

  struct {
    void *LoggedData;
  } Scope10_PWORK;                     /* '<S3>/Scope10' */

  struct {
    void *LoggedData;
  } Scope11_PWORK;                     /* '<S3>/Scope11' */

  struct {
    void *LoggedData;
  } Scope12_PWORK;                     /* '<S3>/Scope12' */

  struct {
    void *LoggedData;
  } Scope2_PWORK;                      /* '<S3>/Scope2' */

  struct {
    void *LoggedData;
  } Scope3_PWORK;                      /* '<S3>/Scope3' */

  struct {
    void *LoggedData;
  } Scope4_PWORK;                      /* '<S3>/Scope4' */

  struct {
    void *LoggedData;
  } Scope9_PWORK;                      /* '<S3>/Scope9' */

  void *PacketInput2_PWORK;            /* '<S10>/Packet Input2' */
  struct {
    void *LoggedData;
  } Scope_PWORK_g;                     /* '<S7>/Scope' */

  struct {
    void *LoggedData;
  } Scope_PWORK_m;                     /* '<S10>/Scope' */

  struct {
    void *LoggedData;
  } Scope1_PWORK_g;                    /* '<S10>/Scope1' */

  struct {
    void *LoggedData;
  } Scope2_PWORK_f;                    /* '<S10>/Scope2' */

  struct {
    void *LoggedData;
  } Scope3_PWORK_n;                    /* '<S10>/Scope3' */

  struct {
    void *LoggedData;
  } Scope1_PWORK_m;                    /* '<S11>/Scope1' */

  struct {
    void *LoggedData;
  } Scope_PWORK_mw;                    /* '<S12>/Scope' */

  uint16_T Accumulator_DSTATE_h;       /* '<S7>/Accumulator' */
  uint8_T UnitDelay_DSTATE;            /* '<S11>/Unit Delay' */
  uint8_T UnitDelay1_DSTATE[4];        /* '<S11>/Unit Delay1' */
  uint8_T UnitDelay2_DSTATE_b;         /* '<S11>/Unit Delay2' */
  uint8_T UnitDelay3_DSTATE;           /* '<S11>/Unit Delay3' */
  uint8_T UnitDelay4_DSTATE;           /* '<S11>/Unit Delay4' */
  uint8_T UnitDelay6_DSTATE;           /* '<S11>/Unit Delay6' */
  uint8_T Accumulator_DSTATE_n;        /* '<S12>/Accumulator' */
  uint8_T ResettableDelay_DSTATE[144]; /* '<S12>/Resettable Delay' */
  boolean_T UnitDelay5_DSTATE;         /* '<S11>/Unit Delay5' */
  int8_T Accumulator_PrevResetState;   /* '<S4>/Accumulator' */
  int8_T message_rx_looper_SubsysRanBC;/* '<S3>/message_rx_looper' */
  int8_T Accumulator_PrevResetState_n; /* '<S12>/Accumulator' */
  int8_T crc_SubsysRanBC;              /* '<S11>/crc' */
  int8_T TriggeredSubsystem_SubsysRanBC;/* '<S7>/Triggered Subsystem' */
  DW_TriggeredSubsystem_process_T TriggeredSubsystem_n;/* '<S9>/Triggered Subsystem' */
  DW_TriggeredSubsystem_process_T TriggeredSubsystem_d;/* '<S8>/Triggered Subsystem' */
} DW_process_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState crc_Trig_ZCE;             /* '<S11>/crc' */
  ZCE_TriggeredSubsystem_process_T TriggeredSubsystem_n;/* '<S9>/Triggered Subsystem' */
  ZCE_TriggeredSubsystem_process_T TriggeredSubsystem_d;/* '<S8>/Triggered Subsystem' */
  ZCSigState TriggeredSubsystem_Trig_ZCE_m;/* '<S7>/Triggered Subsystem' */
} PrevZCX_process_T;

/* Backward compatible GRT Identifiers */
#define rtB                            process_B
#define BlockIO                        B_process_T
#define rtP                            process_P
#define Parameters                     P_process_T
#define rtDWork                        process_DW
#define D_Work                         DW_process_T
#define rtPrevZCSigState               process_PrevZCX
#define PrevZCSigStates                PrevZCX_process_T

/* Parameters for system: '<S8>/Triggered Subsystem' */
struct P_TriggeredSubsystem_process_T_ {
  uint8_T tx_Y0;                       /* Computed Parameter: tx_Y0
                                        * Referenced by: '<S14>/tx'
                                        */
};

/* Parameters (default storage) */
struct P_process_T_ {
  real_T message_poll_num;             /* Variable: message_poll_num
                                        * Referenced by: '<S12>/Constant'
                                        */
  uint8_T kGrdCmdSize;                 /* Variable: kGrdCmdSize
                                        * Referenced by:
                                        *   '<S11>/MATLAB Function'
                                        *   '<S19>/Constant1'
                                        *   '<S19>/Constant3'
                                        */
  uint8_T kGrdCrcSize;                 /* Variable: kGrdCrcSize
                                        * Referenced by:
                                        *   '<S11>/MATLAB Function'
                                        *   '<S19>/Constant4'
                                        */
  uint8_T kGrdFrameStart;              /* Variable: kGrdFrameStart
                                        * Referenced by:
                                        *   '<S11>/MATLAB Function'
                                        *   '<S19>/Constant'
                                        */
  uint8_T kGrdFrameStartSize;          /* Variable: kGrdFrameStartSize
                                        * Referenced by:
                                        *   '<S11>/MATLAB Function'
                                        *   '<S19>/Constant2'
                                        */
  uint8_T kGrdMsgIdSize;               /* Variable: kGrdMsgIdSize
                                        * Referenced by: '<S11>/MATLAB Function'
                                        */
  uint8_T kMaxPacketSize;              /* Variable: kMaxPacketSize
                                        * Referenced by: '<S11>/MATLAB Function'
                                        */
  real_T PacketInput2_MaxMissedTicks;
                                  /* Mask Parameter: PacketInput2_MaxMissedTicks
                                   * Referenced by: '<S10>/Packet Input2'
                                   */
  real_T PacketOutput_MaxMissedTicks;
                                  /* Mask Parameter: PacketOutput_MaxMissedTicks
                                   * Referenced by: '<S1>/Packet Output'
                                   */
  real_T PacketOutput1_MaxMissedTicks;
                                 /* Mask Parameter: PacketOutput1_MaxMissedTicks
                                  * Referenced by: '<S1>/Packet Output1'
                                  */
  real_T PacketInput2_YieldWhenWaiting;
                                /* Mask Parameter: PacketInput2_YieldWhenWaiting
                                 * Referenced by: '<S10>/Packet Input2'
                                 */
  real_T PacketOutput_YieldWhenWaiting;
                                /* Mask Parameter: PacketOutput_YieldWhenWaiting
                                 * Referenced by: '<S1>/Packet Output'
                                 */
  real_T PacketOutput1_YieldWhenWaiting;
                               /* Mask Parameter: PacketOutput1_YieldWhenWaiting
                                * Referenced by: '<S1>/Packet Output1'
                                */
  real_T holder_msgID_0x1_u_p;         /* Mask Parameter: holder_msgID_0x1_u_p
                                        * Referenced by: '<S8>/Constant'
                                        */
  real_T holder_msgID_0x2_u_p;         /* Mask Parameter: holder_msgID_0x2_u_p
                                        * Referenced by: '<S9>/Constant'
                                        */
  int32_T PacketInput2_PacketID;       /* Mask Parameter: PacketInput2_PacketID
                                        * Referenced by: '<S10>/Packet Input2'
                                        */
  int32_T PacketOutput_PacketID;       /* Mask Parameter: PacketOutput_PacketID
                                        * Referenced by: '<S1>/Packet Output'
                                        */
  int32_T PacketOutput1_PacketID;      /* Mask Parameter: PacketOutput1_PacketID
                                        * Referenced by: '<S1>/Packet Output1'
                                        */
  struct_QSg1mMqvkNcdAR48PoLPrG serial_rx_bus_Outport_2_Y0;
                               /* Computed Parameter: serial_rx_bus_Outport_2_Y0
                                * Referenced by: synthesized block
                                */
  real_T Constant_Value;               /* Expression: 1
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T Constant_Value_i;             /* Expression: hex2dec('0xEF')
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: hex2dec('0xF5')
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T Constant2_Value;              /* Expression: hex2dec('0x03')
                                        * Referenced by: '<S1>/Constant2'
                                        */
  real_T Constant3_Value;              /* Expression: hex2dec('0x00')
                                        * Referenced by: '<S1>/Constant3'
                                        */
  real_T Constant4_Value;              /* Expression: hex2dec('0x01')
                                        * Referenced by: '<S1>/Constant4'
                                        */
  real_T Constant5_Value;              /* Expression: hex2dec('0x02')
                                        * Referenced by: '<S1>/Constant5'
                                        */
  real_T Constant10_Value;             /* Expression: hex2dec('0x01')
                                        * Referenced by: '<S1>/Constant10'
                                        */
  real_T Constant11_Value;             /* Expression: hex2dec('0x02')
                                        * Referenced by: '<S1>/Constant11'
                                        */
  real_T Constant12_Value;             /* Expression: hex2dec('0x04')
                                        * Referenced by: '<S1>/Constant12'
                                        */
  real_T Constant13_Value;             /* Expression: hex2dec('0xFF')
                                        * Referenced by: '<S1>/Constant13'
                                        */
  real_T Constant6_Value;              /* Expression: hex2dec('0xEF')
                                        * Referenced by: '<S1>/Constant6'
                                        */
  real_T Constant7_Value;              /* Expression: hex2dec('0x03')
                                        * Referenced by: '<S1>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: hex2dec('0x05')
                                        * Referenced by: '<S1>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: hex2dec('0x01')
                                        * Referenced by: '<S1>/Constant9'
                                        */
  real_T ExecutionTime_P1;             /* Expression: ShowTaskTimes
                                        * Referenced by: '<S2>/Execution Time'
                                        */
  real_T UnitDelay2_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S4>/Unit Delay2'
                                        */
  real_T Accumulator_gainval;         /* Computed Parameter: Accumulator_gainval
                                       * Referenced by: '<S4>/Accumulator'
                                       */
  real_T Accumulator_IC;               /* Expression: 1
                                        * Referenced by: '<S4>/Accumulator'
                                        */
  real_T Bias_Bias;                    /* Expression: -1
                                        * Referenced by: '<S4>/Bias'
                                        */
  real_T Constant18_Value;             /* Expression: 1
                                        * Referenced by: '<S4>/Constant18'
                                        */
  uint16_T Accumulator_IC_j;           /* Computed Parameter: Accumulator_IC_j
                                        * Referenced by: '<S7>/Accumulator'
                                        */
  boolean_T UnitDelay5_InitialCondition;/* Expression: false
                                         * Referenced by: '<S11>/Unit Delay5'
                                         */
  boolean_T Constant16_Value;          /* Expression: true
                                        * Referenced by: '<S7>/Constant16'
                                        */
  boolean_T Constant_Value_n;          /* Expression: false
                                        * Referenced by: '<S2>/Constant'
                                        */
  boolean_T Constant18_Value_a;        /* Expression: true
                                        * Referenced by: '<S3>/Constant18'
                                        */
  uint8_T tx_Y0;                       /* Computed Parameter: tx_Y0
                                        * Referenced by: '<S13>/tx'
                                        */
  uint8_T sum_eight_bit_Y0;            /* Computed Parameter: sum_eight_bit_Y0
                                        * Referenced by: '<S19>/sum_eight_bit'
                                        */
  uint8_T y_Y0;                        /* Computed Parameter: y_Y0
                                        * Referenced by: '<S5>/y'
                                        */
  uint8_T UnitDelay_InitialCondition;  /* Expression: uint8(1)
                                        * Referenced by: '<S11>/Unit Delay'
                                        */
  uint8_T UnitDelay1_InitialCondition;
                              /* Computed Parameter: UnitDelay1_InitialCondition
                               * Referenced by: '<S11>/Unit Delay1'
                               */
  uint8_T UnitDelay2_InitialCondition_m;
                            /* Computed Parameter: UnitDelay2_InitialCondition_m
                             * Referenced by: '<S11>/Unit Delay2'
                             */
  uint8_T UnitDelay3_InitialCondition;
                              /* Computed Parameter: UnitDelay3_InitialCondition
                               * Referenced by: '<S11>/Unit Delay3'
                               */
  uint8_T UnitDelay4_InitialCondition;
                              /* Computed Parameter: UnitDelay4_InitialCondition
                               * Referenced by: '<S11>/Unit Delay4'
                               */
  uint8_T UnitDelay6_InitialCondition; /* Expression: uint8(0)
                                        * Referenced by: '<S11>/Unit Delay6'
                                        */
  uint8_T Accumulator_IC_c;            /* Computed Parameter: Accumulator_IC_c
                                        * Referenced by: '<S12>/Accumulator'
                                        */
  uint8_T ResettableDelay_InitialCondition;
                         /* Computed Parameter: ResettableDelay_InitialCondition
                          * Referenced by: '<S12>/Resettable Delay'
                          */
  P_TriggeredSubsystem_process_T TriggeredSubsystem_n;/* '<S9>/Triggered Subsystem' */
  P_TriggeredSubsystem_process_T TriggeredSubsystem_d;/* '<S8>/Triggered Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_process_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;
  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  void *dwork;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[1];
  } Timing;
};

/* Block parameters (default storage) */
extern P_process_T process_P;

/* Block signals (default storage) */
extern B_process_T process_B;

/* Block states (default storage) */
extern DW_process_T process_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_process_T process_PrevZCX;

/* Model entry point functions */
extern void process_initialize(void);
extern void process_output(void);
extern void process_update(void);
extern void process_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern process_rtModel *process(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_process_T *const process_M;

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
 * '<Root>' : 'process'
 * '<S1>'   : 'process/TX'
 * '<S2>'   : 'process/performance'
 * '<S3>'   : 'process/serial_rx'
 * '<S4>'   : 'process/performance/recursive_mean1'
 * '<S5>'   : 'process/serial_rx/message_rx_looper'
 * '<S6>'   : 'process/serial_rx/y_out'
 * '<S7>'   : 'process/serial_rx/message_rx_looper/holder'
 * '<S8>'   : 'process/serial_rx/message_rx_looper/holder_msgID_0x1'
 * '<S9>'   : 'process/serial_rx/message_rx_looper/holder_msgID_0x2'
 * '<S10>'  : 'process/serial_rx/message_rx_looper/packet_rx'
 * '<S11>'  : 'process/serial_rx/message_rx_looper/parser'
 * '<S12>'  : 'process/serial_rx/message_rx_looper/vectorized_available_flags'
 * '<S13>'  : 'process/serial_rx/message_rx_looper/holder/Triggered Subsystem'
 * '<S14>'  : 'process/serial_rx/message_rx_looper/holder_msgID_0x1/Triggered Subsystem'
 * '<S15>'  : 'process/serial_rx/message_rx_looper/holder_msgID_0x1/count_number_of_calls'
 * '<S16>'  : 'process/serial_rx/message_rx_looper/holder_msgID_0x2/Triggered Subsystem'
 * '<S17>'  : 'process/serial_rx/message_rx_looper/holder_msgID_0x2/count_number_of_calls'
 * '<S18>'  : 'process/serial_rx/message_rx_looper/parser/MATLAB Function'
 * '<S19>'  : 'process/serial_rx/message_rx_looper/parser/crc'
 * '<S20>'  : 'process/serial_rx/message_rx_looper/parser/crc/MATLAB Function1'
 * '<S21>'  : 'process/serial_rx/message_rx_looper/vectorized_available_flags/MATLAB Function'
 * '<S22>'  : 'process/serial_rx/message_rx_looper/vectorized_available_flags/y_out'
 */
#endif                                 /* RTW_HEADER_process_h_ */
