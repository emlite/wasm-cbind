#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "InterestGroupScriptRunnerGlobalScope.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ForDebuggingOnly ForDebuggingOnly;
typedef struct RealTimeReporting RealTimeReporting;


DECLARE_EMLITE_TYPE(InterestGroupBiddingAndScoringScriptRunnerGlobalScope, InterestGroupScriptRunnerGlobalScope);

ForDebuggingOnly InterestGroupBiddingAndScoringScriptRunnerGlobalScope_forDebuggingOnly(const InterestGroupBiddingAndScoringScriptRunnerGlobalScope *self);

RealTimeReporting InterestGroupBiddingAndScoringScriptRunnerGlobalScope_realTimeReporting(const InterestGroupBiddingAndScoringScriptRunnerGlobalScope *self);
