#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GPUBindGroup, em_Val);

jb_String GPUBindGroup_label(const GPUBindGroup *self);

void GPUBindGroup_set_label(GPUBindGroup* self, jb_String * value);
