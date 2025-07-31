#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(SyncEvent, ExtendableEvent);

SyncEvent SyncEvent_new(jb_String * type, jb_Any * init);

jb_String SyncEvent_tag(const SyncEvent *self);

bool SyncEvent_lastChance(const SyncEvent *self);
