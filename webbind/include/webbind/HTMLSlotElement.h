#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Node Node;
typedef struct AssignedNodesOptions AssignedNodesOptions;
typedef struct Element Element;


DECLARE_EMLITE_TYPE(AssignedNodesOptions, em_Val);

bool AssignedNodesOptions_flatten(const AssignedNodesOptions *self);

void AssignedNodesOptions_set_flatten(AssignedNodesOptions* self, bool value);
DECLARE_EMLITE_TYPE(HTMLSlotElement, HTMLElement);

HTMLSlotElement HTMLSlotElement_new();

jb_String HTMLSlotElement_name(const HTMLSlotElement *self);

void HTMLSlotElement_set_name(HTMLSlotElement* self, jb_String * value);

jb_Array HTMLSlotElement_assignedNodes0(HTMLSlotElement* self );

jb_Array HTMLSlotElement_assignedNodes1(HTMLSlotElement* self , AssignedNodesOptions * options);

jb_Array HTMLSlotElement_assignedElements0(HTMLSlotElement* self );

jb_Array HTMLSlotElement_assignedElements1(HTMLSlotElement* self , AssignedNodesOptions * options);

jb_Undefined HTMLSlotElement_assign(HTMLSlotElement* self , jb_Any * nodes);
