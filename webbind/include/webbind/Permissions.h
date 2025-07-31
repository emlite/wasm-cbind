#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct PermissionStatus PermissionStatus;


DECLARE_EMLITE_TYPE(Permissions, em_Val);

jb_Promise Permissions_query(Permissions* self , jb_Object * permissionDesc);

jb_Promise Permissions_request(Permissions* self , jb_Object * permissionDesc);

jb_Promise Permissions_revoke(Permissions* self , jb_Object * permissionDesc);
