// Overloading, Overriding And Hiding

#include <iostream>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main(){
    
    Shape * shape_ptr = new Circle(10,"Circle1");
    shape_ptr->draw(45,"Red");

    return 0;

}