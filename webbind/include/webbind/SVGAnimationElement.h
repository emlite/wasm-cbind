#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGStringList SVGStringList;


DECLARE_EMLITE_TYPE(SVGAnimationElement, SVGElement);

SVGElement SVGAnimationElement_targetElement(const SVGAnimationElement *self);

jb_Any SVGAnimationElement_onbegin(const SVGAnimationElement *self);

void SVGAnimationElement_set_onbegin(SVGAnimationElement* self, jb_Any * value);

jb_Any SVGAnimationElement_onend(const SVGAnimationElement *self);

void SVGAnimationElement_set_onend(SVGAnimationElement* self, jb_Any * value);

jb_Any SVGAnimationElement_onrepeat(const SVGAnimationElement *self);

void SVGAnimationElement_set_onrepeat(SVGAnimationElement* self, jb_Any * value);

float SVGAnimationElement_getStartTime(SVGAnimationElement* self );

float SVGAnimationElement_getCurrentTime(SVGAnimationElement* self );

float SVGAnimationElement_getSimpleDuration(SVGAnimationElement* self );

jb_Undefined SVGAnimationElement_beginElement(SVGAnimationElement* self );

jb_Undefined SVGAnimationElement_beginElementAt(SVGAnimationElement* self , float offset);

jb_Undefined SVGAnimationElement_endElement(SVGAnimationElement* self );

jb_Undefined SVGAnimationElement_endElementAt(SVGAnimationElement* self , float offset);

SVGStringList SVGAnimationElement_requiredExtensions(const SVGAnimationElement *self);

SVGStringList SVGAnimationElement_systemLanguage(const SVGAnimationElement *self);
