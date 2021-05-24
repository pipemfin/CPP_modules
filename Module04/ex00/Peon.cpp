#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &peon)
{
	this->_name = peon.getName();
}

Peon &Peon::operator=(const Peon &peon)
{
	if (this == &peon)
		return (*this);
	this->_name = peon.getName();
	return (*this);
}

void Peon::getPolymorphed() const
{
	std::cout << this->getName() << "  has been turned into a pink pony!" << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}