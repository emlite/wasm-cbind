#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMTokenList DOMTokenList;
typedef struct CSSStyleSheet CSSStyleSheet;


DECLARE_EMLITE_TYPE(HTMLStyleElement, HTMLElement);

HTMLStyleElement HTMLStyleElement_new();

bool HTMLStyleElement_disabled(const HTMLStyleElement *self);

void HTMLStyleElement_set_disabled(HTMLStyleElement* self, bool value);

jb_String HTMLStyleElement_media(const HTMLStyleElement *self);

void HTMLStyleElement_set_media(HTMLStyleElement* self, jb_String * value);

DOMTokenList HTMLStyleElement_blocking(const HTMLStyleElement *self);

jb_String HTMLStyleElement_type(const HTMLStyleElement *self);

void HTMLStyleElement_set_type(HTMLStyleElement* self, jb_String * value);

CSSStyleSheet HTMLStyleElement_sheet(const HTMLStyleElement *self);
