#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ImageBitmap ImageBitmap;
typedef struct Blob Blob;
typedef struct ImageEncodeOptions ImageEncodeOptions;


DECLARE_EMLITE_TYPE(ImageEncodeOptions, em_Val);

jb_String ImageEncodeOptions_type(const ImageEncodeOptions *self);

void ImageEncodeOptions_set_type(ImageEncodeOptions* self, jb_String * value);

double ImageEncodeOptions_quality(const ImageEncodeOptions *self);

void ImageEncodeOptions_set_quality(ImageEncodeOptions* self, double value);
DECLARE_EMLITE_TYPE(OffscreenCanvas, EventTarget);

OffscreenCanvas OffscreenCanvas_new(long long width, long long height);

long long OffscreenCanvas_width(const OffscreenCanvas *self);

void OffscreenCanvas_set_width(OffscreenCanvas* self, long long value);

long long OffscreenCanvas_height(const OffscreenCanvas *self);

void OffscreenCanvas_set_height(OffscreenCanvas* self, long long value);

jb_Any OffscreenCanvas_getContext0(OffscreenCanvas* self , OffscreenRenderingContextId * contextId);

jb_Any OffscreenCanvas_getContext1(OffscreenCanvas* self , OffscreenRenderingContextId * contextId, jb_Any * options);

ImageBitmap OffscreenCanvas_transferToImageBitmap(OffscreenCanvas* self );

jb_Promise OffscreenCanvas_convertToBlob0(OffscreenCanvas* self );

jb_Promise OffscreenCanvas_convertToBlob1(OffscreenCanvas* self , ImageEncodeOptions * options);

jb_Any OffscreenCanvas_oncontextlost(const OffscreenCanvas *self);

void OffscreenCanvas_set_oncontextlost(OffscreenCanvas* self, jb_Any * value);

jb_Any OffscreenCanvas_oncontextrestored(const OffscreenCanvas *self);

void OffscreenCanvas_set_oncontextrestored(OffscreenCanvas* self, jb_Any * value);
