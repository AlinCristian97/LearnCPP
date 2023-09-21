// Pass by value

#include <iostream>

void say_age(int age){ // Parameter
    ++age;
    std::cout <<  "Hello , you are " << age << " years old! &age : " << &age <<  std::endl;
}

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main()
{

    int age{23}; // Local
    std::cout << "age (before call) : " << age << "&age : " << &age << std::endl;

    say_age(age); // Argument
    std::cout << "age (after call) : " << age << "&age : " << &age <<  std::endl;

    return 0;

}