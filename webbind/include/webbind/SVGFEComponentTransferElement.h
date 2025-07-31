#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct SVGAnimatedLength SVGAnimatedLength;


DECLARE_EMLITE_TYPE(SVGFEComponentTransferElement, SVGElement);

SVGAnimatedString SVGFEComponentTransferElement_in1(const SVGFEComponentTransferElement *self);

SVGAnimatedLength SVGFEComponentTransferElement_x(const SVGFEComponentTransferElement *self);

SVGAnimatedLength SVGFEComponentTransferElement_y(const SVGFEComponentTransferElement *self);

SVGAnimatedLength SVGFEComponentTransferElement_width(const SVGFEComponentTransferElement *self);

SVGAnimatedLength SVGFEComponentTransferElement_height(const SVGFEComponentTransferElement *self);

SVGAnimatedString SVGFEComponentTransferElement_result(const SVGFEComponentTransferElement *self);
