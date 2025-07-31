#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioParam AudioParam;


DECLARE_EMLITE_TYPE(DelayNode, AudioNode);

DelayNode DelayNode_new0(BaseAudioContext * context);

DelayNode DelayNode_new1(BaseAudioContext * context, jb_Any * options);

AudioParam DelayNode_delayTime(const DelayNode *self);
