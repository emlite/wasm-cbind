#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLModElement, HTMLElement);

HTMLModElement HTMLModElement_new();

jb_String HTMLModElement_cite(const HTMLModElement *self);

void HTMLModElement_set_cite(HTMLModElement* self, jb_String * value);

jb_String HTMLModElement_dateTime(const HTMLModElement *self);

void HTMLModElement_set_dateTime(HTMLModElement* self, jb_String * value);
