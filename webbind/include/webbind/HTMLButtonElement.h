#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

typedef struct Element Element;
typedef struct HTMLFormElement HTMLFormElement;
typedef struct ValidityState ValidityState;
typedef struct NodeList NodeList;


DECLARE_EMLITE_TYPE(HTMLButtonElement, HTMLElement);

HTMLButtonElement HTMLButtonElement_new();

jb_DOMString HTMLButtonElement_command(const HTMLButtonElement *self);

void HTMLButtonElement_set_command(HTMLButtonElement* self, jb_DOMString * value);

Element HTMLButtonElement_commandForElement(const HTMLButtonElement *self);

void HTMLButtonElement_set_commandForElement(HTMLButtonElement* self, Element * value);

bool HTMLButtonElement_disabled(const HTMLButtonElement *self);

void HTMLButtonElement_set_disabled(HTMLButtonElement* self, bool value);

HTMLFormElement HTMLButtonElement_form(const HTMLButtonElement *self);

jb_USVString HTMLButtonElement_formAction(const HTMLButtonElement *self);

void HTMLButtonElement_set_formAction(HTMLButtonElement* self, jb_USVString * value);

jb_DOMString HTMLButtonElement_formEnctype(const HTMLButtonElement *self);

void HTMLButtonElement_set_formEnctype(HTMLButtonElement* self, jb_DOMString * value);

jb_DOMString HTMLButtonElement_formMethod(const HTMLButtonElement *self);

void HTMLButtonElement_set_formMethod(HTMLButtonElement* self, jb_DOMString * value);

bool HTMLButtonElement_formNoValidate(const HTMLButtonElement *self);

void HTMLButtonElement_set_formNoValidate(HTMLButtonElement* self, bool value);

jb_DOMString HTMLButtonElement_formTarget(const HTMLButtonElement *self);

void HTMLButtonElement_set_formTarget(HTMLButtonElement* self, jb_DOMString * value);

jb_DOMString HTMLButtonElement_name(const HTMLButtonElement *self);

void HTMLButtonElement_set_name(HTMLButtonElement* self, jb_DOMString * value);

jb_DOMString HTMLButtonElement_type(const HTMLButtonElement *self);

void HTMLButtonElement_set_type(HTMLButtonElement* self, jb_DOMString * value);

jb_DOMString HTMLButtonElement_value(const HTMLButtonElement *self);

void HTMLButtonElement_set_value(HTMLButtonElement* self, jb_DOMString * value);

bool HTMLButtonElement_willValidate(const HTMLButtonElement *self);

ValidityState HTMLButtonElement_validity(const HTMLButtonElement *self);

jb_DOMString HTMLButtonElement_validationMessage(const HTMLButtonElement *self);

bool HTMLButtonElement_checkValidity(HTMLButtonElement* self );

bool HTMLButtonElement_reportValidity(HTMLButtonElement* self );

jb_Undefined HTMLButtonElement_setCustomValidity(HTMLButtonElement* self , jb_DOMString * error);

NodeList HTMLButtonElement_labels(const HTMLButtonElement *self);

Element HTMLButtonElement_popoverTargetElement(const HTMLButtonElement *self);

void HTMLButtonElement_set_popoverTargetElement(HTMLButtonElement* self, Element * value);

jb_DOMString HTMLButtonElement_popoverTargetAction(const HTMLButtonElement *self);

void HTMLButtonElement_set_popoverTargetAction(HTMLButtonElement* self, jb_DOMString * value);
