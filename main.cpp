// Pass by reference

#include <iostream>

void say_age(int& age); // Declaration

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main()
{

    int age{23}; // Local
    std::cout << "age (before call) : " << age << "&age : " << &age << std::endl; //23

    say_age(age); // Argument

    std::cout << "age (after call) : " << age << "&age : " << &age <<  std::endl; //24

    return 0;

}

void say_age(int& age) { // Parameter
    ++age; 
    std::cout <<  "Hello , you are " << age << " years old! &age : " << &age <<  std::endl; //24
}