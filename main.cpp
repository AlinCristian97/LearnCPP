// Class Across Multiple Files

#include <iostream>
#include "cylinder.h"

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main()
{

    Cylinder cylinder1(10,10);
    std::cout << "volume : " << cylinder1.volume() << std::endl;

	return 0;

}