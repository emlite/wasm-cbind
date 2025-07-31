#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLDetailsElement, HTMLElement);

HTMLDetailsElement HTMLDetailsElement_new();

jb_String HTMLDetailsElement_name(const HTMLDetailsElement *self);

void HTMLDetailsElement_set_name(HTMLDetailsElement* self, jb_String * value);

bool HTMLDetailsElement_open(const HTMLDetailsElement *self);

void HTMLDetailsElement_set_open(HTMLDetailsElement* self, bool value);
