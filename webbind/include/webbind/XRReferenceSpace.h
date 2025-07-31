#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRSpace.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct XRReferenceSpace XRReferenceSpace;
typedef struct XRRigidTransform XRRigidTransform;


DECLARE_EMLITE_TYPE(XRReferenceSpace, XRSpace);

XRReferenceSpace XRReferenceSpace_getOffsetReferenceSpace(XRReferenceSpace* self , XRRigidTransform * originOffset);

jb_Any XRReferenceSpace_onreset(const XRReferenceSpace *self);

void XRReferenceSpace_set_onreset(XRReferenceSpace* self, jb_Any * value);
