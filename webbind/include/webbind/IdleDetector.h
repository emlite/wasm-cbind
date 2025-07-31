#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct IdleOptions IdleOptions;
typedef struct AbortSignal AbortSignal;


DECLARE_EMLITE_TYPE(IdleOptions, em_Val);

long long IdleOptions_threshold(const IdleOptions *self);

void IdleOptions_set_threshold(IdleOptions* self, long long value);

AbortSignal IdleOptions_signal(const IdleOptions *self);

void IdleOptions_set_signal(IdleOptions* self, AbortSignal * value);
DECLARE_EMLITE_TYPE(IdleDetector, EventTarget);

IdleDetector IdleDetector_new();

UserIdleState IdleDetector_userState(const IdleDetector *self);

ScreenIdleState IdleDetector_screenState(const IdleDetector *self);

jb_Any IdleDetector_onchange(const IdleDetector *self);

void IdleDetector_set_onchange(IdleDetector* self, jb_Any * value);

jb_Promise IdleDetector_requestPermission(IdleDetector* self );

jb_Promise IdleDetector_start0(IdleDetector* self );

jb_Promise IdleDetector_start1(IdleDetector* self , IdleOptions * options);
