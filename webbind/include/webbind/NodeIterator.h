#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Node Node;


DECLARE_EMLITE_TYPE(NodeIterator, em_Val);

Node NodeIterator_root(const NodeIterator *self);

Node NodeIterator_referenceNode(const NodeIterator *self);

bool NodeIterator_pointerBeforeReferenceNode(const NodeIterator *self);

unsigned long NodeIterator_whatToShow(const NodeIterator *self);

jb_Function NodeIterator_filter(const NodeIterator *self);

Node NodeIterator_nextNode(NodeIterator* self );

Node NodeIterator_previousNode(NodeIterator* self );

jb_Undefined NodeIterator_detach(NodeIterator* self );
