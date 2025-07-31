#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(SVGPreserveAspectRatio, em_Val);

unsigned short SVGPreserveAspectRatio_align(const SVGPreserveAspectRatio *self);

void SVGPreserveAspectRatio_set_align(SVGPreserveAspectRatio* self, unsigned short value);

unsigned short SVGPreserveAspectRatio_meetOrSlice(const SVGPreserveAspectRatio *self);

void SVGPreserveAspectRatio_set_meetOrSlice(SVGPreserveAspectRatio* self, unsigned short value);
