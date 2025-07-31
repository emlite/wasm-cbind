#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Credential.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(FederatedCredential, Credential);

FederatedCredential FederatedCredential_new(jb_Any * data);

jb_String FederatedCredential_provider(const FederatedCredential *self);

jb_String FederatedCredential_protocol(const FederatedCredential *self);

jb_String FederatedCredential_name(const FederatedCredential *self);

jb_String FederatedCredential_iconURL(const FederatedCredential *self);
