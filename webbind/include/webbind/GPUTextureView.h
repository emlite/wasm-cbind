#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GPUTextureView, em_Val);

jb_String GPUTextureView_label(const GPUTextureView *self);

void GPUTextureView_set_label(GPUTextureView* self, jb_String * value);
