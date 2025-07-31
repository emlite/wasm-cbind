#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HTMLFormElement HTMLFormElement;
typedef struct ValidityState ValidityState;
typedef struct NodeList NodeList;


DECLARE_EMLITE_TYPE(HTMLTextAreaElement, HTMLElement);

HTMLTextAreaElement HTMLTextAreaElement_new();

jb_String HTMLTextAreaElement_autocomplete(const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_autocomplete(HTMLTextAreaElement* self, jb_String * value);

unsigned long HTMLTextAreaElement_cols(const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_cols(HTMLTextAreaElement* self, unsigned long value);

jb_String HTMLTextAreaElement_dirName(const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_dirName(HTMLTextAreaElement* self, jb_String * value);

bool HTMLTextAreaElement_disabled(const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_disabled(HTMLTextAreaElement* self, bool value);

HTMLFormElement HTMLTextAreaElement_form(const HTMLTextAreaElement *self);

long HTMLTextAreaElement_maxLength(const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_maxLength(HTMLTextAreaElement* self, long value);

long HTMLTextAreaElement_minLength(const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_minLength(HTMLTextAreaElement* self, long value);

jb_String HTMLTextAreaElement_name(const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_name(HTMLTextAreaElement* self, jb_String * value);

jb_String HTMLTextAreaElement_placeholder(const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_placeholder(HTMLTextAreaElement* self, jb_String * value);

bool HTMLTextAreaElement_readOnly(const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_readOnly(HTMLTextAreaElement* self, bool value);

bool HTMLTextAreaElement_required(const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_required(HTMLTextAreaElement* self, bool value);

unsigned long HTMLTextAreaElement_rows(const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_rows(HTMLTextAreaElement* self, unsigned long value);

jb_String HTMLTextAreaElement_wrap(const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_wrap(HTMLTextAreaElement* self, jb_String * value);

jb_String HTMLTextAreaElement_type(const HTMLTextAreaElement *self);

jb_String HTMLTextAreaElement_defaultValue(const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_defaultValue(HTMLTextAreaElement* self, jb_String * value);

jb_String HTMLTextAreaElement_value(const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_value(HTMLTextAreaElement* self, jb_String * value);

unsigned long HTMLTextAreaElement_textLength(const HTMLTextAreaElement *self);

bool HTMLTextAreaElement_willValidate(const HTMLTextAreaElement *self);

ValidityState HTMLTextAreaElement_validity(const HTMLTextAreaElement *self);

jb_String HTMLTextAreaElement_validationMessage(const HTMLTextAreaElement *self);

bool HTMLTextAreaElement_checkValidity(HTMLTextAreaElement* self );

bool HTMLTextAreaElement_reportValidity(HTMLTextAreaElement* self );

jb_Undefined HTMLTextAreaElement_setCustomValidity(HTMLTextAreaElement* self , jb_String * error);

NodeList HTMLTextAreaElement_labels(const HTMLTextAreaElement *self);

jb_Undefined HTMLTextAreaElement_select(HTMLTextAreaElement* self );

unsigned long HTMLTextAreaElement_selectionStart(const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_selectionStart(HTMLTextAreaElement* self, unsigned long value);

unsigned long HTMLTextAreaElement_selectionEnd(const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_selectionEnd(HTMLTextAreaElement* self, unsigned long value);

jb_String HTMLTextAreaElement_selectionDirection(const HTMLTextAreaElement *self);

void HTMLTextAreaElement_set_selectionDirection(HTMLTextAreaElement* self, jb_String * value);

jb_Undefined HTMLTextAreaElement_setRangeText0(HTMLTextAreaElement* self , jb_String * replacement, unsigned long start, unsigned long end);

jb_Undefined HTMLTextAreaElement_setRangeText1(HTMLTextAreaElement* self , jb_String * replacement, unsigned long start, unsigned long end, SelectionMode * selectionMode);

jb_Undefined HTMLTextAreaElement_setSelectionRange0(HTMLTextAreaElement* self , unsigned long start, unsigned long end);

jb_Undefined HTMLTextAreaElement_setSelectionRange1(HTMLTextAreaElement* self , unsigned long start, unsigned long end, jb_String * direction);
