#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AbortController.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(TaskController, AbortController);

TaskController TaskController_new0();

TaskController TaskController_new1(jb_Any * init);

jb_Undefined TaskController_setPriority(TaskController* self , TaskPriority * priority);
