#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ReadableStreamReadResult ReadableStreamReadResult;


DECLARE_EMLITE_TYPE(ReadableStreamReadResult, em_Val);

jb_Any ReadableStreamReadResult_value(const ReadableStreamReadResult *self);

void ReadableStreamReadResult_set_value(ReadableStreamReadResult* self, jb_Any * value);

bool ReadableStreamReadResult_done(const ReadableStreamReadResult *self);

void ReadableStreamReadResult_set_done(ReadableStreamReadResult* self, bool value);
DECLARE_EMLITE_TYPE(ReadableStreamDefaultReader, em_Val);

ReadableStreamDefaultReader ReadableStreamDefaultReader_new(ReadableStream * stream);

jb_Promise ReadableStreamDefaultReader_read(ReadableStreamDefaultReader* self );

jb_Undefined ReadableStreamDefaultReader_releaseLock(ReadableStreamDefaultReader* self );

jb_Promise ReadableStreamDefaultReader_closed(const ReadableStreamDefaultReader *self);

jb_Promise ReadableStreamDefaultReader_cancel0(ReadableStreamDefaultReader* self );

jb_Promise ReadableStreamDefaultReader_cancel1(ReadableStreamDefaultReader* self , jb_Any * reason);
