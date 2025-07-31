#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Node.h"
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct DOMTokenList DOMTokenList;
typedef struct NamedNodeMap NamedNodeMap;
typedef struct Attr Attr;
typedef struct ShadowRoot ShadowRoot;
typedef struct ShadowRootInit ShadowRootInit;
typedef struct CustomElementRegistry CustomElementRegistry;
typedef struct HTMLCollection HTMLCollection;
typedef struct FocusableAreasOption FocusableAreasOption;
typedef struct SpatialNavigationSearchOptions SpatialNavigationSearchOptions;
typedef struct CSSPseudoElement CSSPseudoElement;
typedef struct StylePropertyMapReadOnly StylePropertyMapReadOnly;
typedef struct DOMRectList DOMRectList;
typedef struct DOMRect DOMRect;
typedef struct CheckVisibilityOptions CheckVisibilityOptions;
typedef struct FullscreenOptions FullscreenOptions;
typedef struct GetHTMLOptions GetHTMLOptions;
typedef struct PointerLockOptions PointerLockOptions;
typedef struct Range Range;
typedef struct DOMQuad DOMQuad;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct DOMPoint DOMPoint;
typedef struct NodeList NodeList;
typedef struct HTMLSlotElement HTMLSlotElement;
typedef struct Animation Animation;
typedef struct GetAnimationsOptions GetAnimationsOptions;
typedef struct ScreenDetailed ScreenDetailed;
typedef struct ConvertCoordinateOptions ConvertCoordinateOptions;
typedef struct DOMPointInit DOMPointInit;
typedef struct DOMQuadInit DOMQuadInit;
typedef struct BoxQuadOptions BoxQuadOptions;
typedef struct ShadowRootMode ShadowRootMode;
typedef struct SpatialNavigationDirection SpatialNavigationDirection;
typedef struct FocusableAreaSearchMode FocusableAreaSearchMode;


DECLARE_EMLITE_TYPE(ShadowRootInit, em_Val);

ShadowRootMode ShadowRootInit_mode(const ShadowRootInit *self);

void ShadowRootInit_set_mode(ShadowRootInit* self, ShadowRootMode * value);

bool ShadowRootInit_delegatesFocus(const ShadowRootInit *self);

void ShadowRootInit_set_delegatesFocus(ShadowRootInit* self, bool value);

SlotAssignmentMode ShadowRootInit_slotAssignment(const ShadowRootInit *self);

void ShadowRootInit_set_slotAssignment(ShadowRootInit* self, SlotAssignmentMode * value);

bool ShadowRootInit_clonable(const ShadowRootInit *self);

void ShadowRootInit_set_clonable(ShadowRootInit* self, bool value);

bool ShadowRootInit_serializable(const ShadowRootInit *self);

void ShadowRootInit_set_serializable(ShadowRootInit* self, bool value);

CustomElementRegistry ShadowRootInit_customElementRegistry(const ShadowRootInit *self);

void ShadowRootInit_set_customElementRegistry(ShadowRootInit* self, CustomElementRegistry * value);
DECLARE_EMLITE_TYPE(FocusableAreasOption, em_Val);

FocusableAreaSearchMode FocusableAreasOption_mode(const FocusableAreasOption *self);

void FocusableAreasOption_set_mode(FocusableAreasOption* self, FocusableAreaSearchMode * value);
DECLARE_EMLITE_TYPE(SpatialNavigationSearchOptions, em_Val);

jb_Array SpatialNavigationSearchOptions_candidates(const SpatialNavigationSearchOptions *self);

void SpatialNavigationSearchOptions_set_candidates(SpatialNavigationSearchOptions* self, jb_Array * value);

Node SpatialNavigationSearchOptions_container(const SpatialNavigationSearchOptions *self);

void SpatialNavigationSearchOptions_set_container(SpatialNavigationSearchOptions* self, Node * value);
DECLARE_EMLITE_TYPE(CheckVisibilityOptions, em_Val);

bool CheckVisibilityOptions_checkOpacity(const CheckVisibilityOptions *self);

void CheckVisibilityOptions_set_checkOpacity(CheckVisibilityOptions* self, bool value);

bool CheckVisibilityOptions_checkVisibilityCSS(const CheckVisibilityOptions *self);

void CheckVisibilityOptions_set_checkVisibilityCSS(CheckVisibilityOptions* self, bool value);

