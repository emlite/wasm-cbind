#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSStyleDeclaration.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CSSFunctionDescriptors, CSSStyleDeclaration);

jb_String CSSFunctionDescriptors_result(const CSSFunctionDescriptors *self);

void CSSFunctionDescriptors_set_result(CSSFunctionDescriptors* self, jb_String * value);

#ifdef __cplusplus
}
#endif
