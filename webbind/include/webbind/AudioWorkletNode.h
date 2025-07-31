#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioParamMap AudioParamMap;
typedef struct MessagePort MessagePort;
typedef struct BaseAudioContext BaseAudioContext;


DECLARE_EMLITE_TYPE(AudioWorkletNode, AudioNode);

AudioWorkletNode AudioWorkletNode_new0(BaseAudioContext * context, jb_String * name);

AudioWorkletNode AudioWorkletNode_new1(BaseAudioContext * context, jb_String * name, jb_Any * options);

AudioParamMap AudioWorkletNode_parameters(const AudioWorkletNode *self);

jb_Any AudioWorkletNode_port(const AudioWorkletNode *self);

jb_Any AudioWorkletNode_onprocessorerror(const AudioWorkletNode *self);

void AudioWorkletNode_set_onprocessorerror(AudioWorkletNode* self, jb_Any * value);
