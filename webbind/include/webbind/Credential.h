#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(Credential, em_Val);

jb_String Credential_id(const Credential *self);

jb_String Credential_type(const Credential *self);

jb_Promise Credential_isConditionalMediationAvailable(Credential* self );

jb_Promise Credential_willRequestConditionalCreation(Credential* self );
