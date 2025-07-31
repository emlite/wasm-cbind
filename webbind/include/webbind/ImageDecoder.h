#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ImageTrackList ImageTrackList;
typedef struct ImageDecodeResult ImageDecodeResult;
typedef struct ImageDecodeOptions ImageDecodeOptions;
typedef struct VideoFrame VideoFrame;


DECLARE_EMLITE_TYPE(ImageDecodeResult, em_Val);

VideoFrame ImageDecodeResult_image(const ImageDecodeResult *self);

void ImageDecodeResult_set_image(ImageDecodeResult* self, VideoFrame * value);

bool ImageDecodeResult_complete(const ImageDecodeResult *self);

void ImageDecodeResult_set_complete(ImageDecodeResult* self, bool value);
DECLARE_EMLITE_TYPE(ImageDecodeOptions, em_Val);

unsigned long ImageDecodeOptions_frameIndex(const ImageDecodeOptions *self);

void ImageDecodeOptions_set_frameIndex(ImageDecodeOptions* self, unsigned long value);

bool ImageDecodeOptions_completeFramesOnly(const ImageDecodeOptions *self);

void ImageDecodeOptions_set_completeFramesOnly(ImageDecodeOptions* self, bool value);
DECLARE_EMLITE_TYPE(ImageDecoder, em_Val);

ImageDecoder ImageDecoder_new(jb_Any * init);

jb_String ImageDecoder_type(const ImageDecoder *self);

bool ImageDecoder_complete(const ImageDecoder *self);

jb_Promise ImageDecoder_completed(const ImageDecoder *self);

ImageTrackList ImageDecoder_tracks(const ImageDecoder *self);

jb_Promise ImageDecoder_decode0(ImageDecoder* self );

jb_Promise ImageDecoder_decode1(ImageDecoder* self , ImageDecodeOptions * options);

jb_Undefined ImageDecoder_reset(ImageDecoder* self );

jb_Undefined ImageDecoder_close(ImageDecoder* self );

jb_Promise ImageDecoder_isTypeSupported(ImageDecoder* self , jb_String * type);
