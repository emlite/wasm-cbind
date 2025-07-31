#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLBodyElement, HTMLElement);

HTMLBodyElement HTMLBodyElement_new();

jb_Any HTMLBodyElement_onorientationchange(const HTMLBodyElement *self);

void HTMLBodyElement_set_onorientationchange(HTMLBodyElement* self, jb_Any * value);

jb_String HTMLBodyElement_text(const HTMLBodyElement *self);

void HTMLBodyElement_set_text(HTMLBodyElement* self, jb_String * value);

jb_String HTMLBodyElement_link(const HTMLBodyElement *self);

void HTMLBodyElement_set_link(HTMLBodyElement* self, jb_String * value);

jb_String HTMLBodyElement_vLink(const HTMLBodyElement *self);

void HTMLBodyElement_set_vLink(HTMLBodyElement* self, jb_String * value);

jb_String HTMLBodyElement_aLink(const HTMLBodyElement *self);

void HTMLBodyElement_set_aLink(HTMLBodyElement* self, jb_String * value);

jb_String HTMLBodyElement_bgColor(const HTMLBodyElement *self);

void HTMLBodyElement_set_bgColor(HTMLBodyElement* self, jb_String * value);

jb_String HTMLBodyElement_background(const HTMLBodyElement *self);

void HTMLBodyElement_set_background(HTMLBodyElement* self, jb_String * value);

jb_Any HTMLBodyElement_onportalactivate(const HTMLBodyElement *self);

void HTMLBodyElement_set_onportalactivate(HTMLBodyElement* self, jb_Any * value);
