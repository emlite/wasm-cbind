#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct LayoutChild LayoutChild;


DECLARE_EMLITE_TYPE(ChildBreakToken, em_Val);

BreakType ChildBreakToken_breakType(const ChildBreakToken *self);

LayoutChild ChildBreakToken_child(const ChildBreakToken *self);
