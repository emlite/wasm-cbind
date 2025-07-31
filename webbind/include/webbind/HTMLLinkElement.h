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


DECLARE_EMLITE_TYPE(HTMLLinkElement, HTMLElement);

HTMLLinkElement HTMLLinkElement_new();

jb_String HTMLLinkElement_href(const HTMLLinkElement *self);

void HTMLLinkElement_set_href(HTMLLinkElement* self, jb_String * value);

jb_String HTMLLinkElement_crossOrigin(const HTMLLinkElement *self);

void HTMLLinkElement_set_crossOrigin(HTMLLinkElement* self, jb_String * value);

jb_String HTMLLinkElement_rel(const HTMLLinkElement *self);

void HTMLLinkElement_set_rel(HTMLLinkElement* self, jb_String * value);

jb_String HTMLLinkElement_as(const HTMLLinkElement *self);

void HTMLLinkElement_set_as(HTMLLinkElement* self, jb_String * value);

DOMTokenList HTMLLinkElement_relList(const HTMLLinkElement *self);

jb_String HTMLLinkElement_media(const HTMLLinkElement *self);

void HTMLLinkElement_set_media(HTMLLinkElement* self, jb_String * value);

jb_String HTMLLinkElement_integrity(const HTMLLinkElement *self);

void HTMLLinkElement_set_integrity(HTMLLinkElement* self, jb_String * value);

jb_String HTMLLinkElement_hreflang(const HTMLLinkElement *self);

void HTMLLinkElement_set_hreflang(HTMLLinkElement* self, jb_String * value);

jb_String HTMLLinkElement_type(const HTMLLinkElement *self);

void HTMLLinkElement_set_type(HTMLLinkElement* self, jb_String * value);

DOMTokenList HTMLLinkElement_sizes(const HTMLLinkElement *self);

jb_String HTMLLinkElement_imageSrcset(const HTMLLinkElement *self);

void HTMLLinkElement_set_imageSrcset(HTMLLinkElement* self, jb_String * value);

jb_String HTMLLinkElement_imageSizes(const HTMLLinkElement *self);

void HTMLLinkElement_set_imageSizes(HTMLLinkElement* self, jb_String * value);

jb_String HTMLLinkElement_referrerPolicy(const HTMLLinkElement *self);

void HTMLLinkElement_set_referrerPolicy(HTMLLinkElement* self, jb_String * value);

DOMTokenList HTMLLinkElement_blocking(const HTMLLinkElement *self);

bool HTMLLinkElement_disabled(const HTMLLinkElement *self);

void HTMLLinkElement_set_disabled(HTMLLinkElement* self, bool value);

jb_String HTMLLinkElement_fetchPriority(const HTMLLinkElement *self);

void HTMLLinkElement_set_fetchPriority(HTMLLinkElement* self, jb_String * value);

jb_String HTMLLinkElement_charset(const HTMLLinkElement *self);

void HTMLLinkElement_set_charset(HTMLLinkElement* self, jb_String * value);

jb_String HTMLLinkElement_rev(const HTMLLinkElement *self);

void HTMLLinkElement_set_rev(HTMLLinkElement* self, jb_String * value);

jb_String HTMLLinkElement_target(const HTMLLinkElement *self);

void HTMLLinkElement_set_target(HTMLLinkElement* self, jb_String * value);

CSSStyleSheet HTMLLinkElement_sheet(const HTMLLinkElement *self);
