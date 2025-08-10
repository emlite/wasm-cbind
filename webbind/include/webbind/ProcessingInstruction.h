#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CharacterData.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSStyleSheet CSSStyleSheet;

DECLARE_EMLITE_TYPE(ProcessingInstruction, CharacterData);

jb_String ProcessingInstruction_target(const ProcessingInstruction *self);

CSSStyleSheet ProcessingInstruction_sheet(const ProcessingInstruction *self);

#ifdef __cplusplus
}
#endif
