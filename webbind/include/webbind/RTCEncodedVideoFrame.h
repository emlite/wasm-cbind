#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct RTCEncodedVideoFrameMetadata RTCEncodedVideoFrameMetadata;


DECLARE_EMLITE_TYPE(RTCEncodedVideoFrameMetadata, em_Val);

long long RTCEncodedVideoFrameMetadata_frameId(const RTCEncodedVideoFrameMetadata *self);

void RTCEncodedVideoFrameMetadata_set_frameId(RTCEncodedVideoFrameMetadata* self, long long value);

jb_Array RTCEncodedVideoFrameMetadata_dependencies(const RTCEncodedVideoFrameMetadata *self);

void RTCEncodedVideoFrameMetadata_set_dependencies(RTCEncodedVideoFrameMetadata* self, jb_Array * value);

unsigned short RTCEncodedVideoFrameMetadata_width(const RTCEncodedVideoFrameMetadata *self);

void RTCEncodedVideoFrameMetadata_set_width(RTCEncodedVideoFrameMetadata* self, unsigned short value);

unsigned short RTCEncodedVideoFrameMetadata_height(const RTCEncodedVideoFrameMetadata *self);

void RTCEncodedVideoFrameMetadata_set_height(RTCEncodedVideoFrameMetadata* self, unsigned short value);

unsigned long RTCEncodedVideoFrameMetadata_spatialIndex(const RTCEncodedVideoFrameMetadata *self);

void RTCEncodedVideoFrameMetadata_set_spatialIndex(RTCEncodedVideoFrameMetadata* self, unsigned long value);

unsigned long RTCEncodedVideoFrameMetadata_temporalIndex(const RTCEncodedVideoFrameMetadata *self);

void RTCEncodedVideoFrameMetadata_set_temporalIndex(RTCEncodedVideoFrameMetadata* self, unsigned long value);

long long RTCEncodedVideoFrameMetadata_timestamp(const RTCEncodedVideoFrameMetadata *self);

void RTCEncodedVideoFrameMetadata_set_timestamp(RTCEncodedVideoFrameMetadata* self, long long value);
DECLARE_EMLITE_TYPE(RTCEncodedVideoFrame, em_Val);

RTCEncodedVideoFrame RTCEncodedVideoFrame_new0(RTCEncodedVideoFrame * originalFrame);

RTCEncodedVideoFrame RTCEncodedVideoFrame_new1(RTCEncodedVideoFrame * originalFrame, jb_Any * options);

RTCEncodedVideoFrameType RTCEncodedVideoFrame_type(const RTCEncodedVideoFrame *self);

jb_ArrayBuffer RTCEncodedVideoFrame_data(const RTCEncodedVideoFrame *self);

void RTCEncodedVideoFrame_set_data(RTCEncodedVideoFrame* self, jb_ArrayBuffer * value);

RTCEncodedVideoFrameMetadata RTCEncodedVideoFrame_getMetadata(RTCEncodedVideoFrame* self );
