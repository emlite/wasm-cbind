#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Credential.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct IdentityCredentialDisconnectOptions IdentityCredentialDisconnectOptions;


DECLARE_EMLITE_TYPE(IdentityCredentialDisconnectOptions, em_Val);

jb_String IdentityCredentialDisconnectOptions_accountHint(const IdentityCredentialDisconnectOptions *self);

void IdentityCredentialDisconnectOptions_set_accountHint(IdentityCredentialDisconnectOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(IdentityCredential, Credential);

jb_Promise IdentityCredential_disconnect(IdentityCredential* self , IdentityCredentialDisconnectOptions * options);

jb_String IdentityCredential_token(const IdentityCredential *self);

bool IdentityCredential_isAutoSelected(const IdentityCredential *self);

jb_String IdentityCredential_configURL(const IdentityCredential *self);
