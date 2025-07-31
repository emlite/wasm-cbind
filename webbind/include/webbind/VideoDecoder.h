#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct VideoDecoderConfig VideoDecoderConfig;
typedef struct EncodedVideoChunk EncodedVideoChunk;
typedef struct VideoDecoderSupport VideoDecoderSupport;
typedef struct VideoColorSpaceInit VideoColorSpaceInit;


DECLARE_EMLITE_TYPE(VideoDecoderConfig, em_Val);

jb_String VideoDecoderConfig_codec(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_codec(VideoDecoderConfig* self, jb_String * value);

jb_Any VideoDecoderConfig_description(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_description(VideoDecoderConfig* self, jb_Any * value);

unsigned long VideoDecoderConfig_codedWidth(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_codedWidth(VideoDecoderConfig* self, unsigned long value);

unsigned long VideoDecoderConfig_codedHeight(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_codedHeight(VideoDecoderConfig* self, unsigned long value);

unsigned long VideoDecoderConfig_displayAspectWidth(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_displayAspectWidth(VideoDecoderConfig* self, unsigned long value);

unsigned long VideoDecoderConfig_displayAspectHeight(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_displayAspectHeight(VideoDecoderConfig* self, unsigned long value);

VideoColorSpaceInit VideoDecoderConfig_colorSpace(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_colorSpace(VideoDecoderConfig* self, VideoColorSpaceInit * value);

HardwareAcceleration VideoDecoderConfig_hardwareAcceleration(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_hardwareAcceleration(VideoDecoderConfig* self, HardwareAcceleration * value);

bool VideoDecoderConfig_optimizeForLatency(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_optimizeForLatency(VideoDecoderConfig* self, bool value);

double VideoDecoderConfig_rotation(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_rotation(VideoDecoderConfig* self, double value);

bool VideoDecoderConfig_flip(const VideoDecoderConfig *self);

void VideoDecoderConfig_set_flip(VideoDecoderConfig* self, bool value);
DECLARE_EMLITE_TYPE(VideoDecoderSupport, em_Val);

bool VideoDecoderSupport_supported(const VideoDecoderSupport *self);

void VideoDecoderSupport_set_supported(VideoDecoderSupport* self, bool value);

VideoDecoderConfig VideoDecoderSupport_config(const VideoDecoderSupport *self);

void VideoDecoderSupport_set_config(VideoDecoderSupport* self, VideoDecoderConfig * value);
DECLARE_EMLITE_TYPE(VideoDecoder, EventTarget);

VideoDecoder VideoDecoder_new(jb_Any * init);

CodecState VideoDecoder_state(const VideoDecoder *self);

unsigned long VideoDecoder_decodeQueueSize(const VideoDecoder *self);

jb_Any VideoDecoder_ondequeue(const VideoDecoder *self);

void VideoDecoder_set_ondequeue(VideoDecoder* self, jb_Any * value);

jb_Undefined VideoDecoder_configure(VideoDecoder* self , VideoDecoderConfig * config);

jb_Undefined VideoDecoder_decode(VideoDecoder* self , EncodedVideoChunk * chunk);

jb_Promise VideoDecoder_flush(VideoDecoder* self );

jb_Undefined VideoDecoder_reset(VideoDecoder* self );

jb_Undefined VideoDecoder_close(VideoDecoder* self );

jb_Promise VideoDecoder_isConfigSupported(VideoDecoder* self , VideoDecoderConfig * config);
