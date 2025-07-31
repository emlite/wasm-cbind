#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLLIElement, HTMLElement);

HTMLLIElement HTMLLIElement_new();

long HTMLLIElement_value(const HTMLLIElement *self);

void HTMLLIElement_set_value(HTMLLIElement* self, long value);

jb_String HTMLLIElement_type(const HTMLLIElement *self);

void HTMLLIElement_set_type(HTMLLIElement* self, jb_String * value);
