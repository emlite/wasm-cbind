#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(TransformStreamDefaultController, em_Val);

double TransformStreamDefaultController_desiredSize(const TransformStreamDefaultController *self);

jb_Undefined TransformStreamDefaultController_enqueue0(TransformStreamDefaultController* self );

jb_Undefined TransformStreamDefaultController_enqueue1(TransformStreamDefaultController* self , jb_Any * chunk);

jb_Undefined TransformStreamDefaultController_error0(TransformStreamDefaultController* self );

jb_Undefined TransformStreamDefaultController_error1(TransformStreamDefaultController* self , jb_Any * reason);

jb_Undefined TransformStreamDefaultController_terminate(TransformStreamDefaultController* self );
