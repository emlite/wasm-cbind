#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLBRElement, HTMLElement);

HTMLBRElement HTMLBRElement_new();

jb_String HTMLBRElement_clear(const HTMLBRElement *self);

void HTMLBRElement_set_clear(HTMLBRElement* self, jb_String * value);
