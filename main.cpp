// First C++ Class

#include <iostream>

const double PI {3.1415926535897932384626433832795};

// Blueprint
class Cylinder {

	public:
		// Functions (methods)
		double volume() {
			return PI * baseRadius * baseRadius * height;
		}

	public:
		// Member variables
		double baseRadius {1};
		double height {1};

};

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main()
{

	Cylinder cylinder1; // Objects
	
	std::cout << "volume: " << cylinder1.volume() << std::endl;

	// Change the member varialbes
	cylinder1.baseRadius = 10;
	cylinder1.height = 3;

	std::cout << "volume: " << cylinder1.volume() << std::endl;

	cylinder1.height = 8;

	std::cout << "volume: " << cylinder1.volume() << std::endl;

	return 0;

}