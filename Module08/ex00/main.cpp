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
	
	std::cout << "Trying find number 5 in vector wit elements (0...9):" << std::endl;
	easyfind(myVector, needle);
	std::cout << "Trying find number 5 in list wit elements (10...19):" << std::endl;
	easyfind(myList, needle);

	return (0);
}