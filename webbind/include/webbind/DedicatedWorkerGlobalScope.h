#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WorkerGlobalScope.h"
#include "MessagePort.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(DedicatedWorkerGlobalScope, WorkerGlobalScope);

jb_String DedicatedWorkerGlobalScope_name(const DedicatedWorkerGlobalScope *self);

jb_Undefined DedicatedWorkerGlobalScope_postMessage0(DedicatedWorkerGlobalScope* self , jb_Any * message);

jb_Undefined DedicatedWorkerGlobalScope_postMessage1(DedicatedWorkerGlobalScope* self , jb_Any * message, StructuredSerializeOptions * options);

jb_Undefined DedicatedWorkerGlobalScope_close(DedicatedWorkerGlobalScope* self );

jb_Any DedicatedWorkerGlobalScope_onrtctransform(const DedicatedWorkerGlobalScope *self);

void DedicatedWorkerGlobalScope_set_onrtctransform(DedicatedWorkerGlobalScope* self, jb_Any * value);

unsigned long DedicatedWorkerGlobalScope_requestAnimationFrame(DedicatedWorkerGlobalScope* self , jb_Function * callback);

jb_Undefined DedicatedWorkerGlobalScope_cancelAnimationFrame(DedicatedWorkerGlobalScope* self , unsigned long handle);

jb_Any DedicatedWorkerGlobalScope_onmessage(const DedicatedWorkerGlobalScope *self);

void DedicatedWorkerGlobalScope_set_onmessage(DedicatedWorkerGlobalScope* self, jb_Any * value);

jb_Any DedicatedWorkerGlobalScope_onmessageerror(const DedicatedWorkerGlobalScope *self);

void DedicatedWorkerGlobalScope_set_onmessageerror(DedicatedWorkerGlobalScope* self, jb_Any * value);
