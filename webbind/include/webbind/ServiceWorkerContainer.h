#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ServiceWorker ServiceWorker;
typedef struct ServiceWorkerRegistration ServiceWorkerRegistration;
typedef struct RegistrationOptions RegistrationOptions;

DECLARE_EMLITE_TYPE(ServiceWorkerContainer, EventTarget);

ServiceWorker ServiceWorkerContainer_controller(const ServiceWorkerContainer *self);

jb_Promise ServiceWorkerContainer_ready(const ServiceWorkerContainer *self);

jb_Promise ServiceWorkerContainer_register_0(ServiceWorkerContainer* self , jb_Any * scriptURL);

jb_Promise ServiceWorkerContainer_register_1(ServiceWorkerContainer* self , jb_Any * scriptURL, RegistrationOptions * options);

jb_Promise ServiceWorkerContainer_getRegistration0(ServiceWorkerContainer* self );

jb_Promise ServiceWorkerContainer_getRegistration1(ServiceWorkerContainer* self , jb_String * clientURL);

jb_Promise ServiceWorkerContainer_getRegistrations(ServiceWorkerContainer* self );

jb_Undefined ServiceWorkerContainer_startMessages(ServiceWorkerContainer* self );

jb_Any ServiceWorkerContainer_oncontrollerchange(const ServiceWorkerContainer *self);

void ServiceWorkerContainer_set_oncontrollerchange(ServiceWorkerContainer* self, jb_Any * value);

jb_Any ServiceWorkerContainer_onmessage(const ServiceWorkerContainer *self);

void ServiceWorkerContainer_set_onmessage(ServiceWorkerContainer* self, jb_Any * value);

jb_Any ServiceWorkerContainer_onmessageerror(const ServiceWorkerContainer *self);

void ServiceWorkerContainer_set_onmessageerror(ServiceWorkerContainer* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
