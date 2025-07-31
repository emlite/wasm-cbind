#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GPUAdapterInfo, em_Val);

jb_String GPUAdapterInfo_vendor(const GPUAdapterInfo *self);

jb_String GPUAdapterInfo_architecture(const GPUAdapterInfo *self);

jb_String GPUAdapterInfo_device(const GPUAdapterInfo *self);

jb_String GPUAdapterInfo_description(const GPUAdapterInfo *self);

unsigned long GPUAdapterInfo_subgroupMinSize(const GPUAdapterInfo *self);

unsigned long GPUAdapterInfo_subgroupMaxSize(const GPUAdapterInfo *self);

bool GPUAdapterInfo_isFallbackAdapter(const GPUAdapterInfo *self);
