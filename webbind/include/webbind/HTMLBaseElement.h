#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLBaseElement, HTMLElement);

HTMLBaseElement HTMLBaseElement_new();

jb_String HTMLBaseElement_href(const HTMLBaseElement *self);

void HTMLBaseElement_set_href(HTMLBaseElement* self, jb_String * value);

jb_String HTMLBaseElement_target(const HTMLBaseElement *self);

void HTMLBaseElement_set_target(HTMLBaseElement* self, jb_String * value);
