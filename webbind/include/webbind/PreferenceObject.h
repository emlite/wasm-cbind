#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PreferenceObject, EventTarget);

jb_String PreferenceObject_override(const PreferenceObject *self);

jb_String PreferenceObject_value(const PreferenceObject *self);

jb_Array PreferenceObject_validValues(const PreferenceObject *self);

jb_Undefined PreferenceObject_clearOverride(PreferenceObject* self );

jb_Promise PreferenceObject_requestOverride(PreferenceObject* self , jb_String * value);

jb_Any PreferenceObject_onchange(const PreferenceObject *self);

void PreferenceObject_set_onchange(PreferenceObject* self, jb_Any * value);
