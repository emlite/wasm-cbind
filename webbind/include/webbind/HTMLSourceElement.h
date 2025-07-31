#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLSourceElement, HTMLElement);

HTMLSourceElement HTMLSourceElement_new();

jb_String HTMLSourceElement_src(const HTMLSourceElement *self);

void HTMLSourceElement_set_src(HTMLSourceElement* self, jb_String * value);

jb_String HTMLSourceElement_type(const HTMLSourceElement *self);

void HTMLSourceElement_set_type(HTMLSourceElement* self, jb_String * value);

jb_String HTMLSourceElement_srcset(const HTMLSourceElement *self);

void HTMLSourceElement_set_srcset(HTMLSourceElement* self, jb_String * value);

jb_String HTMLSourceElement_sizes(const HTMLSourceElement *self);

void HTMLSourceElement_set_sizes(HTMLSourceElement* self, jb_String * value);

jb_String HTMLSourceElement_media(const HTMLSourceElement *self);

void HTMLSourceElement_set_media(HTMLSourceElement* self, jb_String * value);

unsigned long HTMLSourceElement_width(const HTMLSourceElement *self);

void HTMLSourceElement_set_width(HTMLSourceElement* self, unsigned long value);

unsigned long HTMLSourceElement_height(const HTMLSourceElement *self);

void HTMLSourceElement_set_height(HTMLSourceElement* self, unsigned long value);
