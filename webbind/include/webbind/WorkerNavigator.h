#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MediaCapabilities MediaCapabilities;
typedef struct Permissions Permissions;
typedef struct Serial Serial;
typedef struct ServiceWorkerContainer ServiceWorkerContainer;
typedef struct HID HID;
typedef struct USB USB;
typedef struct NetworkInformation NetworkInformation;
typedef struct StorageBucketManager StorageBucketManager;
typedef struct StorageManager StorageManager;
typedef struct NavigatorUAData NavigatorUAData;
typedef struct LockManager LockManager;
typedef struct GPU GPU;
typedef struct ML ML;


DECLARE_EMLITE_TYPE(WorkerNavigator, em_Val);

MediaCapabilities WorkerNavigator_mediaCapabilities(const WorkerNavigator *self);

Permissions WorkerNavigator_permissions(const WorkerNavigator *self);

Serial WorkerNavigator_serial(const WorkerNavigator *self);

ServiceWorkerContainer WorkerNavigator_serviceWorker(const WorkerNavigator *self);

HID WorkerNavigator_hid(const WorkerNavigator *self);

USB WorkerNavigator_usb(const WorkerNavigator *self);

jb_Promise WorkerNavigator_setAppBadge0(WorkerNavigator* self );

jb_Promise WorkerNavigator_setAppBadge1(WorkerNavigator* self , long long contents);

jb_Promise WorkerNavigator_clearAppBadge(WorkerNavigator* self );

double WorkerNavigator_deviceMemory(const WorkerNavigator *self);

bool WorkerNavigator_globalPrivacyControl(const WorkerNavigator *self);

bool WorkerNavigator_taintEnabled(WorkerNavigator* self );

jb_String WorkerNavigator_oscpu(const WorkerNavigator *self);

jb_String WorkerNavigator_language(const WorkerNavigator *self);

jb_Array WorkerNavigator_languages(const WorkerNavigator *self);

bool WorkerNavigator_onLine(const WorkerNavigator *self);

long long WorkerNavigator_hardwareConcurrency(const WorkerNavigator *self);

NetworkInformation WorkerNavigator_connection(const WorkerNavigator *self);

StorageBucketManager WorkerNavigator_storageBuckets(const WorkerNavigator *self);

StorageManager WorkerNavigator_storage(const WorkerNavigator *self);

NavigatorUAData WorkerNavigator_userAgentData(const WorkerNavigator *self);

LockManager WorkerNavigator_locks(const WorkerNavigator *self);

GPU WorkerNavigator_gpu(const WorkerNavigator *self);

ML WorkerNavigator_ml(const WorkerNavigator *self);
