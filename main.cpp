// Ternary Operator

#include <iostream>

// Tools
const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

int main()
{

	int max{};
    
	int a{35};
	int b{200};

	std::cout << std::endl;
	std::cout << "using regular if " << std::endl;
	
	/*
	if(a >  b){
		max = a;
	}else{
		max = b;
	}
	*/

	max = (a > b)? a : b; // Ternary operator

	std::cout << "max : " << max << std::endl;

	return 0;
}