#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(ProtectedAudienceUtilities, em_Val);

jb_Uint8Array ProtectedAudienceUtilities_encodeUtf8(ProtectedAudienceUtilities* self , jb_String * input);

jb_String ProtectedAudienceUtilities_decodeUtf8(ProtectedAudienceUtilities* self , jb_Uint8Array * bytes);
