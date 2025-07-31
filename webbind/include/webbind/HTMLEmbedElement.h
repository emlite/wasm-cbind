#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Document Document;


DECLARE_EMLITE_TYPE(HTMLEmbedElement, HTMLElement);

HTMLEmbedElement HTMLEmbedElement_new();

jb_String HTMLEmbedElement_src(const HTMLEmbedElement *self);

void HTMLEmbedElement_set_src(HTMLEmbedElement* self, jb_String * value);

jb_String HTMLEmbedElement_type(const HTMLEmbedElement *self);

void HTMLEmbedElement_set_type(HTMLEmbedElement* self, jb_String * value);

jb_String HTMLEmbedElement_width(const HTMLEmbedElement *self);

void HTMLEmbedElement_set_width(HTMLEmbedElement* self, jb_String * value);

jb_String HTMLEmbedElement_height(const HTMLEmbedElement *self);

void HTMLEmbedElement_set_height(HTMLEmbedElement* self, jb_String * value);

Document HTMLEmbedElement_getSVGDocument(HTMLEmbedElement* self );

jb_String HTMLEmbedElement_align(const HTMLEmbedElement *self);

void HTMLEmbedElement_set_align(HTMLEmbedElement* self, jb_String * value);

jb_String HTMLEmbedElement_name(const HTMLEmbedElement *self);

void HTMLEmbedElement_set_name(HTMLEmbedElement* self, jb_String * value);
