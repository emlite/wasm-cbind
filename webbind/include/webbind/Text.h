#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CharacterData.h"
#include "SVGGeometryElement.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Text Text;
typedef struct DOMQuad DOMQuad;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct DOMPoint DOMPoint;
typedef struct HTMLSlotElement HTMLSlotElement;


DECLARE_EMLITE_TYPE(Text, CharacterData);

Text Text_new0();

Text Text_new1(jb_String * data);

Text Text_splitText(Text* self , unsigned long offset);

jb_String Text_wholeText(const Text *self);

jb_Array Text_getBoxQuads0(Text* self );

jb_Array Text_getBoxQuads1(Text* self , BoxQuadOptions * options);

DOMQuad Text_convertQuadFromNode0(Text* self , DOMQuadInit * quad, jb_Any * from);

DOMQuad Text_convertQuadFromNode1(Text* self , DOMQuadInit * quad, jb_Any * from, ConvertCoordinateOptions * options);

DOMQuad Text_convertRectFromNode0(Text* self , DOMRectReadOnly * rect, jb_Any * from);

DOMQuad Text_convertRectFromNode1(Text* self , DOMRectReadOnly * rect, jb_Any * from, ConvertCoordinateOptions * options);

DOMPoint Text_convertPointFromNode0(Text* self , DOMPointInit * point, jb_Any * from);

DOMPoint Text_convertPointFromNode1(Text* self , DOMPointInit * point, jb_Any * from, ConvertCoordinateOptions * options);

HTMLSlotElement Text_assignedSlot(const Text *self);
