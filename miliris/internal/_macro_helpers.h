#ifndef __MIL_MACRO_HELPERS_H__
#define __MIL_MACRO_HELPERS_H__

#define __MIL_CONCAT_(A, B) A ## B

#define __MIL_CONCAT2(A, B) __MIL_CONCAT_(A, B)

#define __MIL_CONCAT3(A, B, C) __MIL_CONCAT2(A, __MIL_CONCAT2(B, C))

#define __MIL_GENERIC(A) __MIL_CONCAT3(A, _, __MIL_TYPE)

#define __MIL_GENERIC_INCLUDE_PATH__(A, B) <A ## _ ## B.h>

#define __MIL_GENERIC_INCLUDE_PATH_(A, B) __MIL_GENERIC_INCLUDE_PATH__(A, B)

#define __MIL_GENERIC_INCLUDE_PATH(A) __MIL_GENERIC_INCLUDE_PATH_(A, __MIL_TYPE)

#endif