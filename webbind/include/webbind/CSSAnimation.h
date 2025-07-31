#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Animation.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSAnimation, Animation);

jb_String CSSAnimation_animationName(const CSSAnimation *self);
