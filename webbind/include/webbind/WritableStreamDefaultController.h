#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AbortSignal AbortSignal;


DECLARE_EMLITE_TYPE(WritableStreamDefaultController, em_Val);

AbortSignal WritableStreamDefaultController_signal(const WritableStreamDefaultController *self);

jb_Undefined WritableStreamDefaultController_error0(WritableStreamDefaultController* self );

jb_Undefined WritableStreamDefaultController_error1(WritableStreamDefaultController* self , jb_Any * e);
