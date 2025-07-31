#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMTokenList DOMTokenList;


DECLARE_EMLITE_TYPE(HTMLAreaElement, HTMLElement);

HTMLAreaElement HTMLAreaElement_new();

jb_String HTMLAreaElement_alt(const HTMLAreaElement *self);

void HTMLAreaElement_set_alt(HTMLAreaElement* self, jb_String * value);

jb_String HTMLAreaElement_coords(const HTMLAreaElement *self);

void HTMLAreaElement_set_coords(HTMLAreaElement* self, jb_String * value);

jb_String HTMLAreaElement_shape(const HTMLAreaElement *self);

void HTMLAreaElement_set_shape(HTMLAreaElement* self, jb_String * value);

jb_String HTMLAreaElement_target(const HTMLAreaElement *self);

void HTMLAreaElement_set_target(HTMLAreaElement* self, jb_String * value);

jb_String HTMLAreaElement_download(const HTMLAreaElement *self);

void HTMLAreaElement_set_download(HTMLAreaElement* self, jb_String * value);

jb_String HTMLAreaElement_ping(const HTMLAreaElement *self);

void HTMLAreaElement_set_ping(HTMLAreaElement* self, jb_String * value);

jb_String HTMLAreaElement_rel(const HTMLAreaElement *self);

void HTMLAreaElement_set_rel(HTMLAreaElement* self, jb_String * value);

DOMTokenList HTMLAreaElement_relList(const HTMLAreaElement *self);

jb_String HTMLAreaElement_referrerPolicy(const HTMLAreaElement *self);

void HTMLAreaElement_set_referrerPolicy(HTMLAreaElement* self, jb_String * value);

bool HTMLAreaElement_noHref(const HTMLAreaElement *self);

void HTMLAreaElement_set_noHref(HTMLAreaElement* self, bool value);

jb_String HTMLAreaElement_attributionSrc(const HTMLAreaElement *self);

void HTMLAreaElement_set_attributionSrc(HTMLAreaElement* self, jb_String * value);

jb_String HTMLAreaElement_href(const HTMLAreaElement *self);

void HTMLAreaElement_set_href(HTMLAreaElement* self, jb_String * value);

jb_String HTMLAreaElement_origin(const HTMLAreaElement *self);

jb_String HTMLAreaElement_protocol(const HTMLAreaElement *self);

void HTMLAreaElement_set_protocol(HTMLAreaElement* self, jb_String * value);

jb_String HTMLAreaElement_username(const HTMLAreaElement *self);

void HTMLAreaElement_set_username(HTMLAreaElement* self, jb_String * value);

jb_String HTMLAreaElement_password(const HTMLAreaElement *self);

void HTMLAreaElement_set_password(HTMLAreaElement* self, jb_String * value);

jb_String HTMLAreaElement_host(const HTMLAreaElement *self);

void HTMLAreaElement_set_host(HTMLAreaElement* self, jb_String * value);

jb_String HTMLAreaElement_hostname(const HTMLAreaElement *self);

void HTMLAreaElement_set_hostname(HTMLAreaElement* self, jb_String * value);

jb_String HTMLAreaElement_port(const HTMLAreaElement *self);

void HTMLAreaElement_set_port(HTMLAreaElement* self, jb_String * value);

jb_String HTMLAreaElement_pathname(const HTMLAreaElement *self);

void HTMLAreaElement_set_pathname(HTMLAreaElement* self, jb_String * value);

jb_String HTMLAreaElement_search(const HTMLAreaElement *self);

void HTMLAreaElement_set_search(HTMLAreaElement* self, jb_String * value);

jb_String HTMLAreaElement_hash(const HTMLAreaElement *self);

void HTMLAreaElement_set_hash(HTMLAreaElement* self, jb_String * value);
