#include <iostream>

using namespace std;

int main() {
#if defined(USE_CLANG)
  cout << "Using Clang compiler !" << endl;
#endif
#if defined(USE_APPLE_CLANG)
  cout << "Using Apple Clang compiler !" << endl;
#endif
#if not defined(USE_CLANG) && not defined(USE_APPLE_CLANG)
  cout << "using unknow compiler !" << endl;
#endif

#if defined(USE_LLVM)
  cout << "Using an LLVM based compiler (Clang or AppleClang) !" << endl;
#endif
  return 0;
}
