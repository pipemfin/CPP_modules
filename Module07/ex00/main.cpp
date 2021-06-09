#include "whatever.hpp"
#include <string>
#include <iostream>

int main(void)
{
	int a = 5;
	int b = 10;
	float c = 15.55;
	float d = 20.55;

	std::cout << "Maximum with integers: " << max(a,b) <<std::endl;
	std::cout << "Maximum with floats: " << max(c,d) <<std::endl;
	std::cout << "Minimum with integers: " << min(a,b) <<std::endl;
	std::cout << "Minimum with floats: " << min(c,d) <<std::endl;
	swap(&a, &b);
	swap(&c, &d);
	std::cout << "Swap with integers: " << a <<std::endl;
	std::cout << "Swap with floats: " << c <<std::endl;

	return (0);
}