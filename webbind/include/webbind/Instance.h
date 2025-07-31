#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Module Module;


DECLARE_EMLITE_TYPE(Instance, em_Val);

Instance Instance_new0(Module * module_);

Instance Instance_new1(Module * module_, jb_Object * importObject);

jb_Object Instance_exports(const Instance *self);
