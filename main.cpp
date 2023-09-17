// Statements and Functions

#include <iostream>

int addNumbers(int firstParam, int secondParam) {
  int result = firstParam + secondParam;
  return result;
}

int main() {

  int firstNumber {3}; // Statement
  int secondNumber = 7;

  std::cout << "First number: " << firstNumber << std::endl;
  std::cout << "Second number: " << secondNumber << std::endl;

  int sum = firstNumber + secondNumber;
  std::cout << "Direct Sum: " << sum << std::endl;

  sum = addNumbers(25, 5);
  std::cout << "Function Sum: " << sum << std::endl;

  return 0;
}