#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleDeclaration.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSStyleProperties, CSSStyleDeclaration);

jb_String CSSStyleProperties_cssFloat(const CSSStyleProperties *self);

void CSSStyleProperties_set_cssFloat(CSSStyleProperties* self, jb_String * value);
