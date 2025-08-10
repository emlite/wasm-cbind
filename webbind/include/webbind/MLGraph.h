#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MLGraph, em_Val);

jb_Undefined MLGraph_destroy(MLGraph* self );

#ifdef __cplusplus
}
#endif
