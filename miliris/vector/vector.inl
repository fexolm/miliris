inline size_t
__MIL_GENERIC(mil_vector_len)
    (struct __MIL_VECTOR *v) {
  return __MIL_GENERIC(mil_block_length)(v->block);
}

inline __MIL_TYPE
__MIL_GENERIC(mil_vector_get_element)
    (struct __MIL_VECTOR *v,
     size_t n) {
  return __MIL_GENERIC(mil_block_get_element)(v->block, n);
}

inline void
__MIL_GENERIC(mil_vector_set_element)
    (struct __MIL_VECTOR *v,
     size_t n,
     __MIL_TYPE value) {
  return __MIL_GENERIC(mil_block_set_element)(v->block, n, value);
}