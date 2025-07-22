#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct SanitizerConfig SanitizerConfig;


typedef struct {
  em_Val inner;
} SanitizerConfig;


DECLARE_EMLITE_TYPE(SanitizerConfig, em_Val);

jb_Sequence SanitizerConfig_elements( const SanitizerConfig *self);

void SanitizerConfig_set_elements(SanitizerConfig* self, const jb_Sequence* value);

jb_Sequence SanitizerConfig_removeElements( const SanitizerConfig *self);

void SanitizerConfig_set_removeElements(SanitizerConfig* self, const jb_Sequence* value);

jb_Sequence SanitizerConfig_replaceWithChildrenElements( const SanitizerConfig *self);

void SanitizerConfig_set_replaceWithChildrenElements(SanitizerConfig* self, const jb_Sequence* value);

jb_Sequence SanitizerConfig_attributes( const SanitizerConfig *self);

void SanitizerConfig_set_attributes(SanitizerConfig* self, const jb_Sequence* value);

jb_Sequence SanitizerConfig_removeAttributes( const SanitizerConfig *self);

void SanitizerConfig_set_removeAttributes(SanitizerConfig* self, const jb_Sequence* value);

bool SanitizerConfig_comments( const SanitizerConfig *self);

void SanitizerConfig_set_comments(SanitizerConfig* self, bool value);

bool SanitizerConfig_dataAttributes( const SanitizerConfig *self);

void SanitizerConfig_set_dataAttributes(SanitizerConfig* self, bool value);
typedef struct {
  em_Val inner;
} Sanitizer;


DECLARE_EMLITE_TYPE(Sanitizer, em_Val);

Sanitizer Sanitizer_new();

Sanitizer Sanitizer_new(const jb_Any* configuration);

SanitizerConfig Sanitizer_get(Sanitizer* self );

jb_Undefined Sanitizer_allowElement(Sanitizer* self , const jb_Any* element);

jb_Undefined Sanitizer_removeElement(Sanitizer* self , const jb_Any* element);

jb_Undefined Sanitizer_replaceElementWithChildren(Sanitizer* self , const jb_Any* element);

jb_Undefined Sanitizer_allowAttribute(Sanitizer* self , const jb_Any* attribute);

jb_Undefined Sanitizer_removeAttribute(Sanitizer* self , const jb_Any* attribute);

jb_Undefined Sanitizer_setComments(Sanitizer* self , bool allow);

jb_Undefined Sanitizer_setDataAttributes(Sanitizer* self , bool allow);

jb_Undefined Sanitizer_removeUnsafe(Sanitizer* self );
