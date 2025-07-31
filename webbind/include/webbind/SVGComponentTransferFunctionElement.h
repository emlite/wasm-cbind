#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedNumberList SVGAnimatedNumberList;
typedef struct SVGAnimatedNumber SVGAnimatedNumber;


DECLARE_EMLITE_TYPE(SVGComponentTransferFunctionElement, SVGElement);

SVGAnimatedEnumeration SVGComponentTransferFunctionElement_type(const SVGComponentTransferFunctionElement *self);

SVGAnimatedNumberList SVGComponentTransferFunctionElement_tableValues(const SVGComponentTransferFunctionElement *self);

SVGAnimatedNumber SVGComponentTransferFunctionElement_slope(const SVGComponentTransferFunctionElement *self);

SVGAnimatedNumber SVGComponentTransferFunctionElement_intercept(const SVGComponentTransferFunctionElement *self);

SVGAnimatedNumber SVGComponentTransferFunctionElement_amplitude(const SVGComponentTransferFunctionElement *self);

SVGAnimatedNumber SVGComponentTransferFunctionElement_exponent(const SVGComponentTransferFunctionElement *self);

SVGAnimatedNumber SVGComponentTransferFunctionElement_offset(const SVGComponentTransferFunctionElement *self);
