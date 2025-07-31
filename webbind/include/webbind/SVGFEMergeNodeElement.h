#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedString SVGAnimatedString;


DECLARE_EMLITE_TYPE(SVGFEMergeNodeElement, SVGElement);

SVGAnimatedString SVGFEMergeNodeElement_in1(const SVGFEMergeNodeElement *self);
