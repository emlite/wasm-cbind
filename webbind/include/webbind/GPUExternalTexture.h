#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GPUExternalTexture, em_Val);

jb_String GPUExternalTexture_label(const GPUExternalTexture *self);

void GPUExternalTexture_set_label(GPUExternalTexture* self, jb_String * value);
