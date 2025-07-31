#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRReferenceSpace.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMPointReadOnly DOMPointReadOnly;


DECLARE_EMLITE_TYPE(XRBoundedReferenceSpace, XRReferenceSpace);

jb_Array XRBoundedReferenceSpace_boundsGeometry(const XRBoundedReferenceSpace *self);
