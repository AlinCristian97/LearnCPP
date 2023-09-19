// Pointer to Char

#include <iostream>

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main()
{

	const char* message {"Hello World!"};
	std::cout << "message : " << message << std::endl;

	//*message = "B"; // Compiler error
	std::cout << "*message : " << *message << std::endl; // dereference

	//Allow users to modify the string
	char message1[] {"Hello World!"};
	message1[0] = 'B';
	std::cout << "message1 : " << message1 << std::endl;

	return 0;
}