#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MemoryDescriptor MemoryDescriptor;

DECLARE_EMLITE_TYPE(Memory, em_Val);

Memory Memory_new(MemoryDescriptor * descriptor);

unsigned long Memory_grow(Memory* self , unsigned long delta);

jb_ArrayBuffer Memory_toFixedLengthBuffer(Memory* self );

jb_ArrayBuffer Memory_toResizableBuffer(Memory* self );

jb_ArrayBuffer Memory_buffer(const Memory *self);

#ifdef __cplusplus
}
#endif
