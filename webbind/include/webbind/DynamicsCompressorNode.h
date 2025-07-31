#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioParam AudioParam;


DECLARE_EMLITE_TYPE(DynamicsCompressorNode, AudioNode);

DynamicsCompressorNode DynamicsCompressorNode_new0(BaseAudioContext * context);

DynamicsCompressorNode DynamicsCompressorNode_new1(BaseAudioContext * context, jb_Any * options);

AudioParam DynamicsCompressorNode_threshold(const DynamicsCompressorNode *self);

AudioParam DynamicsCompressorNode_knee(const DynamicsCompressorNode *self);

AudioParam DynamicsCompressorNode_ratio(const DynamicsCompressorNode *self);

float DynamicsCompressorNode_reduction(const DynamicsCompressorNode *self);

AudioParam DynamicsCompressorNode_attack(const DynamicsCompressorNode *self);

AudioParam DynamicsCompressorNode_release(const DynamicsCompressorNode *self);
