#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ReadableStreamDefaultController, em_Val);

double ReadableStreamDefaultController_desiredSize(const ReadableStreamDefaultController *self);

jb_Undefined ReadableStreamDefaultController_close(ReadableStreamDefaultController* self );

jb_Undefined ReadableStreamDefaultController_enqueue0(ReadableStreamDefaultController* self );

jb_Undefined ReadableStreamDefaultController_enqueue1(ReadableStreamDefaultController* self , jb_Any * chunk);

jb_Undefined ReadableStreamDefaultController_error0(ReadableStreamDefaultController* self );

jb_Undefined ReadableStreamDefaultController_error1(ReadableStreamDefaultController* self , jb_Any * e);
