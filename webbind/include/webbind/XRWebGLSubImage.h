#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRSubImage.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WebGLTexture WebGLTexture;


DECLARE_EMLITE_TYPE(XRWebGLSubImage, XRSubImage);

WebGLTexture XRWebGLSubImage_colorTexture(const XRWebGLSubImage *self);

WebGLTexture XRWebGLSubImage_depthStencilTexture(const XRWebGLSubImage *self);

WebGLTexture XRWebGLSubImage_motionVectorTexture(const XRWebGLSubImage *self);

unsigned long XRWebGLSubImage_imageIndex(const XRWebGLSubImage *self);

unsigned long XRWebGLSubImage_colorTextureWidth(const XRWebGLSubImage *self);

unsigned long XRWebGLSubImage_colorTextureHeight(const XRWebGLSubImage *self);

unsigned long XRWebGLSubImage_depthStencilTextureWidth(const XRWebGLSubImage *self);

unsigned long XRWebGLSubImage_depthStencilTextureHeight(const XRWebGLSubImage *self);

unsigned long XRWebGLSubImage_motionVectorTextureWidth(const XRWebGLSubImage *self);

unsigned long XRWebGLSubImage_motionVectorTextureHeight(const XRWebGLSubImage *self);
