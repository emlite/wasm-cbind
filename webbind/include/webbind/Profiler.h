#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ProfilerTrace ProfilerTrace;


DECLARE_EMLITE_TYPE(ProfilerTrace, em_Val);

jb_Array ProfilerTrace_resources(const ProfilerTrace *self);

void ProfilerTrace_set_resources(ProfilerTrace* self, jb_Array * value);

jb_Array ProfilerTrace_frames(const ProfilerTrace *self);

void ProfilerTrace_set_frames(ProfilerTrace* self, jb_Array * value);

jb_Array ProfilerTrace_stacks(const ProfilerTrace *self);

void ProfilerTrace_set_stacks(ProfilerTrace* self, jb_Array * value);

jb_Array ProfilerTrace_samples(const ProfilerTrace *self);

void ProfilerTrace_set_samples(ProfilerTrace* self, jb_Array * value);
DECLARE_EMLITE_TYPE(Profiler, EventTarget);

jb_Any Profiler_sampleInterval(const Profiler *self);

bool Profiler_stopped(const Profiler *self);

Profiler Profiler_new(jb_Any * options);

jb_Promise Profiler_stop(Profiler* self );
