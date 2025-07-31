#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AnimationTimeline.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(DocumentTimeline, AnimationTimeline);

DocumentTimeline DocumentTimeline_new0();

DocumentTimeline DocumentTimeline_new1(jb_Any * options);
