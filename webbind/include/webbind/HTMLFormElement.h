#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMTokenList DOMTokenList;
typedef struct HTMLFormControlsCollection HTMLFormControlsCollection;


DECLARE_EMLITE_TYPE(HTMLFormElement, HTMLElement);

HTMLFormElement HTMLFormElement_new();

jb_String HTMLFormElement_acceptCharset(const HTMLFormElement *self);

void HTMLFormElement_set_acceptCharset(HTMLFormElement* self, jb_String * value);

jb_String HTMLFormElement_action(const HTMLFormElement *self);

void HTMLFormElement_set_action(HTMLFormElement* self, jb_String * value);

jb_String HTMLFormElement_autocomplete(const HTMLFormElement *self);

void HTMLFormElement_set_autocomplete(HTMLFormElement* self, jb_String * value);

jb_String HTMLFormElement_enctype(const HTMLFormElement *self);

void HTMLFormElement_set_enctype(HTMLFormElement* self, jb_String * value);

jb_String HTMLFormElement_encoding(const HTMLFormElement *self);

void HTMLFormElement_set_encoding(HTMLFormElement* self, jb_String * value);

jb_String HTMLFormElement_method(const HTMLFormElement *self);

void HTMLFormElement_set_method(HTMLFormElement* self, jb_String * value);

jb_String HTMLFormElement_name(const HTMLFormElement *self);

void HTMLFormElement_set_name(HTMLFormElement* self, jb_String * value);

bool HTMLFormElement_noValidate(const HTMLFormElement *self);

void HTMLFormElement_set_noValidate(HTMLFormElement* self, bool value);

jb_String HTMLFormElement_target(const HTMLFormElement *self);

void HTMLFormElement_set_target(HTMLFormElement* self, jb_String * value);

jb_String HTMLFormElement_rel(const HTMLFormElement *self);

void HTMLFormElement_set_rel(HTMLFormElement* self, jb_String * value);

DOMTokenList HTMLFormElement_relList(const HTMLFormElement *self);

HTMLFormControlsCollection HTMLFormElement_elements(const HTMLFormElement *self);

unsigned long HTMLFormElement_length(const HTMLFormElement *self);

jb_Undefined HTMLFormElement_submit(HTMLFormElement* self );

jb_Undefined HTMLFormElement_requestSubmit0(HTMLFormElement* self );

jb_Undefined HTMLFormElement_requestSubmit1(HTMLFormElement* self , HTMLElement * submitter);

jb_Undefined HTMLFormElement_reset(HTMLFormElement* self );

bool HTMLFormElement_checkValidity(HTMLFormElement* self );

bool HTMLFormElement_reportValidity(HTMLFormElement* self );
