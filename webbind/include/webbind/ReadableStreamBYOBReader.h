#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ReadableStream ReadableStream;
typedef struct ReadableStreamReadResult ReadableStreamReadResult;
typedef struct ReadableStreamBYOBReaderReadOptions ReadableStreamBYOBReaderReadOptions;

DECLARE_EMLITE_TYPE(ReadableStreamBYOBReader, em_Val);

ReadableStreamBYOBReader ReadableStreamBYOBReader_new(ReadableStream * stream);

jb_Promise ReadableStreamBYOBReader_read0(ReadableStreamBYOBReader* self , jb_Any * view);

jb_Promise ReadableStreamBYOBReader_read1(ReadableStreamBYOBReader* self , jb_Any * view, ReadableStreamBYOBReaderReadOptions * options);

jb_Undefined ReadableStreamBYOBReader_releaseLock(ReadableStreamBYOBReader* self );

jb_Promise ReadableStreamBYOBReader_closed(const ReadableStreamBYOBReader *self);

jb_Promise ReadableStreamBYOBReader_cancel0(ReadableStreamBYOBReader* self );

jb_Promise ReadableStreamBYOBReader_cancel1(ReadableStreamBYOBReader* self , jb_Any * reason);

#ifdef __cplusplus
}
#endif
