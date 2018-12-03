[![Build Status](https://travis-ci.org/Mizux/cmp0025.svg?branch=master)](https://travis-ci.org/Mizux/cmp0025)

# CMake CMP0025
Test `CXX_COMPILER_ID` behaviour in generator expression while using `CMP0025` to `NEW`

## Policy CMP0025
[CMP0025](https://cmake.org/cmake/help/latest/policy/CMP0025.html): Compiler id for Apple Clang is now `AppleClang`.

When using `$<CXX_COMPILER_ID:Clang>` and having CMP0025 to `NEW` then AppleClang won't match it.

To match both compilers with `CMP0025` set to `NEW`:
1. first create a variable:
```cmake
if("${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang")
  set(USING_LLVM ON)
else()
  set(USING_LLVM OFF)
endif()
```

2. Use it in your generator expression:
```cmake
$<$<BOOL:${USING_LLVM}>:-DUSE_LLVM>
```

note: you may also use:
```cmake
$<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>>:-DUSE_LLVM>
```

