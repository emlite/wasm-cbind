#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioEncoderConfig AudioEncoderConfig;
typedef struct AudioData AudioData;
typedef struct AudioEncoderSupport AudioEncoderSupport;


DECLARE_EMLITE_TYPE(AudioEncoderConfig, em_Val);

jb_String AudioEncoderConfig_codec(const AudioEncoderConfig *self);

void AudioEncoderConfig_set_codec(AudioEncoderConfig* self, jb_String * value);

unsigned long AudioEncoderConfig_sampleRate(const AudioEncoderConfig *self);

void AudioEncoderConfig_set_sampleRate(AudioEncoderConfig* self, unsigned long value);

unsigned long AudioEncoderConfig_numberOfChannels(const AudioEncoderConfig *self);

void AudioEncoderConfig_set_numberOfChannels(AudioEncoderConfig* self, unsigned long value);

long long AudioEncoderConfig_bitrate(const AudioEncoderConfig *self);

void AudioEncoderConfig_set_bitrate(AudioEncoderConfig* self, long long value);

BitrateMode AudioEncoderConfig_bitrateMode(const AudioEncoderConfig *self);

void AudioEncoderConfig_set_bitrateMode(AudioEncoderConfig* self, BitrateMode * value);
DECLARE_EMLITE_TYPE(AudioEncoderSupport, em_Val);

bool AudioEncoderSupport_supported(const AudioEncoderSupport *self);

void AudioEncoderSupport_set_supported(AudioEncoderSupport* self, bool value);

AudioEncoderConfig AudioEncoderSupport_config(const AudioEncoderSupport *self);

void AudioEncoderSupport_set_config(AudioEncoderSupport* self, AudioEncoderConfig * value);
DECLARE_EMLITE_TYPE(AudioEncoder, EventTarget);

AudioEncoder AudioEncoder_new(jb_Any * init);

CodecState AudioEncoder_state(const AudioEncoder *self);

unsigned long AudioEncoder_encodeQueueSize(const AudioEncoder *self);

jb_Any AudioEncoder_ondequeue(const AudioEncoder *self);

void AudioEncoder_set_ondequeue(AudioEncoder* self, jb_Any * value);

jb_Undefined AudioEncoder_configure(AudioEncoder* self , AudioEncoderConfig * config);

jb_Undefined AudioEncoder_encode(AudioEncoder* self , AudioData * data);

jb_Promise AudioEncoder_flush(AudioEncoder* self );

jb_Undefined AudioEncoder_reset(AudioEncoder* self );

jb_Undefined AudioEncoder_close(AudioEncoder* self );

jb_Promise AudioEncoder_isConfigSupported(AudioEncoder* self , AudioEncoderConfig * config);
