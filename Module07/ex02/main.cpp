#include "Array.hpp"
#include <iostream>

int main(void)
{
	Array<int> intArray(5);
	Array<double> doubleArray(5);
	Array<double> doubleArray_copy(5);

	std::cout << "Created empty int array:" << std::endl;
	for (int i = 0; i < 5; ++i)
		std::cout << intArray[i] << std::endl;
	std::cout << "______________________" << std::endl;

	std::cout << "Fill int array with numbers:" << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		intArray[i] = i * 2;
		std::cout << intArray[i] << std::endl;
	}
	std::cout << "______________________" << std::endl;

	std::cout << "Created double array filled with one's:" << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		doubleArray[i] = 1;
		std::cout << doubleArray[i] << std::endl;
	}
	std::cout << "______________________" << std::endl;
	
	std::cout << "Copy ones to array with zeros:" << std::endl;
	doubleArray_copy = doubleArray;
	std::cout << "Massive after copying:" << std::endl;
	for (int i = 0; i < 5; ++i)
	{
		doubleArray[i] = 1;
		std::cout << doubleArray[i] << std::endl;
	}
	std::cout << "______________________" << std::endl;
	std::cout << "Now we change first element in first array to two and check first elements in arrays:" << std::endl;
	doubleArray[0] = 2;
	std::cout << "first array:" << doubleArray[0] << std::endl;
	std::cout << "second array:" << doubleArray_copy[0] << std::endl;
	std::cout << "\nYeah, it is deap copy!" << std::endl;
	std::cout << "______________________" << std::endl;

	return (0);
}