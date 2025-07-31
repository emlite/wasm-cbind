#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Node Node;
typedef struct DocumentFragment DocumentFragment;
typedef struct Document Document;


DECLARE_EMLITE_TYPE(XSLTProcessor, em_Val);

XSLTProcessor XSLTProcessor_new();

jb_Undefined XSLTProcessor_importStylesheet(XSLTProcessor* self , Node * style);

DocumentFragment XSLTProcessor_transformToFragment(XSLTProcessor* self , Node * source, Document * output);

Document XSLTProcessor_transformToDocument(XSLTProcessor* self , Node * source);

jb_Undefined XSLTProcessor_setParameter(XSLTProcessor* self , jb_String * namespaceURI, jb_String * localName, jb_Any * value);

jb_Any XSLTProcessor_getParameter(XSLTProcessor* self , jb_String * namespaceURI, jb_String * localName);

jb_Undefined XSLTProcessor_removeParameter(XSLTProcessor* self , jb_String * namespaceURI, jb_String * localName);

jb_Undefined XSLTProcessor_clearParameters(XSLTProcessor* self );

jb_Undefined XSLTProcessor_reset(XSLTProcessor* self );
