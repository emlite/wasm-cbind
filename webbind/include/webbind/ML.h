#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MLContext MLContext;
typedef struct GPUDevice GPUDevice;


DECLARE_EMLITE_TYPE(ML, em_Val);

jb_Promise ML_createContext(ML* self , GPUDevice * gpuDevice);
