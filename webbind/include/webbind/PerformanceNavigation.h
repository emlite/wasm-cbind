#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PerformanceNavigation, em_Val);

unsigned short PerformanceNavigation_type(const PerformanceNavigation *self);

unsigned short PerformanceNavigation_redirectCount(const PerformanceNavigation *self);

jb_Object PerformanceNavigation_toJSON(PerformanceNavigation* self );
