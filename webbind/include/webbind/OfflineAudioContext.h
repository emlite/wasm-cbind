#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "BaseAudioContext.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioBuffer AudioBuffer;


DECLARE_EMLITE_TYPE(OfflineAudioContext, BaseAudioContext);

OfflineAudioContext OfflineAudioContext_new(unsigned long numberOfChannels, unsigned long length, float sampleRate);

jb_Promise OfflineAudioContext_startRendering(OfflineAudioContext* self );

jb_Promise OfflineAudioContext_resume(OfflineAudioContext* self );

jb_Promise OfflineAudioContext_suspend(OfflineAudioContext* self , double suspendTime);

unsigned long OfflineAudioContext_length(const OfflineAudioContext *self);

jb_Any OfflineAudioContext_oncomplete(const OfflineAudioContext *self);

void OfflineAudioContext_set_oncomplete(OfflineAudioContext* self, jb_Any * value);
