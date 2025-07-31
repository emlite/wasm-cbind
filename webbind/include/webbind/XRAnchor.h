#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRSpace XRSpace;


DECLARE_EMLITE_TYPE(XRAnchor, em_Val);

XRSpace XRAnchor_anchorSpace(const XRAnchor *self);

jb_Promise XRAnchor_requestPersistentHandle(XRAnchor* self );

jb_Undefined XRAnchor_delete_(XRAnchor* self );
