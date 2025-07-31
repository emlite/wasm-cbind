#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct TextDecodeOptions TextDecodeOptions;


DECLARE_EMLITE_TYPE(TextDecodeOptions, em_Val);

bool TextDecodeOptions_stream(const TextDecodeOptions *self);

void TextDecodeOptions_set_stream(TextDecodeOptions* self, bool value);
DECLARE_EMLITE_TYPE(TextDecoder, em_Val);

TextDecoder TextDecoder_new0();

TextDecoder TextDecoder_new1(jb_String * label);

TextDecoder TextDecoder_new2(jb_String * label, jb_Any * options);

jb_String TextDecoder_decode0(TextDecoder* self );

jb_String TextDecoder_decode1(TextDecoder* self , jb_Any * input);

jb_String TextDecoder_decode2(TextDecoder* self , jb_Any * input, TextDecodeOptions * options);

jb_String TextDecoder_encoding(const TextDecoder *self);

bool TextDecoder_fatal(const TextDecoder *self);

bool TextDecoder_ignoreBOM(const TextDecoder *self);
