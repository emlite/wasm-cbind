#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLOListElement, HTMLElement);

HTMLOListElement HTMLOListElement_new();

bool HTMLOListElement_reversed(const HTMLOListElement *self);

void HTMLOListElement_set_reversed(HTMLOListElement* self, bool value);

long HTMLOListElement_start(const HTMLOListElement *self);

void HTMLOListElement_set_start(HTMLOListElement* self, long value);

jb_String HTMLOListElement_type(const HTMLOListElement *self);

void HTMLOListElement_set_type(HTMLOListElement* self, jb_String * value);

bool HTMLOListElement_compact(const HTMLOListElement *self);

void HTMLOListElement_set_compact(HTMLOListElement* self, bool value);
