// One Definition Rule

#include <iostream>

// Variable: Declaration and Definition
double weight{};
// double weight{}; // Compile error! "redefinition of double weight"

double add(double a, double b);

struct Point
{
	double m_x{};
	double m_y{};
};

// Compile error! "multiple definitions in the same Translation Unit" (a translation unit is like a new file .cpp)
// struct Point
// {
// 	double m_x{};
// 	double m_y{};
// };

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main()
{

	// std::cout << weight << std::endl;
	double result = add(10, 20);
	std::cout << "result: " << result << std::endl;

	Point p1;

	std::cout << "p1.x: " << p1.m_x << " , p1.y: " << p1.m_y << std::endl;

	return 0;
}

double add(double a, double b) {
	return a + b;
}

// Compile error! "multiple definitions of the add function"
// double add(double a, double b) {
// 	return a + b;
// }