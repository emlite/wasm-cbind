#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMTokenList DOMTokenList;
typedef struct HTMLFormElement HTMLFormElement;
typedef struct ValidityState ValidityState;
typedef struct NodeList NodeList;


DECLARE_EMLITE_TYPE(HTMLOutputElement, HTMLElement);

HTMLOutputElement HTMLOutputElement_new();

DOMTokenList HTMLOutputElement_htmlFor(const HTMLOutputElement *self);

HTMLFormElement HTMLOutputElement_form(const HTMLOutputElement *self);

jb_String HTMLOutputElement_name(const HTMLOutputElement *self);

void HTMLOutputElement_set_name(HTMLOutputElement* self, jb_String * value);

jb_String HTMLOutputElement_type(const HTMLOutputElement *self);

jb_String HTMLOutputElement_defaultValue(const HTMLOutputElement *self);

void HTMLOutputElement_set_defaultValue(HTMLOutputElement* self, jb_String * value);

jb_String HTMLOutputElement_value(const HTMLOutputElement *self);

void HTMLOutputElement_set_value(HTMLOutputElement* self, jb_String * value);

bool HTMLOutputElement_willValidate(const HTMLOutputElement *self);

ValidityState HTMLOutputElement_validity(const HTMLOutputElement *self);

jb_String HTMLOutputElement_validationMessage(const HTMLOutputElement *self);

bool HTMLOutputElement_checkValidity(HTMLOutputElement* self );

bool HTMLOutputElement_reportValidity(HTMLOutputElement* self );

jb_Undefined HTMLOutputElement_setCustomValidity(HTMLOutputElement* self , jb_String * error);

NodeList HTMLOutputElement_labels(const HTMLOutputElement *self);
