#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AuthenticatorResponse.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(AuthenticatorAttestationResponse, AuthenticatorResponse);

jb_ArrayBuffer AuthenticatorAttestationResponse_attestationObject(const AuthenticatorAttestationResponse *self);

jb_Array AuthenticatorAttestationResponse_getTransports(AuthenticatorAttestationResponse* self );

jb_ArrayBuffer AuthenticatorAttestationResponse_getAuthenticatorData(AuthenticatorAttestationResponse* self );

jb_ArrayBuffer AuthenticatorAttestationResponse_getPublicKey(AuthenticatorAttestationResponse* self );

jb_Any AuthenticatorAttestationResponse_getPublicKeyAlgorithm(AuthenticatorAttestationResponse* self );
