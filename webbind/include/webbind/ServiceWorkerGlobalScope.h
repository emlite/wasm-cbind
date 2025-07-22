#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WorkerGlobalScope.h"
#include "enums.h"

typedef struct Clients Clients;
typedef struct ServiceWorkerRegistration ServiceWorkerRegistration;
typedef struct ServiceWorker ServiceWorker;
typedef struct CookieStore CookieStore;


typedef struct {
  WorkerGlobalScope inner;
} ServiceWorkerGlobalScope;


DECLARE_EMLITE_TYPE(ServiceWorkerGlobalScope, WorkerGlobalScope);

Clients ServiceWorkerGlobalScope_clients( const ServiceWorkerGlobalScope *self);

ServiceWorkerRegistration ServiceWorkerGlobalScope_registration( const ServiceWorkerGlobalScope *self);

ServiceWorker ServiceWorkerGlobalScope_serviceWorker( const ServiceWorkerGlobalScope *self);

jb_Promise ServiceWorkerGlobalScope_skipWaiting(ServiceWorkerGlobalScope* self );

jb_Any ServiceWorkerGlobalScope_oninstall( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_oninstall(ServiceWorkerGlobalScope* self, const jb_Any* value);

jb_Any ServiceWorkerGlobalScope_onactivate( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_onactivate(ServiceWorkerGlobalScope* self, const jb_Any* value);

jb_Any ServiceWorkerGlobalScope_onfetch( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_onfetch(ServiceWorkerGlobalScope* self, const jb_Any* value);

jb_Any ServiceWorkerGlobalScope_onmessage( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_onmessage(ServiceWorkerGlobalScope* self, const jb_Any* value);

jb_Any ServiceWorkerGlobalScope_onmessageerror( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_onmessageerror(ServiceWorkerGlobalScope* self, const jb_Any* value);

jb_Any ServiceWorkerGlobalScope_onbackgroundfetchsuccess( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_onbackgroundfetchsuccess(ServiceWorkerGlobalScope* self, const jb_Any* value);

jb_Any ServiceWorkerGlobalScope_onbackgroundfetchfail( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_onbackgroundfetchfail(ServiceWorkerGlobalScope* self, const jb_Any* value);

jb_Any ServiceWorkerGlobalScope_onbackgroundfetchabort( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_onbackgroundfetchabort(ServiceWorkerGlobalScope* self, const jb_Any* value);

jb_Any ServiceWorkerGlobalScope_onbackgroundfetchclick( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_onbackgroundfetchclick(ServiceWorkerGlobalScope* self, const jb_Any* value);

jb_Any ServiceWorkerGlobalScope_onsync( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_onsync(ServiceWorkerGlobalScope* self, const jb_Any* value);

jb_Any ServiceWorkerGlobalScope_oncontentdelete( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_oncontentdelete(ServiceWorkerGlobalScope* self, const jb_Any* value);

CookieStore ServiceWorkerGlobalScope_cookieStore( const ServiceWorkerGlobalScope *self);

jb_Any ServiceWorkerGlobalScope_oncookiechange( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_oncookiechange(ServiceWorkerGlobalScope* self, const jb_Any* value);

jb_Any ServiceWorkerGlobalScope_onnotificationclick( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_onnotificationclick(ServiceWorkerGlobalScope* self, const jb_Any* value);

jb_Any ServiceWorkerGlobalScope_onnotificationclose( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_onnotificationclose(ServiceWorkerGlobalScope* self, const jb_Any* value);

jb_Any ServiceWorkerGlobalScope_oncanmakepayment( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_oncanmakepayment(ServiceWorkerGlobalScope* self, const jb_Any* value);

jb_Any ServiceWorkerGlobalScope_onpaymentrequest( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_onpaymentrequest(ServiceWorkerGlobalScope* self, const jb_Any* value);

jb_Any ServiceWorkerGlobalScope_onperiodicsync( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_onperiodicsync(ServiceWorkerGlobalScope* self, const jb_Any* value);

jb_Any ServiceWorkerGlobalScope_onpush( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_onpush(ServiceWorkerGlobalScope* self, const jb_Any* value);

jb_Any ServiceWorkerGlobalScope_onpushsubscriptionchange( const ServiceWorkerGlobalScope *self);

void ServiceWorkerGlobalScope_set_onpushsubscriptionchange(ServiceWorkerGlobalScope* self, const jb_Any* value);
