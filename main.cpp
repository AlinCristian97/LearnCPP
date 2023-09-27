// Virtual Destructors

#include <iostream>
#include "dog.h"

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main(){

    Animal * p_animal = new Dog;

    delete p_animal;

    return 0;

}