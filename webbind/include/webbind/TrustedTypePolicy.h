#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct TrustedHTML TrustedHTML;
typedef struct TrustedScript TrustedScript;
typedef struct TrustedScriptURL TrustedScriptURL;


DECLARE_EMLITE_TYPE(TrustedTypePolicy, em_Val);

jb_String TrustedTypePolicy_name(const TrustedTypePolicy *self);

TrustedHTML TrustedTypePolicy_createHTML(TrustedTypePolicy* self , jb_String * input, jb_Any * arguments);

TrustedScript TrustedTypePolicy_createScript(TrustedTypePolicy* self , jb_String * input, jb_Any * arguments);

TrustedScriptURL TrustedTypePolicy_createScriptURL(TrustedTypePolicy* self , jb_String * input, jb_Any * arguments);
