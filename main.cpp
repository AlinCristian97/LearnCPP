// Input Output IO

#include <iostream>
#include <string>

int main() {
  // Printing Data
  // std::cout << "Hello C++20 " << std::endl;

  // int age {21};
  // std::cout << "Age: " << age << std::endl;
  
  // std::cerr << "Error!" << std::endl;
  // std::clog << "Info Log!" << std::endl;

  //Input Data
  int age1;
  std::string name;

  // std::cout << "Please type your name and age: " << std::endl;

  // // std::cin >> name;
  // // std::cin >> age1;
  // std::cin >> name >> age1;

  // std::cout << "Hello " << name << " you are " << age1 << " years old!" << std::endl;

  // Data with spaces

  std::string fullName;
  int age2;

  std::cout << "Please type in your full name and age " << std::endl;

  std::getline(std::cin, fullName);
  std::cin >> age2;

    std::cout << "Hello " << fullName << " you are " << age2 << " years old!" << std::endl;

  return 0;
}