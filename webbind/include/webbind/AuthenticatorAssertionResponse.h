#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AuthenticatorResponse.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(AuthenticatorAssertionResponse, AuthenticatorResponse);

jb_ArrayBuffer AuthenticatorAssertionResponse_authenticatorData(const AuthenticatorAssertionResponse *self);

jb_ArrayBuffer AuthenticatorAssertionResponse_signature(const AuthenticatorAssertionResponse *self);

jb_ArrayBuffer AuthenticatorAssertionResponse_userHandle(const AuthenticatorAssertionResponse *self);
