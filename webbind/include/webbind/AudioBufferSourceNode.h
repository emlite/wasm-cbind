#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioScheduledSourceNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioBuffer AudioBuffer;
typedef struct AudioParam AudioParam;


DECLARE_EMLITE_TYPE(AudioBufferSourceNode, AudioScheduledSourceNode);

AudioBufferSourceNode AudioBufferSourceNode_new0(BaseAudioContext * context);

AudioBufferSourceNode AudioBufferSourceNode_new1(BaseAudioContext * context, jb_Any * options);

AudioBuffer AudioBufferSourceNode_buffer(const AudioBufferSourceNode *self);

void AudioBufferSourceNode_set_buffer(AudioBufferSourceNode* self, AudioBuffer * value);

AudioParam AudioBufferSourceNode_playbackRate(const AudioBufferSourceNode *self);

AudioParam AudioBufferSourceNode_detune(const AudioBufferSourceNode *self);

bool AudioBufferSourceNode_loop(const AudioBufferSourceNode *self);

void AudioBufferSourceNode_set_loop(AudioBufferSourceNode* self, bool value);

double AudioBufferSourceNode_loopStart(const AudioBufferSourceNode *self);

void AudioBufferSourceNode_set_loopStart(AudioBufferSourceNode* self, double value);

double AudioBufferSourceNode_loopEnd(const AudioBufferSourceNode *self);

void AudioBufferSourceNode_set_loopEnd(AudioBufferSourceNode* self, double value);

jb_Undefined AudioBufferSourceNode_start0(AudioBufferSourceNode* self );

jb_Undefined AudioBufferSourceNode_start1(AudioBufferSourceNode* self , double when);

jb_Undefined AudioBufferSourceNode_start2(AudioBufferSourceNode* self , double when, double offset);

jb_Undefined AudioBufferSourceNode_start3(AudioBufferSourceNode* self , double when, double offset, double duration);
