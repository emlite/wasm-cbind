#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ViewTransitionTypeSet ViewTransitionTypeSet;


DECLARE_EMLITE_TYPE(ViewTransition, em_Val);

jb_Promise ViewTransition_updateCallbackDone(const ViewTransition *self);

jb_Promise ViewTransition_ready(const ViewTransition *self);

jb_Promise ViewTransition_finished(const ViewTransition *self);

jb_Undefined ViewTransition_skipTransition(ViewTransition* self );

ViewTransitionTypeSet ViewTransition_types(const ViewTransition *self);

void ViewTransition_set_types(ViewTransition* self, ViewTransitionTypeSet * value);
