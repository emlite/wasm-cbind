#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(NavigationDestination, em_Val);

jb_String NavigationDestination_url(const NavigationDestination *self);

jb_String NavigationDestination_key(const NavigationDestination *self);

jb_String NavigationDestination_id(const NavigationDestination *self);

long long NavigationDestination_index(const NavigationDestination *self);

bool NavigationDestination_sameDocument(const NavigationDestination *self);

jb_Any NavigationDestination_getState(NavigationDestination* self );
