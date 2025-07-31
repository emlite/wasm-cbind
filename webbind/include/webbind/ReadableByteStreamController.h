#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ReadableStreamBYOBRequest ReadableStreamBYOBRequest;


DECLARE_EMLITE_TYPE(ReadableByteStreamController, em_Val);

ReadableStreamBYOBRequest ReadableByteStreamController_byobRequest(const ReadableByteStreamController *self);

double ReadableByteStreamController_desiredSize(const ReadableByteStreamController *self);

jb_Undefined ReadableByteStreamController_close(ReadableByteStreamController* self );

jb_Undefined ReadableByteStreamController_enqueue(ReadableByteStreamController* self , jb_Any * chunk);

jb_Undefined ReadableByteStreamController_error0(ReadableByteStreamController* self );

jb_Undefined ReadableByteStreamController_error1(ReadableByteStreamController* self , jb_Any * e);
