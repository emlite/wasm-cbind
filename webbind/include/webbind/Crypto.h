#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SubtleCrypto SubtleCrypto;


DECLARE_EMLITE_TYPE(Crypto, em_Val);

SubtleCrypto Crypto_subtle(const Crypto *self);

jb_Any Crypto_getRandomValues(Crypto* self , jb_Any * array);

jb_String Crypto_randomUUID(Crypto* self );
