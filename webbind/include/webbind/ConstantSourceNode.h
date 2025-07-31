#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioScheduledSourceNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioParam AudioParam;


DECLARE_EMLITE_TYPE(ConstantSourceNode, AudioScheduledSourceNode);

ConstantSourceNode ConstantSourceNode_new0(BaseAudioContext * context);

ConstantSourceNode ConstantSourceNode_new1(BaseAudioContext * context, jb_Any * options);

AudioParam ConstantSourceNode_offset(const ConstantSourceNode *self);
