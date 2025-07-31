#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLOptGroupElement, HTMLElement);

HTMLOptGroupElement HTMLOptGroupElement_new();

bool HTMLOptGroupElement_disabled(const HTMLOptGroupElement *self);

void HTMLOptGroupElement_set_disabled(HTMLOptGroupElement* self, bool value);

jb_String HTMLOptGroupElement_label(const HTMLOptGroupElement *self);

void HTMLOptGroupElement_set_label(HTMLOptGroupElement* self, jb_String * value);
