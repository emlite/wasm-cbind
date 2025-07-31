#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PaymentManager, em_Val);

jb_String PaymentManager_userHint(const PaymentManager *self);

void PaymentManager_set_userHint(PaymentManager* self, jb_String * value);

jb_Promise PaymentManager_enableDelegations(PaymentManager* self , jb_Array * delegations);
