cmake_minimum_required(VERSION 3.1)
if (POLICY CMP0025)
  cmake_policy(SET CMP0025 NEW)
endif()

project(cmp0025 VERSION 1.0)

set(CMAKE_VERBOSE_MAKEFILE ON)
message(STATUS "Compiler Id: ${CMAKE_CXX_COMPILER_ID}")

if("${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang")
  set(USING_LLVM ON)
else()
  set(USING_LLVM OFF)
endif()


add_executable(foo "foo.cc")
target_compile_options(foo PUBLIC
  $<$<BOOL:${USING_LLVM}>:-DUSE_LLVM>
  $<$<CXX_COMPILER_ID:Clang>:-DUSE_CLANG>
  $<$<CXX_COMPILER_ID:AppleClang>:-DUSE_APPLE_CLANG>)

add_custom_command(TARGET foo COMMAND foo)
