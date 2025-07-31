#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GPUSupportedLimits, em_Val);

unsigned long GPUSupportedLimits_maxTextureDimension1D(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxTextureDimension2D(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxTextureDimension3D(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxTextureArrayLayers(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxBindGroups(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxBindGroupsPlusVertexBuffers(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxBindingsPerBindGroup(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxDynamicUniformBuffersPerPipelineLayout(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxDynamicStorageBuffersPerPipelineLayout(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxSampledTexturesPerShaderStage(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxSamplersPerShaderStage(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxStorageBuffersPerShaderStage(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxStorageTexturesPerShaderStage(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxUniformBuffersPerShaderStage(const GPUSupportedLimits *self);

long long GPUSupportedLimits_maxUniformBufferBindingSize(const GPUSupportedLimits *self);

long long GPUSupportedLimits_maxStorageBufferBindingSize(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_minUniformBufferOffsetAlignment(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_minStorageBufferOffsetAlignment(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxVertexBuffers(const GPUSupportedLimits *self);

long long GPUSupportedLimits_maxBufferSize(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxVertexAttributes(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxVertexBufferArrayStride(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxInterStageShaderVariables(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxColorAttachments(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxColorAttachmentBytesPerSample(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxComputeWorkgroupStorageSize(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxComputeInvocationsPerWorkgroup(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxComputeWorkgroupSizeX(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxComputeWorkgroupSizeY(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxComputeWorkgroupSizeZ(const GPUSupportedLimits *self);

unsigned long GPUSupportedLimits_maxComputeWorkgroupsPerDimension(const GPUSupportedLimits *self);
