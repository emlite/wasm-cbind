#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Credential.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PasswordCredential, Credential);

PasswordCredential PasswordCredential_new(jb_Any * data);

jb_String PasswordCredential_password(const PasswordCredential *self);

jb_String PasswordCredential_name(const PasswordCredential *self);

jb_String PasswordCredential_iconURL(const PasswordCredential *self);
