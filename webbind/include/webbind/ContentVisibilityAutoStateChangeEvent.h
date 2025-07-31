#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ContentVisibilityAutoStateChangeEvent, Event);

ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent_new0(jb_String * type);

ContentVisibilityAutoStateChangeEvent ContentVisibilityAutoStateChangeEvent_new1(jb_String * type, jb_Any * eventInitDict);

bool ContentVisibilityAutoStateChangeEvent_skipped(const ContentVisibilityAutoStateChangeEvent *self);
