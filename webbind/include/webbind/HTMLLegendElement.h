#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HTMLFormElement HTMLFormElement;


DECLARE_EMLITE_TYPE(HTMLLegendElement, HTMLElement);

HTMLLegendElement HTMLLegendElement_new();

HTMLFormElement HTMLLegendElement_form(const HTMLLegendElement *self);

jb_String HTMLLegendElement_align(const HTMLLegendElement *self);

void HTMLLegendElement_set_align(HTMLLegendElement* self, jb_String * value);
