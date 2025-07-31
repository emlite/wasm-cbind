#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PushSubscriptionOptions, em_Val);

bool PushSubscriptionOptions_userVisibleOnly(const PushSubscriptionOptions *self);

jb_ArrayBuffer PushSubscriptionOptions_applicationServerKey(const PushSubscriptionOptions *self);
