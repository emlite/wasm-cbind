#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PeriodicSyncEvent, ExtendableEvent);

PeriodicSyncEvent PeriodicSyncEvent_new(jb_String * type, jb_Any * init);

jb_String PeriodicSyncEvent_tag(const PeriodicSyncEvent *self);
