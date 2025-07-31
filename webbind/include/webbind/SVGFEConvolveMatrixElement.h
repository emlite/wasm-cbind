#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct SVGAnimatedInteger SVGAnimatedInteger;
typedef struct SVGAnimatedNumberList SVGAnimatedNumberList;
typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedBoolean SVGAnimatedBoolean;
typedef struct SVGAnimatedLength SVGAnimatedLength;


DECLARE_EMLITE_TYPE(SVGFEConvolveMatrixElement, SVGElement);

SVGAnimatedString SVGFEConvolveMatrixElement_in1(const SVGFEConvolveMatrixElement *self);

SVGAnimatedInteger SVGFEConvolveMatrixElement_orderX(const SVGFEConvolveMatrixElement *self);

SVGAnimatedInteger SVGFEConvolveMatrixElement_orderY(const SVGFEConvolveMatrixElement *self);

SVGAnimatedNumberList SVGFEConvolveMatrixElement_kernelMatrix(const SVGFEConvolveMatrixElement *self);

SVGAnimatedNumber SVGFEConvolveMatrixElement_divisor(const SVGFEConvolveMatrixElement *self);

SVGAnimatedNumber SVGFEConvolveMatrixElement_bias(const SVGFEConvolveMatrixElement *self);

SVGAnimatedInteger SVGFEConvolveMatrixElement_targetX(const SVGFEConvolveMatrixElement *self);

SVGAnimatedInteger SVGFEConvolveMatrixElement_targetY(const SVGFEConvolveMatrixElement *self);

SVGAnimatedEnumeration SVGFEConvolveMatrixElement_edgeMode(const SVGFEConvolveMatrixElement *self);

SVGAnimatedNumber SVGFEConvolveMatrixElement_kernelUnitLengthX(const SVGFEConvolveMatrixElement *self);

SVGAnimatedNumber SVGFEConvolveMatrixElement_kernelUnitLengthY(const SVGFEConvolveMatrixElement *self);

SVGAnimatedBoolean SVGFEConvolveMatrixElement_preserveAlpha(const SVGFEConvolveMatrixElement *self);

SVGAnimatedLength SVGFEConvolveMatrixElement_x(const SVGFEConvolveMatrixElement *self);

SVGAnimatedLength SVGFEConvolveMatrixElement_y(const SVGFEConvolveMatrixElement *self);

SVGAnimatedLength SVGFEConvolveMatrixElement_width(const SVGFEConvolveMatrixElement *self);

SVGAnimatedLength SVGFEConvolveMatrixElement_height(const SVGFEConvolveMatrixElement *self);

SVGAnimatedString SVGFEConvolveMatrixElement_result(const SVGFEConvolveMatrixElement *self);
