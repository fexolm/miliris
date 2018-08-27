#ifndef __MIL_VECTOR_GENERIC_H__
#define __MIL_VECTOR_GENERIC_H__
#include <stdlib.h>
#include <miliris/internal/_macro_helpers.h>
#include <miliris/internal/_typedefs.h>
#include __MIL_GENERIC_INCLUDE_PATH(miliris/block/block)

#endif

#define __MIL_VECTOR __MIL_GENERIC(mil_vector)

struct __MIL_VECTOR {
  struct __MIL_GENERIC(mil_block) *block;
};

struct __MIL_VECTOR *
__MIL_GENERIC(mil_vector_alloc)
    (size_t len);

void
__MIL_GENERIC(mil_vector_free)
    (struct __MIL_VECTOR *v);

inline size_t
__MIL_GENERIC(mil_vector_len)
    (struct __MIL_VECTOR *v);

inline __MIL_TYPE
__MIL_GENERIC(mil_vector_get_element)
    (struct __MIL_VECTOR *v,
     size_t n);

inline void
__MIL_GENERIC(mil_vector_set_element)
    (struct __MIL_VECTOR *v,
     size_t n,
     __MIL_TYPE value);

void
__MIL_GENERIC(mil_vector_sum)
    (struct __MIL_VECTOR *result,
     struct __MIL_VECTOR *lhs,
     struct __MIL_VECTOR *rhs);

#include "vector.inl"
#undef __MIL_VECTOR
