#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "InterestGroupScriptRunnerGlobalScope.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(InterestGroupReportingScriptRunnerGlobalScope, InterestGroupScriptRunnerGlobalScope);

jb_Undefined InterestGroupReportingScriptRunnerGlobalScope_sendReportTo(InterestGroupReportingScriptRunnerGlobalScope* self , jb_String * url);

jb_Undefined InterestGroupReportingScriptRunnerGlobalScope_registerAdBeacon(InterestGroupReportingScriptRunnerGlobalScope* self , jb_Object * map);

jb_Undefined InterestGroupReportingScriptRunnerGlobalScope_registerAdMacro(InterestGroupReportingScriptRunnerGlobalScope* self , jb_String * name, jb_String * value);
