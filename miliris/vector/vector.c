#include <miliris/vector/_vector_generic.h>

#define __MIL_VECTOR __MIL_GENERIC(mil_vector)

struct __MIL_VECTOR *
__MIL_GENERIC(mil_alloc_vector)
    (size_t len) {
  struct __MIL_VECTOR *vect = malloc(sizeof(struct __MIL_VECTOR));
  vect->block = __MIL_GENERIC(mil_block_alloc)(len);
  return vect;
}

void
__MIL_GENERIC(mil_vector_free)
    (struct __MIL_VECTOR *v) {
  __MIL_GENERIC(mil_block_free)(v->block);
  free(v);
}

void
__MIL_GENERIC(mil_vector_sum)
    (struct __MIL_VECTOR *result,
     struct __MIL_VECTOR *lhs,
     struct __MIL_VECTOR *rhs) {
  __MIL_TYPE *block1 = lhs->block->data;
  __MIL_TYPE *block2 = rhs->block->data;
  __MIL_TYPE *block3 = result->block->data;

  size_t len = lhs->block->size;

  for(int i=0; i<len; i++) {
    block3[i] = block1[i] + block2[i];
  }
}

#undef __MIL_VECTOR