#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Node.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Element Element;


DECLARE_EMLITE_TYPE(Attr, Node);

jb_String Attr_namespaceURI(const Attr *self);

jb_String Attr_prefix(const Attr *self);

jb_String Attr_localName(const Attr *self);

jb_String Attr_name(const Attr *self);

jb_String Attr_value(const Attr *self);

void Attr_set_value(Attr* self, jb_String * value);

Element Attr_ownerElement(const Attr *self);

bool Attr_specified(const Attr *self);
