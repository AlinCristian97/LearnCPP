// Capture lists

#include <iostream>

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main()
{

	//Capture lists
	/*
		double a{10};
		double b{20};
		
		auto func = [a,b](){
				std::cout  << "a + b : " << a + b << std::endl;
		};
		func();
		*/

	//Capturing by value
	/*
		int c{42};
		
		auto func = [c](){
				std::cout << "Inner value : " << c << " &inner : " <<&c <<  std::endl;
		};
		
		for(size_t i{} ; i < 5 ;++i){
				std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
				func();
				++c;
		}

		*/

	//Capture by reference
		int c{42};
		
		auto func = [&c](){
				std::cout << "Inner value : " << c << " &inner : " <<&c <<  std::endl;
		};
		
		for(size_t i{} ; i < 5 ;++i){
				std::cout << "Outer value : " << c << " &outer : " << &c << std::endl;
				func();
				++c;
		}

	return 0;

}