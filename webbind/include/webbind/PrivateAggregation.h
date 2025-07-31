#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PAHistogramContribution PAHistogramContribution;
typedef struct PADebugModeOptions PADebugModeOptions;


DECLARE_EMLITE_TYPE(PAHistogramContribution, em_Val);

long long PAHistogramContribution_bucket(const PAHistogramContribution *self);

void PAHistogramContribution_set_bucket(PAHistogramContribution* self, long long value);

long PAHistogramContribution_value(const PAHistogramContribution *self);

void PAHistogramContribution_set_value(PAHistogramContribution* self, long value);

long long PAHistogramContribution_filteringId(const PAHistogramContribution *self);

void PAHistogramContribution_set_filteringId(PAHistogramContribution* self, long long value);
DECLARE_EMLITE_TYPE(PADebugModeOptions, em_Val);

long long PADebugModeOptions_debugKey(const PADebugModeOptions *self);

void PADebugModeOptions_set_debugKey(PADebugModeOptions* self, long long value);
DECLARE_EMLITE_TYPE(PrivateAggregation, em_Val);

jb_Undefined PrivateAggregation_contributeToHistogram(PrivateAggregation* self , PAHistogramContribution * contribution);

jb_Undefined PrivateAggregation_contributeToHistogramOnEvent(PrivateAggregation* self , jb_String * event, jb_Object * contribution);

jb_Undefined PrivateAggregation_enableDebugMode0(PrivateAggregation* self );

jb_Undefined PrivateAggregation_enableDebugMode1(PrivateAggregation* self , PADebugModeOptions * options);
