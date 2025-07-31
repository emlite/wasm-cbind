#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GPUBuffer, em_Val);

jb_Any GPUBuffer_size(const GPUBuffer *self);

jb_Any GPUBuffer_usage(const GPUBuffer *self);

GPUBufferMapState GPUBuffer_mapState(const GPUBuffer *self);

jb_Promise GPUBuffer_mapAsync0(GPUBuffer* self , jb_Any * mode);

jb_Promise GPUBuffer_mapAsync1(GPUBuffer* self , jb_Any * mode, jb_Any * offset);

jb_Promise GPUBuffer_mapAsync2(GPUBuffer* self , jb_Any * mode, jb_Any * offset, jb_Any * size);

jb_ArrayBuffer GPUBuffer_getMappedRange0(GPUBuffer* self );

jb_ArrayBuffer GPUBuffer_getMappedRange1(GPUBuffer* self , jb_Any * offset);

jb_ArrayBuffer GPUBuffer_getMappedRange2(GPUBuffer* self , jb_Any * offset, jb_Any * size);

jb_Undefined GPUBuffer_unmap(GPUBuffer* self );

jb_Undefined GPUBuffer_destroy(GPUBuffer* self );

jb_String GPUBuffer_label(const GPUBuffer *self);

void GPUBuffer_set_label(GPUBuffer* self, jb_String * value);
