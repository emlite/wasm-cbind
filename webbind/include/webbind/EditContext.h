#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMRect DOMRect;
typedef struct HTMLElement HTMLElement;


DECLARE_EMLITE_TYPE(EditContext, EventTarget);

EditContext EditContext_new0();

EditContext EditContext_new1(jb_Any * options);

jb_Undefined EditContext_updateText(EditContext* self , unsigned long rangeStart, unsigned long rangeEnd, jb_String * text);

jb_Undefined EditContext_updateSelection(EditContext* self , unsigned long start, unsigned long end);

jb_Undefined EditContext_updateControlBounds(EditContext* self , DOMRect * controlBounds);

jb_Undefined EditContext_updateSelectionBounds(EditContext* self , DOMRect * selectionBounds);

jb_Undefined EditContext_updateCharacterBounds(EditContext* self , unsigned long rangeStart, jb_Array * characterBounds);

jb_Array EditContext_attachedElements(EditContext* self );

jb_String EditContext_text(const EditContext *self);

unsigned long EditContext_selectionStart(const EditContext *self);

unsigned long EditContext_selectionEnd(const EditContext *self);

unsigned long EditContext_characterBoundsRangeStart(const EditContext *self);

jb_Array EditContext_characterBounds(EditContext* self );

jb_Any EditContext_ontextupdate(const EditContext *self);

void EditContext_set_ontextupdate(EditContext* self, jb_Any * value);

jb_Any EditContext_ontextformatupdate(const EditContext *self);

void EditContext_set_ontextformatupdate(EditContext* self, jb_Any * value);

jb_Any EditContext_oncharacterboundsupdate(const EditContext *self);

void EditContext_set_oncharacterboundsupdate(EditContext* self, jb_Any * value);

jb_Any EditContext_oncompositionstart(const EditContext *self);

void EditContext_set_oncompositionstart(EditContext* self, jb_Any * value);

jb_Any EditContext_oncompositionend(const EditContext *self);

void EditContext_set_oncompositionend(EditContext* self, jb_Any * value);
