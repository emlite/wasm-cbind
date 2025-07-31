#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CaptureActionEvent, Event);

CaptureActionEvent CaptureActionEvent_new0();

CaptureActionEvent CaptureActionEvent_new1(jb_Any * init);

CaptureAction CaptureActionEvent_action(const CaptureActionEvent *self);
