[![Build Status](https://travis-ci.org/Mizux/cmp0025.svg?branch=master)](https://travis-ci.org/Mizux/cmp0025)

# CMake CMP0025
Test `CXX_COMPILER_ID` behaviour in generator expression while using `CMP0025` to `NEW`

## Policy CMP0025
[CMP0025](https://cmake.org/cmake/help/latest/policy/CMP0025.html): Compiler id for Apple Clang is now `AppleClang`.

When using `$<CXX_COMPILER_ID:Clang>` and having CMP0025 to `NEW` then AppleClang won't match it.

