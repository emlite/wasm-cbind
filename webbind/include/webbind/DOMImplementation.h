#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DocumentType DocumentType;
typedef struct XMLDocument XMLDocument;
typedef struct Document Document;


DECLARE_EMLITE_TYPE(DOMImplementation, em_Val);

DocumentType DOMImplementation_createDocumentType(DOMImplementation* self , jb_String * name, jb_String * publicId, jb_String * systemId);

XMLDocument DOMImplementation_createDocument0(DOMImplementation* self , jb_String * namespace_, jb_String * qualifiedName);

XMLDocument DOMImplementation_createDocument1(DOMImplementation* self , jb_String * namespace_, jb_String * qualifiedName, DocumentType * doctype);

Document DOMImplementation_createHTMLDocument0(DOMImplementation* self );

Document DOMImplementation_createHTMLDocument1(DOMImplementation* self , jb_String * title);

bool DOMImplementation_hasFeature(DOMImplementation* self );
