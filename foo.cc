#include <iostream>

using namespace std;

int main() {
#if defined(USE_LLVM_SET)
  cout << "Using Clang or AppleClang based compiler (use set) !" << endl;
#endif
#if defined(USE_LLVM_OR)
  cout << "Using Clang or AppleClang based compiler (use or) !" << endl;
#endif

#if defined(USE_CLANG)
  cout << "Using Clang compiler !" << endl;
#endif
#if defined(USE_APPLE_CLANG)
  cout << "Using Apple Clang compiler !" << endl;
#endif

#if !defined(USE_CLANG) && !defined(USE_APPLE_CLANG)
  cout << "using unknow compiler !" << endl;
#endif
  return 0;
}
