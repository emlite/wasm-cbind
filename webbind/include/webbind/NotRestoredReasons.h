#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct NotRestoredReasonDetails NotRestoredReasonDetails;
typedef struct NotRestoredReasons NotRestoredReasons;


DECLARE_EMLITE_TYPE(NotRestoredReasons, em_Val);

jb_String NotRestoredReasons_src(const NotRestoredReasons *self);

jb_String NotRestoredReasons_id(const NotRestoredReasons *self);

jb_String NotRestoredReasons_name(const NotRestoredReasons *self);

jb_String NotRestoredReasons_url(const NotRestoredReasons *self);

jb_Array NotRestoredReasons_reasons(const NotRestoredReasons *self);

jb_Array NotRestoredReasons_children(const NotRestoredReasons *self);

jb_Object NotRestoredReasons_toJSON(NotRestoredReasons* self );
