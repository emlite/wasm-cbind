#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Credential Credential;
typedef struct CredentialRequestOptions CredentialRequestOptions;
typedef struct CredentialCreationOptions CredentialCreationOptions;
typedef struct PublicKeyCredentialCreationOptions PublicKeyCredentialCreationOptions;
typedef struct PublicKeyCredential PublicKeyCredential;
typedef struct PublicKeyCredentialRequestOptions PublicKeyCredentialRequestOptions;


DECLARE_EMLITE_TYPE(CredentialRequestOptions, em_Val);

PublicKeyCredentialRequestOptions CredentialRequestOptions_publicKey(const CredentialRequestOptions *self);

void CredentialRequestOptions_set_publicKey(CredentialRequestOptions* self, PublicKeyCredentialRequestOptions * value);
DECLARE_EMLITE_TYPE(CredentialCreationOptions, em_Val);

PublicKeyCredentialCreationOptions CredentialCreationOptions_publicKey(const CredentialCreationOptions *self);

void CredentialCreationOptions_set_publicKey(CredentialCreationOptions* self, PublicKeyCredentialCreationOptions * value);
DECLARE_EMLITE_TYPE(CredentialsContainer, em_Val);

jb_Promise CredentialsContainer_get0(CredentialsContainer* self );

jb_Promise CredentialsContainer_get1(CredentialsContainer* self , CredentialRequestOptions * options);

jb_Promise CredentialsContainer_store(CredentialsContainer* self , Credential * credential);

jb_Promise CredentialsContainer_create0(CredentialsContainer* self );

jb_Promise CredentialsContainer_create1(CredentialsContainer* self , CredentialCreationOptions * options);

jb_Promise CredentialsContainer_preventSilentAccess(CredentialsContainer* self );
