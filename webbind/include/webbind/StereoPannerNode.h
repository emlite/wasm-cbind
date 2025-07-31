#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioParam AudioParam;


DECLARE_EMLITE_TYPE(StereoPannerNode, AudioNode);

StereoPannerNode StereoPannerNode_new0(BaseAudioContext * context);

StereoPannerNode StereoPannerNode_new1(BaseAudioContext * context, jb_Any * options);

AudioParam StereoPannerNode_pan(const StereoPannerNode *self);
