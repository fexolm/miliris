cmake_minimum_required(VERSION 3.11)

set(CMAKE_C_STANDARD 11)

set(COMPILE_FLAGS -g -fPIC -Ofast -Winline -Wall -march=native -flto -ftree-vectorize
        -fopt-info-missed-all=vec.miss)

add_subdirectory(vector)
add_subdirectory(block)

add_library(miliris SHARED)

include_directories(${PROJECT_SOURCE_DIR})

foreach(TYPE char double float int long long_double short uchar ulong ushort)
    target_sources(miliris PRIVATE $<TARGET_OBJECTS:vector_${TYPE}>)
    target_sources(miliris PRIVATE $<TARGET_OBJECTS:block_${TYPE}>)
endforeach(TYPE)

target_compile_options(miliris PRIVATE ${COMPILE_FLAGS})