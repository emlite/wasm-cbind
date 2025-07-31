#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(HTMLParamElement, HTMLElement);

HTMLParamElement HTMLParamElement_new();

jb_String HTMLParamElement_name(const HTMLParamElement *self);

void HTMLParamElement_set_name(HTMLParamElement* self, jb_String * value);

jb_String HTMLParamElement_value(const HTMLParamElement *self);

void HTMLParamElement_set_value(HTMLParamElement* self, jb_String * value);

jb_String HTMLParamElement_type(const HTMLParamElement *self);

void HTMLParamElement_set_type(HTMLParamElement* self, jb_String * value);

jb_String HTMLParamElement_valueType(const HTMLParamElement *self);

void HTMLParamElement_set_valueType(HTMLParamElement* self, jb_String * value);
