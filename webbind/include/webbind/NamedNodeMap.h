#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Attr Attr;


DECLARE_EMLITE_TYPE(NamedNodeMap, em_Val);

unsigned long NamedNodeMap_length( const NamedNodeMap *self);

Attr NamedNodeMap_item(NamedNodeMap* self , unsigned long index);

Attr NamedNodeMap_getNamedItem(NamedNodeMap* self , jb_DOMString * qualifiedName);

Attr NamedNodeMap_getNamedItemNS(NamedNodeMap* self , jb_DOMString * namespace_, jb_DOMString * localName);

Attr NamedNodeMap_setNamedItem(NamedNodeMap* self , Attr * attr);

Attr NamedNodeMap_setNamedItemNS(NamedNodeMap* self , Attr * attr);

Attr NamedNodeMap_removeNamedItem(NamedNodeMap* self , jb_DOMString * qualifiedName);

Attr NamedNodeMap_removeNamedItemNS(NamedNodeMap* self , jb_DOMString * namespace_, jb_DOMString * localName);
