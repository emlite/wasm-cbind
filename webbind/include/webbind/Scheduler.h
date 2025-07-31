#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SchedulerPostTaskOptions SchedulerPostTaskOptions;
typedef struct AbortSignal AbortSignal;


DECLARE_EMLITE_TYPE(SchedulerPostTaskOptions, em_Val);

AbortSignal SchedulerPostTaskOptions_signal(const SchedulerPostTaskOptions *self);

void SchedulerPostTaskOptions_set_signal(SchedulerPostTaskOptions* self, AbortSignal * value);

TaskPriority SchedulerPostTaskOptions_priority(const SchedulerPostTaskOptions *self);

void SchedulerPostTaskOptions_set_priority(SchedulerPostTaskOptions* self, TaskPriority * value);

long long SchedulerPostTaskOptions_delay(const SchedulerPostTaskOptions *self);

void SchedulerPostTaskOptions_set_delay(SchedulerPostTaskOptions* self, long long value);
DECLARE_EMLITE_TYPE(Scheduler, em_Val);

jb_Promise Scheduler_postTask0(Scheduler* self , jb_Function * callback);

jb_Promise Scheduler_postTask1(Scheduler* self , jb_Function * callback, SchedulerPostTaskOptions * options);

jb_Promise Scheduler_yield(Scheduler* self );
