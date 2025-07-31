#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct WorkerGlobalScope WorkerGlobalScope;
typedef struct WorkerLocation WorkerLocation;
typedef struct WorkerNavigator WorkerNavigator;
typedef struct FontFaceSet FontFaceSet;
typedef struct Crypto Crypto;


DECLARE_EMLITE_TYPE(WorkerGlobalScope, EventTarget);

WorkerGlobalScope WorkerGlobalScope_self(const WorkerGlobalScope *self);

WorkerLocation WorkerGlobalScope_location(const WorkerGlobalScope *self);

WorkerNavigator WorkerGlobalScope_navigator(const WorkerGlobalScope *self);

jb_Undefined WorkerGlobalScope_importScripts(WorkerGlobalScope* self , jb_Any * urls);

jb_Any WorkerGlobalScope_onerror(const WorkerGlobalScope *self);

void WorkerGlobalScope_set_onerror(WorkerGlobalScope* self, jb_Any * value);

jb_Any WorkerGlobalScope_onlanguagechange(const WorkerGlobalScope *self);

void WorkerGlobalScope_set_onlanguagechange(WorkerGlobalScope* self, jb_Any * value);

jb_Any WorkerGlobalScope_onoffline(const WorkerGlobalScope *self);

void WorkerGlobalScope_set_onoffline(WorkerGlobalScope* self, jb_Any * value);

jb_Any WorkerGlobalScope_ononline(const WorkerGlobalScope *self);

void WorkerGlobalScope_set_ononline(WorkerGlobalScope* self, jb_Any * value);

jb_Any WorkerGlobalScope_onrejectionhandled(const WorkerGlobalScope *self);

void WorkerGlobalScope_set_onrejectionhandled(WorkerGlobalScope* self, jb_Any * value);

jb_Any WorkerGlobalScope_onunhandledrejection(const WorkerGlobalScope *self);

void WorkerGlobalScope_set_onunhandledrejection(WorkerGlobalScope* self, jb_Any * value);

FontFaceSet WorkerGlobalScope_fonts(const WorkerGlobalScope *self);

Crypto WorkerGlobalScope_crypto(const WorkerGlobalScope *self);
