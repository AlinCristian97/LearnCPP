// Logical combinations of Concepts

#include <iostream>
#include <concepts>


template <typename T>
concept TinyType = requires ( T t){
	sizeof(T) <=4; // Simple requirement
	requires sizeof(T) <= 4; // Nested requirement
};


template <typename T>
//requires std::integral<T> || std::floating_point<T> // OR operator
//requires std::integral<T> && TinyType<T>
requires std::integral<T> && requires ( T t){
	sizeof(T) <=4; // Simple requirement
	requires sizeof(T) <= 4; // Nested requirement
}
T add(T a, T b){
    return a + b;
}

//TODO: Return to (https://github.com/rutura/The-C-20-Masterclass-Source-Code/blob/main/) to see the extra sections, if they are not already discussed
int main()
{

	long long int x{7};
	long long int y{5};

	add(x,y);

	return 0;

}