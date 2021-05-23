#include <iostream>
#include "Pony.hpp"

void	ponyOnTheStack()
{
	Pony pony;
	std::cout << "*Pony on the stack*" << std::endl;
	pony.make_some_noize();
}

void	ponyOnTheHeap()
{
	Pony *pony;

	pony = new Pony;
	std::cout << "*Pony on the heap*" << std::endl;
	pony->make_some_noize();
	delete pony;
}

int		main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}