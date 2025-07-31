#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLTableCaptionElement, HTMLElement);

HTMLTableCaptionElement HTMLTableCaptionElement_new();

jb_String HTMLTableCaptionElement_align(const HTMLTableCaptionElement *self);

void HTMLTableCaptionElement_set_align(HTMLTableCaptionElement* self, jb_String * value);
