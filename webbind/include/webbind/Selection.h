#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct Node Node;
typedef struct Range Range;
typedef struct StaticRange StaticRange;
typedef struct GetComposedRangesOptions GetComposedRangesOptions;
typedef struct ShadowRoot ShadowRoot;


DECLARE_EMLITE_TYPE(GetComposedRangesOptions, em_Val);

jb_Array GetComposedRangesOptions_shadowRoots(const GetComposedRangesOptions *self);

void GetComposedRangesOptions_set_shadowRoots(GetComposedRangesOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(Selection, em_Val);

Node Selection_anchorNode(const Selection *self);

unsigned long Selection_anchorOffset(const Selection *self);

Node Selection_focusNode(const Selection *self);

unsigned long Selection_focusOffset(const Selection *self);

bool Selection_isCollapsed(const Selection *self);

unsigned long Selection_rangeCount(const Selection *self);

jb_String Selection_type(const Selection *self);

jb_String Selection_direction(const Selection *self);

Range Selection_getRangeAt(Selection* self , unsigned long index);

jb_Undefined Selection_addRange(Selection* self , Range * range);

jb_Undefined Selection_removeRange(Selection* self , Range * range);

jb_Undefined Selection_removeAllRanges(Selection* self );

jb_Undefined Selection_empty(Selection* self );

jb_Array Selection_getComposedRanges0(Selection* self );

jb_Array Selection_getComposedRanges1(Selection* self , GetComposedRangesOptions * options);

jb_Undefined Selection_collapse0(Selection* self , Node * node);

jb_Undefined Selection_collapse1(Selection* self , Node * node, unsigned long offset);

jb_Undefined Selection_setPosition0(Selection* self , Node * node);

jb_Undefined Selection_setPosition1(Selection* self , Node * node, unsigned long offset);

jb_Undefined Selection_collapseToStart(Selection* self );

jb_Undefined Selection_collapseToEnd(Selection* self );

jb_Undefined Selection_extend0(Selection* self , Node * node);

jb_Undefined Selection_extend1(Selection* self , Node * node, unsigned long offset);

jb_Undefined Selection_setBaseAndExtent(Selection* self , Node * anchorNode, unsigned long anchorOffset, Node * focusNode, unsigned long focusOffset);

jb_Undefined Selection_selectAllChildren(Selection* self , Node * node);

jb_Undefined Selection_modify0(Selection* self );

jb_Undefined Selection_modify1(Selection* self , jb_String * alter);

jb_Undefined Selection_modify2(Selection* self , jb_String * alter, jb_String * direction);

jb_Undefined Selection_modify3(Selection* self , jb_String * alter, jb_String * direction, jb_String * granularity);

jb_Undefined Selection_deleteFromDocument(Selection* self );

bool Selection_containsNode0(Selection* self , Node * node);

bool Selection_containsNode1(Selection* self , Node * node, bool allowPartialContainment);
