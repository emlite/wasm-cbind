#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AudioDataCopyToOptions AudioDataCopyToOptions;
typedef struct AudioData AudioData;


DECLARE_EMLITE_TYPE(AudioDataCopyToOptions, em_Val);

unsigned long AudioDataCopyToOptions_planeIndex(const AudioDataCopyToOptions *self);

void AudioDataCopyToOptions_set_planeIndex(AudioDataCopyToOptions* self, unsigned long value);

unsigned long AudioDataCopyToOptions_frameOffset(const AudioDataCopyToOptions *self);

void AudioDataCopyToOptions_set_frameOffset(AudioDataCopyToOptions* self, unsigned long value);

unsigned long AudioDataCopyToOptions_frameCount(const AudioDataCopyToOptions *self);

void AudioDataCopyToOptions_set_frameCount(AudioDataCopyToOptions* self, unsigned long value);

AudioSampleFormat AudioDataCopyToOptions_format(const AudioDataCopyToOptions *self);

void AudioDataCopyToOptions_set_format(AudioDataCopyToOptions* self, AudioSampleFormat * value);
DECLARE_EMLITE_TYPE(AudioData, em_Val);

AudioData AudioData_new(jb_Any * init);

AudioSampleFormat AudioData_format(const AudioData *self);

float AudioData_sampleRate(const AudioData *self);

unsigned long AudioData_numberOfFrames(const AudioData *self);

unsigned long AudioData_numberOfChannels(const AudioData *self);

long long AudioData_duration(const AudioData *self);

long long AudioData_timestamp(const AudioData *self);

unsigned long AudioData_allocationSize(AudioData* self , AudioDataCopyToOptions * options);

jb_Undefined AudioData_copyTo(AudioData* self , jb_Any * destination, AudioDataCopyToOptions * options);

AudioData AudioData_clone(AudioData* self );

jb_Undefined AudioData_close(AudioData* self );
