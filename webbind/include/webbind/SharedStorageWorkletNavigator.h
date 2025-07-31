#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct LockManager LockManager;


DECLARE_EMLITE_TYPE(SharedStorageWorkletNavigator, em_Val);

LockManager SharedStorageWorkletNavigator_locks(const SharedStorageWorkletNavigator *self);
