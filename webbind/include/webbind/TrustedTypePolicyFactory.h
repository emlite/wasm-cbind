#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct TrustedTypePolicy TrustedTypePolicy;
typedef struct TrustedTypePolicyOptions TrustedTypePolicyOptions;
typedef struct TrustedHTML TrustedHTML;
typedef struct TrustedScript TrustedScript;


DECLARE_EMLITE_TYPE(TrustedTypePolicyOptions, em_Val);

jb_Function TrustedTypePolicyOptions_createHTML(const TrustedTypePolicyOptions *self);

void TrustedTypePolicyOptions_set_createHTML(TrustedTypePolicyOptions* self, jb_Function * value);

jb_Function TrustedTypePolicyOptions_createScript(const TrustedTypePolicyOptions *self);

void TrustedTypePolicyOptions_set_createScript(TrustedTypePolicyOptions* self, jb_Function * value);

jb_Function TrustedTypePolicyOptions_createScriptURL(const TrustedTypePolicyOptions *self);

void TrustedTypePolicyOptions_set_createScriptURL(TrustedTypePolicyOptions* self, jb_Function * value);
DECLARE_EMLITE_TYPE(TrustedTypePolicyFactory, em_Val);

TrustedTypePolicy TrustedTypePolicyFactory_createPolicy0(TrustedTypePolicyFactory* self , jb_String * policyName);

TrustedTypePolicy TrustedTypePolicyFactory_createPolicy1(TrustedTypePolicyFactory* self , jb_String * policyName, TrustedTypePolicyOptions * policyOptions);

bool TrustedTypePolicyFactory_isHTML(TrustedTypePolicyFactory* self , jb_Any * value);

bool TrustedTypePolicyFactory_isScript(TrustedTypePolicyFactory* self , jb_Any * value);

bool TrustedTypePolicyFactory_isScriptURL(TrustedTypePolicyFactory* self , jb_Any * value);

TrustedHTML TrustedTypePolicyFactory_emptyHTML(const TrustedTypePolicyFactory *self);

TrustedScript TrustedTypePolicyFactory_emptyScript(const TrustedTypePolicyFactory *self);

jb_String TrustedTypePolicyFactory_getAttributeType0(TrustedTypePolicyFactory* self , jb_String * tagName, jb_String * attribute);

jb_String TrustedTypePolicyFactory_getAttributeType1(TrustedTypePolicyFactory* self , jb_String * tagName, jb_String * attribute, jb_String * elementNs);

jb_String TrustedTypePolicyFactory_getAttributeType2(TrustedTypePolicyFactory* self , jb_String * tagName, jb_String * attribute, jb_String * elementNs, jb_String * attrNs);

jb_String TrustedTypePolicyFactory_getPropertyType0(TrustedTypePolicyFactory* self , jb_String * tagName, jb_String * property);

jb_String TrustedTypePolicyFactory_getPropertyType1(TrustedTypePolicyFactory* self , jb_String * tagName, jb_String * property, jb_String * elementNs);

TrustedTypePolicy TrustedTypePolicyFactory_defaultPolicy(const TrustedTypePolicyFactory *self);
