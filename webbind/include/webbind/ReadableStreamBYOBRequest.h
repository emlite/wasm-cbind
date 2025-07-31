#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ReadableStreamBYOBRequest, em_Val);

jb_Any ReadableStreamBYOBRequest_view(const ReadableStreamBYOBRequest *self);

jb_Undefined ReadableStreamBYOBRequest_respond(ReadableStreamBYOBRequest* self , long long bytesWritten);

jb_Undefined ReadableStreamBYOBRequest_respondWithNewView(ReadableStreamBYOBRequest* self , jb_Any * view);
