#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(SyncManager, em_Val);

jb_Promise SyncManager_register_(SyncManager* self , jb_String * tag);

jb_Promise SyncManager_getTags(SyncManager* self );
