#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AbortSignal AbortSignal;


DECLARE_EMLITE_TYPE(AbortController, em_Val);

AbortController AbortController_new();

AbortSignal AbortController_signal(const AbortController *self);

jb_Undefined AbortController_abort0(AbortController* self );

jb_Undefined AbortController_abort1(AbortController* self , jb_Any * reason);
