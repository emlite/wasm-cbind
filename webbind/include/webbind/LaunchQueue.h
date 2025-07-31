#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(LaunchQueue, em_Val);

jb_Undefined LaunchQueue_setConsumer(LaunchQueue* self , jb_Function * consumer);
