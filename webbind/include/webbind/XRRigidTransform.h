#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMPointReadOnly DOMPointReadOnly;
typedef struct XRRigidTransform XRRigidTransform;
typedef struct DOMPointInit DOMPointInit;


DECLARE_EMLITE_TYPE(XRRigidTransform, em_Val);

XRRigidTransform XRRigidTransform_new0();

XRRigidTransform XRRigidTransform_new1(DOMPointInit * position);

XRRigidTransform XRRigidTransform_new2(DOMPointInit * position, DOMPointInit * orientation);

DOMPointReadOnly XRRigidTransform_position(const XRRigidTransform *self);

DOMPointReadOnly XRRigidTransform_orientation(const XRRigidTransform *self);

jb_Float32Array XRRigidTransform_matrix(const XRRigidTransform *self);

XRRigidTransform XRRigidTransform_inverse(const XRRigidTransform *self);
