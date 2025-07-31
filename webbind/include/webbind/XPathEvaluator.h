#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XPathExpression XPathExpression;
typedef struct Node Node;
typedef struct XPathResult XPathResult;


DECLARE_EMLITE_TYPE(XPathEvaluator, em_Val);

XPathEvaluator XPathEvaluator_new();

XPathExpression XPathEvaluator_createExpression0(XPathEvaluator* self , jb_String * expression);

XPathExpression XPathEvaluator_createExpression1(XPathEvaluator* self , jb_String * expression, jb_Function * resolver);

Node XPathEvaluator_createNSResolver(XPathEvaluator* self , Node * nodeResolver);

XPathResult XPathEvaluator_evaluate0(XPathEvaluator* self , jb_String * expression, Node * contextNode);

XPathResult XPathEvaluator_evaluate1(XPathEvaluator* self , jb_String * expression, Node * contextNode, jb_Function * resolver);

XPathResult XPathEvaluator_evaluate2(XPathEvaluator* self , jb_String * expression, Node * contextNode, jb_Function * resolver, unsigned short type);

XPathResult XPathEvaluator_evaluate3(XPathEvaluator* self , jb_String * expression, Node * contextNode, jb_Function * resolver, unsigned short type, XPathResult * result);
