#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct AbortSignal AbortSignal;


DECLARE_EMLITE_TYPE(Subscriber, em_Val);

jb_Undefined Subscriber_next(Subscriber* self , jb_Any * value);

jb_Undefined Subscriber_error(Subscriber* self , jb_Any * error);

jb_Undefined Subscriber_complete(Subscriber* self );

jb_Undefined Subscriber_addTeardown(Subscriber* self , jb_Any * teardown);

bool Subscriber_active(const Subscriber *self);

AbortSignal Subscriber_signal(const Subscriber *self);
