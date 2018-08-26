cmake_minimum_required(VERSION 3.11)

set(CMAKE_C_STANDARD 11)

add_subdirectory(vector)

add_executable(test test.c)

target_sources(test PRIVATE $<TARGET_OBJECTS:vector_char>)
target_sources(test PRIVATE $<TARGET_OBJECTS:vector_double>)
target_sources(test PRIVATE $<TARGET_OBJECTS:vector_float>)
target_sources(test PRIVATE $<TARGET_OBJECTS:vector_int>)
target_sources(test PRIVATE $<TARGET_OBJECTS:vector_long>)
target_sources(test PRIVATE $<TARGET_OBJECTS:vector_short>)
target_sources(test PRIVATE $<TARGET_OBJECTS:vector_uchar>)
target_sources(test PRIVATE $<TARGET_OBJECTS:vector_ulong>)
target_sources(test PRIVATE $<TARGET_OBJECTS:vector_ushort>)