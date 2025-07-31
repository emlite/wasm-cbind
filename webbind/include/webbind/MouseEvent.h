#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "UIEvent.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct EventTarget EventTarget;
typedef struct Window Window;


DECLARE_EMLITE_TYPE(MouseEvent, UIEvent);

MouseEvent MouseEvent_new0(jb_String * type);

MouseEvent MouseEvent_new1(jb_String * type, jb_Any * eventInitDict);

long MouseEvent_screenX(const MouseEvent *self);

long MouseEvent_screenY(const MouseEvent *self);

long MouseEvent_clientX(const MouseEvent *self);

long MouseEvent_clientY(const MouseEvent *self);

long MouseEvent_layerX(const MouseEvent *self);

long MouseEvent_layerY(const MouseEvent *self);

bool MouseEvent_ctrlKey(const MouseEvent *self);

bool MouseEvent_shiftKey(const MouseEvent *self);

bool MouseEvent_altKey(const MouseEvent *self);

bool MouseEvent_metaKey(const MouseEvent *self);

short MouseEvent_button(const MouseEvent *self);

unsigned short MouseEvent_buttons(const MouseEvent *self);

EventTarget MouseEvent_relatedTarget(const MouseEvent *self);

bool MouseEvent_getModifierState(MouseEvent* self , jb_String * keyArg);

double MouseEvent_pageX(const MouseEvent *self);

double MouseEvent_pageY(const MouseEvent *self);

double MouseEvent_x(const MouseEvent *self);

double MouseEvent_y(const MouseEvent *self);

double MouseEvent_offsetX(const MouseEvent *self);

double MouseEvent_offsetY(const MouseEvent *self);

double MouseEvent_movementX(const MouseEvent *self);

double MouseEvent_movementY(const MouseEvent *self);

jb_Undefined MouseEvent_initMouseEvent0(MouseEvent* self , jb_String * typeArg);

jb_Undefined MouseEvent_initMouseEvent1(MouseEvent* self , jb_String * typeArg, bool bubblesArg);

jb_Undefined MouseEvent_initMouseEvent2(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg);

jb_Undefined MouseEvent_initMouseEvent3(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg);

jb_Undefined MouseEvent_initMouseEvent4(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg);

jb_Undefined MouseEvent_initMouseEvent5(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg);

jb_Undefined MouseEvent_initMouseEvent6(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg);

jb_Undefined MouseEvent_initMouseEvent7(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg);

jb_Undefined MouseEvent_initMouseEvent8(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg);

jb_Undefined MouseEvent_initMouseEvent9(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg);

jb_Undefined MouseEvent_initMouseEvent10(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg);

jb_Undefined MouseEvent_initMouseEvent11(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg);

jb_Undefined MouseEvent_initMouseEvent12(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg);

jb_Undefined MouseEvent_initMouseEvent13(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, short buttonArg);

jb_Undefined MouseEvent_initMouseEvent14(MouseEvent* self , jb_String * typeArg, bool bubblesArg, bool cancelableArg, Window * viewArg, long detailArg, long screenXArg, long screenYArg, long clientXArg, long clientYArg, bool ctrlKeyArg, bool altKeyArg, bool shiftKeyArg, bool metaKeyArg, short buttonArg, EventTarget * relatedTargetArg);
