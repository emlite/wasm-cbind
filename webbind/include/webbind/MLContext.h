#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MLGraph MLGraph;
typedef struct MLTensor MLTensor;
typedef struct MLTensorDescriptor MLTensorDescriptor;
typedef struct MLOperandDescriptor MLOperandDescriptor;
typedef struct MLOpSupportLimits MLOpSupportLimits;
typedef struct MLContextLostInfo MLContextLostInfo;


DECLARE_EMLITE_TYPE(MLTensorDescriptor, em_Val);

bool MLTensorDescriptor_readable(const MLTensorDescriptor *self);

void MLTensorDescriptor_set_readable(MLTensorDescriptor* self, bool value);

bool MLTensorDescriptor_writable(const MLTensorDescriptor *self);

void MLTensorDescriptor_set_writable(MLTensorDescriptor* self, bool value);
DECLARE_EMLITE_TYPE(MLOperandDescriptor, em_Val);

MLOperandDataType MLOperandDescriptor_dataType(const MLOperandDescriptor *self);

void MLOperandDescriptor_set_dataType(MLOperandDescriptor* self, MLOperandDataType * value);

jb_Array MLOperandDescriptor_shape(const MLOperandDescriptor *self);

void MLOperandDescriptor_set_shape(MLOperandDescriptor* self, jb_Array * value);
DECLARE_EMLITE_TYPE(MLOpSupportLimits, em_Val);

jb_Any MLOpSupportLimits_where(const MLOpSupportLimits *self);

void MLOpSupportLimits_set_where(MLOpSupportLimits* self, jb_Any * value);
DECLARE_EMLITE_TYPE(MLContextLostInfo, em_Val);

jb_String MLContextLostInfo_message(const MLContextLostInfo *self);

void MLContextLostInfo_set_message(MLContextLostInfo* self, jb_String * value);
DECLARE_EMLITE_TYPE(MLContext, em_Val);

jb_Undefined MLContext_dispatch(MLContext* self , MLGraph * graph, jb_Any * inputs, jb_Any * outputs);

jb_Promise MLContext_createTensor(MLContext* self , MLTensorDescriptor * descriptor);

jb_Promise MLContext_createConstantTensor(MLContext* self , MLOperandDescriptor * descriptor, jb_Any * inputData);

jb_Promise MLContext_readTensor(MLContext* self , MLTensor * tensor, jb_Any * outputData);

jb_Undefined MLContext_writeTensor(MLContext* self , MLTensor * tensor, jb_Any * inputData);

MLOpSupportLimits MLContext_opSupportLimits(MLContext* self );

jb_Undefined MLContext_destroy(MLContext* self );

jb_Promise MLContext_lost(const MLContext *self);
