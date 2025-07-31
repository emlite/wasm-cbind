#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;


DECLARE_EMLITE_TYPE(TextEncoderStream, em_Val);

TextEncoderStream TextEncoderStream_new();

jb_String TextEncoderStream_encoding(const TextEncoderStream *self);

ReadableStream TextEncoderStream_readable(const TextEncoderStream *self);

WritableStream TextEncoderStream_writable(const TextEncoderStream *self);
