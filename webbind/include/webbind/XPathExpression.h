#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XPathResult XPathResult;
typedef struct Node Node;


DECLARE_EMLITE_TYPE(XPathExpression, em_Val);

XPathResult XPathExpression_evaluate0(XPathExpression* self , Node * contextNode);

XPathResult XPathExpression_evaluate1(XPathExpression* self , Node * contextNode, unsigned short type);

XPathResult XPathExpression_evaluate2(XPathExpression* self , Node * contextNode, unsigned short type, XPathResult * result);
