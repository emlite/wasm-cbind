#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLUListElement, HTMLElement);

HTMLUListElement HTMLUListElement_new();

bool HTMLUListElement_compact(const HTMLUListElement *self);

void HTMLUListElement_set_compact(HTMLUListElement* self, bool value);

jb_String HTMLUListElement_type(const HTMLUListElement *self);

void HTMLUListElement_set_type(HTMLUListElement* self, jb_String * value);
