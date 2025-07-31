#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HTMLFormElement HTMLFormElement;
typedef struct HTMLCollection HTMLCollection;
typedef struct ValidityState ValidityState;


DECLARE_EMLITE_TYPE(HTMLFieldSetElement, HTMLElement);

HTMLFieldSetElement HTMLFieldSetElement_new();

bool HTMLFieldSetElement_disabled(const HTMLFieldSetElement *self);

void HTMLFieldSetElement_set_disabled(HTMLFieldSetElement* self, bool value);

HTMLFormElement HTMLFieldSetElement_form(const HTMLFieldSetElement *self);

jb_String HTMLFieldSetElement_name(const HTMLFieldSetElement *self);

void HTMLFieldSetElement_set_name(HTMLFieldSetElement* self, jb_String * value);

jb_String HTMLFieldSetElement_type(const HTMLFieldSetElement *self);

HTMLCollection HTMLFieldSetElement_elements(const HTMLFieldSetElement *self);

bool HTMLFieldSetElement_willValidate(const HTMLFieldSetElement *self);

ValidityState HTMLFieldSetElement_validity(const HTMLFieldSetElement *self);

jb_String HTMLFieldSetElement_validationMessage(const HTMLFieldSetElement *self);

bool HTMLFieldSetElement_checkValidity(HTMLFieldSetElement* self );

bool HTMLFieldSetElement_reportValidity(HTMLFieldSetElement* self );

jb_Undefined HTMLFieldSetElement_setCustomValidity(HTMLFieldSetElement* self , jb_String * error);
