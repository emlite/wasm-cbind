#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct GPUSupportedFeatures GPUSupportedFeatures;
typedef struct GPUSupportedLimits GPUSupportedLimits;
typedef struct GPUAdapterInfo GPUAdapterInfo;
typedef struct GPUDevice GPUDevice;
typedef struct GPUDeviceDescriptor GPUDeviceDescriptor;


DECLARE_EMLITE_TYPE(GPUDeviceDescriptor, em_Val);

jb_Array GPUDeviceDescriptor_requiredFeatures(const GPUDeviceDescriptor *self);

void GPUDeviceDescriptor_set_requiredFeatures(GPUDeviceDescriptor* self, jb_Array * value);

jb_Object GPUDeviceDescriptor_requiredLimits(const GPUDeviceDescriptor *self);

void GPUDeviceDescriptor_set_requiredLimits(GPUDeviceDescriptor* self, jb_Object * value);

jb_Any GPUDeviceDescriptor_defaultQueue(const GPUDeviceDescriptor *self);

void GPUDeviceDescriptor_set_defaultQueue(GPUDeviceDescriptor* self, jb_Any * value);
DECLARE_EMLITE_TYPE(GPUAdapter, em_Val);

GPUSupportedFeatures GPUAdapter_features(const GPUAdapter *self);

GPUSupportedLimits GPUAdapter_limits(const GPUAdapter *self);

GPUAdapterInfo GPUAdapter_info(const GPUAdapter *self);

jb_Promise GPUAdapter_requestDevice0(GPUAdapter* self );

jb_Promise GPUAdapter_requestDevice1(GPUAdapter* self , GPUDeviceDescriptor * descriptor);
