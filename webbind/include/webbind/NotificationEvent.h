#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Notification Notification;


DECLARE_EMLITE_TYPE(NotificationEvent, ExtendableEvent);

NotificationEvent NotificationEvent_new(jb_String * type, jb_Any * eventInitDict);

Notification NotificationEvent_notification(const NotificationEvent *self);

jb_String NotificationEvent_action(const NotificationEvent *self);
