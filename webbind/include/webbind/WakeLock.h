#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WakeLockSentinel WakeLockSentinel;


DECLARE_EMLITE_TYPE(WakeLock, em_Val);

jb_Promise WakeLock_request0(WakeLock* self );

jb_Promise WakeLock_request1(WakeLock* self , WakeLockType * type);
