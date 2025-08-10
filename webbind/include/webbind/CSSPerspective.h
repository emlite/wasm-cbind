#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSTransformComponent.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CSSPerspective, CSSTransformComponent);

CSSPerspective CSSPerspective_new(jb_Any * length);

jb_Any CSSPerspective_length(const CSSPerspective *self);

void CSSPerspective_set_length(CSSPerspective* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
