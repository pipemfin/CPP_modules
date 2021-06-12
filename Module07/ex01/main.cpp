#include "iter.hpp"
#include <string>
#include <iostream>

template <typename T>
void print(const T &element) 
{
	std::cout << element << std::endl;
}

template <typename T>
void print_dobuled_for_float(const T &element) 
{
	std::cout << element * 2 << std::endl;
}

int main(void)
{
	const int integers[5] = {0,1,2,3,4};
	float floats[5];
	std::string strings[5] = {"i", "am", "close", "to", "finish"};

	for (int i = 0; i < 5; ++i)
		floats[i] = i;

	std::cout << "array with integers" << std::endl;
	iter(integers, 5, &print);
	std::cout << "__________________________" << std::endl;

	std::cout << "array with floats" << std::endl;
	iter(floats, 5, &print_dobuled_for_float);
	std::cout << "__________________________" << std::endl;

	std::cout << "array with strings" << std::endl;
	iter(strings, 5, &print);
	std::cout << "__________________________" << std::endl;

	return (0);
}