#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CryptoKey CryptoKey;
typedef struct ReadableStream ReadableStream;
typedef struct WritableStream WritableStream;


DECLARE_EMLITE_TYPE(SFrameTransform, EventTarget);

SFrameTransform SFrameTransform_new0();

SFrameTransform SFrameTransform_new1(jb_Any * options);

jb_Promise SFrameTransform_setEncryptionKey0(SFrameTransform* self , CryptoKey * key);

jb_Promise SFrameTransform_setEncryptionKey1(SFrameTransform* self , CryptoKey * key, jb_Any * keyID);

jb_Any SFrameTransform_onerror(const SFrameTransform *self);

void SFrameTransform_set_onerror(SFrameTransform* self, jb_Any * value);

ReadableStream SFrameTransform_readable(const SFrameTransform *self);

WritableStream SFrameTransform_writable(const SFrameTransform *self);
