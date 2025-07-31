#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Document Document;
typedef struct GetRootNodeOptions GetRootNodeOptions;
typedef struct Element Element;
typedef struct NodeList NodeList;


DECLARE_EMLITE_TYPE(GetRootNodeOptions, em_Val);

bool GetRootNodeOptions_composed(const GetRootNodeOptions *self);

void GetRootNodeOptions_set_composed(GetRootNodeOptions* self, bool value);
DECLARE_EMLITE_TYPE(Node, EventTarget);

unsigned short Node_nodeType(const Node *self);

jb_String Node_nodeName(const Node *self);

jb_String Node_baseURI(const Node *self);

bool Node_isConnected(const Node *self);

Document Node_ownerDocument(const Node *self);

Node Node_getRootNode0(Node* self );

Node Node_getRootNode1(Node* self , GetRootNodeOptions * options);

Node Node_parentNode(const Node *self);

Element Node_parentElement(const Node *self);

bool Node_hasChildNodes(Node* self );

NodeList Node_childNodes(const Node *self);

Node Node_firstChild(const Node *self);

Node Node_lastChild(const Node *self);

Node Node_previousSibling(const Node *self);

Node Node_nextSibling(const Node *self);

jb_String Node_nodeValue(const Node *self);

void Node_set_nodeValue(Node* self, jb_String * value);

jb_String Node_textContent(const Node *self);

void Node_set_textContent(Node* self, jb_String * value);

jb_Undefined Node_normalize(Node* self );

Node Node_cloneNode0(Node* self );

Node Node_cloneNode1(Node* self , bool subtree);

bool Node_isEqualNode(Node* self , Node * otherNode);

bool Node_isSameNode(Node* self , Node * otherNode);

unsigned short Node_compareDocumentPosition(Node* self , Node * other);

bool Node_contains(Node* self , Node * other);

jb_String Node_lookupPrefix(Node* self , jb_String * namespace_);

jb_String Node_lookupNamespaceURI(Node* self , jb_String * prefix);

bool Node_isDefaultNamespace(Node* self , jb_String * namespace_);

Node Node_insertBefore(Node* self , Node * node, Node * child);

Node Node_appendChild(Node* self , Node * node);

Node Node_replaceChild(Node* self , Node * node, Node * child);

Node Node_removeChild(Node* self , Node * child);
