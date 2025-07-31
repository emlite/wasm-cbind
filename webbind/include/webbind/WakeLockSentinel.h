#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WakeLockSentinel, EventTarget);

bool WakeLockSentinel_released(const WakeLockSentinel *self);

WakeLockType WakeLockSentinel_type(const WakeLockSentinel *self);

jb_Promise WakeLockSentinel_release(WakeLockSentinel* self );

jb_Any WakeLockSentinel_onrelease(const WakeLockSentinel *self);

void WakeLockSentinel_set_onrelease(WakeLockSentinel* self, jb_Any * value);