bool CheckVisibilityOptions_contentVisibilityAuto(const CheckVisibilityOptions *self);

void CheckVisibilityOptions_set_contentVisibilityAuto(CheckVisibilityOptions* self, bool value);

bool CheckVisibilityOptions_opacityProperty(const CheckVisibilityOptions *self);

void CheckVisibilityOptions_set_opacityProperty(CheckVisibilityOptions* self, bool value);

bool CheckVisibilityOptions_visibilityProperty(const CheckVisibilityOptions *self);

void CheckVisibilityOptions_set_visibilityProperty(CheckVisibilityOptions* self, bool value);
DECLARE_EMLITE_TYPE(FullscreenOptions, em_Val);

ScreenDetailed FullscreenOptions_screen(const FullscreenOptions *self);

void FullscreenOptions_set_screen(FullscreenOptions* self, ScreenDetailed * value);
DECLARE_EMLITE_TYPE(GetHTMLOptions, em_Val);

bool GetHTMLOptions_serializableShadowRoots(const GetHTMLOptions *self);

void GetHTMLOptions_set_serializableShadowRoots(GetHTMLOptions* self, bool value);

jb_Array GetHTMLOptions_shadowRoots(const GetHTMLOptions *self);

void GetHTMLOptions_set_shadowRoots(GetHTMLOptions* self, jb_Array * value);
DECLARE_EMLITE_TYPE(PointerLockOptions, em_Val);

bool PointerLockOptions_unadjustedMovement(const PointerLockOptions *self);

void PointerLockOptions_set_unadjustedMovement(PointerLockOptions* self, bool value);
DECLARE_EMLITE_TYPE(GetAnimationsOptions, em_Val);

bool GetAnimationsOptions_subtree(const GetAnimationsOptions *self);

void GetAnimationsOptions_set_subtree(GetAnimationsOptions* self, bool value);

jb_String GetAnimationsOptions_pseudoElement(const GetAnimationsOptions *self);

void GetAnimationsOptions_set_pseudoElement(GetAnimationsOptions* self, jb_String * value);
DECLARE_EMLITE_TYPE(Element, Node);

jb_String Element_namespaceURI(const Element *self);

jb_String Element_prefix(const Element *self);

jb_String Element_localName(const Element *self);

jb_String Element_tagName(const Element *self);

jb_String Element_id(const Element *self);

void Element_set_id(Element* self, jb_String * value);

jb_String Element_className(const Element *self);

void Element_set_className(Element* self, jb_String * value);

DOMTokenList Element_classList(const Element *self);

jb_String Element_slot(const Element *self);

void Element_set_slot(Element* self, jb_String * value);

bool Element_hasAttributes(Element* self );

NamedNodeMap Element_attributes(const Element *self);

jb_Array Element_getAttributeNames(Element* self );

jb_String Element_getAttribute(Element* self , jb_String * qualifiedName);

jb_String Element_getAttributeNS(Element* self , jb_String * namespace_, jb_String * localName);

jb_Undefined Element_setAttribute(Element* self , jb_String * qualifiedName, jb_String * value);

jb_Undefined Element_setAttributeNS(Element* self , jb_String * namespace_, jb_String * qualifiedName, jb_String * value);

jb_Undefined Element_removeAttribute(Element* self , jb_String * qualifiedName);

jb_Undefined Element_removeAttributeNS(Element* self , jb_String * namespace_, jb_String * localName);

bool Element_toggleAttribute0(Element* self , jb_String * qualifiedName);

bool Element_toggleAttribute1(Element* self , jb_String * qualifiedName, bool force);

bool Element_hasAttribute(Element* self , jb_String * qualifiedName);

bool Element_hasAttributeNS(Element* self , jb_String * namespace_, jb_String * localName);

Attr Element_getAttributeNode(Element* self , jb_String * qualifiedName);

Attr Element_getAttributeNodeNS(Element* self , jb_String * namespace_, jb_String * localName);

Attr Element_setAttributeNode(Element* self , Attr * attr);

Attr Element_setAttributeNodeNS(Element* self , Attr * attr);

Attr Element_removeAttributeNode(Element* self , Attr * attr);

ShadowRoot Element_attachShadow(Element* self , ShadowRootInit * init);

ShadowRoot Element_shadowRoot(const Element *self);

