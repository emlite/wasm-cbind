#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WorkerGlobalScope.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct RTCIdentityProviderRegistrar RTCIdentityProviderRegistrar;


DECLARE_EMLITE_TYPE(RTCIdentityProviderGlobalScope, WorkerGlobalScope);

RTCIdentityProviderRegistrar RTCIdentityProviderGlobalScope_rtcIdentityProvider(const RTCIdentityProviderGlobalScope *self);
