#include "Brain.hpp"

Brain::Brain()
{
	this->_weight = 1500;
	this->_gray_matter_density = 1.0;
	this->_iq_coefficient = 100;
}

const Brain *Brain::identify(void) const
{
	return (this);
}