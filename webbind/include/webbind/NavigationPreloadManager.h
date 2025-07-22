#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct NavigationPreloadState NavigationPreloadState;


DECLARE_EMLITE_TYPE(NavigationPreloadState, em_Val);

bool NavigationPreloadState_enabled( const NavigationPreloadState *self);

void NavigationPreloadState_set_enabled(NavigationPreloadState* self, bool value);

jb_ByteString NavigationPreloadState_headerValue( const NavigationPreloadState *self);

void NavigationPreloadState_set_headerValue(NavigationPreloadState* self, jb_ByteString * value);
DECLARE_EMLITE_TYPE(NavigationPreloadManager, em_Val);

jb_Promise NavigationPreloadManager_enable(NavigationPreloadManager* self );

jb_Promise NavigationPreloadManager_disable(NavigationPreloadManager* self );

jb_Promise NavigationPreloadManager_setHeaderValue(NavigationPreloadManager* self , jb_ByteString * value);

jb_Promise NavigationPreloadManager_getState(NavigationPreloadManager* self );
