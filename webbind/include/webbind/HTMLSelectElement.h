#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HTMLFormElement HTMLFormElement;
typedef struct HTMLOptionsCollection HTMLOptionsCollection;
typedef struct HTMLOptionElement HTMLOptionElement;
typedef struct HTMLCollection HTMLCollection;
typedef struct ValidityState ValidityState;
typedef struct NodeList NodeList;


DECLARE_EMLITE_TYPE(HTMLSelectElement, HTMLElement);

HTMLSelectElement HTMLSelectElement_new();

jb_String HTMLSelectElement_autocomplete(const HTMLSelectElement *self);

void HTMLSelectElement_set_autocomplete(HTMLSelectElement* self, jb_String * value);

bool HTMLSelectElement_disabled(const HTMLSelectElement *self);

void HTMLSelectElement_set_disabled(HTMLSelectElement* self, bool value);

HTMLFormElement HTMLSelectElement_form(const HTMLSelectElement *self);

bool HTMLSelectElement_multiple(const HTMLSelectElement *self);

void HTMLSelectElement_set_multiple(HTMLSelectElement* self, bool value);

jb_String HTMLSelectElement_name(const HTMLSelectElement *self);

void HTMLSelectElement_set_name(HTMLSelectElement* self, jb_String * value);

bool HTMLSelectElement_required(const HTMLSelectElement *self);

void HTMLSelectElement_set_required(HTMLSelectElement* self, bool value);

unsigned long HTMLSelectElement_size(const HTMLSelectElement *self);

void HTMLSelectElement_set_size(HTMLSelectElement* self, unsigned long value);

jb_String HTMLSelectElement_type(const HTMLSelectElement *self);

HTMLOptionsCollection HTMLSelectElement_options(const HTMLSelectElement *self);

unsigned long HTMLSelectElement_length(const HTMLSelectElement *self);

void HTMLSelectElement_set_length(HTMLSelectElement* self, unsigned long value);

HTMLOptionElement HTMLSelectElement_item(HTMLSelectElement* self , unsigned long index);

HTMLOptionElement HTMLSelectElement_namedItem(HTMLSelectElement* self , jb_String * name);

jb_Undefined HTMLSelectElement_add0(HTMLSelectElement* self , jb_Any * element);

jb_Undefined HTMLSelectElement_add1(HTMLSelectElement* self , jb_Any * element, jb_Any * before);

jb_Undefined HTMLSelectElement_remove(HTMLSelectElement* self , long index);

HTMLCollection HTMLSelectElement_selectedOptions(const HTMLSelectElement *self);

long HTMLSelectElement_selectedIndex(const HTMLSelectElement *self);

void HTMLSelectElement_set_selectedIndex(HTMLSelectElement* self, long value);

jb_String HTMLSelectElement_value(const HTMLSelectElement *self);

void HTMLSelectElement_set_value(HTMLSelectElement* self, jb_String * value);

bool HTMLSelectElement_willValidate(const HTMLSelectElement *self);

ValidityState HTMLSelectElement_validity(const HTMLSelectElement *self);

jb_String HTMLSelectElement_validationMessage(const HTMLSelectElement *self);

bool HTMLSelectElement_checkValidity(HTMLSelectElement* self );

bool HTMLSelectElement_reportValidity(HTMLSelectElement* self );

jb_Undefined HTMLSelectElement_setCustomValidity(HTMLSelectElement* self , jb_String * error);

jb_Undefined HTMLSelectElement_showPicker(HTMLSelectElement* self );

NodeList HTMLSelectElement_labels(const HTMLSelectElement *self);
