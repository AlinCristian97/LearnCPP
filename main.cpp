// Trying out Function Templates

#include <iostream>

template <typename T>
T maximum(T a , T b){
    return (a > b)? a : b; 
}

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main()
{

    int x{5};
    int y{7};

    int* p_x {&x};
    int* p_y{&y};

    auto result = maximum(p_x,p_y);
    std::cout << "result : " << *result << std::endl;

	return 0;

}