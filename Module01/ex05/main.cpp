#include "Human.hpp"
#include <iostream>

int main()
{
	Human Ivan;

	std::cout << Ivan.identify() << std::endl;
	std::cout << Ivan.getBrain().identify() << std::endl;

	return (0);
}