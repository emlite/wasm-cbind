#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ShadowRoot ShadowRoot;
typedef struct HTMLFormElement HTMLFormElement;
typedef struct ValidityStateFlags ValidityStateFlags;
typedef struct HTMLElement HTMLElement;
typedef struct ValidityState ValidityState;
typedef struct NodeList NodeList;
typedef struct CustomStateSet CustomStateSet;
typedef struct Element Element;


DECLARE_EMLITE_TYPE(ValidityStateFlags, em_Val);

bool ValidityStateFlags_valueMissing(const ValidityStateFlags *self);

void ValidityStateFlags_set_valueMissing(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_typeMismatch(const ValidityStateFlags *self);

void ValidityStateFlags_set_typeMismatch(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_patternMismatch(const ValidityStateFlags *self);

void ValidityStateFlags_set_patternMismatch(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_tooLong(const ValidityStateFlags *self);

void ValidityStateFlags_set_tooLong(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_tooShort(const ValidityStateFlags *self);

void ValidityStateFlags_set_tooShort(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_rangeUnderflow(const ValidityStateFlags *self);

void ValidityStateFlags_set_rangeUnderflow(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_rangeOverflow(const ValidityStateFlags *self);

void ValidityStateFlags_set_rangeOverflow(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_stepMismatch(const ValidityStateFlags *self);

void ValidityStateFlags_set_stepMismatch(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_badInput(const ValidityStateFlags *self);

void ValidityStateFlags_set_badInput(ValidityStateFlags* self, bool value);

bool ValidityStateFlags_customError(const ValidityStateFlags *self);

void ValidityStateFlags_set_customError(ValidityStateFlags* self, bool value);
DECLARE_EMLITE_TYPE(ElementInternals, em_Val);

ShadowRoot ElementInternals_shadowRoot(const ElementInternals *self);

jb_Undefined ElementInternals_setFormValue0(ElementInternals* self , jb_Any * value);

jb_Undefined ElementInternals_setFormValue1(ElementInternals* self , jb_Any * value, jb_Any * state);

HTMLFormElement ElementInternals_form(const ElementInternals *self);

jb_Undefined ElementInternals_setValidity0(ElementInternals* self );

jb_Undefined ElementInternals_setValidity1(ElementInternals* self , ValidityStateFlags * flags);

jb_Undefined ElementInternals_setValidity2(ElementInternals* self , ValidityStateFlags * flags, jb_String * message);

jb_Undefined ElementInternals_setValidity3(ElementInternals* self , ValidityStateFlags * flags, jb_String * message, HTMLElement * anchor);

bool ElementInternals_willValidate(const ElementInternals *self);

ValidityState ElementInternals_validity(const ElementInternals *self);

jb_String ElementInternals_validationMessage(const ElementInternals *self);

bool ElementInternals_checkValidity(ElementInternals* self );

bool ElementInternals_reportValidity(ElementInternals* self );

NodeList ElementInternals_labels(const ElementInternals *self);

CustomStateSet ElementInternals_states(const ElementInternals *self);

jb_String ElementInternals_role(const ElementInternals *self);

void ElementInternals_set_role(ElementInternals* self, jb_String * value);

Element ElementInternals_ariaActiveDescendantElement(const ElementInternals *self);

void ElementInternals_set_ariaActiveDescendantElement(ElementInternals* self, Element * value);

jb_String ElementInternals_ariaAtomic(const ElementInternals *self);

void ElementInternals_set_ariaAtomic(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaAutoComplete(const ElementInternals *self);

void ElementInternals_set_ariaAutoComplete(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaBrailleLabel(const ElementInternals *self);

void ElementInternals_set_ariaBrailleLabel(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaBrailleRoleDescription(const ElementInternals *self);

void ElementInternals_set_ariaBrailleRoleDescription(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaBusy(const ElementInternals *self);

void ElementInternals_set_ariaBusy(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaChecked(const ElementInternals *self);

void ElementInternals_set_ariaChecked(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaColCount(const ElementInternals *self);

void ElementInternals_set_ariaColCount(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaColIndex(const ElementInternals *self);

void ElementInternals_set_ariaColIndex(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaColIndexText(const ElementInternals *self);

void ElementInternals_set_ariaColIndexText(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaColSpan(const ElementInternals *self);

void ElementInternals_set_ariaColSpan(ElementInternals* self, jb_String * value);

jb_Array ElementInternals_ariaControlsElements(const ElementInternals *self);

void ElementInternals_set_ariaControlsElements(ElementInternals* self, jb_Array * value);

jb_String ElementInternals_ariaCurrent(const ElementInternals *self);

void ElementInternals_set_ariaCurrent(ElementInternals* self, jb_String * value);

jb_Array ElementInternals_ariaDescribedByElements(const ElementInternals *self);

void ElementInternals_set_ariaDescribedByElements(ElementInternals* self, jb_Array * value);

jb_String ElementInternals_ariaDescription(const ElementInternals *self);

void ElementInternals_set_ariaDescription(ElementInternals* self, jb_String * value);

jb_Array ElementInternals_ariaDetailsElements(const ElementInternals *self);

void ElementInternals_set_ariaDetailsElements(ElementInternals* self, jb_Array * value);

jb_String ElementInternals_ariaDisabled(const ElementInternals *self);

void ElementInternals_set_ariaDisabled(ElementInternals* self, jb_String * value);

jb_Array ElementInternals_ariaErrorMessageElements(const ElementInternals *self);

void ElementInternals_set_ariaErrorMessageElements(ElementInternals* self, jb_Array * value);

jb_String ElementInternals_ariaExpanded(const ElementInternals *self);

void ElementInternals_set_ariaExpanded(ElementInternals* self, jb_String * value);

jb_Array ElementInternals_ariaFlowToElements(const ElementInternals *self);

void ElementInternals_set_ariaFlowToElements(ElementInternals* self, jb_Array * value);

jb_String ElementInternals_ariaHasPopup(const ElementInternals *self);

void ElementInternals_set_ariaHasPopup(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaHidden(const ElementInternals *self);

void ElementInternals_set_ariaHidden(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaInvalid(const ElementInternals *self);

void ElementInternals_set_ariaInvalid(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaKeyShortcuts(const ElementInternals *self);

void ElementInternals_set_ariaKeyShortcuts(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaLabel(const ElementInternals *self);

void ElementInternals_set_ariaLabel(ElementInternals* self, jb_String * value);

jb_Array ElementInternals_ariaLabelledByElements(const ElementInternals *self);

void ElementInternals_set_ariaLabelledByElements(ElementInternals* self, jb_Array * value);

jb_String ElementInternals_ariaLevel(const ElementInternals *self);

void ElementInternals_set_ariaLevel(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaLive(const ElementInternals *self);

void ElementInternals_set_ariaLive(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaModal(const ElementInternals *self);

void ElementInternals_set_ariaModal(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaMultiLine(const ElementInternals *self);

void ElementInternals_set_ariaMultiLine(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaMultiSelectable(const ElementInternals *self);

void ElementInternals_set_ariaMultiSelectable(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaOrientation(const ElementInternals *self);

void ElementInternals_set_ariaOrientation(ElementInternals* self, jb_String * value);

jb_Array ElementInternals_ariaOwnsElements(const ElementInternals *self);

void ElementInternals_set_ariaOwnsElements(ElementInternals* self, jb_Array * value);

jb_String ElementInternals_ariaPlaceholder(const ElementInternals *self);

void ElementInternals_set_ariaPlaceholder(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaPosInSet(const ElementInternals *self);

void ElementInternals_set_ariaPosInSet(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaPressed(const ElementInternals *self);

void ElementInternals_set_ariaPressed(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaReadOnly(const ElementInternals *self);

void ElementInternals_set_ariaReadOnly(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaRelevant(const ElementInternals *self);

void ElementInternals_set_ariaRelevant(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaRequired(const ElementInternals *self);

void ElementInternals_set_ariaRequired(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaRoleDescription(const ElementInternals *self);

void ElementInternals_set_ariaRoleDescription(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaRowCount(const ElementInternals *self);

void ElementInternals_set_ariaRowCount(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaRowIndex(const ElementInternals *self);

void ElementInternals_set_ariaRowIndex(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaRowIndexText(const ElementInternals *self);

void ElementInternals_set_ariaRowIndexText(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaRowSpan(const ElementInternals *self);

void ElementInternals_set_ariaRowSpan(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaSelected(const ElementInternals *self);

void ElementInternals_set_ariaSelected(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaSetSize(const ElementInternals *self);

void ElementInternals_set_ariaSetSize(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaSort(const ElementInternals *self);

void ElementInternals_set_ariaSort(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaValueMax(const ElementInternals *self);

void ElementInternals_set_ariaValueMax(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaValueMin(const ElementInternals *self);

void ElementInternals_set_ariaValueMin(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaValueNow(const ElementInternals *self);

void ElementInternals_set_ariaValueNow(ElementInternals* self, jb_String * value);

jb_String ElementInternals_ariaValueText(const ElementInternals *self);

void ElementInternals_set_ariaValueText(ElementInternals* self, jb_String * value);
