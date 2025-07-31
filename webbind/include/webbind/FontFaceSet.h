#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct FontFaceSet FontFaceSet;
typedef struct FontFace FontFace;


DECLARE_EMLITE_TYPE(FontFaceSet, EventTarget);

FontFaceSet FontFaceSet_add(FontFaceSet* self , FontFace * font);

bool FontFaceSet_delete_(FontFaceSet* self , FontFace * font);

jb_Undefined FontFaceSet_clear(FontFaceSet* self );

jb_Any FontFaceSet_onloading(const FontFaceSet *self);

void FontFaceSet_set_onloading(FontFaceSet* self, jb_Any * value);

jb_Any FontFaceSet_onloadingdone(const FontFaceSet *self);

void FontFaceSet_set_onloadingdone(FontFaceSet* self, jb_Any * value);

jb_Any FontFaceSet_onloadingerror(const FontFaceSet *self);

void FontFaceSet_set_onloadingerror(FontFaceSet* self, jb_Any * value);

jb_Promise FontFaceSet_load0(FontFaceSet* self , jb_String * font);

jb_Promise FontFaceSet_load1(FontFaceSet* self , jb_String * font, jb_String * text);

bool FontFaceSet_check0(FontFaceSet* self , jb_String * font);

bool FontFaceSet_check1(FontFaceSet* self , jb_String * font, jb_String * text);

jb_Promise FontFaceSet_ready(const FontFaceSet *self);

FontFaceSetLoadStatus FontFaceSet_status(const FontFaceSet *self);
