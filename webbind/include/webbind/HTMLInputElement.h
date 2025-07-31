#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HTMLFormElement HTMLFormElement;
typedef struct FileList FileList;
typedef struct HTMLDataListElement HTMLDataListElement;
typedef struct ValidityState ValidityState;
typedef struct NodeList NodeList;
typedef struct FileSystemEntry FileSystemEntry;
typedef struct Element Element;


DECLARE_EMLITE_TYPE(HTMLInputElement, HTMLElement);

HTMLInputElement HTMLInputElement_new();

jb_String HTMLInputElement_accept(const HTMLInputElement *self);

void HTMLInputElement_set_accept(HTMLInputElement* self, jb_String * value);

bool HTMLInputElement_alpha(const HTMLInputElement *self);

void HTMLInputElement_set_alpha(HTMLInputElement* self, bool value);

jb_String HTMLInputElement_alt(const HTMLInputElement *self);

void HTMLInputElement_set_alt(HTMLInputElement* self, jb_String * value);

jb_String HTMLInputElement_autocomplete(const HTMLInputElement *self);

void HTMLInputElement_set_autocomplete(HTMLInputElement* self, jb_String * value);

bool HTMLInputElement_defaultChecked(const HTMLInputElement *self);

void HTMLInputElement_set_defaultChecked(HTMLInputElement* self, bool value);

bool HTMLInputElement_checked(const HTMLInputElement *self);

void HTMLInputElement_set_checked(HTMLInputElement* self, bool value);

jb_String HTMLInputElement_colorSpace(const HTMLInputElement *self);

void HTMLInputElement_set_colorSpace(HTMLInputElement* self, jb_String * value);

jb_String HTMLInputElement_dirName(const HTMLInputElement *self);

void HTMLInputElement_set_dirName(HTMLInputElement* self, jb_String * value);

bool HTMLInputElement_disabled(const HTMLInputElement *self);

void HTMLInputElement_set_disabled(HTMLInputElement* self, bool value);

HTMLFormElement HTMLInputElement_form(const HTMLInputElement *self);

FileList HTMLInputElement_files(const HTMLInputElement *self);

void HTMLInputElement_set_files(HTMLInputElement* self, FileList * value);

jb_String HTMLInputElement_formAction(const HTMLInputElement *self);

void HTMLInputElement_set_formAction(HTMLInputElement* self, jb_String * value);

jb_String HTMLInputElement_formEnctype(const HTMLInputElement *self);

void HTMLInputElement_set_formEnctype(HTMLInputElement* self, jb_String * value);

jb_String HTMLInputElement_formMethod(const HTMLInputElement *self);

void HTMLInputElement_set_formMethod(HTMLInputElement* self, jb_String * value);

bool HTMLInputElement_formNoValidate(const HTMLInputElement *self);

void HTMLInputElement_set_formNoValidate(HTMLInputElement* self, bool value);

jb_String HTMLInputElement_formTarget(const HTMLInputElement *self);

void HTMLInputElement_set_formTarget(HTMLInputElement* self, jb_String * value);

unsigned long HTMLInputElement_height(const HTMLInputElement *self);

void HTMLInputElement_set_height(HTMLInputElement* self, unsigned long value);

bool HTMLInputElement_indeterminate(const HTMLInputElement *self);

void HTMLInputElement_set_indeterminate(HTMLInputElement* self, bool value);

HTMLDataListElement HTMLInputElement_list(const HTMLInputElement *self);

jb_String HTMLInputElement_max(const HTMLInputElement *self);

void HTMLInputElement_set_max(HTMLInputElement* self, jb_String * value);

long HTMLInputElement_maxLength(const HTMLInputElement *self);

void HTMLInputElement_set_maxLength(HTMLInputElement* self, long value);

jb_String HTMLInputElement_min(const HTMLInputElement *self);

void HTMLInputElement_set_min(HTMLInputElement* self, jb_String * value);

long HTMLInputElement_minLength(const HTMLInputElement *self);

void HTMLInputElement_set_minLength(HTMLInputElement* self, long value);

bool HTMLInputElement_multiple(const HTMLInputElement *self);

void HTMLInputElement_set_multiple(HTMLInputElement* self, bool value);

jb_String HTMLInputElement_name(const HTMLInputElement *self);

void HTMLInputElement_set_name(HTMLInputElement* self, jb_String * value);

jb_String HTMLInputElement_pattern(const HTMLInputElement *self);

void HTMLInputElement_set_pattern(HTMLInputElement* self, jb_String * value);

jb_String HTMLInputElement_placeholder(const HTMLInputElement *self);

void HTMLInputElement_set_placeholder(HTMLInputElement* self, jb_String * value);

bool HTMLInputElement_readOnly(const HTMLInputElement *self);

void HTMLInputElement_set_readOnly(HTMLInputElement* self, bool value);

