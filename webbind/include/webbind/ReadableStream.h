#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ReadableStream ReadableStream;
typedef struct ReadableStreamGetReaderOptions ReadableStreamGetReaderOptions;
typedef struct ReadableWritablePair ReadableWritablePair;
typedef struct StreamPipeOptions StreamPipeOptions;
typedef struct WritableStream WritableStream;
typedef struct AbortSignal AbortSignal;


DECLARE_EMLITE_TYPE(ReadableStreamGetReaderOptions, em_Val);

ReadableStreamReaderMode ReadableStreamGetReaderOptions_mode(const ReadableStreamGetReaderOptions *self);

void ReadableStreamGetReaderOptions_set_mode(ReadableStreamGetReaderOptions* self, ReadableStreamReaderMode * value);
DECLARE_EMLITE_TYPE(ReadableWritablePair, em_Val);

ReadableStream ReadableWritablePair_readable(const ReadableWritablePair *self);

void ReadableWritablePair_set_readable(ReadableWritablePair* self, ReadableStream * value);

WritableStream ReadableWritablePair_writable(const ReadableWritablePair *self);

void ReadableWritablePair_set_writable(ReadableWritablePair* self, WritableStream * value);
DECLARE_EMLITE_TYPE(StreamPipeOptions, em_Val);

bool StreamPipeOptions_preventClose(const StreamPipeOptions *self);

void StreamPipeOptions_set_preventClose(StreamPipeOptions* self, bool value);

bool StreamPipeOptions_preventAbort(const StreamPipeOptions *self);

void StreamPipeOptions_set_preventAbort(StreamPipeOptions* self, bool value);

bool StreamPipeOptions_preventCancel(const StreamPipeOptions *self);

void StreamPipeOptions_set_preventCancel(StreamPipeOptions* self, bool value);

AbortSignal StreamPipeOptions_signal(const StreamPipeOptions *self);

void StreamPipeOptions_set_signal(StreamPipeOptions* self, AbortSignal * value);
DECLARE_EMLITE_TYPE(ReadableStream, em_Val);

ReadableStream ReadableStream_new0();

ReadableStream ReadableStream_new1(jb_Object * underlyingSource);

ReadableStream ReadableStream_new2(jb_Object * underlyingSource, jb_Any * strategy);

ReadableStream ReadableStream_from(ReadableStream* self , jb_Any * asyncIterable);

bool ReadableStream_locked(const ReadableStream *self);

jb_Promise ReadableStream_cancel0(ReadableStream* self );

jb_Promise ReadableStream_cancel1(ReadableStream* self , jb_Any * reason);

jb_Any ReadableStream_getReader0(ReadableStream* self );

jb_Any ReadableStream_getReader1(ReadableStream* self , ReadableStreamGetReaderOptions * options);

ReadableStream ReadableStream_pipeThrough0(ReadableStream* self , ReadableWritablePair * transform);

ReadableStream ReadableStream_pipeThrough1(ReadableStream* self , ReadableWritablePair * transform, StreamPipeOptions * options);

jb_Promise ReadableStream_pipeTo0(ReadableStream* self , WritableStream * destination);

jb_Promise ReadableStream_pipeTo1(ReadableStream* self , WritableStream * destination, StreamPipeOptions * options);

jb_Array ReadableStream_tee(ReadableStream* self );
