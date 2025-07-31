#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(NotRestoredReasonDetails, em_Val);

jb_String NotRestoredReasonDetails_reason(const NotRestoredReasonDetails *self);

jb_Object NotRestoredReasonDetails_toJSON(NotRestoredReasonDetails* self );
