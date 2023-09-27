// Pure Virtual Functions And Abstract Classes

#include <iostream>
#include "circle.h"
#include "rectangle.h"

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main() {

   //Shape * shape_ptr = new Shape; // Compiler error

    const Shape * shape_rect = new Rectangle(10,10,"rect1");
    double surface = shape_rect->surface();
    std::cout << "dynamic type of shape_rect : " << typeid(*shape_rect).name() << std::endl;
    std::cout << "The surface of shape rect is : " << surface << std::endl;


    std::cout << "--------------" << std::endl;

    const Shape * shape_circle = new Circle(10,"circle1");
    surface = shape_circle->surface();
    std::cout << "dynamic type of shape_circle : " << typeid(*shape_circle).name() << std::endl;
    std::cout << "The surface of the circle is : " << surface << std::endl;

    return 0;

}