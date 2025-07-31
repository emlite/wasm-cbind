#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct IdentityResolveOptions IdentityResolveOptions;
typedef struct IdentityUserInfo IdentityUserInfo;
typedef struct IdentityProviderConfig IdentityProviderConfig;


DECLARE_EMLITE_TYPE(IdentityResolveOptions, em_Val);

jb_String IdentityResolveOptions_accountId(const IdentityResolveOptions *self);

void IdentityResolveOptions_set_accountId(IdentityResolveOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(IdentityUserInfo, em_Val);

jb_String IdentityUserInfo_email(const IdentityUserInfo *self);

void IdentityUserInfo_set_email(IdentityUserInfo* self, jb_String * value);

jb_String IdentityUserInfo_name(const IdentityUserInfo *self);

void IdentityUserInfo_set_name(IdentityUserInfo* self, jb_String * value);

jb_String IdentityUserInfo_givenName(const IdentityUserInfo *self);

void IdentityUserInfo_set_givenName(IdentityUserInfo* self, jb_String * value);

jb_String IdentityUserInfo_picture(const IdentityUserInfo *self);

void IdentityUserInfo_set_picture(IdentityUserInfo* self, jb_String * value);
DECLARE_EMLITE_TYPE(IdentityProviderConfig, em_Val);

jb_String IdentityProviderConfig_configURL(const IdentityProviderConfig *self);

void IdentityProviderConfig_set_configURL(IdentityProviderConfig* self, jb_String * value);

jb_String IdentityProviderConfig_clientId(const IdentityProviderConfig *self);

void IdentityProviderConfig_set_clientId(IdentityProviderConfig* self, jb_String * value);
DECLARE_EMLITE_TYPE(IdentityProvider, em_Val);

jb_Undefined IdentityProvider_close(IdentityProvider* self );

jb_Promise IdentityProvider_resolve0(IdentityProvider* self , jb_String * token);

jb_Promise IdentityProvider_resolve1(IdentityProvider* self , jb_String * token, IdentityResolveOptions * options);

jb_Promise IdentityProvider_getUserInfo(IdentityProvider* self , IdentityProviderConfig * config);
