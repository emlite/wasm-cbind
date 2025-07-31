#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMTokenList DOMTokenList;


DECLARE_EMLITE_TYPE(HTMLAnchorElement, HTMLElement);

HTMLAnchorElement HTMLAnchorElement_new();

jb_String HTMLAnchorElement_target(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_target(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_download(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_download(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_ping(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_ping(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_rel(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_rel(HTMLAnchorElement* self, jb_String * value);

DOMTokenList HTMLAnchorElement_relList(const HTMLAnchorElement *self);

jb_String HTMLAnchorElement_hreflang(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_hreflang(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_type(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_type(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_text(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_text(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_referrerPolicy(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_referrerPolicy(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_coords(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_coords(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_charset(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_charset(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_name(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_name(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_rev(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_rev(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_shape(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_shape(HTMLAnchorElement* self, jb_String * value);

unsigned long HTMLAnchorElement_attributionSourceId(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_attributionSourceId(HTMLAnchorElement* self, unsigned long value);

jb_String HTMLAnchorElement_attributionSrc(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_attributionSrc(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_href(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_href(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_origin(const HTMLAnchorElement *self);

jb_String HTMLAnchorElement_protocol(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_protocol(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_username(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_username(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_password(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_password(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_host(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_host(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_hostname(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_hostname(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_port(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_port(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_pathname(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_pathname(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_search(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_search(HTMLAnchorElement* self, jb_String * value);

jb_String HTMLAnchorElement_hash(const HTMLAnchorElement *self);

void HTMLAnchorElement_set_hash(HTMLAnchorElement* self, jb_String * value);
