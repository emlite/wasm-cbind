#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(GPUCompilationMessage, em_Val);

jb_String GPUCompilationMessage_message(const GPUCompilationMessage *self);

GPUCompilationMessageType GPUCompilationMessage_type(const GPUCompilationMessage *self);

long long GPUCompilationMessage_lineNum(const GPUCompilationMessage *self);

long long GPUCompilationMessage_linePos(const GPUCompilationMessage *self);

long long GPUCompilationMessage_offset(const GPUCompilationMessage *self);

long long GPUCompilationMessage_length(const GPUCompilationMessage *self);
