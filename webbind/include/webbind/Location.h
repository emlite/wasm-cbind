#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMStringList DOMStringList;


DECLARE_EMLITE_TYPE(Location, em_Val);

jb_String Location_href(const Location *self);

void Location_set_href(Location* self, jb_String * value);

jb_String Location_origin(const Location *self);

jb_String Location_protocol(const Location *self);

void Location_set_protocol(Location* self, jb_String * value);

jb_String Location_host(const Location *self);

void Location_set_host(Location* self, jb_String * value);

jb_String Location_hostname(const Location *self);

void Location_set_hostname(Location* self, jb_String * value);

jb_String Location_port(const Location *self);

void Location_set_port(Location* self, jb_String * value);

jb_String Location_pathname(const Location *self);

void Location_set_pathname(Location* self, jb_String * value);

jb_String Location_search(const Location *self);

void Location_set_search(Location* self, jb_String * value);

jb_String Location_hash(const Location *self);

void Location_set_hash(Location* self, jb_String * value);

jb_Undefined Location_assign(Location* self , jb_String * url);

jb_Undefined Location_replace(Location* self , jb_String * url);

jb_Undefined Location_reload(Location* self );

DOMStringList Location_ancestorOrigins(const Location *self);
