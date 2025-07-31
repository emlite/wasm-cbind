#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Node.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Element Element;


DECLARE_EMLITE_TYPE(CharacterData, Node);

jb_String CharacterData_data(const CharacterData *self);

void CharacterData_set_data(CharacterData* self, jb_String * value);

unsigned long CharacterData_length(const CharacterData *self);

jb_String CharacterData_substringData(CharacterData* self , unsigned long offset, unsigned long count);

jb_Undefined CharacterData_appendData(CharacterData* self , jb_String * data);

jb_Undefined CharacterData_insertData(CharacterData* self , unsigned long offset, jb_String * data);

jb_Undefined CharacterData_deleteData(CharacterData* self , unsigned long offset, unsigned long count);

jb_Undefined CharacterData_replaceData(CharacterData* self , unsigned long offset, unsigned long count, jb_String * data);

Element CharacterData_previousElementSibling(const CharacterData *self);

Element CharacterData_nextElementSibling(const CharacterData *self);

jb_Undefined CharacterData_before(CharacterData* self , jb_Any * nodes);

jb_Undefined CharacterData_after(CharacterData* self , jb_Any * nodes);

jb_Undefined CharacterData_replaceWith(CharacterData* self , jb_Any * nodes);

jb_Undefined CharacterData_remove(CharacterData* self );
