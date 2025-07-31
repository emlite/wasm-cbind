#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(History, em_Val);

unsigned long History_length(const History *self);

ScrollRestoration History_scrollRestoration(const History *self);

void History_set_scrollRestoration(History* self, ScrollRestoration * value);

jb_Any History_state(const History *self);

jb_Undefined History_go0(History* self );

jb_Undefined History_go1(History* self , long delta);

jb_Undefined History_back(History* self );

jb_Undefined History_forward(History* self );

jb_Undefined History_pushState0(History* self , jb_Any * data, jb_String * unused);

jb_Undefined History_pushState1(History* self , jb_Any * data, jb_String * unused, jb_String * url);

jb_Undefined History_replaceState0(History* self , jb_Any * data, jb_String * unused);

jb_Undefined History_replaceState1(History* self , jb_Any * data, jb_String * unused, jb_String * url);
