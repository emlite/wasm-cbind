#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(AudioBuffer, em_Val);

AudioBuffer AudioBuffer_new(jb_Any * options);

float AudioBuffer_sampleRate(const AudioBuffer *self);

unsigned long AudioBuffer_length(const AudioBuffer *self);

double AudioBuffer_duration(const AudioBuffer *self);

unsigned long AudioBuffer_numberOfChannels(const AudioBuffer *self);

jb_Float32Array AudioBuffer_getChannelData(AudioBuffer* self , unsigned long channel);

jb_Undefined AudioBuffer_copyFromChannel0(AudioBuffer* self , jb_Float32Array * destination, unsigned long channelNumber);

jb_Undefined AudioBuffer_copyFromChannel1(AudioBuffer* self , jb_Float32Array * destination, unsigned long channelNumber, unsigned long bufferOffset);

jb_Undefined AudioBuffer_copyToChannel0(AudioBuffer* self , jb_Float32Array * source, unsigned long channelNumber);

jb_Undefined AudioBuffer_copyToChannel1(AudioBuffer* self , jb_Float32Array * source, unsigned long channelNumber, unsigned long bufferOffset);
