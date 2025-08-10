#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "ExtendableEvent.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CanMakePaymentEvent, ExtendableEvent);

CanMakePaymentEvent CanMakePaymentEvent_new(jb_String * type);

jb_Undefined CanMakePaymentEvent_respondWith(CanMakePaymentEvent* self , jb_Promise * canMakePaymentResponse);

#ifdef __cplusplus
}
#endif
