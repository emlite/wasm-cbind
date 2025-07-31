#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioParam AudioParam;


DECLARE_EMLITE_TYPE(AudioParam, em_Val);

float AudioParam_value(const AudioParam *self);

void AudioParam_set_value(AudioParam* self, float value);

AutomationRate AudioParam_automationRate(const AudioParam *self);

void AudioParam_set_automationRate(AudioParam* self, AutomationRate * value);

float AudioParam_defaultValue(const AudioParam *self);

float AudioParam_minValue(const AudioParam *self);

float AudioParam_maxValue(const AudioParam *self);

AudioParam AudioParam_setValueAtTime(AudioParam* self , float value, double startTime);

AudioParam AudioParam_linearRampToValueAtTime(AudioParam* self , float value, double endTime);

AudioParam AudioParam_exponentialRampToValueAtTime(AudioParam* self , float value, double endTime);

AudioParam AudioParam_setTargetAtTime(AudioParam* self , float target, double startTime, float timeConstant);

AudioParam AudioParam_setValueCurveAtTime(AudioParam* self , jb_Array * values, double startTime, double duration);

AudioParam AudioParam_cancelScheduledValues(AudioParam* self , double cancelTime);

AudioParam AudioParam_cancelAndHoldAtTime(AudioParam* self , double cancelTime);
