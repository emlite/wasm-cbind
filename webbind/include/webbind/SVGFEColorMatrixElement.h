#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedNumberList SVGAnimatedNumberList;
typedef struct SVGAnimatedLength SVGAnimatedLength;


DECLARE_EMLITE_TYPE(SVGFEColorMatrixElement, SVGElement);

SVGAnimatedString SVGFEColorMatrixElement_in1(const SVGFEColorMatrixElement *self);

SVGAnimatedEnumeration SVGFEColorMatrixElement_type(const SVGFEColorMatrixElement *self);

SVGAnimatedNumberList SVGFEColorMatrixElement_values(const SVGFEColorMatrixElement *self);

SVGAnimatedLength SVGFEColorMatrixElement_x(const SVGFEColorMatrixElement *self);

SVGAnimatedLength SVGFEColorMatrixElement_y(const SVGFEColorMatrixElement *self);

SVGAnimatedLength SVGFEColorMatrixElement_width(const SVGFEColorMatrixElement *self);

SVGAnimatedLength SVGFEColorMatrixElement_height(const SVGFEColorMatrixElement *self);

SVGAnimatedString SVGFEColorMatrixElement_result(const SVGFEColorMatrixElement *self);
