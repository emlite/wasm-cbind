#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct MediaList MediaList;
typedef struct CSSStyleSheet CSSStyleSheet;


DECLARE_EMLITE_TYPE(CSSImportRule, CSSRule);

jb_String CSSImportRule_href(const CSSImportRule *self);

MediaList CSSImportRule_media(const CSSImportRule *self);

CSSStyleSheet CSSImportRule_styleSheet(const CSSImportRule *self);

jb_String CSSImportRule_layerName(const CSSImportRule *self);

jb_String CSSImportRule_supportsText(const CSSImportRule *self);
