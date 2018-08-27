inline __MIL_TYPE
__MIL_GENERIC(mil_block_get_element)
    (struct __MIL_BLOCK *block,
     size_t n) {
  return block->data[n];
}

inline void
__MIL_GENERIC(mil_block_set_element)
    (struct __MIL_BLOCK *block,
     size_t n,
     __MIL_TYPE value) {
  block->data[n] = value;
}

inline size_t
__MIL_GENERIC(mil_block_length)
    (struct __MIL_BLOCK *block) {
  return block->size;
}