CustomElementRegistry Element_customElementRegistry(const Element *self);

Element Element_closest(Element* self , jb_String * selectors);

bool Element_matches(Element* self , jb_String * selectors);

bool Element_webkitMatchesSelector(Element* self , jb_String * selectors);

HTMLCollection Element_getElementsByTagName(Element* self , jb_String * qualifiedName);

HTMLCollection Element_getElementsByTagNameNS(Element* self , jb_String * namespace_, jb_String * localName);

HTMLCollection Element_getElementsByClassName(Element* self , jb_String * classNames);

Element Element_insertAdjacentElement(Element* self , jb_String * where, Element * element);

jb_Undefined Element_insertAdjacentText(Element* self , jb_String * where, jb_String * data);

Node Element_getSpatialNavigationContainer(Element* self );

jb_Array Element_focusableAreas0(Element* self );

jb_Array Element_focusableAreas1(Element* self , FocusableAreasOption * option);

Node Element_spatialNavigationSearch0(Element* self , SpatialNavigationDirection * dir);

Node Element_spatialNavigationSearch1(Element* self , SpatialNavigationDirection * dir, SpatialNavigationSearchOptions * options);

CSSPseudoElement Element_pseudo(Element* self , jb_String * type);

DOMTokenList Element_part(const Element *self);

StylePropertyMapReadOnly Element_computedStyleMap(Element* self );

DOMRectList Element_getClientRects(Element* self );

DOMRect Element_getBoundingClientRect(Element* self );

bool Element_checkVisibility0(Element* self );

bool Element_checkVisibility1(Element* self , CheckVisibilityOptions * options);

jb_Undefined Element_scrollIntoView0(Element* self );

jb_Undefined Element_scrollIntoView1(Element* self , jb_Any * arg);

jb_Undefined Element_scroll(Element* self , double x, double y);

jb_Undefined Element_scrollTo(Element* self , double x, double y);

jb_Undefined Element_scrollBy(Element* self , double x, double y);

double Element_scrollTop(const Element *self);

void Element_set_scrollTop(Element* self, double value);

double Element_scrollLeft(const Element *self);

void Element_set_scrollLeft(Element* self, double value);

long Element_scrollWidth(const Element *self);

long Element_scrollHeight(const Element *self);

long Element_clientTop(const Element *self);

long Element_clientLeft(const Element *self);

long Element_clientWidth(const Element *self);

long Element_clientHeight(const Element *self);

double Element_currentCSSZoom(const Element *self);

jb_String Element_elementTiming(const Element *self);

void Element_set_elementTiming(Element* self, jb_String * value);

jb_Promise Element_requestFullscreen0(Element* self );

jb_Promise Element_requestFullscreen1(Element* self , FullscreenOptions * options);

jb_Any Element_onfullscreenchange(const Element *self);

void Element_set_onfullscreenchange(Element* self, jb_Any * value);

jb_Any Element_onfullscreenerror(const Element *self);

void Element_set_onfullscreenerror(Element* self, jb_Any * value);

jb_Undefined Element_setHTMLUnsafe(Element* self , jb_Any * html);

jb_String Element_getHTML0(Element* self );

jb_String Element_getHTML1(Element* self , GetHTMLOptions * options);

jb_Any Element_innerHTML(const Element *self);

void Element_set_innerHTML(Element* self, jb_Any * value);

jb_Any Element_outerHTML(const Element *self);

void Element_set_outerHTML(Element* self, jb_Any * value);

jb_Undefined Element_insertAdjacentHTML(Element* self , jb_String * position, jb_Any * string);

jb_Undefined Element_setPointerCapture(Element* self , long pointerId);

jb_Undefined Element_releasePointerCapture(Element* self , long pointerId);

bool Element_hasPointerCapture(Element* self , long pointerId);

jb_Promise Element_requestPointerLock0(Element* self );

jb_Promise Element_requestPointerLock1(Element* self , PointerLockOptions * options);

jb_String Element_regionOverset(const Element *self);

jb_Array Element_getRegionFlowRanges(Element* self );

jb_Array Element_getBoxQuads0(Element* self );

jb_Array Element_getBoxQuads1(Element* self , BoxQuadOptions * options);

DOMQuad Element_convertQuadFromNode0(Element* self , DOMQuadInit * quad, jb_Any * from);

