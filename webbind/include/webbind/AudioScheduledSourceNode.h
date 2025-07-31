#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(AudioScheduledSourceNode, AudioNode);

jb_Any AudioScheduledSourceNode_onended(const AudioScheduledSourceNode *self);

void AudioScheduledSourceNode_set_onended(AudioScheduledSourceNode* self, jb_Any * value);

jb_Undefined AudioScheduledSourceNode_start0(AudioScheduledSourceNode* self );

jb_Undefined AudioScheduledSourceNode_start1(AudioScheduledSourceNode* self , double when);

jb_Undefined AudioScheduledSourceNode_stop0(AudioScheduledSourceNode* self );

jb_Undefined AudioScheduledSourceNode_stop1(AudioScheduledSourceNode* self , double when);
