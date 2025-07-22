#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} PushSubscriptionOptions;


DECLARE_EMLITE_TYPE(PushSubscriptionOptions, em_Val);

bool PushSubscriptionOptions_userVisibleOnly( const PushSubscriptionOptions *self);

jb_ArrayBuffer PushSubscriptionOptions_applicationServerKey( const PushSubscriptionOptions *self);
