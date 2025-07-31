#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct GPUComputePipeline GPUComputePipeline;
typedef struct GPUBuffer GPUBuffer;
typedef struct GPUBindGroup GPUBindGroup;


DECLARE_EMLITE_TYPE(GPUComputePassEncoder, em_Val);

jb_Undefined GPUComputePassEncoder_setPipeline(GPUComputePassEncoder* self , GPUComputePipeline * pipeline);

jb_Undefined GPUComputePassEncoder_dispatchWorkgroups0(GPUComputePassEncoder* self , jb_Any * workgroupCountX);

jb_Undefined GPUComputePassEncoder_dispatchWorkgroups1(GPUComputePassEncoder* self , jb_Any * workgroupCountX, jb_Any * workgroupCountY);

jb_Undefined GPUComputePassEncoder_dispatchWorkgroups2(GPUComputePassEncoder* self , jb_Any * workgroupCountX, jb_Any * workgroupCountY, jb_Any * workgroupCountZ);

jb_Undefined GPUComputePassEncoder_dispatchWorkgroupsIndirect(GPUComputePassEncoder* self , GPUBuffer * indirectBuffer, jb_Any * indirectOffset);

jb_Undefined GPUComputePassEncoder_end(GPUComputePassEncoder* self );

jb_String GPUComputePassEncoder_label(const GPUComputePassEncoder *self);

void GPUComputePassEncoder_set_label(GPUComputePassEncoder* self, jb_String * value);

jb_Undefined GPUComputePassEncoder_pushDebugGroup(GPUComputePassEncoder* self , jb_String * groupLabel);

jb_Undefined GPUComputePassEncoder_popDebugGroup(GPUComputePassEncoder* self );

jb_Undefined GPUComputePassEncoder_insertDebugMarker(GPUComputePassEncoder* self , jb_String * markerLabel);

jb_Undefined GPUComputePassEncoder_setBindGroup(GPUComputePassEncoder* self , jb_Any * index, GPUBindGroup * bindGroup, jb_Uint32Array * dynamicOffsetsData, jb_Any * dynamicOffsetsDataStart, jb_Any * dynamicOffsetsDataLength);
