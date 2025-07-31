#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct FormData FormData;


DECLARE_EMLITE_TYPE(FormDataEvent, Event);

FormDataEvent FormDataEvent_new(jb_String * type, jb_Any * eventInitDict);

FormData FormDataEvent_formData(const FormDataEvent *self);
