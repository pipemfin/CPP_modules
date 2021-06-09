#include "iter.hpp"
#include <string>
#include <iostream>

template <typename T>

void show(T element)
{
	std::cout << *element << std::endl;
}

template <typename T>

void doubling(T element)
{
	*element *= 2;
}

int main(void)
{
	int *int_ptr = new int[10];
	float *float_ptr = new float[10];
	for (int i = 0; i < 10; ++i)
		int_ptr[i] = i;
	for (int i = 0; i < 10; ++i)
		float_ptr[i] = i + 0.25;

	std::cout << "integers" << std::endl;
	iter(int_ptr, 10, &show);
	std::cout << "__________________________" << std::endl;
	iter(int_ptr, 10, &doubling);
	iter(int_ptr, 10, &show);


	std::cout << "floats" << std::endl;
	iter(float_ptr, 10, &show);
	std::cout << "__________________________" << std::endl;
	iter(float_ptr, 10, &doubling);
	iter(float_ptr, 10, &show);
	return (0);
}