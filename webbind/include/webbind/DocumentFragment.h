#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Node.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Element Element;
typedef struct HTMLCollection HTMLCollection;
typedef struct NodeList NodeList;


DECLARE_EMLITE_TYPE(DocumentFragment, Node);

DocumentFragment DocumentFragment_new();

Element DocumentFragment_getElementById(DocumentFragment* self , jb_String * elementId);

HTMLCollection DocumentFragment_children(const DocumentFragment *self);

Element DocumentFragment_firstElementChild(const DocumentFragment *self);

Element DocumentFragment_lastElementChild(const DocumentFragment *self);

unsigned long DocumentFragment_childElementCount(const DocumentFragment *self);

jb_Undefined DocumentFragment_prepend(DocumentFragment* self , jb_Any * nodes);

jb_Undefined DocumentFragment_append(DocumentFragment* self , jb_Any * nodes);

jb_Undefined DocumentFragment_replaceChildren(DocumentFragment* self , jb_Any * nodes);

jb_Undefined DocumentFragment_moveBefore(DocumentFragment* self , Node * node, Node * child);

Element DocumentFragment_querySelector(DocumentFragment* self , jb_String * selectors);

NodeList DocumentFragment_querySelectorAll(DocumentFragment* self , jb_String * selectors);
