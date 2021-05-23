#include "Human.hpp"

const Brain &Human::getBrain()
{
	return (brain);
}

const Brain *Human::identify()
{
	return (this->brain.identify());
}