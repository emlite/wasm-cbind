#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Credential.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(OTPCredential, Credential);

jb_String OTPCredential_code(const OTPCredential *self);
