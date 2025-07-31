#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HTMLFormElement HTMLFormElement;


DECLARE_EMLITE_TYPE(HTMLLabelElement, HTMLElement);

HTMLLabelElement HTMLLabelElement_new();

HTMLFormElement HTMLLabelElement_form(const HTMLLabelElement *self);

jb_String HTMLLabelElement_htmlFor(const HTMLLabelElement *self);

void HTMLLabelElement_set_htmlFor(HTMLLabelElement* self, jb_String * value);

HTMLElement HTMLLabelElement_control(const HTMLLabelElement *self);
