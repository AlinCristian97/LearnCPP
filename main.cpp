// Managing Class Objects Through Pointers

#include <iostream>
#include "cylinder.h"

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main()
{

    Cylinder cylinder1(10,10);

    cylinder1.volume();

    // Managing a stack object through pointers
    Cylinder* p_cylinder1 = $cylinder1;

    // std::cout << "volume: " << (*p_cylinder1).volume() << std::endl;
    std::cout << "volume(cylinder1): " << p_cylinder1->volume() << std::endl;

    // Create a cylinder heap object through the new operator
    Cylinder* p_cylinder2 = new Cylinder(100, 2); // Heap

    std::cout << "volume(cylinder2): " << p_cylinder2->volume() << std::endl;
    std::cout << "base_radius(cylinder2): " << p_cylinder2->get_base_radius() << std::endl;


    delete p_cylinder2;

	return 0;

}