bool HTMLInputElement_required(const HTMLInputElement *self);

void HTMLInputElement_set_required(HTMLInputElement* self, bool value);

unsigned long HTMLInputElement_size(const HTMLInputElement *self);

void HTMLInputElement_set_size(HTMLInputElement* self, unsigned long value);

jb_String HTMLInputElement_src(const HTMLInputElement *self);

void HTMLInputElement_set_src(HTMLInputElement* self, jb_String * value);

jb_String HTMLInputElement_step(const HTMLInputElement *self);

void HTMLInputElement_set_step(HTMLInputElement* self, jb_String * value);

jb_String HTMLInputElement_type(const HTMLInputElement *self);

void HTMLInputElement_set_type(HTMLInputElement* self, jb_String * value);

jb_String HTMLInputElement_defaultValue(const HTMLInputElement *self);

void HTMLInputElement_set_defaultValue(HTMLInputElement* self, jb_String * value);

jb_String HTMLInputElement_value(const HTMLInputElement *self);

void HTMLInputElement_set_value(HTMLInputElement* self, jb_String * value);

jb_Object HTMLInputElement_valueAsDate(const HTMLInputElement *self);

void HTMLInputElement_set_valueAsDate(HTMLInputElement* self, jb_Object * value);

double HTMLInputElement_valueAsNumber(const HTMLInputElement *self);

void HTMLInputElement_set_valueAsNumber(HTMLInputElement* self, double value);

unsigned long HTMLInputElement_width(const HTMLInputElement *self);

void HTMLInputElement_set_width(HTMLInputElement* self, unsigned long value);

jb_Undefined HTMLInputElement_stepUp0(HTMLInputElement* self );

jb_Undefined HTMLInputElement_stepUp1(HTMLInputElement* self , long n);

jb_Undefined HTMLInputElement_stepDown0(HTMLInputElement* self );

jb_Undefined HTMLInputElement_stepDown1(HTMLInputElement* self , long n);

bool HTMLInputElement_willValidate(const HTMLInputElement *self);

ValidityState HTMLInputElement_validity(const HTMLInputElement *self);

jb_String HTMLInputElement_validationMessage(const HTMLInputElement *self);

bool HTMLInputElement_checkValidity(HTMLInputElement* self );

bool HTMLInputElement_reportValidity(HTMLInputElement* self );

jb_Undefined HTMLInputElement_setCustomValidity(HTMLInputElement* self , jb_String * error);

NodeList HTMLInputElement_labels(const HTMLInputElement *self);

jb_Undefined HTMLInputElement_select(HTMLInputElement* self );

unsigned long HTMLInputElement_selectionStart(const HTMLInputElement *self);

void HTMLInputElement_set_selectionStart(HTMLInputElement* self, unsigned long value);

unsigned long HTMLInputElement_selectionEnd(const HTMLInputElement *self);

void HTMLInputElement_set_selectionEnd(HTMLInputElement* self, unsigned long value);

jb_String HTMLInputElement_selectionDirection(const HTMLInputElement *self);

void HTMLInputElement_set_selectionDirection(HTMLInputElement* self, jb_String * value);

jb_Undefined HTMLInputElement_setRangeText0(HTMLInputElement* self , jb_String * replacement, unsigned long start, unsigned long end);

jb_Undefined HTMLInputElement_setRangeText1(HTMLInputElement* self , jb_String * replacement, unsigned long start, unsigned long end, SelectionMode * selectionMode);

jb_Undefined HTMLInputElement_setSelectionRange0(HTMLInputElement* self , unsigned long start, unsigned long end);

jb_Undefined HTMLInputElement_setSelectionRange1(HTMLInputElement* self , unsigned long start, unsigned long end, jb_String * direction);

jb_Undefined HTMLInputElement_showPicker(HTMLInputElement* self );

bool HTMLInputElement_webkitdirectory(const HTMLInputElement *self);

void HTMLInputElement_set_webkitdirectory(HTMLInputElement* self, bool value);

jb_Array HTMLInputElement_webkitEntries(const HTMLInputElement *self);

jb_String HTMLInputElement_capture(const HTMLInputElement *self);

void HTMLInputElement_set_capture(HTMLInputElement* self, jb_String * value);

jb_String HTMLInputElement_align(const HTMLInputElement *self);

void HTMLInputElement_set_align(HTMLInputElement* self, jb_String * value);

jb_String HTMLInputElement_useMap(const HTMLInputElement *self);

void HTMLInputElement_set_useMap(HTMLInputElement* self, jb_String * value);

Element HTMLInputElement_popoverTargetElement(const HTMLInputElement *self);

void HTMLInputElement_set_popoverTargetElement(HTMLInputElement* self, Element * value);

jb_String HTMLInputElement_popoverTargetAction(const HTMLInputElement *self);

void HTMLInputElement_set_popoverTargetAction(HTMLInputElement* self, jb_String * value);
