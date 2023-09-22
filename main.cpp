// Template type parameters by reference

#include <iostream>

template <typename T> const T& maximum(const T& a, const T& b); // Declaration
//template <typename T> T maximum(T a, T b); // Declaration

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main()
{

    double a {23.5};
    double b {51.2};

    std::cout << "Out - &a: " << &a << std::endl; // 0x111abc

    auto result = maximum(a,b);
    
    std::cout << "Out - &a: " << &a << std::endl; // 0x111abc

	return 0;

}

//Definition
template <typename T> const T& maximum(const T& a, const T& b){
    std::cout << "In - &a: " << &a << std::endl; // // 0x111abc
    return (a > b ) ? a : b ;
}

/*
template <typename T> T maximum(T a, T b){
    std::cout << "In - &a: " << &a << std::endl; // // 0x111abc
    return (a > b ) ? a : b ;
}
*/