DOMQuad Element_convertQuadFromNode1(Element* self , DOMQuadInit * quad, jb_Any * from, ConvertCoordinateOptions * options);

DOMQuad Element_convertRectFromNode0(Element* self , DOMRectReadOnly * rect, jb_Any * from);

DOMQuad Element_convertRectFromNode1(Element* self , DOMRectReadOnly * rect, jb_Any * from, ConvertCoordinateOptions * options);

DOMPoint Element_convertPointFromNode0(Element* self , DOMPointInit * point, jb_Any * from);

DOMPoint Element_convertPointFromNode1(Element* self , DOMPointInit * point, jb_Any * from, ConvertCoordinateOptions * options);

HTMLCollection Element_children(const Element *self);

Element Element_firstElementChild(const Element *self);

Element Element_lastElementChild(const Element *self);

unsigned long Element_childElementCount(const Element *self);

jb_Undefined Element_prepend(Element* self , jb_Any * nodes);

jb_Undefined Element_append(Element* self , jb_Any * nodes);

jb_Undefined Element_replaceChildren(Element* self , jb_Any * nodes);

jb_Undefined Element_moveBefore(Element* self , Node * node, Node * child);

Element Element_querySelector(Element* self , jb_String * selectors);

NodeList Element_querySelectorAll(Element* self , jb_String * selectors);

Element Element_previousElementSibling(const Element *self);

Element Element_nextElementSibling(const Element *self);

jb_Undefined Element_before(Element* self , jb_Any * nodes);

jb_Undefined Element_after(Element* self , jb_Any * nodes);

jb_Undefined Element_replaceWith(Element* self , jb_Any * nodes);

jb_Undefined Element_remove(Element* self );

HTMLSlotElement Element_assignedSlot(const Element *self);

jb_String Element_role(const Element *self);

void Element_set_role(Element* self, jb_String * value);

Element Element_ariaActiveDescendantElement(const Element *self);

void Element_set_ariaActiveDescendantElement(Element* self, Element * value);

jb_String Element_ariaAtomic(const Element *self);

void Element_set_ariaAtomic(Element* self, jb_String * value);

jb_String Element_ariaAutoComplete(const Element *self);

void Element_set_ariaAutoComplete(Element* self, jb_String * value);

jb_String Element_ariaBrailleLabel(const Element *self);

void Element_set_ariaBrailleLabel(Element* self, jb_String * value);

jb_String Element_ariaBrailleRoleDescription(const Element *self);

void Element_set_ariaBrailleRoleDescription(Element* self, jb_String * value);

jb_String Element_ariaBusy(const Element *self);

void Element_set_ariaBusy(Element* self, jb_String * value);

jb_String Element_ariaChecked(const Element *self);

void Element_set_ariaChecked(Element* self, jb_String * value);

jb_String Element_ariaColCount(const Element *self);

void Element_set_ariaColCount(Element* self, jb_String * value);

jb_String Element_ariaColIndex(const Element *self);

void Element_set_ariaColIndex(Element* self, jb_String * value);

jb_String Element_ariaColIndexText(const Element *self);

void Element_set_ariaColIndexText(Element* self, jb_String * value);

jb_String Element_ariaColSpan(const Element *self);

void Element_set_ariaColSpan(Element* self, jb_String * value);

jb_Array Element_ariaControlsElements(const Element *self);

void Element_set_ariaControlsElements(Element* self, jb_Array * value);

jb_String Element_ariaCurrent(const Element *self);

void Element_set_ariaCurrent(Element* self, jb_String * value);

jb_Array Element_ariaDescribedByElements(const Element *self);

void Element_set_ariaDescribedByElements(Element* self, jb_Array * value);

jb_String Element_ariaDescription(const Element *self);

void Element_set_ariaDescription(Element* self, jb_String * value);

jb_Array Element_ariaDetailsElements(const Element *self);

void Element_set_ariaDetailsElements(Element* self, jb_Array * value);

jb_String Element_ariaDisabled(const Element *self);

void Element_set_ariaDisabled(Element* self, jb_String * value);

jb_Array Element_ariaErrorMessageElements(const Element *self);

void Element_set_ariaErrorMessageElements(Element* self, jb_Array * value);

jb_String Element_ariaExpanded(const Element *self);

void Element_set_ariaExpanded(Element* self, jb_String * value);

