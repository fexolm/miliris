#ifndef __MIL_VECTOR_H__
#define __MIL_VECTOR_H__

#ifdef __MIL_TYPE
#define __MIL_TYPE_ __MIL_TYPE
#undef __MIL_TYPE
#endif

#include <miliris/block/block_char.h>
#include <miliris/block/block_double.h>
#include <miliris/block/block_float.h>
#include <miliris/block/block_int.h>
#include <miliris/block/block_long.h>
#include <miliris/block/block_long_double.h>
#include <miliris/block/block_short.h>
#include <miliris/block/block_uchar.h>
#include <miliris/block/block_ulong.h>
#include <miliris/block/block_ushort.h>

#ifdef __MIL_TYPE_
#define __MIL_TYPE __MIL_TYPE_
#undef __MIL_TYPE_
#endif