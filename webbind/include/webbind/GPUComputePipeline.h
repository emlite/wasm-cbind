#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct GPUBindGroupLayout GPUBindGroupLayout;


DECLARE_EMLITE_TYPE(GPUComputePipeline, em_Val);

jb_String GPUComputePipeline_label(const GPUComputePipeline *self);

void GPUComputePipeline_set_label(GPUComputePipeline* self, jb_String * value);

GPUBindGroupLayout GPUComputePipeline_getBindGroupLayout(GPUComputePipeline* self , unsigned long index);
