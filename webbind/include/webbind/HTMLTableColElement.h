#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLTableColElement, HTMLElement);

HTMLTableColElement HTMLTableColElement_new();

unsigned long HTMLTableColElement_span(const HTMLTableColElement *self);

void HTMLTableColElement_set_span(HTMLTableColElement* self, unsigned long value);

jb_String HTMLTableColElement_align(const HTMLTableColElement *self);

void HTMLTableColElement_set_align(HTMLTableColElement* self, jb_String * value);

jb_String HTMLTableColElement_ch(const HTMLTableColElement *self);

void HTMLTableColElement_set_ch(HTMLTableColElement* self, jb_String * value);

jb_String HTMLTableColElement_chOff(const HTMLTableColElement *self);

void HTMLTableColElement_set_chOff(HTMLTableColElement* self, jb_String * value);

jb_String HTMLTableColElement_vAlign(const HTMLTableColElement *self);

void HTMLTableColElement_set_vAlign(HTMLTableColElement* self, jb_String * value);

jb_String HTMLTableColElement_width(const HTMLTableColElement *self);

void HTMLTableColElement_set_width(HTMLTableColElement* self, jb_String * value);
