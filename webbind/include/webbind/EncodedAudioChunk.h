#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EncodedAudioChunkInit EncodedAudioChunkInit;

DECLARE_EMLITE_TYPE(EncodedAudioChunk, em_Val);

EncodedAudioChunk EncodedAudioChunk_new(EncodedAudioChunkInit * init);

EncodedAudioChunkType EncodedAudioChunk_type(const EncodedAudioChunk *self);

long long EncodedAudioChunk_timestamp(const EncodedAudioChunk *self);

long long EncodedAudioChunk_duration(const EncodedAudioChunk *self);

unsigned long EncodedAudioChunk_byteLength(const EncodedAudioChunk *self);

jb_Undefined EncodedAudioChunk_copyTo(EncodedAudioChunk* self , jb_Any * destination);

#ifdef __cplusplus
}
#endif
