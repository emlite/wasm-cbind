#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AttributionAggregationServices AttributionAggregationServices;
typedef struct AttributionImpressionResult AttributionImpressionResult;
typedef struct AttributionImpressionOptions AttributionImpressionOptions;
typedef struct AttributionConversionResult AttributionConversionResult;
typedef struct AttributionConversionOptions AttributionConversionOptions;


DECLARE_EMLITE_TYPE(AttributionImpressionResult, em_Val);
DECLARE_EMLITE_TYPE(AttributionImpressionOptions, em_Val);

unsigned long AttributionImpressionOptions_histogramIndex(const AttributionImpressionOptions *self);

void AttributionImpressionOptions_set_histogramIndex(AttributionImpressionOptions* self, unsigned long value);

unsigned long AttributionImpressionOptions_matchValue(const AttributionImpressionOptions *self);

void AttributionImpressionOptions_set_matchValue(AttributionImpressionOptions* self, unsigned long value);

jb_Array AttributionImpressionOptions_conversionSites(const AttributionImpressionOptions *self);

void AttributionImpressionOptions_set_conversionSites(AttributionImpressionOptions* self, jb_Array * value);

jb_Array AttributionImpressionOptions_conversionCallers(const AttributionImpressionOptions *self);

void AttributionImpressionOptions_set_conversionCallers(AttributionImpressionOptions* self, jb_Array * value);

unsigned long AttributionImpressionOptions_lifetimeDays(const AttributionImpressionOptions *self);

void AttributionImpressionOptions_set_lifetimeDays(AttributionImpressionOptions* self, unsigned long value);

long AttributionImpressionOptions_priority(const AttributionImpressionOptions *self);

void AttributionImpressionOptions_set_priority(AttributionImpressionOptions* self, long value);
DECLARE_EMLITE_TYPE(AttributionConversionResult, em_Val);

jb_Uint8Array AttributionConversionResult_report(const AttributionConversionResult *self);

void AttributionConversionResult_set_report(AttributionConversionResult* self, jb_Uint8Array * value);
DECLARE_EMLITE_TYPE(AttributionConversionOptions, em_Val);

jb_String AttributionConversionOptions_aggregationService(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_aggregationService(AttributionConversionOptions* self, jb_String * value);

double AttributionConversionOptions_epsilon(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_epsilon(AttributionConversionOptions* self, double value);

unsigned long AttributionConversionOptions_histogramSize(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_histogramSize(AttributionConversionOptions* self, unsigned long value);

unsigned long AttributionConversionOptions_lookbackDays(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_lookbackDays(AttributionConversionOptions* self, unsigned long value);

jb_Array AttributionConversionOptions_matchValues(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_matchValues(AttributionConversionOptions* self, jb_Array * value);

jb_Array AttributionConversionOptions_impressionSites(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_impressionSites(AttributionConversionOptions* self, jb_Array * value);

jb_Array AttributionConversionOptions_impressionCallers(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_impressionCallers(AttributionConversionOptions* self, jb_Array * value);

AttributionLogic AttributionConversionOptions_logic(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_logic(AttributionConversionOptions* self, AttributionLogic * value);

jb_Any AttributionConversionOptions_logicOptions(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_logicOptions(AttributionConversionOptions* self, jb_Any * value);

unsigned long AttributionConversionOptions_value(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_value(AttributionConversionOptions* self, unsigned long value);

unsigned long AttributionConversionOptions_maxValue(const AttributionConversionOptions *self);

void AttributionConversionOptions_set_maxValue(AttributionConversionOptions* self, unsigned long value);
DECLARE_EMLITE_TYPE(Attribution, em_Val);

AttributionAggregationServices Attribution_aggregationServices(const Attribution *self);

jb_Promise Attribution_saveImpression(Attribution* self , AttributionImpressionOptions * options);

jb_Promise Attribution_measureConversion(Attribution* self , AttributionConversionOptions * options);
