cmake_minimum_required(VERSION 3.11)

set(SOURCES block.c)

set(CMAKE_C_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR})

foreach(TYPE char double float int long long_double short uchar ulong ushort)
    add_library(block_${TYPE} OBJECT ${SOURCES})
    target_compile_definitions(block_${TYPE} PRIVATE -D__MIL_TYPE=${TYPE})
    target_compile_options(block_${TYPE} PRIVATE ${COMPILE_FLAGS})
endforeach(TYPE)
