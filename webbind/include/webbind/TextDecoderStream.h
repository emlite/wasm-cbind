#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;


DECLARE_EMLITE_TYPE(TextDecoderStream, em_Val);

TextDecoderStream TextDecoderStream_new0();

TextDecoderStream TextDecoderStream_new1(jb_String * label);

TextDecoderStream TextDecoderStream_new2(jb_String * label, jb_Any * options);

jb_String TextDecoderStream_encoding(const TextDecoderStream *self);

bool TextDecoderStream_fatal(const TextDecoderStream *self);

bool TextDecoderStream_ignoreBOM(const TextDecoderStream *self);

ReadableStream TextDecoderStream_readable(const TextDecoderStream *self);

WritableStream TextDecoderStream_writable(const TextDecoderStream *self);
