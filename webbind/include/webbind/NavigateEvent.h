#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct NavigationDestination NavigationDestination;
typedef struct AbortSignal AbortSignal;
typedef struct FormData FormData;
typedef struct Element Element;
typedef struct NavigationInterceptOptions NavigationInterceptOptions;


DECLARE_EMLITE_TYPE(NavigationInterceptOptions, em_Val);

jb_Function NavigationInterceptOptions_handler(const NavigationInterceptOptions *self);

void NavigationInterceptOptions_set_handler(NavigationInterceptOptions* self, jb_Function * value);

NavigationFocusReset NavigationInterceptOptions_focusReset(const NavigationInterceptOptions *self);

void NavigationInterceptOptions_set_focusReset(NavigationInterceptOptions* self, NavigationFocusReset * value);

NavigationScrollBehavior NavigationInterceptOptions_scroll(const NavigationInterceptOptions *self);

void NavigationInterceptOptions_set_scroll(NavigationInterceptOptions* self, NavigationScrollBehavior * value);
DECLARE_EMLITE_TYPE(NavigateEvent, Event);

NavigateEvent NavigateEvent_new(jb_String * type, jb_Any * eventInitDict);

NavigationType NavigateEvent_navigationType(const NavigateEvent *self);

NavigationDestination NavigateEvent_destination(const NavigateEvent *self);

bool NavigateEvent_canIntercept(const NavigateEvent *self);

bool NavigateEvent_userInitiated(const NavigateEvent *self);

bool NavigateEvent_hashChange(const NavigateEvent *self);

AbortSignal NavigateEvent_signal(const NavigateEvent *self);

FormData NavigateEvent_formData(const NavigateEvent *self);

jb_String NavigateEvent_downloadRequest(const NavigateEvent *self);

jb_Any NavigateEvent_info(const NavigateEvent *self);

bool NavigateEvent_hasUAVisualTransition(const NavigateEvent *self);

Element NavigateEvent_sourceElement(const NavigateEvent *self);

jb_Undefined NavigateEvent_intercept0(NavigateEvent* self );

jb_Undefined NavigateEvent_intercept1(NavigateEvent* self , NavigationInterceptOptions * options);

jb_Undefined NavigateEvent_scroll(NavigateEvent* self );
