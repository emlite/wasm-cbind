#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGSVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CanvasPattern, em_Val);

jb_Undefined CanvasPattern_setTransform0(CanvasPattern* self );

jb_Undefined CanvasPattern_setTransform1(CanvasPattern* self , DOMMatrix2DInit * transform);
