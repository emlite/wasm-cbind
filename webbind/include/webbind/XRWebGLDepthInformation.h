#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRDepthInformation.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebGLTexture WebGLTexture;

DECLARE_EMLITE_TYPE(XRWebGLDepthInformation, XRDepthInformation);

WebGLTexture XRWebGLDepthInformation_texture(const XRWebGLDepthInformation *self);

XRTextureType XRWebGLDepthInformation_textureType(const XRWebGLDepthInformation *self);

unsigned long XRWebGLDepthInformation_imageIndex(const XRWebGLDepthInformation *self);

#ifdef __cplusplus
}
#endif
