#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct LockOptions LockOptions;
typedef struct LockManagerSnapshot LockManagerSnapshot;
typedef struct AbortSignal AbortSignal;


DECLARE_EMLITE_TYPE(LockOptions, em_Val);

LockMode LockOptions_mode(const LockOptions *self);

void LockOptions_set_mode(LockOptions* self, LockMode * value);

bool LockOptions_ifAvailable(const LockOptions *self);

void LockOptions_set_ifAvailable(LockOptions* self, bool value);

bool LockOptions_steal(const LockOptions *self);

void LockOptions_set_steal(LockOptions* self, bool value);

AbortSignal LockOptions_signal(const LockOptions *self);

void LockOptions_set_signal(LockOptions* self, AbortSignal * value);
DECLARE_EMLITE_TYPE(LockManagerSnapshot, em_Val);

jb_Array LockManagerSnapshot_held(const LockManagerSnapshot *self);

void LockManagerSnapshot_set_held(LockManagerSnapshot* self, jb_Array * value);

jb_Array LockManagerSnapshot_pending(const LockManagerSnapshot *self);

void LockManagerSnapshot_set_pending(LockManagerSnapshot* self, jb_Array * value);
DECLARE_EMLITE_TYPE(LockManager, em_Val);

jb_Promise LockManager_request(LockManager* self , jb_String * name, LockOptions * options, jb_Function * callback);

jb_Promise LockManager_query(LockManager* self );
