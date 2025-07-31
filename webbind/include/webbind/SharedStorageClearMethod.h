#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SharedStorageModifierMethod.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions;


DECLARE_EMLITE_TYPE(SharedStorageClearMethod, SharedStorageModifierMethod);

SharedStorageClearMethod SharedStorageClearMethod_new0();

SharedStorageClearMethod SharedStorageClearMethod_new1(SharedStorageModifierMethodOptions * options);
