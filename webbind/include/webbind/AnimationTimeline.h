#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Animation Animation;
typedef struct AnimationEffect AnimationEffect;


DECLARE_EMLITE_TYPE(AnimationTimeline, em_Val);

jb_Any AnimationTimeline_currentTime(const AnimationTimeline *self);

jb_Any AnimationTimeline_duration(const AnimationTimeline *self);

Animation AnimationTimeline_play0(AnimationTimeline* self );

Animation AnimationTimeline_play1(AnimationTimeline* self , AnimationEffect * effect);
