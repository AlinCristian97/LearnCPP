// double weight{}; // Compile error! "multiple definitions of weight"

// Compile error! "multiple definitions of the add function"
// double add(double a, double b) {
// 	return a + b;
// }

// It is working! We are allowed to have multiple definitions!
struct Point
{
	double m_x;
	double m_y;
};