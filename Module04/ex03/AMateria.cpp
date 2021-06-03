#include "AMateria.hpp"
#include <string>

AMateria::AMateria(std::string const &type)
{
	this->_type = type;
	this->_xp = 0;
}

AMateria &AMateria::operator=(AMateria const &amateria)
{
	if (this == &amateria)
		return (*this);
	this->_type = amateria.getType();
	this->_xp = amateria.getXP();
	return (*this);
}

std::string const & AMateria::getType() const	{	return (this->_type);	}

unsigned int AMateria::getXP() const			{	return (this->_xp);		}

void AMateria::use(ICharacter& target)
{	
	(void)target;
	this->_xp += 10;		
}

AMateria::~AMateria() { }