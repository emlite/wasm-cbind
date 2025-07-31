#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Node.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(DocumentType, Node);

jb_String DocumentType_name(const DocumentType *self);

jb_String DocumentType_publicId(const DocumentType *self);

jb_String DocumentType_systemId(const DocumentType *self);

jb_Undefined DocumentType_before(DocumentType* self , jb_Any * nodes);

jb_Undefined DocumentType_after(DocumentType* self , jb_Any * nodes);

jb_Undefined DocumentType_replaceWith(DocumentType* self , jb_Any * nodes);

jb_Undefined DocumentType_remove(DocumentType* self );
