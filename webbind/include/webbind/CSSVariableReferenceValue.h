#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSUnparsedValue CSSUnparsedValue;


DECLARE_EMLITE_TYPE(CSSVariableReferenceValue, em_Val);

CSSVariableReferenceValue CSSVariableReferenceValue_new0(jb_String * variable);

CSSVariableReferenceValue CSSVariableReferenceValue_new1(jb_String * variable, CSSUnparsedValue * fallback);

jb_String CSSVariableReferenceValue_variable(const CSSVariableReferenceValue *self);

void CSSVariableReferenceValue_set_variable(CSSVariableReferenceValue* self, jb_String * value);

CSSUnparsedValue CSSVariableReferenceValue_fallback(const CSSVariableReferenceValue *self);
