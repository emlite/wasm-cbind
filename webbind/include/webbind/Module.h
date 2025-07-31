#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


typedef struct ModuleExportDescriptor ModuleExportDescriptor;
typedef struct Module Module;
typedef struct ModuleImportDescriptor ModuleImportDescriptor;


DECLARE_EMLITE_TYPE(ModuleExportDescriptor, em_Val);

jb_String ModuleExportDescriptor_name(const ModuleExportDescriptor *self);

void ModuleExportDescriptor_set_name(ModuleExportDescriptor* self, jb_String * value);

ImportExportKind ModuleExportDescriptor_kind(const ModuleExportDescriptor *self);

void ModuleExportDescriptor_set_kind(ModuleExportDescriptor* self, ImportExportKind * value);
DECLARE_EMLITE_TYPE(ModuleImportDescriptor, em_Val);

jb_String ModuleImportDescriptor_module_(const ModuleImportDescriptor *self);

void ModuleImportDescriptor_set_module_(ModuleImportDescriptor* self, jb_String * value);

jb_String ModuleImportDescriptor_name(const ModuleImportDescriptor *self);

void ModuleImportDescriptor_set_name(ModuleImportDescriptor* self, jb_String * value);

ImportExportKind ModuleImportDescriptor_kind(const ModuleImportDescriptor *self);

void ModuleImportDescriptor_set_kind(ModuleImportDescriptor* self, ImportExportKind * value);
DECLARE_EMLITE_TYPE(Module, em_Val);

Module Module_new(jb_Any * bytes);

jb_Array Module_exports(Module* self , Module * moduleObject);

jb_Array Module_imports(Module* self , Module * moduleObject);

jb_Array Module_customSections(Module* self , Module * moduleObject, jb_String * sectionName);
