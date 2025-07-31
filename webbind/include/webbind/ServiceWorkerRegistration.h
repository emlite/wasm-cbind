#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ServiceWorker ServiceWorker;
typedef struct NavigationPreloadManager NavigationPreloadManager;
typedef struct ServiceWorkerRegistration ServiceWorkerRegistration;
typedef struct BackgroundFetchManager BackgroundFetchManager;
typedef struct SyncManager SyncManager;
typedef struct ContentIndex ContentIndex;
typedef struct CookieStoreManager CookieStoreManager;
typedef struct NotificationOptions NotificationOptions;
typedef struct Notification Notification;
typedef struct GetNotificationOptions GetNotificationOptions;
typedef struct PaymentManager PaymentManager;
typedef struct PeriodicSyncManager PeriodicSyncManager;
typedef struct PushManager PushManager;
typedef struct NotificationAction NotificationAction;


DECLARE_EMLITE_TYPE(NotificationOptions, em_Val);

NotificationDirection NotificationOptions_dir(const NotificationOptions *self);

void NotificationOptions_set_dir(NotificationOptions* self, NotificationDirection * value);

jb_String NotificationOptions_lang(const NotificationOptions *self);

void NotificationOptions_set_lang(NotificationOptions* self, jb_String * value);

jb_String NotificationOptions_body(const NotificationOptions *self);

void NotificationOptions_set_body(NotificationOptions* self, jb_String * value);

jb_String NotificationOptions_tag(const NotificationOptions *self);

void NotificationOptions_set_tag(NotificationOptions* self, jb_String * value);

jb_String NotificationOptions_image(const NotificationOptions *self);

void NotificationOptions_set_image(NotificationOptions* self, jb_String * value);

jb_String NotificationOptions_icon(const NotificationOptions *self);

void NotificationOptions_set_icon(NotificationOptions* self, jb_String * value);

jb_String NotificationOptions_badge(const NotificationOptions *self);

void NotificationOptions_set_badge(NotificationOptions* self, jb_String * value);

jb_Any NotificationOptions_vibrate(const NotificationOptions *self);

void NotificationOptions_set_vibrate(NotificationOptions* self, jb_Any * value);

jb_Any NotificationOptions_timestamp(const NotificationOptions *self);

void NotificationOptions_set_timestamp(NotificationOptions* self, jb_Any * value);

bool NotificationOptions_renotify(const NotificationOptions *self);

void NotificationOptions_set_renotify(NotificationOptions* self, bool value);

bool NotificationOptions_silent(const NotificationOptions *self);

void NotificationOptions_set_silent(NotificationOptions* self, bool value);

bool NotificationOptions_requireInteraction(const NotificationOptions *self);

void NotificationOptions_set_requireInteraction(NotificationOptions* self, bool value);

jb_Any NotificationOptions_data(const NotificationOptions *self);

void NotificationOptions_set_data(NotificationOptions* self, jb_Any * value);

jb_Array NotificationOptions_actions(const NotificationOptions *self);

void NotificationOptions_set_actions(NotificationOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(GetNotificationOptions, em_Val);

jb_String GetNotificationOptions_tag(const GetNotificationOptions *self);

void GetNotificationOptions_set_tag(GetNotificationOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(ServiceWorkerRegistration, EventTarget);

ServiceWorker ServiceWorkerRegistration_installing(const ServiceWorkerRegistration *self);

ServiceWorker ServiceWorkerRegistration_waiting(const ServiceWorkerRegistration *self);

ServiceWorker ServiceWorkerRegistration_active(const ServiceWorkerRegistration *self);

NavigationPreloadManager ServiceWorkerRegistration_navigationPreload(const ServiceWorkerRegistration *self);

jb_String ServiceWorkerRegistration_scope(const ServiceWorkerRegistration *self);

ServiceWorkerUpdateViaCache ServiceWorkerRegistration_updateViaCache(const ServiceWorkerRegistration *self);

jb_Promise ServiceWorkerRegistration_update(ServiceWorkerRegistration* self );

jb_Promise ServiceWorkerRegistration_unregister(ServiceWorkerRegistration* self );

jb_Any ServiceWorkerRegistration_onupdatefound(const ServiceWorkerRegistration *self);

void ServiceWorkerRegistration_set_onupdatefound(ServiceWorkerRegistration* self, jb_Any * value);

BackgroundFetchManager ServiceWorkerRegistration_backgroundFetch(const ServiceWorkerRegistration *self);

SyncManager ServiceWorkerRegistration_sync(const ServiceWorkerRegistration *self);

ContentIndex ServiceWorkerRegistration_index(const ServiceWorkerRegistration *self);

CookieStoreManager ServiceWorkerRegistration_cookies(const ServiceWorkerRegistration *self);

jb_Promise ServiceWorkerRegistration_showNotification0(ServiceWorkerRegistration* self , jb_String * title);

jb_Promise ServiceWorkerRegistration_showNotification1(ServiceWorkerRegistration* self , jb_String * title, NotificationOptions * options);

jb_Promise ServiceWorkerRegistration_getNotifications0(ServiceWorkerRegistration* self );

jb_Promise ServiceWorkerRegistration_getNotifications1(ServiceWorkerRegistration* self , GetNotificationOptions * filter);

PaymentManager ServiceWorkerRegistration_paymentManager(const ServiceWorkerRegistration *self);

PeriodicSyncManager ServiceWorkerRegistration_periodicSync(const ServiceWorkerRegistration *self);

PushManager ServiceWorkerRegistration_pushManager(const ServiceWorkerRegistration *self);
