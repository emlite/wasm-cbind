#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSGroupingRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct FunctionParameter FunctionParameter;


DECLARE_EMLITE_TYPE(FunctionParameter, em_Val);

jb_String FunctionParameter_name(const FunctionParameter *self);

void FunctionParameter_set_name(FunctionParameter* self, jb_String * value);

jb_String FunctionParameter_type(const FunctionParameter *self);

void FunctionParameter_set_type(FunctionParameter* self, jb_String * value);

jb_String FunctionParameter_defaultValue(const FunctionParameter *self);

void FunctionParameter_set_defaultValue(FunctionParameter* self, jb_String * value);
DECLARE_EMLITE_TYPE(CSSFunctionRule, CSSGroupingRule);

jb_String CSSFunctionRule_name(const CSSFunctionRule *self);

jb_Array CSSFunctionRule_getParameters(CSSFunctionRule* self );

jb_String CSSFunctionRule_returnType(const CSSFunctionRule *self);
