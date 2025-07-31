#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGTextContentElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedLengthList SVGAnimatedLengthList;
typedef struct SVGAnimatedNumberList SVGAnimatedNumberList;


DECLARE_EMLITE_TYPE(SVGTextPositioningElement, SVGTextContentElement);

SVGAnimatedLengthList SVGTextPositioningElement_x(const SVGTextPositioningElement *self);

SVGAnimatedLengthList SVGTextPositioningElement_y(const SVGTextPositioningElement *self);

SVGAnimatedLengthList SVGTextPositioningElement_dx(const SVGTextPositioningElement *self);

SVGAnimatedLengthList SVGTextPositioningElement_dy(const SVGTextPositioningElement *self);

SVGAnimatedNumberList SVGTextPositioningElement_rotate(const SVGTextPositioningElement *self);
