#include "Array.hpp"
#include <iostream>

int main(void)
{
	Array<int> intArray(10);
	for(int i = 0; i < 10; ++i)
		std::cout << intArray[i] << std::endl;
	for(int i = 0; i < 10; ++i)
		intArray[i] = i * 2;
	// for(int i = 0; i < 10; ++i)
	// 	std::cout << intArray[i] << std::endl;
	Array<double> doubleArray(10);
	// for(int i = 0; i < 10; ++i)
	// 	std::cout << doubleArray[i] << std::endl;
	for(int i = 0; i < 10; ++i)
		doubleArray[i] = i * 1.25;
	// for(int i = 0; i < 10; ++i)
	// 	std::cout << doubleArray[i] << std::endl;
	Array<double> doubleArray_two(doubleArray);
	Array<double> doubleArray_three;
	doubleArray_three = doubleArray;
	for(int i = 0; i < 10; ++i)
		std::cout << doubleArray_three[i] << std::endl;
	return (0);
}