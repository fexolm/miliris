#ifndef __MIL_VECTOR_GENERIC__
#define __MIL_VECTOR_GENERIC__
#include <stdlib.h>

typedef long double long_double;
typedef unsigned char uchar;
typedef unsigned long ulong;
typedef unsigned short ushort;

#define __MIL_CONCAT_(A, B) A ## _ ## B

#define __MIL_CONCAT(A, B) __MIL_CONCAT_(A, B)

#define __MIL_ADD_TYPE_PREFIX(A) __MIL_CONCAT(A, __MIL_TYPE)

#endif

#define __MIL_VECTOR __MIL_ADD_TYPE_PREFIX(mil_vector)
struct __MIL_VECTOR {
  size_t size;
  __MIL_TYPE *data;
};

void
__MIL_ADD_TYPE_PREFIX(mil_vector_sum)
    (struct __MIL_VECTOR *result,
     struct __MIL_VECTOR *lhs,
     struct __MIL_VECTOR *rhs);

#undef __MIL_VECTOR
