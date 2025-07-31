#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Animation.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSTransition, Animation);

jb_String CSSTransition_transitionProperty(const CSSTransition *self);
