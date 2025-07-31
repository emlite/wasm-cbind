#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedString SVGAnimatedString;


DECLARE_EMLITE_TYPE(SVGScriptElement, SVGElement);

jb_String SVGScriptElement_type(const SVGScriptElement *self);

void SVGScriptElement_set_type(SVGScriptElement* self, jb_String * value);

jb_String SVGScriptElement_crossOrigin(const SVGScriptElement *self);

void SVGScriptElement_set_crossOrigin(SVGScriptElement* self, jb_String * value);

SVGAnimatedString SVGScriptElement_href(const SVGScriptElement *self);
