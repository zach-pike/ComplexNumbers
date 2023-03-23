cmake_minimum_required(VERSION 3.25.2)

project(LibCmplxNum)

file(GLOB_RECURSE LIB_SRCS src/lib/*.cpp)
file(GLOB_RECURSE TEST_SRCS src/examples/test1/*.cpp)

include_directories(src/lib/)

add_library(cmplxnum SHARED ${LIB_SRCS})
add_executable(main ${TEST_SRCS})

link_directories(${CMAKE_BINARY_DIR}/)
target_link_libraries(main cmplxnum)