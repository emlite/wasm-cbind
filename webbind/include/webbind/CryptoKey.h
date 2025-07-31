#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CryptoKey, em_Val);

KeyType CryptoKey_type(const CryptoKey *self);

bool CryptoKey_extractable(const CryptoKey *self);

jb_Object CryptoKey_algorithm(const CryptoKey *self);

jb_Object CryptoKey_usages(const CryptoKey *self);
