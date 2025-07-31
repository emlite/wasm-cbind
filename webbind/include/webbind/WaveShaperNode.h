#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WaveShaperNode, AudioNode);

WaveShaperNode WaveShaperNode_new0(BaseAudioContext * context);

WaveShaperNode WaveShaperNode_new1(BaseAudioContext * context, jb_Any * options);

jb_Float32Array WaveShaperNode_curve(const WaveShaperNode *self);

void WaveShaperNode_set_curve(WaveShaperNode* self, jb_Float32Array * value);

OverSampleType WaveShaperNode_oversample(const WaveShaperNode *self);

void WaveShaperNode_set_oversample(WaveShaperNode* self, OverSampleType * value);
