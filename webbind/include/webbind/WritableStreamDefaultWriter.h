#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WritableStream WritableStream;


DECLARE_EMLITE_TYPE(WritableStreamDefaultWriter, em_Val);

WritableStreamDefaultWriter WritableStreamDefaultWriter_new(WritableStream * stream);

jb_Promise WritableStreamDefaultWriter_closed(const WritableStreamDefaultWriter *self);

double WritableStreamDefaultWriter_desiredSize(const WritableStreamDefaultWriter *self);

jb_Promise WritableStreamDefaultWriter_ready(const WritableStreamDefaultWriter *self);

jb_Promise WritableStreamDefaultWriter_abort0(WritableStreamDefaultWriter* self );

jb_Promise WritableStreamDefaultWriter_abort1(WritableStreamDefaultWriter* self , jb_Any * reason);

jb_Promise WritableStreamDefaultWriter_close(WritableStreamDefaultWriter* self );

jb_Undefined WritableStreamDefaultWriter_releaseLock(WritableStreamDefaultWriter* self );

jb_Promise WritableStreamDefaultWriter_write0(WritableStreamDefaultWriter* self );

jb_Promise WritableStreamDefaultWriter_write1(WritableStreamDefaultWriter* self , jb_Any * chunk);
