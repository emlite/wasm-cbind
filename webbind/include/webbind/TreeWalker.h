#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Node Node;


DECLARE_EMLITE_TYPE(TreeWalker, em_Val);

Node TreeWalker_root(const TreeWalker *self);

unsigned long TreeWalker_whatToShow(const TreeWalker *self);

jb_Function TreeWalker_filter(const TreeWalker *self);

Node TreeWalker_currentNode(const TreeWalker *self);

void TreeWalker_set_currentNode(TreeWalker* self, Node * value);

Node TreeWalker_parentNode(TreeWalker* self );

Node TreeWalker_firstChild(TreeWalker* self );

Node TreeWalker_lastChild(TreeWalker* self );

Node TreeWalker_previousSibling(TreeWalker* self );

Node TreeWalker_nextSibling(TreeWalker* self );

Node TreeWalker_previousNode(TreeWalker* self );

Node TreeWalker_nextNode(TreeWalker* self );
