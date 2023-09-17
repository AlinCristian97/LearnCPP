#include <iostream>

int main() {
  // Compile-time error
  // std::cout << "Hello World!" << std::endl // Uncomment this line to see the compile-time error in effect

  // Run-time error
  int value = 7/0;
  std::cout << "value: " << value << std::endl;

  return 0;
}