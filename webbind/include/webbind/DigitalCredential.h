#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Credential.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(DigitalCredential, Credential);

jb_Object DigitalCredential_toJSON(DigitalCredential* self );

jb_String DigitalCredential_protocol(const DigitalCredential *self);

jb_Object DigitalCredential_data(const DigitalCredential *self);

bool DigitalCredential_userAgentAllowsProtocol(DigitalCredential* self , jb_String * protocol);
