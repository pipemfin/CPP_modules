#include <vector>
#include <list>
#include <iostream>
#include "easyfind.hpp"

int main(void)
{
	int needle = 5;
	std::vector<int> myVector;
	std::list<int> myList;
	for (int i = 0; i < 10; ++i)
		myVector.push_back(i);
	for (int i = 10; i < 20; ++i)
		myList.push_back(i);
	std::cout << easyfind(myVector, needle) << std::endl;
	std::cout << easyfind(myList, needle) << std::endl;
	return (0);
}