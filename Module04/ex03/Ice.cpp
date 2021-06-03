#include "Ice.hpp"

Ice::Ice()	: AMateria("ice") {}

Ice::Ice(const Ice &ice) : AMateria(ice.getType()) {}

Ice &Ice::operator=(const Ice &ice)
{
	if (this == &ice)
		return (*this);
	AMateria::operator=(ice);
	return (*this);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " <<  target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{ 
	return (new Ice);
}

Ice::~Ice() {}