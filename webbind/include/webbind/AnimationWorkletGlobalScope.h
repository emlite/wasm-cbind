#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WorkletGlobalScope.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(AnimationWorkletGlobalScope, WorkletGlobalScope);

jb_Undefined AnimationWorkletGlobalScope_registerAnimator(AnimationWorkletGlobalScope* self , jb_String * name, jb_Function * animatorCtor);
