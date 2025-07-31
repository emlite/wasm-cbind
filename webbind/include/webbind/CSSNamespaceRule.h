#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


DECLARE_EMLITE_TYPE(CSSNamespaceRule, CSSRule);

jb_String CSSNamespaceRule_namespaceURI(const CSSNamespaceRule *self);

jb_String CSSNamespaceRule_prefix(const CSSNamespaceRule *self);
