// Copy constructors with Inheritance

#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main()
{
	/*
	Engineer eng1("Daniel Gray",41,"Green Sky Oh Blue 33St#75",12);

	std::cout << "----------" <<  std::endl;

	Engineer eng2(eng1);
	std::cout << "eng2 : " << eng2 << std::endl;
	*/

	CivilEngineer eng1("Daniel Gray",41,"Green Sky Oh Blue 33St#75",12,"Road Strength");

	std::cout << "----------" <<  std::endl;

	CivilEngineer eng2(eng1);
	std::cout << "eng2 : " << eng2 << std::endl;

	return 0;

}