#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(IIRFilterNode, AudioNode);

IIRFilterNode IIRFilterNode_new(BaseAudioContext * context, jb_Any * options);

jb_Undefined IIRFilterNode_getFrequencyResponse(IIRFilterNode* self , jb_Float32Array * frequencyHz, jb_Float32Array * magResponse, jb_Float32Array * phaseResponse);
