#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PresentationRequest PresentationRequest;
typedef struct PresentationReceiver PresentationReceiver;


DECLARE_EMLITE_TYPE(Presentation, em_Val);

PresentationRequest Presentation_defaultRequest(const Presentation *self);

void Presentation_set_defaultRequest(Presentation* self, PresentationRequest * value);

PresentationReceiver Presentation_receiver(const Presentation *self);
