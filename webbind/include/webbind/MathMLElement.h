#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Element.h"
#include "SVGElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSStyleDeclaration CSSStyleDeclaration;
typedef struct DOMStringMap DOMStringMap;


DECLARE_EMLITE_TYPE(MathMLElement, Element);

CSSStyleProperties MathMLElement_style(const MathMLElement *self);

jb_Any MathMLElement_onbeforexrselect(const MathMLElement *self);

void MathMLElement_set_onbeforexrselect(MathMLElement* self, jb_Any * value);

DOMStringMap MathMLElement_dataset(const MathMLElement *self);

jb_String MathMLElement_nonce(const MathMLElement *self);

void MathMLElement_set_nonce(MathMLElement* self, jb_String * value);

bool MathMLElement_autofocus(const MathMLElement *self);

void MathMLElement_set_autofocus(MathMLElement* self, bool value);

long MathMLElement_tabIndex(const MathMLElement *self);

void MathMLElement_set_tabIndex(MathMLElement* self, long value);

jb_Undefined MathMLElement_focus0(MathMLElement* self );

jb_Undefined MathMLElement_focus1(MathMLElement* self , FocusOptions * options);

jb_Undefined MathMLElement_blur(MathMLElement* self );
