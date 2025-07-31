#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(TaskPriorityChangeEvent, Event);

TaskPriorityChangeEvent TaskPriorityChangeEvent_new(jb_String * type, jb_Any * priorityChangeEventInitDict);

TaskPriority TaskPriorityChangeEvent_previousPriority(const TaskPriorityChangeEvent *self);
