#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(NavigationHistoryEntry, EventTarget);

jb_String NavigationHistoryEntry_url(const NavigationHistoryEntry *self);

jb_String NavigationHistoryEntry_key(const NavigationHistoryEntry *self);

jb_String NavigationHistoryEntry_id(const NavigationHistoryEntry *self);

long long NavigationHistoryEntry_index(const NavigationHistoryEntry *self);

bool NavigationHistoryEntry_sameDocument(const NavigationHistoryEntry *self);

jb_Any NavigationHistoryEntry_getState(NavigationHistoryEntry* self );

jb_Any NavigationHistoryEntry_ondispose(const NavigationHistoryEntry *self);

void NavigationHistoryEntry_set_ondispose(NavigationHistoryEntry* self, jb_Any * value);
