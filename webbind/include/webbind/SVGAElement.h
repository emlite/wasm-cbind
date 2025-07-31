#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGraphicsElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct DOMTokenList DOMTokenList;


DECLARE_EMLITE_TYPE(SVGAElement, SVGGraphicsElement);

SVGAnimatedString SVGAElement_target(const SVGAElement *self);

jb_String SVGAElement_download(const SVGAElement *self);

void SVGAElement_set_download(SVGAElement* self, jb_String * value);

jb_String SVGAElement_ping(const SVGAElement *self);

void SVGAElement_set_ping(SVGAElement* self, jb_String * value);

jb_String SVGAElement_rel(const SVGAElement *self);

void SVGAElement_set_rel(SVGAElement* self, jb_String * value);

DOMTokenList SVGAElement_relList(const SVGAElement *self);

jb_String SVGAElement_hreflang(const SVGAElement *self);

void SVGAElement_set_hreflang(SVGAElement* self, jb_String * value);

jb_String SVGAElement_type(const SVGAElement *self);

void SVGAElement_set_type(SVGAElement* self, jb_String * value);

jb_String SVGAElement_text(const SVGAElement *self);

void SVGAElement_set_text(SVGAElement* self, jb_String * value);

jb_String SVGAElement_referrerPolicy(const SVGAElement *self);

void SVGAElement_set_referrerPolicy(SVGAElement* self, jb_String * value);

jb_String SVGAElement_origin(const SVGAElement *self);

jb_String SVGAElement_protocol(const SVGAElement *self);

void SVGAElement_set_protocol(SVGAElement* self, jb_String * value);

jb_String SVGAElement_username(const SVGAElement *self);

void SVGAElement_set_username(SVGAElement* self, jb_String * value);

jb_String SVGAElement_password(const SVGAElement *self);

void SVGAElement_set_password(SVGAElement* self, jb_String * value);

jb_String SVGAElement_host(const SVGAElement *self);

void SVGAElement_set_host(SVGAElement* self, jb_String * value);

jb_String SVGAElement_hostname(const SVGAElement *self);

void SVGAElement_set_hostname(SVGAElement* self, jb_String * value);

jb_String SVGAElement_port(const SVGAElement *self);

void SVGAElement_set_port(SVGAElement* self, jb_String * value);

jb_String SVGAElement_pathname(const SVGAElement *self);

void SVGAElement_set_pathname(SVGAElement* self, jb_String * value);

jb_String SVGAElement_search(const SVGAElement *self);

void SVGAElement_set_search(SVGAElement* self, jb_String * value);

jb_String SVGAElement_hash(const SVGAElement *self);

void SVGAElement_set_hash(SVGAElement* self, jb_String * value);

SVGAnimatedString SVGAElement_href(const SVGAElement *self);
