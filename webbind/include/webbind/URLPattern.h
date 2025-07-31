#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct URLPatternResult URLPatternResult;


DECLARE_EMLITE_TYPE(URLPatternResult, em_Val);

jb_Array URLPatternResult_inputs(const URLPatternResult *self);

void URLPatternResult_set_inputs(URLPatternResult* self, jb_Array * value);

jb_Any URLPatternResult_protocol(const URLPatternResult *self);

void URLPatternResult_set_protocol(URLPatternResult* self, jb_Any * value);

jb_Any URLPatternResult_username(const URLPatternResult *self);

void URLPatternResult_set_username(URLPatternResult* self, jb_Any * value);

jb_Any URLPatternResult_password(const URLPatternResult *self);

void URLPatternResult_set_password(URLPatternResult* self, jb_Any * value);

jb_Any URLPatternResult_hostname(const URLPatternResult *self);

void URLPatternResult_set_hostname(URLPatternResult* self, jb_Any * value);

jb_Any URLPatternResult_port(const URLPatternResult *self);

void URLPatternResult_set_port(URLPatternResult* self, jb_Any * value);

jb_Any URLPatternResult_pathname(const URLPatternResult *self);

void URLPatternResult_set_pathname(URLPatternResult* self, jb_Any * value);

jb_Any URLPatternResult_search(const URLPatternResult *self);

void URLPatternResult_set_search(URLPatternResult* self, jb_Any * value);

jb_Any URLPatternResult_hash(const URLPatternResult *self);

void URLPatternResult_set_hash(URLPatternResult* self, jb_Any * value);
DECLARE_EMLITE_TYPE(URLPattern, em_Val);

URLPattern URLPattern_new0();

URLPattern URLPattern_new1(jb_Any * input);

URLPattern URLPattern_new2(jb_Any * input, jb_Any * options);

bool URLPattern_test0(URLPattern* self );

bool URLPattern_test1(URLPattern* self , jb_Any * input);

bool URLPattern_test2(URLPattern* self , jb_Any * input, jb_String * baseURL);

URLPatternResult URLPattern_exec0(URLPattern* self );

URLPatternResult URLPattern_exec1(URLPattern* self , jb_Any * input);

URLPatternResult URLPattern_exec2(URLPattern* self , jb_Any * input, jb_String * baseURL);

jb_String URLPattern_protocol(const URLPattern *self);

jb_String URLPattern_username(const URLPattern *self);

jb_String URLPattern_password(const URLPattern *self);

jb_String URLPattern_hostname(const URLPattern *self);

jb_String URLPattern_port(const URLPattern *self);

jb_String URLPattern_pathname(const URLPattern *self);

jb_String URLPattern_search(const URLPattern *self);

jb_String URLPattern_hash(const URLPattern *self);

bool URLPattern_hasRegExpGroups(const URLPattern *self);
