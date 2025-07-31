#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGraphicsElement.h"
#include "SVGGeometryElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct DOMPoint DOMPoint;
typedef struct DOMRect DOMRect;


DECLARE_EMLITE_TYPE(SVGTextContentElement, SVGGraphicsElement);

SVGAnimatedLength SVGTextContentElement_textLength(const SVGTextContentElement *self);

SVGAnimatedEnumeration SVGTextContentElement_lengthAdjust(const SVGTextContentElement *self);

long SVGTextContentElement_getNumberOfChars(SVGTextContentElement* self );

float SVGTextContentElement_getComputedTextLength(SVGTextContentElement* self );

float SVGTextContentElement_getSubStringLength(SVGTextContentElement* self , unsigned long charnum, unsigned long nchars);

DOMPoint SVGTextContentElement_getStartPositionOfChar(SVGTextContentElement* self , unsigned long charnum);

DOMPoint SVGTextContentElement_getEndPositionOfChar(SVGTextContentElement* self , unsigned long charnum);

DOMRect SVGTextContentElement_getExtentOfChar(SVGTextContentElement* self , unsigned long charnum);

float SVGTextContentElement_getRotationOfChar(SVGTextContentElement* self , unsigned long charnum);

long SVGTextContentElement_getCharNumAtPosition0(SVGTextContentElement* self );

long SVGTextContentElement_getCharNumAtPosition1(SVGTextContentElement* self , DOMPointInit * point);

jb_Undefined SVGTextContentElement_selectSubString(SVGTextContentElement* self , unsigned long charnum, unsigned long nchars);
