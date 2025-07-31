#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioBuffer AudioBuffer;


DECLARE_EMLITE_TYPE(ConvolverNode, AudioNode);

ConvolverNode ConvolverNode_new0(BaseAudioContext * context);

ConvolverNode ConvolverNode_new1(BaseAudioContext * context, jb_Any * options);

AudioBuffer ConvolverNode_buffer(const ConvolverNode *self);

void ConvolverNode_set_buffer(ConvolverNode* self, AudioBuffer * value);

bool ConvolverNode_normalize(const ConvolverNode *self);

void ConvolverNode_set_normalize(ConvolverNode* self, bool value);
