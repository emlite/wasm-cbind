#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLTitleElement, HTMLElement);

HTMLTitleElement HTMLTitleElement_new();

jb_String HTMLTitleElement_text(const HTMLTitleElement *self);

void HTMLTitleElement_set_text(HTMLTitleElement* self, jb_String * value);
