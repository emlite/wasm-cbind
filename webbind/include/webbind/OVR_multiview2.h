#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WebGLTexture WebGLTexture;


DECLARE_EMLITE_TYPE(OVR_multiview2, em_Val);

jb_Undefined OVR_multiview2_framebufferTextureMultiviewOVR(OVR_multiview2* self , jb_Any * target, jb_Any * attachment, WebGLTexture * texture, jb_Any * level, jb_Any * baseViewIndex, jb_Any * numViews);
