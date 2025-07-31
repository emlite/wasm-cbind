#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PushSubscription PushSubscription;


DECLARE_EMLITE_TYPE(PushSubscriptionChangeEvent, ExtendableEvent);

PushSubscriptionChangeEvent PushSubscriptionChangeEvent_new0(jb_String * type);

PushSubscriptionChangeEvent PushSubscriptionChangeEvent_new1(jb_String * type, jb_Any * eventInitDict);

PushSubscription PushSubscriptionChangeEvent_newSubscription(const PushSubscriptionChangeEvent *self);

PushSubscription PushSubscriptionChangeEvent_oldSubscription(const PushSubscriptionChangeEvent *self);
