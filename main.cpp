// Functions across Multiple Files

#include <iostream>
#include "compare.h"
#include "operations.h"

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main()
{

    int maximum = max(34, 56);
    std::cout << "max: " << max << std::endl;

    int minimum = min(143, 23);
    std::cout << "min: " << min << std:endl;

    int x {4};
    int y {5};

    int result = incr_mult(x, y);

    std::cout << "result: " << result << std::endl;

    return 0;

}