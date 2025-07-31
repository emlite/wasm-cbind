#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Animation.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(WorkletAnimation, Animation);

WorkletAnimation WorkletAnimation_new0(jb_String * animatorName);

WorkletAnimation WorkletAnimation_new1(jb_String * animatorName, jb_Any * effects);

WorkletAnimation WorkletAnimation_new2(jb_String * animatorName, jb_Any * effects, AnimationTimeline * timeline);

WorkletAnimation WorkletAnimation_new3(jb_String * animatorName, jb_Any * effects, AnimationTimeline * timeline, jb_Any * options);

jb_String WorkletAnimation_animatorName(const WorkletAnimation *self);
