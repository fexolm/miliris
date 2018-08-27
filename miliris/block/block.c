#include <miliris/block/_block_generic.h>
#include <miliris/internal/_config.h>

#define __MIL_BLOCK __MIL_GENERIC(mil_block)

struct __MIL_BLOCK *
__MIL_GENERIC(mil_alloc_block)
    (size_t len) {
  size_t size = sizeof(struct __MIL_BLOCK) + sizeof(__MIL_TYPE) * len;
  void *data = aligned_alloc(__MIL_ALIGNMENT, size);

  struct __MIL_BLOCK *block = data;
  block->size = len;
  block->links = 1;
  block->data = data + sizeof(struct __MIL_BLOCK);

  return block;
}

void
__MIL_GENERIC(mil_free_block)
    (struct __MIL_BLOCK * block) {
  free(block);
}

#undef __MIL_BLOCK