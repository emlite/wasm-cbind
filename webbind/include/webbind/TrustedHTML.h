#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(TrustedHTML, em_Val);

jb_String TrustedHTML_toJSON(TrustedHTML* self );
