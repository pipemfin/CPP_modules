#include "Pony.hpp"

Pony::Pony()
{
	leg_count = 4;
	tail = 1;
	bag_with_drugs = 1;
}

void Pony::make_some_noize(void)
{
	std::cout << "*Beautiful pony noize*" << std::endl;
	std::cout << "*Ne-e-e-e-e-gh*" << std::endl;
}