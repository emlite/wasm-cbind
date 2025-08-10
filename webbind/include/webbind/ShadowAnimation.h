#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Animation.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ShadowAnimation, Animation);

ShadowAnimation ShadowAnimation_new(Animation * source, jb_Any * newTarget);

Animation ShadowAnimation_sourceAnimation(const ShadowAnimation *self);

#ifdef __cplusplus
}
#endif
