#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GPUCommandBuffer, em_Val);

jb_String GPUCommandBuffer_label(const GPUCommandBuffer *self);

void GPUCommandBuffer_set_label(GPUCommandBuffer* self, jb_String * value);
