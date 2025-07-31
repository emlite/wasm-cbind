#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct RTCEncodedAudioFrameMetadata RTCEncodedAudioFrameMetadata;


DECLARE_EMLITE_TYPE(RTCEncodedAudioFrameMetadata, em_Val);

short RTCEncodedAudioFrameMetadata_sequenceNumber(const RTCEncodedAudioFrameMetadata *self);

void RTCEncodedAudioFrameMetadata_set_sequenceNumber(RTCEncodedAudioFrameMetadata* self, short value);

double RTCEncodedAudioFrameMetadata_audioLevel(const RTCEncodedAudioFrameMetadata *self);

void RTCEncodedAudioFrameMetadata_set_audioLevel(RTCEncodedAudioFrameMetadata* self, double value);
DECLARE_EMLITE_TYPE(RTCEncodedAudioFrame, em_Val);

RTCEncodedAudioFrame RTCEncodedAudioFrame_new0(RTCEncodedAudioFrame * originalFrame);

RTCEncodedAudioFrame RTCEncodedAudioFrame_new1(RTCEncodedAudioFrame * originalFrame, jb_Any * options);

jb_ArrayBuffer RTCEncodedAudioFrame_data(const RTCEncodedAudioFrame *self);

void RTCEncodedAudioFrame_set_data(RTCEncodedAudioFrame* self, jb_ArrayBuffer * value);

RTCEncodedAudioFrameMetadata RTCEncodedAudioFrame_getMetadata(RTCEncodedAudioFrame* self );