jb_Array Element_ariaFlowToElements(const Element *self);

void Element_set_ariaFlowToElements(Element* self, jb_Array * value);

jb_String Element_ariaHasPopup(const Element *self);

void Element_set_ariaHasPopup(Element* self, jb_String * value);

jb_String Element_ariaHidden(const Element *self);

void Element_set_ariaHidden(Element* self, jb_String * value);

jb_String Element_ariaInvalid(const Element *self);

void Element_set_ariaInvalid(Element* self, jb_String * value);

jb_String Element_ariaKeyShortcuts(const Element *self);

void Element_set_ariaKeyShortcuts(Element* self, jb_String * value);

jb_String Element_ariaLabel(const Element *self);

void Element_set_ariaLabel(Element* self, jb_String * value);

jb_Array Element_ariaLabelledByElements(const Element *self);

void Element_set_ariaLabelledByElements(Element* self, jb_Array * value);

jb_String Element_ariaLevel(const Element *self);

void Element_set_ariaLevel(Element* self, jb_String * value);

jb_String Element_ariaLive(const Element *self);

void Element_set_ariaLive(Element* self, jb_String * value);

jb_String Element_ariaModal(const Element *self);

void Element_set_ariaModal(Element* self, jb_String * value);

jb_String Element_ariaMultiLine(const Element *self);

void Element_set_ariaMultiLine(Element* self, jb_String * value);

jb_String Element_ariaMultiSelectable(const Element *self);

void Element_set_ariaMultiSelectable(Element* self, jb_String * value);

jb_String Element_ariaOrientation(const Element *self);

void Element_set_ariaOrientation(Element* self, jb_String * value);

jb_Array Element_ariaOwnsElements(const Element *self);

void Element_set_ariaOwnsElements(Element* self, jb_Array * value);

jb_String Element_ariaPlaceholder(const Element *self);

void Element_set_ariaPlaceholder(Element* self, jb_String * value);

jb_String Element_ariaPosInSet(const Element *self);

void Element_set_ariaPosInSet(Element* self, jb_String * value);

jb_String Element_ariaPressed(const Element *self);

void Element_set_ariaPressed(Element* self, jb_String * value);

jb_String Element_ariaReadOnly(const Element *self);

void Element_set_ariaReadOnly(Element* self, jb_String * value);

jb_String Element_ariaRelevant(const Element *self);

void Element_set_ariaRelevant(Element* self, jb_String * value);

jb_String Element_ariaRequired(const Element *self);

void Element_set_ariaRequired(Element* self, jb_String * value);

jb_String Element_ariaRoleDescription(const Element *self);

void Element_set_ariaRoleDescription(Element* self, jb_String * value);

jb_String Element_ariaRowCount(const Element *self);

void Element_set_ariaRowCount(Element* self, jb_String * value);

jb_String Element_ariaRowIndex(const Element *self);

void Element_set_ariaRowIndex(Element* self, jb_String * value);

jb_String Element_ariaRowIndexText(const Element *self);

void Element_set_ariaRowIndexText(Element* self, jb_String * value);

jb_String Element_ariaRowSpan(const Element *self);

void Element_set_ariaRowSpan(Element* self, jb_String * value);

jb_String Element_ariaSelected(const Element *self);

void Element_set_ariaSelected(Element* self, jb_String * value);

jb_String Element_ariaSetSize(const Element *self);

void Element_set_ariaSetSize(Element* self, jb_String * value);

jb_String Element_ariaSort(const Element *self);

void Element_set_ariaSort(Element* self, jb_String * value);

jb_String Element_ariaValueMax(const Element *self);

void Element_set_ariaValueMax(Element* self, jb_String * value);

jb_String Element_ariaValueMin(const Element *self);

void Element_set_ariaValueMin(Element* self, jb_String * value);

jb_String Element_ariaValueNow(const Element *self);

void Element_set_ariaValueNow(Element* self, jb_String * value);

jb_String Element_ariaValueText(const Element *self);

void Element_set_ariaValueText(Element* self, jb_String * value);

Animation Element_animate0(Element* self , jb_Object * keyframes);

Animation Element_animate1(Element* self , jb_Object * keyframes, jb_Any * options);

jb_Array Element_getAnimations0(Element* self );

jb_Array Element_getAnimations1(Element* self , GetAnimationsOptions * options);
