#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct GPUCompilationMessage GPUCompilationMessage;


DECLARE_EMLITE_TYPE(GPUCompilationInfo, em_Val);

jb_Array GPUCompilationInfo_messages(const GPUCompilationInfo *self);
