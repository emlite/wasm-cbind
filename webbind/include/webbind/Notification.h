#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct NotificationAction NotificationAction;
typedef struct NotificationOptions NotificationOptions;


DECLARE_EMLITE_TYPE(NotificationAction, em_Val);

jb_String NotificationAction_action(const NotificationAction *self);

void NotificationAction_set_action(NotificationAction* self, jb_String * value);

jb_String NotificationAction_title(const NotificationAction *self);

void NotificationAction_set_title(NotificationAction* self, jb_String * value);

jb_String NotificationAction_icon(const NotificationAction *self);

void NotificationAction_set_icon(NotificationAction* self, jb_String * value);
DECLARE_EMLITE_TYPE(Notification, EventTarget);

Notification Notification_new0(jb_String * title);

Notification Notification_new1(jb_String * title, NotificationOptions * options);

NotificationPermission Notification_permission(const Notification *self);

jb_Promise Notification_requestPermission0(Notification* self );

jb_Promise Notification_requestPermission1(Notification* self , jb_Function * deprecatedCallback);

unsigned long Notification_maxActions(const Notification *self);

jb_Any Notification_onclick(const Notification *self);

void Notification_set_onclick(Notification* self, jb_Any * value);

jb_Any Notification_onshow(const Notification *self);

void Notification_set_onshow(Notification* self, jb_Any * value);

jb_Any Notification_onerror(const Notification *self);

void Notification_set_onerror(Notification* self, jb_Any * value);

jb_Any Notification_onclose(const Notification *self);

void Notification_set_onclose(Notification* self, jb_Any * value);

jb_String Notification_title(const Notification *self);

NotificationDirection Notification_dir(const Notification *self);

jb_String Notification_lang(const Notification *self);

jb_String Notification_body(const Notification *self);

jb_String Notification_tag(const Notification *self);

jb_String Notification_image(const Notification *self);

jb_String Notification_icon(const Notification *self);

jb_String Notification_badge(const Notification *self);

jb_Array Notification_vibrate(const Notification *self);

jb_Any Notification_timestamp(const Notification *self);

bool Notification_renotify(const Notification *self);

bool Notification_silent(const Notification *self);

bool Notification_requireInteraction(const Notification *self);

jb_Any Notification_data(const Notification *self);

jb_Array Notification_actions(const Notification *self);

jb_Undefined Notification_close(Notification* self );
