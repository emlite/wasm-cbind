#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "SVGGeometryElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Element Element;
typedef struct CSSPseudoElement CSSPseudoElement;
typedef struct DOMQuad DOMQuad;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct DOMPoint DOMPoint;


DECLARE_EMLITE_TYPE(CSSPseudoElement, EventTarget);

jb_String CSSPseudoElement_type(const CSSPseudoElement *self);

Element CSSPseudoElement_element(const CSSPseudoElement *self);

jb_Any CSSPseudoElement_parent(const CSSPseudoElement *self);

CSSPseudoElement CSSPseudoElement_pseudo(CSSPseudoElement* self , jb_String * type);

jb_Array CSSPseudoElement_getBoxQuads0(CSSPseudoElement* self );

jb_Array CSSPseudoElement_getBoxQuads1(CSSPseudoElement* self , BoxQuadOptions * options);

DOMQuad CSSPseudoElement_convertQuadFromNode0(CSSPseudoElement* self , DOMQuadInit * quad, jb_Any * from);

DOMQuad CSSPseudoElement_convertQuadFromNode1(CSSPseudoElement* self , DOMQuadInit * quad, jb_Any * from, ConvertCoordinateOptions * options);

DOMQuad CSSPseudoElement_convertRectFromNode0(CSSPseudoElement* self , DOMRectReadOnly * rect, jb_Any * from);

DOMQuad CSSPseudoElement_convertRectFromNode1(CSSPseudoElement* self , DOMRectReadOnly * rect, jb_Any * from, ConvertCoordinateOptions * options);

DOMPoint CSSPseudoElement_convertPointFromNode0(CSSPseudoElement* self , DOMPointInit * point, jb_Any * from);

DOMPoint CSSPseudoElement_convertPointFromNode1(CSSPseudoElement* self , DOMPointInit * point, jb_Any * from, ConvertCoordinateOptions * options);
