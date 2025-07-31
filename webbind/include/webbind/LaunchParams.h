#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct FileSystemHandle FileSystemHandle;


DECLARE_EMLITE_TYPE(LaunchParams, em_Val);

jb_String LaunchParams_targetURL(const LaunchParams *self);

jb_Array LaunchParams_files(const LaunchParams *self);
