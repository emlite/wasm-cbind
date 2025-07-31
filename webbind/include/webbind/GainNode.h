#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioParam AudioParam;


DECLARE_EMLITE_TYPE(GainNode, AudioNode);

GainNode GainNode_new0(BaseAudioContext * context);

GainNode GainNode_new1(BaseAudioContext * context, jb_Any * options);

AudioParam GainNode_gain(const GainNode *self);
