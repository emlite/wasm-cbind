#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(PermissionsPolicy, em_Val);

bool PermissionsPolicy_allowsFeature0(PermissionsPolicy* self , jb_String * feature);

bool PermissionsPolicy_allowsFeature1(PermissionsPolicy* self , jb_String * feature, jb_String * origin);

jb_Array PermissionsPolicy_features(PermissionsPolicy* self );

jb_Array PermissionsPolicy_allowedFeatures(PermissionsPolicy* self );

jb_Array PermissionsPolicy_getAllowlistForFeature(PermissionsPolicy* self , jb_String * feature);
