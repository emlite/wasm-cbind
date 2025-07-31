#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "MessagePort.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ServiceWorker, EventTarget);

jb_String ServiceWorker_scriptURL(const ServiceWorker *self);

ServiceWorkerState ServiceWorker_state(const ServiceWorker *self);

jb_Undefined ServiceWorker_postMessage0(ServiceWorker* self , jb_Any * message);

jb_Undefined ServiceWorker_postMessage1(ServiceWorker* self , jb_Any * message, StructuredSerializeOptions * options);

jb_Any ServiceWorker_onstatechange(const ServiceWorker *self);

void ServiceWorker_set_onstatechange(ServiceWorker* self, jb_Any * value);

jb_Any ServiceWorker_onerror(const ServiceWorker *self);

void ServiceWorker_set_onerror(ServiceWorker* self, jb_Any * value);
