#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Node Node;
typedef struct NodeList NodeList;


DECLARE_EMLITE_TYPE(MutationRecord, em_Val);

jb_String MutationRecord_type(const MutationRecord *self);

Node MutationRecord_target(const MutationRecord *self);

NodeList MutationRecord_addedNodes(const MutationRecord *self);

NodeList MutationRecord_removedNodes(const MutationRecord *self);

Node MutationRecord_previousSibling(const MutationRecord *self);

Node MutationRecord_nextSibling(const MutationRecord *self);

jb_String MutationRecord_attributeName(const MutationRecord *self);

jb_String MutationRecord_attributeNamespace(const MutationRecord *self);

jb_String MutationRecord_oldValue(const MutationRecord *self);
