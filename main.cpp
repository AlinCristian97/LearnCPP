// Declaring and Using std::string

#include <iostream>
#include <string>

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main()
{

	std::string full_name;//Empty string
    std::string planet {"Earth. Where the sky is blue"};//Initialize with string literal
	std::string prefered_planet{planet};//Initialize with other existing string
    std::string message {"Hello there",5};	//Initialize with part of a string literal.
											//Contains hello
    std::string weird_message(4,'e');//Initialize with multiple copies of a char
									 // contains eeee
    std::string greeting{"Hello World"};
    std::string saying_hello{ greeting,6,5};//Initialize with part of an existing std::string
											// starting at index 6, taking 5 characters.
											//Will contain World.
	
	std::cout << "full_name : " << full_name << std::endl;
	std::cout << "planet : " << planet << std::endl;
	std::cout << "prefered_planet : " << prefered_planet << std::endl;
	std::cout << "message : " << message << std::endl;
	std::cout << "weird_message : " << weird_message << std::endl;
	std::cout << "greeting : " << greeting << std::endl;
	std::cout << "saying_hello : " << saying_hello << std::endl;

    //Changing std::string at runtime // Is better, no memory waste
    planet = "Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where ";
    std::cout << "planet : " << planet << std::endl;


    //Use a raw array
    const char * planet1 {"Earth. Where the sky is blue Earth."}; // Memory waste
    planet1 = "Earth. Where the sky is blue Earth. Where the sky is blue Earth. Where ";
    std::cout << "planet1 : " << planet1 << std::endl;

	return 0;
}