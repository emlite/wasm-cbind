#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioParam AudioParam;
typedef struct BaseAudioContext BaseAudioContext;
typedef struct AudioContext AudioContext;


DECLARE_EMLITE_TYPE(AudioNode, EventTarget);

jb_Undefined AudioNode_connect0(AudioNode* self , AudioParam * destinationParam);

jb_Undefined AudioNode_connect1(AudioNode* self , AudioParam * destinationParam, unsigned long output);

jb_Undefined AudioNode_disconnect(AudioNode* self , AudioParam * destinationParam, unsigned long output);

BaseAudioContext AudioNode_context(const AudioNode *self);

unsigned long AudioNode_numberOfInputs(const AudioNode *self);

unsigned long AudioNode_numberOfOutputs(const AudioNode *self);

unsigned long AudioNode_channelCount(const AudioNode *self);

void AudioNode_set_channelCount(AudioNode* self, unsigned long value);

ChannelCountMode AudioNode_channelCountMode(const AudioNode *self);

void AudioNode_set_channelCountMode(AudioNode* self, ChannelCountMode * value);

ChannelInterpretation AudioNode_channelInterpretation(const AudioNode *self);

void AudioNode_set_channelInterpretation(AudioNode* self, ChannelInterpretation * value);
