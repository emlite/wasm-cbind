#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(AnalyserNode, AudioNode);

AnalyserNode AnalyserNode_new0(BaseAudioContext * context);

AnalyserNode AnalyserNode_new1(BaseAudioContext * context, jb_Any * options);

jb_Undefined AnalyserNode_getFloatFrequencyData(AnalyserNode* self , jb_Float32Array * array);

jb_Undefined AnalyserNode_getByteFrequencyData(AnalyserNode* self , jb_Uint8Array * array);

jb_Undefined AnalyserNode_getFloatTimeDomainData(AnalyserNode* self , jb_Float32Array * array);

jb_Undefined AnalyserNode_getByteTimeDomainData(AnalyserNode* self , jb_Uint8Array * array);

unsigned long AnalyserNode_fftSize(const AnalyserNode *self);

void AnalyserNode_set_fftSize(AnalyserNode* self, unsigned long value);

unsigned long AnalyserNode_frequencyBinCount(const AnalyserNode *self);

double AnalyserNode_minDecibels(const AnalyserNode *self);

void AnalyserNode_set_minDecibels(AnalyserNode* self, double value);

double AnalyserNode_maxDecibels(const AnalyserNode *self);

void AnalyserNode_set_maxDecibels(AnalyserNode* self, double value);

double AnalyserNode_smoothingTimeConstant(const AnalyserNode *self);

void AnalyserNode_set_smoothingTimeConstant(AnalyserNode* self, double value);
