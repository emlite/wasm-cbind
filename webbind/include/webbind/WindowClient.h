#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Client.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WindowClient WindowClient;


DECLARE_EMLITE_TYPE(WindowClient, Client);

DocumentVisibilityState WindowClient_visibilityState(const WindowClient *self);

bool WindowClient_focused(const WindowClient *self);

jb_Array WindowClient_ancestorOrigins(const WindowClient *self);

jb_Promise WindowClient_focus(WindowClient* self );

jb_Promise WindowClient_navigate(WindowClient* self , jb_String * url);
