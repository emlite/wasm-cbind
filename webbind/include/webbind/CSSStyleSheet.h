#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "StyleSheet.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSRule CSSRule;
typedef struct CSSRuleList CSSRuleList;
typedef struct CSSStyleSheet CSSStyleSheet;


DECLARE_EMLITE_TYPE(CSSStyleSheet, StyleSheet);

CSSStyleSheet CSSStyleSheet_new0();

CSSStyleSheet CSSStyleSheet_new1(jb_Any * options);

CSSRule CSSStyleSheet_ownerRule(const CSSStyleSheet *self);

CSSRuleList CSSStyleSheet_cssRules(const CSSStyleSheet *self);

unsigned long CSSStyleSheet_insertRule0(CSSStyleSheet* self , jb_String * rule);

unsigned long CSSStyleSheet_insertRule1(CSSStyleSheet* self , jb_String * rule, unsigned long index);

jb_Undefined CSSStyleSheet_deleteRule(CSSStyleSheet* self , unsigned long index);

jb_Promise CSSStyleSheet_replace(CSSStyleSheet* self , jb_String * text);

jb_Undefined CSSStyleSheet_replaceSync(CSSStyleSheet* self , jb_String * text);

CSSRuleList CSSStyleSheet_rules(const CSSStyleSheet *self);

long CSSStyleSheet_addRule0(CSSStyleSheet* self );

long CSSStyleSheet_addRule1(CSSStyleSheet* self , jb_String * selector);

long CSSStyleSheet_addRule2(CSSStyleSheet* self , jb_String * selector, jb_String * style);

long CSSStyleSheet_addRule3(CSSStyleSheet* self , jb_String * selector, jb_String * style, unsigned long index);

jb_Undefined CSSStyleSheet_removeRule0(CSSStyleSheet* self );

jb_Undefined CSSStyleSheet_removeRule1(CSSStyleSheet* self , unsigned long index);
