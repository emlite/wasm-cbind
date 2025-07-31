#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct HTMLFormElement HTMLFormElement;
typedef struct Document Document;
typedef struct ValidityState ValidityState;


DECLARE_EMLITE_TYPE(HTMLObjectElement, HTMLElement);

HTMLObjectElement HTMLObjectElement_new();

jb_String HTMLObjectElement_data(const HTMLObjectElement *self);

void HTMLObjectElement_set_data(HTMLObjectElement* self, jb_String * value);

jb_String HTMLObjectElement_type(const HTMLObjectElement *self);

void HTMLObjectElement_set_type(HTMLObjectElement* self, jb_String * value);

jb_String HTMLObjectElement_name(const HTMLObjectElement *self);

void HTMLObjectElement_set_name(HTMLObjectElement* self, jb_String * value);

HTMLFormElement HTMLObjectElement_form(const HTMLObjectElement *self);

jb_String HTMLObjectElement_width(const HTMLObjectElement *self);

void HTMLObjectElement_set_width(HTMLObjectElement* self, jb_String * value);

jb_String HTMLObjectElement_height(const HTMLObjectElement *self);

void HTMLObjectElement_set_height(HTMLObjectElement* self, jb_String * value);

Document HTMLObjectElement_contentDocument(const HTMLObjectElement *self);

jb_Any HTMLObjectElement_contentWindow(const HTMLObjectElement *self);

Document HTMLObjectElement_getSVGDocument(HTMLObjectElement* self );

bool HTMLObjectElement_willValidate(const HTMLObjectElement *self);

ValidityState HTMLObjectElement_validity(const HTMLObjectElement *self);

jb_String HTMLObjectElement_validationMessage(const HTMLObjectElement *self);

bool HTMLObjectElement_checkValidity(HTMLObjectElement* self );

bool HTMLObjectElement_reportValidity(HTMLObjectElement* self );

jb_Undefined HTMLObjectElement_setCustomValidity(HTMLObjectElement* self , jb_String * error);

jb_String HTMLObjectElement_align(const HTMLObjectElement *self);

void HTMLObjectElement_set_align(HTMLObjectElement* self, jb_String * value);

jb_String HTMLObjectElement_archive(const HTMLObjectElement *self);

void HTMLObjectElement_set_archive(HTMLObjectElement* self, jb_String * value);

jb_String HTMLObjectElement_code(const HTMLObjectElement *self);

void HTMLObjectElement_set_code(HTMLObjectElement* self, jb_String * value);

bool HTMLObjectElement_declare(const HTMLObjectElement *self);

void HTMLObjectElement_set_declare(HTMLObjectElement* self, bool value);

unsigned long HTMLObjectElement_hspace(const HTMLObjectElement *self);

void HTMLObjectElement_set_hspace(HTMLObjectElement* self, unsigned long value);

jb_String HTMLObjectElement_standby(const HTMLObjectElement *self);

void HTMLObjectElement_set_standby(HTMLObjectElement* self, jb_String * value);

unsigned long HTMLObjectElement_vspace(const HTMLObjectElement *self);

void HTMLObjectElement_set_vspace(HTMLObjectElement* self, unsigned long value);

jb_String HTMLObjectElement_codeBase(const HTMLObjectElement *self);

void HTMLObjectElement_set_codeBase(HTMLObjectElement* self, jb_String * value);

jb_String HTMLObjectElement_codeType(const HTMLObjectElement *self);

void HTMLObjectElement_set_codeType(HTMLObjectElement* self, jb_String * value);

jb_String HTMLObjectElement_useMap(const HTMLObjectElement *self);

void HTMLObjectElement_set_useMap(HTMLObjectElement* self, jb_String * value);

jb_String HTMLObjectElement_border(const HTMLObjectElement *self);

void HTMLObjectElement_set_border(HTMLObjectElement* self, jb_String * value);
