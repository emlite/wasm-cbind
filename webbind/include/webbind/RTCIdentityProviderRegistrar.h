#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct RTCIdentityProvider RTCIdentityProvider;


DECLARE_EMLITE_TYPE(RTCIdentityProvider, em_Val);

jb_Function RTCIdentityProvider_generateAssertion(const RTCIdentityProvider *self);

void RTCIdentityProvider_set_generateAssertion(RTCIdentityProvider* self, jb_Function * value);

jb_Function RTCIdentityProvider_validateAssertion(const RTCIdentityProvider *self);

void RTCIdentityProvider_set_validateAssertion(RTCIdentityProvider* self, jb_Function * value);
DECLARE_EMLITE_TYPE(RTCIdentityProviderRegistrar, em_Val);

jb_Undefined RTCIdentityProviderRegistrar_register_(RTCIdentityProviderRegistrar* self , RTCIdentityProvider * idp);
