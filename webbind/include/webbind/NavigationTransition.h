#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct NavigationHistoryEntry NavigationHistoryEntry;


DECLARE_EMLITE_TYPE(NavigationTransition, em_Val);

NavigationType NavigationTransition_navigationType(const NavigationTransition *self);

NavigationHistoryEntry NavigationTransition_from(const NavigationTransition *self);

jb_Promise NavigationTransition_finished(const NavigationTransition *self);
