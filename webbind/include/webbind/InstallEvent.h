#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(InstallEvent, ExtendableEvent);

InstallEvent InstallEvent_new0(jb_String * type);

InstallEvent InstallEvent_new1(jb_String * type, jb_Any * eventInitDict);

jb_Promise InstallEvent_addRoutes(InstallEvent* self , jb_Any * rules);
