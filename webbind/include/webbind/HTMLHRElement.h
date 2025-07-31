#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLHRElement, HTMLElement);

HTMLHRElement HTMLHRElement_new();

jb_String HTMLHRElement_align(const HTMLHRElement *self);

void HTMLHRElement_set_align(HTMLHRElement* self, jb_String * value);

jb_String HTMLHRElement_color(const HTMLHRElement *self);

void HTMLHRElement_set_color(HTMLHRElement* self, jb_String * value);

bool HTMLHRElement_noShade(const HTMLHRElement *self);

void HTMLHRElement_set_noShade(HTMLHRElement* self, bool value);

jb_String HTMLHRElement_size(const HTMLHRElement *self);

void HTMLHRElement_set_size(HTMLHRElement* self, jb_String * value);

jb_String HTMLHRElement_width(const HTMLHRElement *self);

void HTMLHRElement_set_width(HTMLHRElement* self, jb_String * value);
