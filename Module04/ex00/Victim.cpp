#include "Victim.hpp"

Victim::Victim()
{
	this->_name = "Nameless";
}

Victim::Victim(std::string name)
{
	this->_name = name;
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &victim)
{
	this->_name = victim.getName();
}

Victim &Victim::operator=(const Victim &victim)
{
	if (this == &victim)
		return (*this);
	this->_name = victim.getName();
	return (*this);
}

std::string Victim::getName() const
{
	return (this->_name);
}

void Victim::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::ostream& operator<<(std::ostream &out, const Victim &victim)
{
	out << "I'm ";
	out << victim.getName();
	out << " and I like otters!";
	out << std::endl;
	return (out);
}