#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGNumberList SVGNumberList;


DECLARE_EMLITE_TYPE(SVGAnimatedNumberList, em_Val);

SVGNumberList SVGAnimatedNumberList_baseVal(const SVGAnimatedNumberList *self);

SVGNumberList SVGAnimatedNumberList_animVal(const SVGAnimatedNumberList *self);
