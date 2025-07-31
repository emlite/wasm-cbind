#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SharedStorageWorklet.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SharedStorageSetMethodOptions SharedStorageSetMethodOptions;
typedef struct SharedStorageModifierMethodOptions SharedStorageModifierMethodOptions;
typedef struct SharedStorageModifierMethod SharedStorageModifierMethod;
typedef struct SharedStorageWorklet SharedStorageWorklet;
typedef struct SharedStorageWorkletOptions SharedStorageWorkletOptions;


DECLARE_EMLITE_TYPE(SharedStorageSetMethodOptions, em_Val);

bool SharedStorageSetMethodOptions_ignoreIfPresent(const SharedStorageSetMethodOptions *self);

void SharedStorageSetMethodOptions_set_ignoreIfPresent(SharedStorageSetMethodOptions* self, bool value);
DECLARE_EMLITE_TYPE(SharedStorageModifierMethodOptions, em_Val);

jb_String SharedStorageModifierMethodOptions_withLock(const SharedStorageModifierMethodOptions *self);

void SharedStorageModifierMethodOptions_set_withLock(SharedStorageModifierMethodOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(SharedStorageWorkletOptions, em_Val);

jb_String SharedStorageWorkletOptions_dataOrigin(const SharedStorageWorkletOptions *self);

void SharedStorageWorkletOptions_set_dataOrigin(SharedStorageWorkletOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(SharedStorage, em_Val);

jb_Promise SharedStorage_get(SharedStorage* self , jb_String * key);

jb_Promise SharedStorage_set0(SharedStorage* self , jb_String * key, jb_String * value);

jb_Promise SharedStorage_set1(SharedStorage* self , jb_String * key, jb_String * value, SharedStorageSetMethodOptions * options);

jb_Promise SharedStorage_append0(SharedStorage* self , jb_String * key, jb_String * value);

jb_Promise SharedStorage_append1(SharedStorage* self , jb_String * key, jb_String * value, SharedStorageModifierMethodOptions * options);

jb_Promise SharedStorage_delete_0(SharedStorage* self , jb_String * key);

jb_Promise SharedStorage_delete_1(SharedStorage* self , jb_String * key, SharedStorageModifierMethodOptions * options);

jb_Promise SharedStorage_clear0(SharedStorage* self );

jb_Promise SharedStorage_clear1(SharedStorage* self , SharedStorageModifierMethodOptions * options);

jb_Promise SharedStorage_batchUpdate0(SharedStorage* self , jb_Array * methods);

jb_Promise SharedStorage_batchUpdate1(SharedStorage* self , jb_Array * methods, SharedStorageModifierMethodOptions * options);

jb_Promise SharedStorage_selectURL0(SharedStorage* self , jb_String * name, jb_Array * urls);

jb_Promise SharedStorage_selectURL1(SharedStorage* self , jb_String * name, jb_Array * urls, SharedStorageRunOperationMethodOptions * options);

jb_Promise SharedStorage_run0(SharedStorage* self , jb_String * name);

jb_Promise SharedStorage_run1(SharedStorage* self , jb_String * name, SharedStorageRunOperationMethodOptions * options);

jb_Promise SharedStorage_createWorklet0(SharedStorage* self , jb_String * moduleURL);

jb_Promise SharedStorage_createWorklet1(SharedStorage* self , jb_String * moduleURL, SharedStorageWorkletOptions * options);

SharedStorageWorklet SharedStorage_worklet(const SharedStorage *self);

jb_Promise SharedStorage_length(SharedStorage* self );

jb_Promise SharedStorage_remainingBudget(SharedStorage* self );
