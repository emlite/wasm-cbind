#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGLengthList SVGLengthList;


DECLARE_EMLITE_TYPE(SVGAnimatedLengthList, em_Val);

SVGLengthList SVGAnimatedLengthList_baseVal(const SVGAnimatedLengthList *self);

SVGLengthList SVGAnimatedLengthList_animVal(const SVGAnimatedLengthList *self);
