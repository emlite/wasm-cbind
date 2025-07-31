#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WorkerGlobalScope.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(SharedWorkerGlobalScope, WorkerGlobalScope);

jb_String SharedWorkerGlobalScope_name(const SharedWorkerGlobalScope *self);

jb_Undefined SharedWorkerGlobalScope_close(SharedWorkerGlobalScope* self );

jb_Any SharedWorkerGlobalScope_onconnect(const SharedWorkerGlobalScope *self);

void SharedWorkerGlobalScope_set_onconnect(SharedWorkerGlobalScope* self, jb_Any * value);
