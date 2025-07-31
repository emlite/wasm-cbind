#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct URL URL;
typedef struct URLSearchParams URLSearchParams;


DECLARE_EMLITE_TYPE(URL, em_Val);

URL URL_new0(jb_String * url);

URL URL_new1(jb_String * url, jb_String * base);

URL URL_parse0(URL* self , jb_String * url);

URL URL_parse1(URL* self , jb_String * url, jb_String * base);

bool URL_canParse0(URL* self , jb_String * url);

bool URL_canParse1(URL* self , jb_String * url, jb_String * base);

jb_String URL_href(const URL *self);

void URL_set_href(URL* self, jb_String * value);

jb_String URL_origin(const URL *self);

jb_String URL_protocol(const URL *self);

void URL_set_protocol(URL* self, jb_String * value);

jb_String URL_username(const URL *self);

void URL_set_username(URL* self, jb_String * value);

jb_String URL_password(const URL *self);

void URL_set_password(URL* self, jb_String * value);

jb_String URL_host(const URL *self);

void URL_set_host(URL* self, jb_String * value);

jb_String URL_hostname(const URL *self);

void URL_set_hostname(URL* self, jb_String * value);

jb_String URL_port(const URL *self);

void URL_set_port(URL* self, jb_String * value);

jb_String URL_pathname(const URL *self);

void URL_set_pathname(URL* self, jb_String * value);

jb_String URL_search(const URL *self);

void URL_set_search(URL* self, jb_String * value);

URLSearchParams URL_searchParams(const URL *self);

jb_String URL_hash(const URL *self);

void URL_set_hash(URL* self, jb_String * value);

jb_String URL_toJSON(URL* self );

jb_String URL_createObjectURL(URL* self , jb_Any * obj);

jb_Undefined URL_revokeObjectURL(URL* self , jb_String * url);
