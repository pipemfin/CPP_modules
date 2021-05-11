#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony pony;
	pony.make_some_noize();
}

void	ponyOnTheStack()
{
	Pony *pony;

	pony = new Pony;
	(*pony).make_some_noize();
	delete pony;
}

int		main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}