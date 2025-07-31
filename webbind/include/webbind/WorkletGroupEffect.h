#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WorkletAnimationEffect WorkletAnimationEffect;


DECLARE_EMLITE_TYPE(WorkletGroupEffect, em_Val);

jb_Array WorkletGroupEffect_getChildren(WorkletGroupEffect* self );
