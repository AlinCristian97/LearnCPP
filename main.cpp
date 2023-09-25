// First Try On Inheritance

#include <iostream>
#include "player.h"

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main()
{

    Player p1("Basketball");
    p1.set_first_name("John");
    p1.set_last_name("Snow");
    std::cout << "player : " << p1 << std::endl;

	return 0;

}