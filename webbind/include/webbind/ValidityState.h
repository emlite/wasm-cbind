#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ValidityState, em_Val);

bool ValidityState_valueMissing(const ValidityState *self);

bool ValidityState_typeMismatch(const ValidityState *self);

bool ValidityState_patternMismatch(const ValidityState *self);

bool ValidityState_tooLong(const ValidityState *self);

bool ValidityState_tooShort(const ValidityState *self);

bool ValidityState_rangeUnderflow(const ValidityState *self);

bool ValidityState_rangeOverflow(const ValidityState *self);

bool ValidityState_stepMismatch(const ValidityState *self);

bool ValidityState_badInput(const ValidityState *self);

bool ValidityState_customError(const ValidityState *self);

bool ValidityState_valid(const ValidityState *self);
