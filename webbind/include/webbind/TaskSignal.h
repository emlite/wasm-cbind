#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AbortSignal.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct TaskSignal TaskSignal;
typedef struct TaskSignalAnyInit TaskSignalAnyInit;


DECLARE_EMLITE_TYPE(TaskSignalAnyInit, em_Val);

jb_Any TaskSignalAnyInit_priority(const TaskSignalAnyInit *self);

void TaskSignalAnyInit_set_priority(TaskSignalAnyInit* self, jb_Any * value);
DECLARE_EMLITE_TYPE(TaskSignal, AbortSignal);

TaskSignal TaskSignal_any0(TaskSignal* self , jb_Array * signals);

TaskSignal TaskSignal_any1(TaskSignal* self , jb_Array * signals, TaskSignalAnyInit * init);

TaskPriority TaskSignal_priority(const TaskSignal *self);

jb_Any TaskSignal_onprioritychange(const TaskSignal *self);

void TaskSignal_set_onprioritychange(TaskSignal* self, jb_Any * value);
