#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CreateMonitor, EventTarget);

jb_Any CreateMonitor_ondownloadprogress(const CreateMonitor *self);

void CreateMonitor_set_ondownloadprogress(CreateMonitor* self, jb_Any * value);
