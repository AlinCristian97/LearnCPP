// Reused Symbols In Inheritance

#include <iostream>
#include "child.h"

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main()
{

	Child child(33);
    child.print_var();// Calls the method in Child
    child.Parent::print_var(); // Calls the method in Parent, 
                               // value in parent just contains junk or whatever
                               // in class initialization we did.
							   
    std::cout << "--------" << std::endl;
    child.show_values();

	return 0;

}