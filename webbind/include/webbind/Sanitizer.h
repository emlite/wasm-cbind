#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct SanitizerConfig SanitizerConfig;


DECLARE_EMLITE_TYPE(SanitizerConfig, em_Val);

jb_Array SanitizerConfig_elements(const SanitizerConfig *self);

void SanitizerConfig_set_elements(SanitizerConfig* self, jb_Array * value);

jb_Array SanitizerConfig_removeElements(const SanitizerConfig *self);

void SanitizerConfig_set_removeElements(SanitizerConfig* self, jb_Array * value);

jb_Array SanitizerConfig_replaceWithChildrenElements(const SanitizerConfig *self);

void SanitizerConfig_set_replaceWithChildrenElements(SanitizerConfig* self, jb_Array * value);

jb_Array SanitizerConfig_attributes(const SanitizerConfig *self);

void SanitizerConfig_set_attributes(SanitizerConfig* self, jb_Array * value);

jb_Array SanitizerConfig_removeAttributes(const SanitizerConfig *self);

void SanitizerConfig_set_removeAttributes(SanitizerConfig* self, jb_Array * value);

bool SanitizerConfig_comments(const SanitizerConfig *self);

void SanitizerConfig_set_comments(SanitizerConfig* self, bool value);

bool SanitizerConfig_dataAttributes(const SanitizerConfig *self);

void SanitizerConfig_set_dataAttributes(SanitizerConfig* self, bool value);
DECLARE_EMLITE_TYPE(Sanitizer, em_Val);

Sanitizer Sanitizer_new0();

Sanitizer Sanitizer_new1(jb_Any * configuration);

SanitizerConfig Sanitizer_get(Sanitizer* self );

jb_Undefined Sanitizer_allowElement(Sanitizer* self , jb_Any * element);

jb_Undefined Sanitizer_removeElement(Sanitizer* self , jb_Any * element);

jb_Undefined Sanitizer_replaceElementWithChildren(Sanitizer* self , jb_Any * element);

jb_Undefined Sanitizer_allowAttribute(Sanitizer* self , jb_Any * attribute);

jb_Undefined Sanitizer_removeAttribute(Sanitizer* self , jb_Any * attribute);

jb_Undefined Sanitizer_setComments(Sanitizer* self , bool allow);

jb_Undefined Sanitizer_setDataAttributes(Sanitizer* self , bool allow);

jb_Undefined Sanitizer_removeUnsafe(Sanitizer* self );
