#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PresentationAvailability, EventTarget);

bool PresentationAvailability_value(const PresentationAvailability *self);

jb_Any PresentationAvailability_onchange(const PresentationAvailability *self);

void PresentationAvailability_set_onchange(PresentationAvailability* self, jb_Any * value);
