#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GPUBindGroupLayout, em_Val);

jb_String GPUBindGroupLayout_label(const GPUBindGroupLayout *self);

void GPUBindGroupLayout_set_label(GPUBindGroupLayout* self, jb_String * value);
