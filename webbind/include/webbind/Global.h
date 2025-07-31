#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(Global, em_Val);

Global Global_new0(jb_Any * descriptor);

Global Global_new1(jb_Any * descriptor, jb_Any * v);

jb_Any Global_valueOf(Global* self );

jb_Any Global_value(const Global *self);

void Global_set_value(Global* self, jb_Any * value);
