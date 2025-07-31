#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct RestrictionTarget RestrictionTarget;
typedef struct Element Element;


DECLARE_EMLITE_TYPE(RestrictionTarget, em_Val);

jb_Promise RestrictionTarget_fromElement(RestrictionTarget* self , Element * element);
