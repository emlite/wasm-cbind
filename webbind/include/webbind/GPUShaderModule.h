#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct GPUCompilationInfo GPUCompilationInfo;


DECLARE_EMLITE_TYPE(GPUShaderModule, em_Val);

jb_Promise GPUShaderModule_getCompilationInfo(GPUShaderModule* self );

jb_String GPUShaderModule_label(const GPUShaderModule *self);

void GPUShaderModule_set_label(GPUShaderModule* self, jb_String * value);
