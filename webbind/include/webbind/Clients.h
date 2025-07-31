#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Client Client;
typedef struct ClientQueryOptions ClientQueryOptions;
typedef struct WindowClient WindowClient;


DECLARE_EMLITE_TYPE(ClientQueryOptions, em_Val);

bool ClientQueryOptions_includeUncontrolled(const ClientQueryOptions *self);

void ClientQueryOptions_set_includeUncontrolled(ClientQueryOptions* self, bool value);

ClientType ClientQueryOptions_type(const ClientQueryOptions *self);

void ClientQueryOptions_set_type(ClientQueryOptions* self, ClientType * value);
DECLARE_EMLITE_TYPE(Clients, em_Val);

jb_Promise Clients_get(Clients* self , jb_String * id);

jb_Promise Clients_matchAll0(Clients* self );

jb_Promise Clients_matchAll1(Clients* self , ClientQueryOptions * options);

jb_Promise Clients_openWindow(Clients* self , jb_String * url);

jb_Promise Clients_claim(Clients* self );
