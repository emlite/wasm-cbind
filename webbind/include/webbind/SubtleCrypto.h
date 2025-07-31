#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CryptoKey CryptoKey;


DECLARE_EMLITE_TYPE(SubtleCrypto, em_Val);

jb_Promise SubtleCrypto_encrypt(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * key, jb_Any * data);

jb_Promise SubtleCrypto_decrypt(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * key, jb_Any * data);

jb_Promise SubtleCrypto_sign(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * key, jb_Any * data);

jb_Promise SubtleCrypto_verify(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * key, jb_Any * signature, jb_Any * data);

jb_Promise SubtleCrypto_digest(SubtleCrypto* self , jb_Any * algorithm, jb_Any * data);

jb_Promise SubtleCrypto_generateKey(SubtleCrypto* self , jb_Any * algorithm, bool extractable, jb_Array * keyUsages);

jb_Promise SubtleCrypto_deriveKey(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * baseKey, jb_Any * derivedKeyType, bool extractable, jb_Array * keyUsages);

jb_Promise SubtleCrypto_deriveBits0(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * baseKey);

jb_Promise SubtleCrypto_deriveBits1(SubtleCrypto* self , jb_Any * algorithm, CryptoKey * baseKey, unsigned long length);

jb_Promise SubtleCrypto_importKey(SubtleCrypto* self , KeyFormat * format, jb_Any * keyData, jb_Any * algorithm, bool extractable, jb_Array * keyUsages);

jb_Promise SubtleCrypto_exportKey(SubtleCrypto* self , KeyFormat * format, CryptoKey * key);

jb_Promise SubtleCrypto_wrapKey(SubtleCrypto* self , KeyFormat * format, CryptoKey * key, CryptoKey * wrappingKey, jb_Any * wrapAlgorithm);

jb_Promise SubtleCrypto_unwrapKey(SubtleCrypto* self , KeyFormat * format, jb_Any * wrappedKey, CryptoKey * unwrappingKey, jb_Any * unwrapAlgorithm, jb_Any * unwrappedKeyAlgorithm, bool extractable, jb_Array * keyUsages);
