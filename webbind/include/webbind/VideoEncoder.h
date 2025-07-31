#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct VideoEncoderConfig VideoEncoderConfig;
typedef struct VideoFrame VideoFrame;
typedef struct VideoEncoderEncodeOptions VideoEncoderEncodeOptions;
typedef struct VideoEncoderSupport VideoEncoderSupport;


DECLARE_EMLITE_TYPE(VideoEncoderConfig, em_Val);

jb_String VideoEncoderConfig_codec(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_codec(VideoEncoderConfig* self, jb_String * value);

unsigned long VideoEncoderConfig_width(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_width(VideoEncoderConfig* self, unsigned long value);

unsigned long VideoEncoderConfig_height(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_height(VideoEncoderConfig* self, unsigned long value);

unsigned long VideoEncoderConfig_displayWidth(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_displayWidth(VideoEncoderConfig* self, unsigned long value);

unsigned long VideoEncoderConfig_displayHeight(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_displayHeight(VideoEncoderConfig* self, unsigned long value);

long long VideoEncoderConfig_bitrate(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_bitrate(VideoEncoderConfig* self, long long value);

double VideoEncoderConfig_framerate(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_framerate(VideoEncoderConfig* self, double value);

HardwareAcceleration VideoEncoderConfig_hardwareAcceleration(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_hardwareAcceleration(VideoEncoderConfig* self, HardwareAcceleration * value);

AlphaOption VideoEncoderConfig_alpha(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_alpha(VideoEncoderConfig* self, AlphaOption * value);

jb_String VideoEncoderConfig_scalabilityMode(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_scalabilityMode(VideoEncoderConfig* self, jb_String * value);

VideoEncoderBitrateMode VideoEncoderConfig_bitrateMode(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_bitrateMode(VideoEncoderConfig* self, VideoEncoderBitrateMode * value);

LatencyMode VideoEncoderConfig_latencyMode(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_latencyMode(VideoEncoderConfig* self, LatencyMode * value);

jb_String VideoEncoderConfig_contentHint(const VideoEncoderConfig *self);

void VideoEncoderConfig_set_contentHint(VideoEncoderConfig* self, jb_String * value);
DECLARE_EMLITE_TYPE(VideoEncoderEncodeOptions, em_Val);

bool VideoEncoderEncodeOptions_keyFrame(const VideoEncoderEncodeOptions *self);

void VideoEncoderEncodeOptions_set_keyFrame(VideoEncoderEncodeOptions* self, bool value);
DECLARE_EMLITE_TYPE(VideoEncoderSupport, em_Val);

bool VideoEncoderSupport_supported(const VideoEncoderSupport *self);

void VideoEncoderSupport_set_supported(VideoEncoderSupport* self, bool value);

VideoEncoderConfig VideoEncoderSupport_config(const VideoEncoderSupport *self);

void VideoEncoderSupport_set_config(VideoEncoderSupport* self, VideoEncoderConfig * value);
DECLARE_EMLITE_TYPE(VideoEncoder, EventTarget);

VideoEncoder VideoEncoder_new(jb_Any * init);

CodecState VideoEncoder_state(const VideoEncoder *self);

unsigned long VideoEncoder_encodeQueueSize(const VideoEncoder *self);

jb_Any VideoEncoder_ondequeue(const VideoEncoder *self);

void VideoEncoder_set_ondequeue(VideoEncoder* self, jb_Any * value);

jb_Undefined VideoEncoder_configure(VideoEncoder* self , VideoEncoderConfig * config);

jb_Undefined VideoEncoder_encode0(VideoEncoder* self , VideoFrame * frame);

jb_Undefined VideoEncoder_encode1(VideoEncoder* self , VideoFrame * frame, VideoEncoderEncodeOptions * options);

jb_Promise VideoEncoder_flush(VideoEncoder* self );

jb_Undefined VideoEncoder_reset(VideoEncoder* self );

jb_Undefined VideoEncoder_close(VideoEncoder* self );

jb_Promise VideoEncoder_isConfigSupported(VideoEncoder* self , VideoEncoderConfig * config);
