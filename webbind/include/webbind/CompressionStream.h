#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;


DECLARE_EMLITE_TYPE(CompressionStream, em_Val);

CompressionStream CompressionStream_new(CompressionFormat * format);

ReadableStream CompressionStream_readable(const CompressionStream *self);

WritableStream CompressionStream_writable(const CompressionStream *self);
