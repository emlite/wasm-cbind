#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedLength SVGAnimatedLength;


DECLARE_EMLITE_TYPE(SVGFEGaussianBlurElement, SVGElement);

SVGAnimatedString SVGFEGaussianBlurElement_in1(const SVGFEGaussianBlurElement *self);

SVGAnimatedNumber SVGFEGaussianBlurElement_stdDeviationX(const SVGFEGaussianBlurElement *self);

SVGAnimatedNumber SVGFEGaussianBlurElement_stdDeviationY(const SVGFEGaussianBlurElement *self);

SVGAnimatedEnumeration SVGFEGaussianBlurElement_edgeMode(const SVGFEGaussianBlurElement *self);

jb_Undefined SVGFEGaussianBlurElement_setStdDeviation(SVGFEGaussianBlurElement* self , float stdDeviationX, float stdDeviationY);

SVGAnimatedLength SVGFEGaussianBlurElement_x(const SVGFEGaussianBlurElement *self);

SVGAnimatedLength SVGFEGaussianBlurElement_y(const SVGFEGaussianBlurElement *self);

SVGAnimatedLength SVGFEGaussianBlurElement_width(const SVGFEGaussianBlurElement *self);

SVGAnimatedLength SVGFEGaussianBlurElement_height(const SVGFEGaussianBlurElement *self);

SVGAnimatedString SVGFEGaussianBlurElement_result(const SVGFEGaussianBlurElement *self);
