#ifndef __MIL_BLOCK_GENERIC_H__
#define __MIL_BLOCK_GENERIC_H__

#include <stdlib.h>
#include <miliris/internal/_macro_helpers.h>
#include <miliris/internal/_typedefs.h>

#endif

#define __MIL_BLOCK __MIL_GENERIC(mil_block)

struct __MIL_BLOCK {
  size_t size;
  size_t links;
  __MIL_TYPE * data;
};

struct __MIL_BLOCK *
__MIL_GENERIC(mil_block_alloc)
    (size_t len);

void
__MIL_GENERIC(mil_block_free)
    (struct __MIL_BLOCK *block);

inline size_t
__MIL_GENERIC(mil_block_length)
    (struct __MIL_BLOCK *block);

inline __MIL_TYPE
__MIL_GENERIC(mil_block_get_element)
    (struct __MIL_BLOCK *block,
     size_t n);

inline void
__MIL_GENERIC(mil_block_set_element)
    (struct __MIL_BLOCK *block,
     size_t n,
     __MIL_TYPE value);

#include "block.inl"

#undef __MIL_BLOCK
