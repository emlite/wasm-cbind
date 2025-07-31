#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WorkletGlobalScope.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PaintWorkletGlobalScope, WorkletGlobalScope);

jb_Undefined PaintWorkletGlobalScope_registerPaint(PaintWorkletGlobalScope* self , jb_String * name, jb_Any * paintCtor);

double PaintWorkletGlobalScope_devicePixelRatio(const PaintWorkletGlobalScope *self);
