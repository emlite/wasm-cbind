#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "DOMException.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(OverconstrainedError, DOMException);

OverconstrainedError OverconstrainedError_new0(jb_String * constraint);

OverconstrainedError OverconstrainedError_new1(jb_String * constraint, jb_String * message);

jb_String OverconstrainedError_constraint(const OverconstrainedError *self);
