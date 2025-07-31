#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSRule CSSRule;


DECLARE_EMLITE_TYPE(CSSStyleDeclaration, em_Val);

jb_String CSSStyleDeclaration_cssText(const CSSStyleDeclaration *self);

void CSSStyleDeclaration_set_cssText(CSSStyleDeclaration* self, jb_String * value);

unsigned long CSSStyleDeclaration_length(const CSSStyleDeclaration *self);

jb_String CSSStyleDeclaration_item(CSSStyleDeclaration* self , unsigned long index);

jb_String CSSStyleDeclaration_getPropertyValue(CSSStyleDeclaration* self , jb_String * property);

jb_String CSSStyleDeclaration_getPropertyPriority(CSSStyleDeclaration* self , jb_String * property);

jb_Undefined CSSStyleDeclaration_setProperty0(CSSStyleDeclaration* self , jb_String * property, jb_String * value);

jb_Undefined CSSStyleDeclaration_setProperty1(CSSStyleDeclaration* self , jb_String * property, jb_String * value, jb_String * priority);

jb_String CSSStyleDeclaration_removeProperty(CSSStyleDeclaration* self , jb_String * property);

CSSRule CSSStyleDeclaration_parentRule(const CSSStyleDeclaration *self);
