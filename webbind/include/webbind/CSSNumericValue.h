#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleValue.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct CSSNumericValue CSSNumericValue;
typedef struct CSSUnitValue CSSUnitValue;
typedef struct CSSMathSum CSSMathSum;
typedef struct CSSNumericType CSSNumericType;


DECLARE_EMLITE_TYPE(CSSNumericType, em_Val);

long CSSNumericType_length(const CSSNumericType *self);

void CSSNumericType_set_length(CSSNumericType* self, long value);

long CSSNumericType_angle(const CSSNumericType *self);

void CSSNumericType_set_angle(CSSNumericType* self, long value);

long CSSNumericType_time(const CSSNumericType *self);

void CSSNumericType_set_time(CSSNumericType* self, long value);

long CSSNumericType_frequency(const CSSNumericType *self);

void CSSNumericType_set_frequency(CSSNumericType* self, long value);

long CSSNumericType_resolution(const CSSNumericType *self);

void CSSNumericType_set_resolution(CSSNumericType* self, long value);

long CSSNumericType_flex(const CSSNumericType *self);

void CSSNumericType_set_flex(CSSNumericType* self, long value);

long CSSNumericType_percent(const CSSNumericType *self);

void CSSNumericType_set_percent(CSSNumericType* self, long value);

CSSNumericBaseType CSSNumericType_percentHint(const CSSNumericType *self);

void CSSNumericType_set_percentHint(CSSNumericType* self, CSSNumericBaseType * value);
DECLARE_EMLITE_TYPE(CSSNumericValue, CSSStyleValue);

CSSNumericValue CSSNumericValue_add(CSSNumericValue* self , jb_Any * values);

CSSNumericValue CSSNumericValue_sub(CSSNumericValue* self , jb_Any * values);

CSSNumericValue CSSNumericValue_mul(CSSNumericValue* self , jb_Any * values);

CSSNumericValue CSSNumericValue_div(CSSNumericValue* self , jb_Any * values);

CSSNumericValue CSSNumericValue_min(CSSNumericValue* self , jb_Any * values);

CSSNumericValue CSSNumericValue_max(CSSNumericValue* self , jb_Any * values);

bool CSSNumericValue_equals(CSSNumericValue* self , jb_Any * value);

CSSUnitValue CSSNumericValue_to(CSSNumericValue* self , jb_String * unit);

CSSMathSum CSSNumericValue_toSum(CSSNumericValue* self , jb_String * units);

CSSNumericType CSSNumericValue_type(CSSNumericValue* self );

CSSNumericValue CSSNumericValue_parse(CSSNumericValue* self , jb_String * cssText);
