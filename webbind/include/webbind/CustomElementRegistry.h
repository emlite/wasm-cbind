#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ElementDefinitionOptions ElementDefinitionOptions;
typedef struct Node Node;


DECLARE_EMLITE_TYPE(ElementDefinitionOptions, em_Val);

jb_String ElementDefinitionOptions_extends(const ElementDefinitionOptions *self);

void ElementDefinitionOptions_set_extends(ElementDefinitionOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(CustomElementRegistry, em_Val);

CustomElementRegistry CustomElementRegistry_new();

jb_Undefined CustomElementRegistry_define0(CustomElementRegistry* self , jb_String * name, jb_Function * constructor);

jb_Undefined CustomElementRegistry_define1(CustomElementRegistry* self , jb_String * name, jb_Function * constructor, ElementDefinitionOptions * options);

jb_Any CustomElementRegistry_get(CustomElementRegistry* self , jb_String * name);

jb_String CustomElementRegistry_getName(CustomElementRegistry* self , jb_Function * constructor);

jb_Promise CustomElementRegistry_whenDefined(CustomElementRegistry* self , jb_String * name);

jb_Undefined CustomElementRegistry_upgrade(CustomElementRegistry* self , Node * root);

jb_Undefined CustomElementRegistry_initialize(CustomElementRegistry* self , Node * root);
