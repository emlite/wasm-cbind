#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(SVGPathSegment, em_Val);

jb_String SVGPathSegment_type(const SVGPathSegment *self);

void SVGPathSegment_set_type(SVGPathSegment* self, jb_String * value);

jb_Array SVGPathSegment_values(const SVGPathSegment *self);

void SVGPathSegment_set_values(SVGPathSegment* self, jb_Array * value);
