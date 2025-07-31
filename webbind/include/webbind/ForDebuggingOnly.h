#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ForDebuggingOnly, em_Val);

jb_Undefined ForDebuggingOnly_reportAdAuctionWin(ForDebuggingOnly* self , jb_String * url);

jb_Undefined ForDebuggingOnly_reportAdAuctionLoss(ForDebuggingOnly* self , jb_String * url);
