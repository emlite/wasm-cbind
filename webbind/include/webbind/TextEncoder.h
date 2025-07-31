#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct TextEncoderEncodeIntoResult TextEncoderEncodeIntoResult;


DECLARE_EMLITE_TYPE(TextEncoderEncodeIntoResult, em_Val);

long long TextEncoderEncodeIntoResult_read(const TextEncoderEncodeIntoResult *self);

void TextEncoderEncodeIntoResult_set_read(TextEncoderEncodeIntoResult* self, long long value);

long long TextEncoderEncodeIntoResult_written(const TextEncoderEncodeIntoResult *self);

void TextEncoderEncodeIntoResult_set_written(TextEncoderEncodeIntoResult* self, long long value);
DECLARE_EMLITE_TYPE(TextEncoder, em_Val);

TextEncoder TextEncoder_new();

jb_Uint8Array TextEncoder_encode0(TextEncoder* self );

jb_Uint8Array TextEncoder_encode1(TextEncoder* self , jb_String * input);

TextEncoderEncodeIntoResult TextEncoder_encodeInto(TextEncoder* self , jb_String * source, jb_Uint8Array * destination);

jb_String TextEncoder_encoding(const TextEncoder *self);
