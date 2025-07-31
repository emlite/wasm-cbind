#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SharedStorageModifierMethod.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SharedStorageSetMethodOptions SharedStorageSetMethodOptions;


DECLARE_EMLITE_TYPE(SharedStorageSetMethod, SharedStorageModifierMethod);

SharedStorageSetMethod SharedStorageSetMethod_new0(jb_String * key, jb_String * value);

SharedStorageSetMethod SharedStorageSetMethod_new1(jb_String * key, jb_String * value, SharedStorageSetMethodOptions * options);
