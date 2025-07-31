#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(TrustedScriptURL, em_Val);

jb_String TrustedScriptURL_toJSON(TrustedScriptURL* self );
