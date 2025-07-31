#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DocumentFragment DocumentFragment;


DECLARE_EMLITE_TYPE(HTMLTemplateElement, HTMLElement);

HTMLTemplateElement HTMLTemplateElement_new();

DocumentFragment HTMLTemplateElement_content(const HTMLTemplateElement *self);

jb_String HTMLTemplateElement_shadowRootMode(const HTMLTemplateElement *self);

void HTMLTemplateElement_set_shadowRootMode(HTMLTemplateElement* self, jb_String * value);

bool HTMLTemplateElement_shadowRootDelegatesFocus(const HTMLTemplateElement *self);

void HTMLTemplateElement_set_shadowRootDelegatesFocus(HTMLTemplateElement* self, bool value);

bool HTMLTemplateElement_shadowRootClonable(const HTMLTemplateElement *self);

void HTMLTemplateElement_set_shadowRootClonable(HTMLTemplateElement* self, bool value);

bool HTMLTemplateElement_shadowRootSerializable(const HTMLTemplateElement *self);

void HTMLTemplateElement_set_shadowRootSerializable(HTMLTemplateElement* self, bool value);

jb_String HTMLTemplateElement_shadowRootCustomElementRegistry(const HTMLTemplateElement *self);

void HTMLTemplateElement_set_shadowRootCustomElementRegistry(HTMLTemplateElement* self, jb_String * value);
