#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SharedStorageModifierMethod.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions;


DECLARE_EMLITE_TYPE(SharedStorageAppendMethod, SharedStorageModifierMethod);

SharedStorageAppendMethod SharedStorageAppendMethod_new0(jb_String * key, jb_String * value);

SharedStorageAppendMethod SharedStorageAppendMethod_new1(jb_String * key, jb_String * value, SharedStorageModifierMethodOptions * options);
