#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PrivateAggregation PrivateAggregation;
typedef struct ProtectedAudienceUtilities ProtectedAudienceUtilities;


DECLARE_EMLITE_TYPE(InterestGroupScriptRunnerGlobalScope, em_Val);

PrivateAggregation InterestGroupScriptRunnerGlobalScope_privateAggregation(const InterestGroupScriptRunnerGlobalScope *self);

ProtectedAudienceUtilities InterestGroupScriptRunnerGlobalScope_protectedAudience(const InterestGroupScriptRunnerGlobalScope *self);
